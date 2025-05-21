import pytest
from dataclasses import FrozenInstanceError
from typing import Optional, List
from unittest.mock import patch

# Import the BudgetRequest class from the correct module
from yearn_treasury.budget._request import BudgetRequest


@pytest.mark.parametrize(
    "labels,expected_approved,expected_rejected,expected_stream,expected_vesting,expected_paid",
    [
        (["approved", "paid"], True, False, False, False, True),  # approved and paid
        (["approved"], True, False, False, False, False),  # approved only
        (["rejected"], False, True, False, False, False),  # rejected only
        (["stream"], False, False, True, False, False),  # stream only
        (["vesting"], False, False, False, True, False),  # vesting only
        (["paid"], False, False, False, False, True),  # paid only
        (
            ["approved", "rejected", "stream", "vesting", "paid"],
            True,
            True,
            True,
            True,
            True,
        ),  # all labels
        ([], False, False, False, False, False),  # no labels
        (["APPROVED"], False, False, False, False, False),  # case-sensitive
        (["approved", "rejected"], True, True, False, False, False),  # approved and rejected
    ],
    ids=[
        "approved-paid",
        "approved-only",
        "rejected-only",
        "stream-only",
        "vesting-only",
        "paid-only",
        "all-labels",
        "no-labels",
        "case-sensitive",
        "approved-rejected",
    ],
)
def test_budget_request_label_methods(
    labels, expected_approved, expected_rejected, expected_stream, expected_vesting, expected_paid
):
    # Arrange
    req = BudgetRequest(
        id=1,
        number=42,
        title="Test",
        state="open",
        url="http://example.com",
        created_at="2023-01-01T00:00:00Z",
        updated_at="2023-01-02T00:00:00Z",
        closed_at=None,
        body="body",
        labels=labels,
    )

    # Act & Assert
    assert req.is_approved() is expected_approved
    assert req.is_rejected() is expected_rejected
    assert req.is_stream() is expected_stream
    assert req.is_vesting() is expected_vesting
    assert req.is_paid() is expected_paid


@pytest.mark.parametrize(
    "labels,should_warn",
    [
        (["approved"], True),  # approved but not paid
        (["approved", "paid"], False),  # approved and paid
        (["paid"], False),  # paid but not approved
        ([], False),  # neither approved nor paid
        (["rejected"], False),  # rejected only
    ],
    ids=[
        "approved-not-paid",
        "approved-and-paid",
        "paid-not-approved",
        "neither-approved-nor-paid",
        "rejected-only",
    ],
)
def test_budget_request_post_init_warning(labels, should_warn):
    # Arrange
    with patch("yearn_treasury.budget._request.logger") as mock_logger:
        # Act
        req = BudgetRequest(
            id=1,
            number=1,
            title="t",
            state="s",
            url="u",
            created_at="c",
            updated_at="u",
            closed_at=None,
            body=None,
            labels=labels,
        )
        # Assert
        if should_warn:
            mock_logger.warning.assert_called_once()
            args, kwargs = mock_logger.warning.call_args
            assert args[0] == "%s must be paid"
            assert args[1] == req
        else:
            mock_logger.warning.assert_not_called()


@pytest.mark.parametrize(
    "field,value",
    [
        ("id", 999),
        ("number", 999),
        ("title", "new title"),
        ("state", "closed"),
        ("url", "http://new.url"),
        ("created_at", "2024-01-01T00:00:00Z"),
        ("updated_at", "2024-01-01T00:00:00Z"),
        ("closed_at", "2024-01-02T00:00:00Z"),
        ("body", "new body"),
        ("labels", ["foo"]),
    ],
    ids=[
        "id-frozen",
        "number-frozen",
        "title-frozen",
        "state-frozen",
        "url-frozen",
        "created_at-frozen",
        "updated_at-frozen",
        "closed_at-frozen",
        "body-frozen",
        "labels-frozen",
    ],
)
def test_budget_request_frozen_fields(field, value):
    # Arrange
    req = BudgetRequest(
        id=1,
        number=1,
        title="t",
        state="s",
        url="u",
        created_at="c",
        updated_at="u",
        closed_at=None,
        body=None,
        labels=["approved"],
    )

    # Act & Assert
    with pytest.raises(FrozenInstanceError):
        setattr(req, field, value)


@pytest.mark.parametrize(
    "labels,expect_exception,expected_results",
    [
        (None, True, None),  # labels is None -> should error due to None not iterable
        ("approved", False, (True, False, False, False, False)),  # string: check substring behavior
        (123, True, None),  # labels is int -> should error
        (
            {"approved"},
            False,
            (True, False, False, False, False),
        ),  # set: works if 'approved' in set returns True
    ],
    ids=["labels-is-None", "labels-is-str", "labels-is-int", "labels-is-set"],
)
def test_budget_request_invalid_labels_type(labels, expect_exception, expected_results):
    kwargs = {
        "id": 1,
        "number": 1,
        "title": "t",
        "state": "s",
        "url": "u",
        "created_at": "c",
        "updated_at": "u",
        "closed_at": None,
        "body": None,
        "labels": labels,
    }
    if expect_exception:
        with pytest.raises(TypeError):
            BudgetRequest(**kwargs)
    else:
        req = BudgetRequest(**kwargs)
        exp_approved, exp_rejected, exp_stream, exp_vesting, exp_paid = expected_results
        assert req.is_approved() is exp_approved
        assert req.is_rejected() is exp_rejected
        assert req.is_stream() is exp_stream
        assert req.is_vesting() is exp_vesting
        assert req.is_paid() is exp_paid
