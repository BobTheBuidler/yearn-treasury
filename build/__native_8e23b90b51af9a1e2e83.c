#include "init.c"
#include "getargs.c"
#include "getargsfast.c"
#include "int_ops.c"
#include "float_ops.c"
#include "str_ops.c"
#include "bytes_ops.c"
#include "list_ops.c"
#include "dict_ops.c"
#include "set_ops.c"
#include "tuple_ops.c"
#include "exc_ops.c"
#include "misc_ops.c"
#include "generic_ops.c"
#include "pythonsupport.c"
#include "__native_8e23b90b51af9a1e2e83.h"
#include "__native_internal_8e23b90b51af9a1e2e83.h"
static PyMethodDef budgetmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef budgetmodule = {
    PyModuleDef_HEAD_INIT,
    "yearn_treasury.budget",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    budgetmodule_methods
};

PyObject *CPyInit_yearn_treasury___budget(void)
{
    PyObject* modname = NULL;
    if (CPyModule_yearn_treasury___budget_internal) {
        Py_INCREF(CPyModule_yearn_treasury___budget_internal);
        return CPyModule_yearn_treasury___budget_internal;
    }
    CPyModule_yearn_treasury___budget_internal = PyModule_Create(&budgetmodule);
    if (unlikely(CPyModule_yearn_treasury___budget_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_yearn_treasury___budget_internal, "__name__");
    CPyStatic_budget___globals = PyModule_GetDict(CPyModule_yearn_treasury___budget_internal);
    if (unlikely(CPyStatic_budget___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_budget_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_yearn_treasury___budget_internal;
    fail:
    Py_CLEAR(CPyModule_yearn_treasury___budget_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_budget_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    CPyPtr cpy_r_r19;
    CPyPtr cpy_r_r20;
    CPyPtr cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/__init__.py", "<module>", -1, CPyStatic_budget___globals);
        goto CPyL8;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[73]; /* ('BudgetRequest',) */
    cpy_r_r6 = CPyStatics[5]; /* 'yearn_treasury.budget._request' */
    cpy_r_r7 = CPyStatic_budget___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/__init__.py", "<module>", 1, CPyStatic_budget___globals);
        goto CPyL8;
    }
    CPyModule_yearn_treasury___budget____request = cpy_r_r8;
    CPy_INCREF(CPyModule_yearn_treasury___budget____request);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[74]; /* ('approved_requests', 'rejected_requests', 'requests') */
    cpy_r_r10 = CPyStatics[9]; /* 'yearn_treasury.budget._requests' */
    cpy_r_r11 = CPyStatic_budget___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/__init__.py", "<module>", 2, CPyStatic_budget___globals);
        goto CPyL8;
    }
    CPyModule_yearn_treasury___budget____requests = cpy_r_r12;
    CPy_INCREF(CPyModule_yearn_treasury___budget____requests);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[4]; /* 'BudgetRequest' */
    cpy_r_r14 = CPyStatics[8]; /* 'requests' */
    cpy_r_r15 = CPyStatics[6]; /* 'approved_requests' */
    cpy_r_r16 = CPyStatics[7]; /* 'rejected_requests' */
    cpy_r_r17 = PyList_New(4);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/__init__.py", "<module>", 6, CPyStatic_budget___globals);
        goto CPyL8;
    }
    cpy_r_r18 = (CPyPtr)&((PyListObject *)cpy_r_r17)->ob_item;
    cpy_r_r19 = *(CPyPtr *)cpy_r_r18;
    CPy_INCREF(cpy_r_r13);
    *(PyObject * *)cpy_r_r19 = cpy_r_r13;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r20 = cpy_r_r19 + 8;
    *(PyObject * *)cpy_r_r20 = cpy_r_r14;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r21 = cpy_r_r19 + 16;
    *(PyObject * *)cpy_r_r21 = cpy_r_r15;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r22 = cpy_r_r19 + 24;
    *(PyObject * *)cpy_r_r22 = cpy_r_r16;
    cpy_r_r23 = CPyStatic_budget___globals;
    cpy_r_r24 = CPyStatics[10]; /* '__all__' */
    cpy_r_r25 = CPyDict_SetItem(cpy_r_r23, cpy_r_r24, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("yearn_treasury/budget/__init__.py", "<module>", 6, CPyStatic_budget___globals);
        goto CPyL8;
    }
    return 1;
CPyL8: ;
    cpy_r_r27 = 2;
    return cpy_r_r27;
}

static PyObject *_request___BudgetRequest_setup(PyTypeObject *type);
PyObject *CPyDef__request___BudgetRequest(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);

static PyObject *
_request___BudgetRequest_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__request___BudgetRequest) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return _request___BudgetRequest_setup(type);
}

static int
_request___BudgetRequest_traverse(yearn_treasury___budget____request___BudgetRequestObject *self, visitproc visit, void *arg)
{
    if (CPyTagged_CheckLong(self->_id)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_id));
    }
    if (CPyTagged_CheckLong(self->_number)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_number));
    }
    Py_VISIT(self->_title);
    Py_VISIT(self->_state);
    Py_VISIT(self->_url);
    Py_VISIT(self->_created_at);
    Py_VISIT(self->_updated_at);
    Py_VISIT(self->_closed_at);
    Py_VISIT(self->_body);
    Py_VISIT(self->_labels);
    return 0;
}

static int
_request___BudgetRequest_clear(yearn_treasury___budget____request___BudgetRequestObject *self)
{
    if (CPyTagged_CheckLong(self->_id)) {
        CPyTagged __tmp = self->_id;
        self->_id = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_number)) {
        CPyTagged __tmp = self->_number;
        self->_number = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_title);
    Py_CLEAR(self->_state);
    Py_CLEAR(self->_url);
    Py_CLEAR(self->_created_at);
    Py_CLEAR(self->_updated_at);
    Py_CLEAR(self->_closed_at);
    Py_CLEAR(self->_body);
    Py_CLEAR(self->_labels);
    return 0;
}

static void
_request___BudgetRequest_dealloc(yearn_treasury___budget____request___BudgetRequestObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _request___BudgetRequest_dealloc)
    _request___BudgetRequest_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _request___BudgetRequest_vtable[6];
static bool
CPyDef__request___BudgetRequest_trait_vtable_setup(void)
{
    CPyVTableItem _request___BudgetRequest_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__request___BudgetRequest_____post_init__,
        (CPyVTableItem)CPyDef__request___BudgetRequest___is_approved,
        (CPyVTableItem)CPyDef__request___BudgetRequest___is_rejected,
        (CPyVTableItem)CPyDef__request___BudgetRequest___is_stream,
        (CPyVTableItem)CPyDef__request___BudgetRequest___is_vesting,
        (CPyVTableItem)CPyDef__request___BudgetRequest___is_paid,
    };
    memcpy(_request___BudgetRequest_vtable, _request___BudgetRequest_vtable_scratch, sizeof(_request___BudgetRequest_vtable));
    return 1;
}

static PyObject *
_request___BudgetRequest_get_id(yearn_treasury___budget____request___BudgetRequestObject *self, void *closure);
static int
_request___BudgetRequest_set_id(yearn_treasury___budget____request___BudgetRequestObject *self, PyObject *value, void *closure);
static PyObject *
_request___BudgetRequest_get_number(yearn_treasury___budget____request___BudgetRequestObject *self, void *closure);
static int
_request___BudgetRequest_set_number(yearn_treasury___budget____request___BudgetRequestObject *self, PyObject *value, void *closure);
static PyObject *
_request___BudgetRequest_get_title(yearn_treasury___budget____request___BudgetRequestObject *self, void *closure);
static int
_request___BudgetRequest_set_title(yearn_treasury___budget____request___BudgetRequestObject *self, PyObject *value, void *closure);
static PyObject *
_request___BudgetRequest_get_state(yearn_treasury___budget____request___BudgetRequestObject *self, void *closure);
static int
_request___BudgetRequest_set_state(yearn_treasury___budget____request___BudgetRequestObject *self, PyObject *value, void *closure);
static PyObject *
_request___BudgetRequest_get_url(yearn_treasury___budget____request___BudgetRequestObject *self, void *closure);
static int
_request___BudgetRequest_set_url(yearn_treasury___budget____request___BudgetRequestObject *self, PyObject *value, void *closure);
static PyObject *
_request___BudgetRequest_get_created_at(yearn_treasury___budget____request___BudgetRequestObject *self, void *closure);
static int
_request___BudgetRequest_set_created_at(yearn_treasury___budget____request___BudgetRequestObject *self, PyObject *value, void *closure);
static PyObject *
_request___BudgetRequest_get_updated_at(yearn_treasury___budget____request___BudgetRequestObject *self, void *closure);
static int
_request___BudgetRequest_set_updated_at(yearn_treasury___budget____request___BudgetRequestObject *self, PyObject *value, void *closure);
static PyObject *
_request___BudgetRequest_get_closed_at(yearn_treasury___budget____request___BudgetRequestObject *self, void *closure);
static int
_request___BudgetRequest_set_closed_at(yearn_treasury___budget____request___BudgetRequestObject *self, PyObject *value, void *closure);
static PyObject *
_request___BudgetRequest_get_body(yearn_treasury___budget____request___BudgetRequestObject *self, void *closure);
static int
_request___BudgetRequest_set_body(yearn_treasury___budget____request___BudgetRequestObject *self, PyObject *value, void *closure);
static PyObject *
_request___BudgetRequest_get_labels(yearn_treasury___budget____request___BudgetRequestObject *self, void *closure);
static int
_request___BudgetRequest_set_labels(yearn_treasury___budget____request___BudgetRequestObject *self, PyObject *value, void *closure);

static PyGetSetDef _request___BudgetRequest_getseters[] = {
    {"id",
     (getter)_request___BudgetRequest_get_id, (setter)_request___BudgetRequest_set_id,
     NULL, NULL},
    {"number",
     (getter)_request___BudgetRequest_get_number, (setter)_request___BudgetRequest_set_number,
     NULL, NULL},
    {"title",
     (getter)_request___BudgetRequest_get_title, (setter)_request___BudgetRequest_set_title,
     NULL, NULL},
    {"state",
     (getter)_request___BudgetRequest_get_state, (setter)_request___BudgetRequest_set_state,
     NULL, NULL},
    {"url",
     (getter)_request___BudgetRequest_get_url, (setter)_request___BudgetRequest_set_url,
     NULL, NULL},
    {"created_at",
     (getter)_request___BudgetRequest_get_created_at, (setter)_request___BudgetRequest_set_created_at,
     NULL, NULL},
    {"updated_at",
     (getter)_request___BudgetRequest_get_updated_at, (setter)_request___BudgetRequest_set_updated_at,
     NULL, NULL},
    {"closed_at",
     (getter)_request___BudgetRequest_get_closed_at, (setter)_request___BudgetRequest_set_closed_at,
     NULL, NULL},
    {"body",
     (getter)_request___BudgetRequest_get_body, (setter)_request___BudgetRequest_set_body,
     NULL, NULL},
    {"labels",
     (getter)_request___BudgetRequest_get_labels, (setter)_request___BudgetRequest_set_labels,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef _request___BudgetRequest_methods[] = {
    {"__post_init__",
     (PyCFunction)CPyPy__request___BudgetRequest_____post_init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_approved",
     (PyCFunction)CPyPy__request___BudgetRequest___is_approved,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_rejected",
     (PyCFunction)CPyPy__request___BudgetRequest___is_rejected,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_stream",
     (PyCFunction)CPyPy__request___BudgetRequest___is_stream,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_vesting",
     (PyCFunction)CPyPy__request___BudgetRequest___is_vesting,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_paid",
     (PyCFunction)CPyPy__request___BudgetRequest___is_paid,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__request___BudgetRequest_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "BudgetRequest",
    .tp_new = _request___BudgetRequest_new,
    .tp_dealloc = (destructor)_request___BudgetRequest_dealloc,
    .tp_traverse = (traverseproc)_request___BudgetRequest_traverse,
    .tp_clear = (inquiry)_request___BudgetRequest_clear,
    .tp_getset = _request___BudgetRequest_getseters,
    .tp_methods = _request___BudgetRequest_methods,
    .tp_basicsize = sizeof(yearn_treasury___budget____request___BudgetRequestObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType__request___BudgetRequest_template = &CPyType__request___BudgetRequest_template_;

static PyObject *
_request___BudgetRequest_setup(PyTypeObject *type)
{
    yearn_treasury___budget____request___BudgetRequestObject *self;
    self = (yearn_treasury___budget____request___BudgetRequestObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _request___BudgetRequest_vtable;
    self->_id = CPY_INT_TAG;
    self->_number = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef__request___BudgetRequest(PyObject *cpy_r_args, PyObject *cpy_r_kwargs)
{
    PyObject *self = _request___BudgetRequest_setup(CPyType__request___BudgetRequest);
    if (self == NULL)
        return NULL;
    int res = CPyType__request___BudgetRequest->tp_init(self, cpy_r_args, cpy_r_kwargs);
    if (res < 0) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
_request___BudgetRequest_get_id(yearn_treasury___budget____request___BudgetRequestObject *self, void *closure)
{
    if (unlikely(self->_id == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'id' of 'BudgetRequest' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_id);
    PyObject *retval = CPyTagged_StealAsObject(self->_id);
    return retval;
}

static int
_request___BudgetRequest_set_id(yearn_treasury___budget____request___BudgetRequestObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BudgetRequest' object attribute 'id' cannot be deleted");
        return -1;
    }
    if (self->_id != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_id);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_id = tmp;
    return 0;
}

static PyObject *
_request___BudgetRequest_get_number(yearn_treasury___budget____request___BudgetRequestObject *self, void *closure)
{
    if (unlikely(self->_number == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'number' of 'BudgetRequest' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_number);
    PyObject *retval = CPyTagged_StealAsObject(self->_number);
    return retval;
}

static int
_request___BudgetRequest_set_number(yearn_treasury___budget____request___BudgetRequestObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BudgetRequest' object attribute 'number' cannot be deleted");
        return -1;
    }
    if (self->_number != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_number);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_number = tmp;
    return 0;
}

static PyObject *
_request___BudgetRequest_get_title(yearn_treasury___budget____request___BudgetRequestObject *self, void *closure)
{
    if (unlikely(self->_title == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'title' of 'BudgetRequest' undefined");
        return NULL;
    }
    CPy_INCREF(self->_title);
    PyObject *retval = self->_title;
    return retval;
}

static int
_request___BudgetRequest_set_title(yearn_treasury___budget____request___BudgetRequestObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BudgetRequest' object attribute 'title' cannot be deleted");
        return -1;
    }
    if (self->_title != NULL) {
        CPy_DECREF(self->_title);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_title = tmp;
    return 0;
}

static PyObject *
_request___BudgetRequest_get_state(yearn_treasury___budget____request___BudgetRequestObject *self, void *closure)
{
    if (unlikely(self->_state == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'state' of 'BudgetRequest' undefined");
        return NULL;
    }
    CPy_INCREF(self->_state);
    PyObject *retval = self->_state;
    return retval;
}

static int
_request___BudgetRequest_set_state(yearn_treasury___budget____request___BudgetRequestObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BudgetRequest' object attribute 'state' cannot be deleted");
        return -1;
    }
    if (self->_state != NULL) {
        CPy_DECREF(self->_state);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_state = tmp;
    return 0;
}

static PyObject *
_request___BudgetRequest_get_url(yearn_treasury___budget____request___BudgetRequestObject *self, void *closure)
{
    if (unlikely(self->_url == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'url' of 'BudgetRequest' undefined");
        return NULL;
    }
    CPy_INCREF(self->_url);
    PyObject *retval = self->_url;
    return retval;
}

static int
_request___BudgetRequest_set_url(yearn_treasury___budget____request___BudgetRequestObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BudgetRequest' object attribute 'url' cannot be deleted");
        return -1;
    }
    if (self->_url != NULL) {
        CPy_DECREF(self->_url);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_url = tmp;
    return 0;
}

static PyObject *
_request___BudgetRequest_get_created_at(yearn_treasury___budget____request___BudgetRequestObject *self, void *closure)
{
    if (unlikely(self->_created_at == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'created_at' of 'BudgetRequest' undefined");
        return NULL;
    }
    CPy_INCREF(self->_created_at);
    PyObject *retval = self->_created_at;
    return retval;
}

static int
_request___BudgetRequest_set_created_at(yearn_treasury___budget____request___BudgetRequestObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BudgetRequest' object attribute 'created_at' cannot be deleted");
        return -1;
    }
    if (self->_created_at != NULL) {
        CPy_DECREF(self->_created_at);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_created_at = tmp;
    return 0;
}

static PyObject *
_request___BudgetRequest_get_updated_at(yearn_treasury___budget____request___BudgetRequestObject *self, void *closure)
{
    if (unlikely(self->_updated_at == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'updated_at' of 'BudgetRequest' undefined");
        return NULL;
    }
    CPy_INCREF(self->_updated_at);
    PyObject *retval = self->_updated_at;
    return retval;
}

static int
_request___BudgetRequest_set_updated_at(yearn_treasury___budget____request___BudgetRequestObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BudgetRequest' object attribute 'updated_at' cannot be deleted");
        return -1;
    }
    if (self->_updated_at != NULL) {
        CPy_DECREF(self->_updated_at);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_updated_at = tmp;
    return 0;
}

static PyObject *
_request___BudgetRequest_get_closed_at(yearn_treasury___budget____request___BudgetRequestObject *self, void *closure)
{
    if (unlikely(self->_closed_at == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'closed_at' of 'BudgetRequest' undefined");
        return NULL;
    }
    CPy_INCREF(self->_closed_at);
    PyObject *retval = self->_closed_at;
    return retval;
}

static int
_request___BudgetRequest_set_closed_at(yearn_treasury___budget____request___BudgetRequestObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BudgetRequest' object attribute 'closed_at' cannot be deleted");
        return -1;
    }
    if (self->_closed_at != NULL) {
        CPy_DECREF(self->_closed_at);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL1;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL1;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL1: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_closed_at = tmp;
    return 0;
}

static PyObject *
_request___BudgetRequest_get_body(yearn_treasury___budget____request___BudgetRequestObject *self, void *closure)
{
    if (unlikely(self->_body == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'body' of 'BudgetRequest' undefined");
        return NULL;
    }
    CPy_INCREF(self->_body);
    PyObject *retval = self->_body;
    return retval;
}

static int
_request___BudgetRequest_set_body(yearn_treasury___budget____request___BudgetRequestObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BudgetRequest' object attribute 'body' cannot be deleted");
        return -1;
    }
    if (self->_body != NULL) {
        CPy_DECREF(self->_body);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL2: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_body = tmp;
    return 0;
}

static PyObject *
_request___BudgetRequest_get_labels(yearn_treasury___budget____request___BudgetRequestObject *self, void *closure)
{
    if (unlikely(self->_labels == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'labels' of 'BudgetRequest' undefined");
        return NULL;
    }
    CPy_INCREF(self->_labels);
    PyObject *retval = self->_labels;
    return retval;
}

static int
_request___BudgetRequest_set_labels(yearn_treasury___budget____request___BudgetRequestObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'BudgetRequest' object attribute 'labels' cannot be deleted");
        return -1;
    }
    if (self->_labels != NULL) {
        CPy_DECREF(self->_labels);
    }
    PyObject *tmp;
    if (likely(PyList_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("list", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_labels = tmp;
    return 0;
}
static PyMethodDef _requestmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef _requestmodule = {
    PyModuleDef_HEAD_INIT,
    "yearn_treasury.budget._request",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    _requestmodule_methods
};

PyObject *CPyInit_yearn_treasury___budget____request(void)
{
    PyObject* modname = NULL;
    if (CPyModule_yearn_treasury___budget____request_internal) {
        Py_INCREF(CPyModule_yearn_treasury___budget____request_internal);
        return CPyModule_yearn_treasury___budget____request_internal;
    }
    CPyModule_yearn_treasury___budget____request_internal = PyModule_Create(&_requestmodule);
    if (unlikely(CPyModule_yearn_treasury___budget____request_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_yearn_treasury___budget____request_internal, "__name__");
    CPyStatic__request___globals = PyModule_GetDict(CPyModule_yearn_treasury___budget____request_internal);
    if (unlikely(CPyStatic__request___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef__request_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_yearn_treasury___budget____request_internal;
    fail:
    Py_CLEAR(CPyModule_yearn_treasury___budget____request_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic__request___logger);
    CPyStatic__request___logger = NULL;
    Py_CLEAR(CPyType__request___BudgetRequest);
    return NULL;
}

char CPyDef__request___BudgetRequest_____post_init__(PyObject *cpy_r_self) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = CPyDef__request___BudgetRequest___is_approved(cpy_r_self);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "__post_init__", 24, CPyStatic__request___globals);
        goto CPyL9;
    }
    if (!cpy_r_r0) goto CPyL8;
    cpy_r_r1 = CPyDef__request___BudgetRequest___is_paid(cpy_r_self);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "__post_init__", 24, CPyStatic__request___globals);
        goto CPyL9;
    }
    if (cpy_r_r1) goto CPyL8;
    cpy_r_r2 = CPyStatic__request___logger;
    if (likely(cpy_r_r2 != NULL)) goto CPyL7;
    PyErr_SetString(PyExc_NameError, "value for final name \"logger\" was not set");
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "__post_init__", 25, CPyStatic__request___globals);
        goto CPyL9;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r4 = CPyStatics[11]; /* '%s must be paid' */
    cpy_r_r5 = CPyStatics[12]; /* 'warning' */
    PyObject *cpy_r_r6[3] = {cpy_r_r2, cpy_r_r4, cpy_r_self};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = PyObject_VectorcallMethod(cpy_r_r5, cpy_r_r7, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "__post_init__", 25, CPyStatic__request___globals);
        goto CPyL9;
    } else
        goto CPyL10;
CPyL8: ;
    return 1;
CPyL9: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
CPyL10: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL8;
}

PyObject *CPyPy__request___BudgetRequest_____post_init__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__post_init__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__request___BudgetRequest))
        arg_self = obj_self;
    else {
        CPy_TypeError("yearn_treasury.budget._request.BudgetRequest", obj_self); 
        goto fail;
    }
    char retval = CPyDef__request___BudgetRequest_____post_init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/budget/_request.py", "__post_init__", 23, CPyStatic__request___globals);
    return NULL;
}

char CPyDef__request___BudgetRequest___is_approved(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[13]; /* 'approved' */
    cpy_r_r1 = ((yearn_treasury___budget____request___BudgetRequestObject *)cpy_r_self)->_labels;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("yearn_treasury/budget/_request.py", "is_approved", "BudgetRequest", "labels", 28, CPyStatic__request___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = PySequence_Contains(cpy_r_r1, cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "is_approved", 28, CPyStatic__request___globals);
        goto CPyL3;
    }
    cpy_r_r4 = cpy_r_r2;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy__request___BudgetRequest___is_approved(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":is_approved", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__request___BudgetRequest))
        arg_self = obj_self;
    else {
        CPy_TypeError("yearn_treasury.budget._request.BudgetRequest", obj_self); 
        goto fail;
    }
    char retval = CPyDef__request___BudgetRequest___is_approved(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/budget/_request.py", "is_approved", 27, CPyStatic__request___globals);
    return NULL;
}

char CPyDef__request___BudgetRequest___is_rejected(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[14]; /* 'rejected' */
    cpy_r_r1 = ((yearn_treasury___budget____request___BudgetRequestObject *)cpy_r_self)->_labels;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("yearn_treasury/budget/_request.py", "is_rejected", "BudgetRequest", "labels", 31, CPyStatic__request___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = PySequence_Contains(cpy_r_r1, cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "is_rejected", 31, CPyStatic__request___globals);
        goto CPyL3;
    }
    cpy_r_r4 = cpy_r_r2;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy__request___BudgetRequest___is_rejected(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":is_rejected", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__request___BudgetRequest))
        arg_self = obj_self;
    else {
        CPy_TypeError("yearn_treasury.budget._request.BudgetRequest", obj_self); 
        goto fail;
    }
    char retval = CPyDef__request___BudgetRequest___is_rejected(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/budget/_request.py", "is_rejected", 30, CPyStatic__request___globals);
    return NULL;
}

char CPyDef__request___BudgetRequest___is_stream(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[15]; /* 'stream' */
    cpy_r_r1 = ((yearn_treasury___budget____request___BudgetRequestObject *)cpy_r_self)->_labels;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("yearn_treasury/budget/_request.py", "is_stream", "BudgetRequest", "labels", 34, CPyStatic__request___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = PySequence_Contains(cpy_r_r1, cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "is_stream", 34, CPyStatic__request___globals);
        goto CPyL3;
    }
    cpy_r_r4 = cpy_r_r2;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy__request___BudgetRequest___is_stream(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":is_stream", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__request___BudgetRequest))
        arg_self = obj_self;
    else {
        CPy_TypeError("yearn_treasury.budget._request.BudgetRequest", obj_self); 
        goto fail;
    }
    char retval = CPyDef__request___BudgetRequest___is_stream(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/budget/_request.py", "is_stream", 33, CPyStatic__request___globals);
    return NULL;
}

char CPyDef__request___BudgetRequest___is_vesting(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[16]; /* 'vesting' */
    cpy_r_r1 = ((yearn_treasury___budget____request___BudgetRequestObject *)cpy_r_self)->_labels;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("yearn_treasury/budget/_request.py", "is_vesting", "BudgetRequest", "labels", 37, CPyStatic__request___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = PySequence_Contains(cpy_r_r1, cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "is_vesting", 37, CPyStatic__request___globals);
        goto CPyL3;
    }
    cpy_r_r4 = cpy_r_r2;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy__request___BudgetRequest___is_vesting(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":is_vesting", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__request___BudgetRequest))
        arg_self = obj_self;
    else {
        CPy_TypeError("yearn_treasury.budget._request.BudgetRequest", obj_self); 
        goto fail;
    }
    char retval = CPyDef__request___BudgetRequest___is_vesting(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/budget/_request.py", "is_vesting", 36, CPyStatic__request___globals);
    return NULL;
}

char CPyDef__request___BudgetRequest___is_paid(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[17]; /* 'paid' */
    cpy_r_r1 = ((yearn_treasury___budget____request___BudgetRequestObject *)cpy_r_self)->_labels;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("yearn_treasury/budget/_request.py", "is_paid", "BudgetRequest", "labels", 40, CPyStatic__request___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = PySequence_Contains(cpy_r_r1, cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "is_paid", 40, CPyStatic__request___globals);
        goto CPyL3;
    }
    cpy_r_r4 = cpy_r_r2;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy__request___BudgetRequest___is_paid(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":is_paid", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__request___BudgetRequest))
        arg_self = obj_self;
    else {
        CPy_TypeError("yearn_treasury.budget._request.BudgetRequest", obj_self); 
        goto fail;
    }
    char retval = CPyDef__request___BudgetRequest___is_paid(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/budget/_request.py", "is_paid", 39, CPyStatic__request___globals);
    return NULL;
}

char CPyDef__request_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    tuple_T0 cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    int32_t cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    int32_t cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    int32_t cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    int32_t cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    int32_t cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    int32_t cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    int32_t cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    int32_t cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject **cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    char cpy_r_r119;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", -1, CPyStatic__request___globals);
        goto CPyL35;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[75]; /* ('dataclass',) */
    cpy_r_r6 = CPyStatics[19]; /* 'dataclasses' */
    cpy_r_r7 = CPyStatic__request___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 1, CPyStatic__request___globals);
        goto CPyL35;
    }
    CPyModule_dataclasses = cpy_r_r8;
    CPy_INCREF(CPyModule_dataclasses);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[76]; /* ('getLogger',) */
    cpy_r_r10 = CPyStatics[21]; /* 'logging' */
    cpy_r_r11 = CPyStatic__request___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 2, CPyStatic__request___globals);
        goto CPyL35;
    }
    CPyModule_logging = cpy_r_r12;
    CPy_INCREF(CPyModule_logging);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[77]; /* ('Final', 'List', 'Optional', 'final') */
    cpy_r_r14 = CPyStatics[26]; /* 'typing' */
    cpy_r_r15 = CPyStatic__request___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 3, CPyStatic__request___globals);
        goto CPyL35;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatic__request___globals;
    cpy_r_r18 = CPyStatics[27]; /* '__name__' */
    cpy_r_r19 = CPyDict_GetItem(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 6, CPyStatic__request___globals);
        goto CPyL35;
    }
    if (likely(PyUnicode_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/budget/_request.py", "<module>", 6, CPyStatic__request___globals, "str", cpy_r_r19);
        goto CPyL35;
    }
    cpy_r_r21 = CPyStatic__request___globals;
    cpy_r_r22 = CPyStatics[20]; /* 'getLogger' */
    cpy_r_r23 = CPyDict_GetItem(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 6, CPyStatic__request___globals);
        goto CPyL36;
    }
    PyObject *cpy_r_r24[1] = {cpy_r_r20};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = _PyObject_Vectorcall(cpy_r_r23, cpy_r_r25, 1, 0);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 6, CPyStatic__request___globals);
        goto CPyL36;
    }
    CPy_DECREF(cpy_r_r20);
    CPyStatic__request___logger = cpy_r_r26;
    CPy_INCREF(CPyStatic__request___logger);
    cpy_r_r27 = CPyStatic__request___globals;
    cpy_r_r28 = CPyStatics[28]; /* 'logger' */
    cpy_r_r29 = CPyDict_SetItem(cpy_r_r27, cpy_r_r28, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 6, CPyStatic__request___globals);
        goto CPyL35;
    }
    cpy_r_r31 = NULL;
    cpy_r_r32 = CPyStatics[5]; /* 'yearn_treasury.budget._request' */
    cpy_r_r33 = (PyObject *)CPyType__request___BudgetRequest_template;
    cpy_r_r34 = CPyType_FromTemplate(cpy_r_r33, cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 11, CPyStatic__request___globals);
        goto CPyL35;
    }
    cpy_r_r35 = CPyDef__request___BudgetRequest_trait_vtable_setup();
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", -1, CPyStatic__request___globals);
        goto CPyL37;
    }
    cpy_r_r36 = CPyStatics[29]; /* '__mypyc_attrs__' */
    cpy_r_r37 = CPyStatics[30]; /* 'id' */
    cpy_r_r38 = CPyStatics[31]; /* 'number' */
    cpy_r_r39 = CPyStatics[32]; /* 'title' */
    cpy_r_r40 = CPyStatics[33]; /* 'state' */
    cpy_r_r41 = CPyStatics[34]; /* 'url' */
    cpy_r_r42 = CPyStatics[35]; /* 'created_at' */
    cpy_r_r43 = CPyStatics[36]; /* 'updated_at' */
    cpy_r_r44 = CPyStatics[37]; /* 'closed_at' */
    cpy_r_r45 = CPyStatics[38]; /* 'body' */
    cpy_r_r46 = CPyStatics[39]; /* 'labels' */
    cpy_r_r47 = PyTuple_Pack(10, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43, cpy_r_r44, cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 11, CPyStatic__request___globals);
        goto CPyL37;
    }
    cpy_r_r48 = PyObject_SetAttr(cpy_r_r34, cpy_r_r36, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 11, CPyStatic__request___globals);
        goto CPyL37;
    }
    CPyType__request___BudgetRequest = (PyTypeObject *)cpy_r_r34;
    CPy_INCREF(CPyType__request___BudgetRequest);
    cpy_r_r50 = CPyStatic__request___globals;
    cpy_r_r51 = CPyStatics[4]; /* 'BudgetRequest' */
    cpy_r_r52 = CPyDict_SetItem(cpy_r_r50, cpy_r_r51, cpy_r_r34);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 11, CPyStatic__request___globals);
        goto CPyL37;
    }
    cpy_r_r54 = PyDict_New();
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 11, CPyStatic__request___globals);
        goto CPyL37;
    }
    cpy_r_r55.empty_struct_error_flag = 0;
    cpy_r_r56 = PyDict_New();
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 11, CPyStatic__request___globals);
        goto CPyL38;
    }
    cpy_r_r57 = (PyObject *)&PyType_Type;
    cpy_r_r58 = (PyObject *)&PyLong_Type;
    cpy_r_r59 = CPyStatics[30]; /* 'id' */
    cpy_r_r60 = CPyDict_SetItem(cpy_r_r56, cpy_r_r59, cpy_r_r58);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 12, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r62 = (PyObject *)&PyLong_Type;
    cpy_r_r63 = CPyStatics[31]; /* 'number' */
    cpy_r_r64 = CPyDict_SetItem(cpy_r_r56, cpy_r_r63, cpy_r_r62);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 13, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r66 = (PyObject *)&PyUnicode_Type;
    cpy_r_r67 = CPyStatics[32]; /* 'title' */
    cpy_r_r68 = CPyDict_SetItem(cpy_r_r56, cpy_r_r67, cpy_r_r66);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 14, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r70 = (PyObject *)&PyUnicode_Type;
    cpy_r_r71 = CPyStatics[33]; /* 'state' */
    cpy_r_r72 = CPyDict_SetItem(cpy_r_r56, cpy_r_r71, cpy_r_r70);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 15, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r74 = (PyObject *)&PyUnicode_Type;
    cpy_r_r75 = CPyStatics[34]; /* 'url' */
    cpy_r_r76 = CPyDict_SetItem(cpy_r_r56, cpy_r_r75, cpy_r_r74);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 16, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r78 = (PyObject *)&PyUnicode_Type;
    cpy_r_r79 = CPyStatics[35]; /* 'created_at' */
    cpy_r_r80 = CPyDict_SetItem(cpy_r_r56, cpy_r_r79, cpy_r_r78);
    cpy_r_r81 = cpy_r_r80 >= 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 17, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r82 = (PyObject *)&PyUnicode_Type;
    cpy_r_r83 = CPyStatics[36]; /* 'updated_at' */
    cpy_r_r84 = CPyDict_SetItem(cpy_r_r56, cpy_r_r83, cpy_r_r82);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 18, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r86 = (PyObject *)&PyType_Type;
    cpy_r_r87 = CPyStatics[37]; /* 'closed_at' */
    cpy_r_r88 = CPyDict_SetItem(cpy_r_r56, cpy_r_r87, cpy_r_r86);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 19, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r90 = (PyObject *)&PyType_Type;
    cpy_r_r91 = CPyStatics[38]; /* 'body' */
    cpy_r_r92 = CPyDict_SetItem(cpy_r_r56, cpy_r_r91, cpy_r_r90);
    cpy_r_r93 = cpy_r_r92 >= 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 20, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r94 = (PyObject *)&PyList_Type;
    cpy_r_r95 = CPyStatics[39]; /* 'labels' */
    cpy_r_r96 = CPyDict_SetItem(cpy_r_r56, cpy_r_r95, cpy_r_r94);
    cpy_r_r97 = cpy_r_r96 >= 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 21, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r98 = CPyStatics[40]; /* '__annotations__' */
    cpy_r_r99 = CPyDict_SetItem(cpy_r_r54, cpy_r_r98, cpy_r_r56);
    cpy_r_r100 = cpy_r_r99 >= 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 11, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r101 = CPyStatics[41]; /* 'mypyc filler docstring' */
    cpy_r_r102 = CPyStatics[42]; /* '__doc__' */
    cpy_r_r103 = CPyDict_SetItem(cpy_r_r54, cpy_r_r102, cpy_r_r101);
    cpy_r_r104 = cpy_r_r103 >= 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 11, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r105 = CPyStatics[5]; /* 'yearn_treasury.budget._request' */
    cpy_r_r106 = CPyStatics[43]; /* '__module__' */
    cpy_r_r107 = CPyDict_SetItem(cpy_r_r54, cpy_r_r106, cpy_r_r105);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 11, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r109 = CPyStatic__request___globals;
    cpy_r_r110 = CPyStatics[18]; /* 'dataclass' */
    cpy_r_r111 = CPyDict_GetItem(cpy_r_r109, cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 10, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r112 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r113[1] = {cpy_r_r112};
    cpy_r_r114 = (PyObject **)&cpy_r_r113;
    cpy_r_r115 = CPyStatics[78]; /* ('frozen',) */
    cpy_r_r116 = _PyObject_Vectorcall(cpy_r_r111, cpy_r_r114, 0, cpy_r_r115);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 10, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r117 = CPyStatics[19]; /* 'dataclasses' */
    cpy_r_r118 = CPyDataclass_SleightOfHand(cpy_r_r116, cpy_r_r34, cpy_r_r54, cpy_r_r56, cpy_r_r117);
    CPy_DECREF(cpy_r_r116);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 11, CPyStatic__request___globals);
        goto CPyL35;
    }
    return 1;
CPyL35: ;
    cpy_r_r119 = 2;
    return cpy_r_r119;
CPyL36: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL35;
CPyL37: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL35;
CPyL38: ;
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r54);
    goto CPyL35;
CPyL39: ;
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r56);
    goto CPyL35;
}
static PyMethodDef _requestsmodule_methods[] = {
    {"fetch_brs", (PyCFunction)CPyPy__requests___fetch_brs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef _requestsmodule = {
    PyModuleDef_HEAD_INIT,
    "yearn_treasury.budget._requests",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    _requestsmodule_methods
};

PyObject *CPyInit_yearn_treasury___budget____requests(void)
{
    PyObject* modname = NULL;
    if (CPyModule_yearn_treasury___budget____requests_internal) {
        Py_INCREF(CPyModule_yearn_treasury___budget____requests_internal);
        return CPyModule_yearn_treasury___budget____requests_internal;
    }
    CPyModule_yearn_treasury___budget____requests_internal = PyModule_Create(&_requestsmodule);
    if (unlikely(CPyModule_yearn_treasury___budget____requests_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_yearn_treasury___budget____requests_internal, "__name__");
    CPyStatic__requests___globals = PyModule_GetDict(CPyModule_yearn_treasury___budget____requests_internal);
    if (unlikely(CPyStatic__requests___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef__requests_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_yearn_treasury___budget____requests_internal;
    fail:
    Py_CLEAR(CPyModule_yearn_treasury___budget____requests_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic__requests____TOKEN);
    CPyStatic__requests____TOKEN = NULL;
    CPy_XDECREF(CPyStatic__requests____HEADERS);
    CPyStatic__requests____HEADERS = NULL;
    return NULL;
}

PyObject *CPyDef__requests___fetch_brs(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject **cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    int64_t cpy_r_r44;
    CPyTagged cpy_r_r45;
    char cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyPtr cpy_r_r48;
    int64_t cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    int64_t cpy_r_r52;
    CPyPtr cpy_r_r53;
    CPyPtr cpy_r_r54;
    int64_t cpy_r_r55;
    CPyPtr cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyPtr cpy_r_r67;
    int64_t cpy_r_r68;
    PyObject *cpy_r_r69;
    CPyTagged cpy_r_r70;
    CPyPtr cpy_r_r71;
    int64_t cpy_r_r72;
    CPyTagged cpy_r_r73;
    char cpy_r_r74;
    int64_t cpy_r_r75;
    CPyPtr cpy_r_r76;
    CPyPtr cpy_r_r77;
    int64_t cpy_r_r78;
    CPyPtr cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    CPyTagged cpy_r_r85;
    PyObject *cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    int32_t cpy_r_r122;
    char cpy_r_r123;
    CPyTagged cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    int32_t cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    cpy_r_r0 = CPyStatics[45]; /* 'https://api.github.com/repos/yearn/budget/issues' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[33]; /* 'state' */
    cpy_r_r2 = CPyStatics[46]; /* 'all' */
    cpy_r_r3 = CPyStatics[47]; /* 'per_page' */
    cpy_r_r4 = CPyStatics[48]; /* 'page' */
    cpy_r_r5 = CPyStatics[71]; /* 100 */
    cpy_r_r6 = CPyStatics[72]; /* 1 */
    cpy_r_r7 = CPyDict_Build(3, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r5, cpy_r_r4, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 18, CPyStatic__requests___globals);
        goto CPyL61;
    }
    cpy_r_r8 = PyList_New(0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 20, CPyStatic__requests___globals);
        goto CPyL62;
    }
CPyL3: ;
    if (!1) goto CPyL63;
    cpy_r_r9 = CPyStatic__requests____HEADERS;
    if (unlikely(cpy_r_r9 == NULL)) {
        goto CPyL64;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_HEADERS\" was not set");
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 22, CPyStatic__requests___globals);
        goto CPyL60;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r11 = CPyStatic__requests___globals;
    cpy_r_r12 = CPyStatics[49]; /* 'get' */
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 22, CPyStatic__requests___globals);
        goto CPyL65;
    }
    PyObject *cpy_r_r14[3] = {cpy_r_r0, cpy_r_r9, cpy_r_r7};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = CPyStatics[79]; /* ('headers', 'params') */
    cpy_r_r17 = _PyObject_Vectorcall(cpy_r_r13, cpy_r_r15, 1, cpy_r_r16);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 22, CPyStatic__requests___globals);
        goto CPyL65;
    }
    cpy_r_r18 = CPyStatics[52]; /* 'status_code' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 23, CPyStatic__requests___globals);
        goto CPyL66;
    }
    if (likely(PyLong_Check(cpy_r_r19)))
        cpy_r_r20 = CPyTagged_FromObject(cpy_r_r19);
    else {
        CPy_TypeError("int", cpy_r_r19); cpy_r_r20 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == CPY_INT_TAG)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 23, CPyStatic__requests___globals);
        goto CPyL66;
    }
    cpy_r_r21 = cpy_r_r20 != 400;
    CPyTagged_DECREF(cpy_r_r20);
    if (cpy_r_r21) {
        goto CPyL67;
    } else
        goto CPyL22;
CPyL12: ;
    cpy_r_r22 = CPyStatics[53]; /* 'Failed to fetch issues: ' */
    cpy_r_r23 = CPyStatics[52]; /* 'status_code' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 24, CPyStatic__requests___globals);
        goto CPyL68;
    }
    if (likely(PyLong_Check(cpy_r_r24)))
        cpy_r_r25 = CPyTagged_FromObject(cpy_r_r24);
    else {
        CPy_TypeError("int", cpy_r_r24); cpy_r_r25 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == CPY_INT_TAG)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 24, CPyStatic__requests___globals);
        goto CPyL68;
    }
    cpy_r_r26 = CPyTagged_Str(cpy_r_r25);
    CPyTagged_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 24, CPyStatic__requests___globals);
        goto CPyL68;
    }
    cpy_r_r27 = CPyStatics[54]; /* ' ' */
    cpy_r_r28 = CPyStatics[55]; /* 'text' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r28);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 24, CPyStatic__requests___globals);
        goto CPyL69;
    }
    if (likely(PyUnicode_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 24, CPyStatic__requests___globals, "str", cpy_r_r29);
        goto CPyL69;
    }
    cpy_r_r31 = CPyStr_Build(4, cpy_r_r22, cpy_r_r26, cpy_r_r27, cpy_r_r30);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 24, CPyStatic__requests___globals);
        goto CPyL60;
    }
    cpy_r_r32 = CPyModule_builtins;
    cpy_r_r33 = CPyStatics[56]; /* 'ConnectionError' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 24, CPyStatic__requests___globals);
        goto CPyL70;
    }
    PyObject *cpy_r_r35[1] = {cpy_r_r31};
    cpy_r_r36 = (PyObject **)&cpy_r_r35;
    cpy_r_r37 = _PyObject_Vectorcall(cpy_r_r34, cpy_r_r36, 1, 0);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 24, CPyStatic__requests___globals);
        goto CPyL70;
    }
    CPy_DECREF(cpy_r_r31);
    CPy_Raise(cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(!0)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 24, CPyStatic__requests___globals);
        goto CPyL60;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r38 = CPyStatics[57]; /* 'json' */
    PyObject *cpy_r_r39[1] = {cpy_r_r17};
    cpy_r_r40 = (PyObject **)&cpy_r_r39;
    cpy_r_r41 = PyObject_VectorcallMethod(cpy_r_r38, cpy_r_r40, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 26, CPyStatic__requests___globals);
        goto CPyL66;
    }
    CPy_DECREF(cpy_r_r17);
    if (likely(PyList_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 26, CPyStatic__requests___globals, "list", cpy_r_r41);
        goto CPyL65;
    }
    cpy_r_r43 = (CPyPtr)&((PyVarObject *)cpy_r_r42)->ob_size;
    cpy_r_r44 = *(int64_t *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 << 1;
    cpy_r_r46 = cpy_r_r45 != 0;
    if (!cpy_r_r46) goto CPyL71;
    cpy_r_r47 = 0;
CPyL26: ;
    cpy_r_r48 = (CPyPtr)&((PyVarObject *)cpy_r_r42)->ob_size;
    cpy_r_r49 = *(int64_t *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 << 1;
    cpy_r_r51 = (Py_ssize_t)cpy_r_r47 < (Py_ssize_t)cpy_r_r50;
    if (!cpy_r_r51) goto CPyL72;
    cpy_r_r52 = (Py_ssize_t)cpy_r_r47 >> 1;
    cpy_r_r53 = (CPyPtr)&((PyListObject *)cpy_r_r42)->ob_item;
    cpy_r_r54 = *(CPyPtr *)cpy_r_r53;
    cpy_r_r55 = cpy_r_r52 * 8;
    cpy_r_r56 = cpy_r_r54 + cpy_r_r55;
    cpy_r_r57 = *(PyObject * *)cpy_r_r56;
    CPy_INCREF(cpy_r_r57);
    if (likely(PyDict_Check(cpy_r_r57)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 30, CPyStatic__requests___globals, "dict", cpy_r_r57);
        goto CPyL73;
    }
    cpy_r_r59 = CPyStatics[58]; /* 'pull_request' */
    cpy_r_r60 = PyDict_Contains(cpy_r_r58, cpy_r_r59);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 32, CPyStatic__requests___globals);
        goto CPyL74;
    }
    cpy_r_r62 = cpy_r_r60;
    if (cpy_r_r62) goto CPyL75;
    cpy_r_r63 = CPyStatics[39]; /* 'labels' */
    cpy_r_r64 = PyList_New(0);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 37, CPyStatic__requests___globals);
        goto CPyL74;
    }
    cpy_r_r65 = CPyDict_Get(cpy_r_r58, cpy_r_r63, cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 37, CPyStatic__requests___globals);
        goto CPyL74;
    }
    if (likely(PyList_Check(cpy_r_r65)))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 37, CPyStatic__requests___globals, "list", cpy_r_r65);
        goto CPyL74;
    }
    cpy_r_r67 = (CPyPtr)&((PyVarObject *)cpy_r_r66)->ob_size;
    cpy_r_r68 = *(int64_t *)cpy_r_r67;
    cpy_r_r69 = PyList_New(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 38, CPyStatic__requests___globals);
        goto CPyL76;
    }
    cpy_r_r70 = 0;
CPyL35: ;
    cpy_r_r71 = (CPyPtr)&((PyVarObject *)cpy_r_r66)->ob_size;
    cpy_r_r72 = *(int64_t *)cpy_r_r71;
    cpy_r_r73 = cpy_r_r72 << 1;
    cpy_r_r74 = (Py_ssize_t)cpy_r_r70 < (Py_ssize_t)cpy_r_r73;
    if (!cpy_r_r74) goto CPyL77;
    cpy_r_r75 = (Py_ssize_t)cpy_r_r70 >> 1;
    cpy_r_r76 = (CPyPtr)&((PyListObject *)cpy_r_r66)->ob_item;
    cpy_r_r77 = *(CPyPtr *)cpy_r_r76;
    cpy_r_r78 = cpy_r_r75 * 8;
    cpy_r_r79 = cpy_r_r77 + cpy_r_r78;
    cpy_r_r80 = *(PyObject * *)cpy_r_r79;
    CPy_INCREF(cpy_r_r80);
    if (likely(PyDict_Check(cpy_r_r80)))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 38, CPyStatic__requests___globals, "dict", cpy_r_r80);
        goto CPyL78;
    }
    cpy_r_r82 = CPyStatics[59]; /* 'name' */
    cpy_r_r83 = CPyDict_GetWithNone(cpy_r_r81, cpy_r_r82);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 38, CPyStatic__requests___globals);
        goto CPyL78;
    }
    cpy_r_r84 = CPyList_SetItemUnsafe(cpy_r_r69, cpy_r_r70, cpy_r_r83);
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 38, CPyStatic__requests___globals);
        goto CPyL78;
    }
    cpy_r_r85 = cpy_r_r70 + 2;
    cpy_r_r70 = cpy_r_r85;
    goto CPyL35;
CPyL40: ;
    cpy_r_r86 = CPyStatics[60]; /* 'budget request' */
    cpy_r_r87 = PySequence_Contains(cpy_r_r69, cpy_r_r86);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 40, CPyStatic__requests___globals);
        goto CPyL79;
    }
    cpy_r_r89 = cpy_r_r87;
    cpy_r_r90 = cpy_r_r89 ^ 1;
    if (cpy_r_r90) goto CPyL80;
    cpy_r_r91 = CPyStatics[30]; /* 'id' */
    cpy_r_r92 = CPyDict_GetWithNone(cpy_r_r58, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 44, CPyStatic__requests___globals);
        goto CPyL79;
    }
    cpy_r_r93 = CPyStatics[31]; /* 'number' */
    cpy_r_r94 = CPyDict_GetWithNone(cpy_r_r58, cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 45, CPyStatic__requests___globals);
        goto CPyL81;
    }
    cpy_r_r95 = CPyStatics[32]; /* 'title' */
    cpy_r_r96 = CPyDict_GetWithNone(cpy_r_r58, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 46, CPyStatic__requests___globals);
        goto CPyL82;
    }
    cpy_r_r97 = CPyStatics[33]; /* 'state' */
    cpy_r_r98 = CPyDict_GetWithNone(cpy_r_r58, cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 47, CPyStatic__requests___globals);
        goto CPyL83;
    }
    cpy_r_r99 = CPyStatics[61]; /* 'html_url' */
    cpy_r_r100 = CPyDict_GetWithNone(cpy_r_r58, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 48, CPyStatic__requests___globals);
        goto CPyL84;
    }
    cpy_r_r101 = CPyStatics[35]; /* 'created_at' */
    cpy_r_r102 = CPyDict_GetWithNone(cpy_r_r58, cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 49, CPyStatic__requests___globals);
        goto CPyL85;
    }
    cpy_r_r103 = CPyStatics[36]; /* 'updated_at' */
    cpy_r_r104 = CPyDict_GetWithNone(cpy_r_r58, cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 50, CPyStatic__requests___globals);
        goto CPyL86;
    }
    cpy_r_r105 = CPyStatics[37]; /* 'closed_at' */
    cpy_r_r106 = CPyDict_GetWithNone(cpy_r_r58, cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 51, CPyStatic__requests___globals);
        goto CPyL87;
    }
    cpy_r_r107 = CPyStatics[38]; /* 'body' */
    cpy_r_r108 = CPyDict_GetWithNone(cpy_r_r58, cpy_r_r107);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 52, CPyStatic__requests___globals);
        goto CPyL88;
    }
    cpy_r_r109 = CPyStatics[30]; /* 'id' */
    cpy_r_r110 = CPyStatics[31]; /* 'number' */
    cpy_r_r111 = CPyStatics[32]; /* 'title' */
    cpy_r_r112 = CPyStatics[33]; /* 'state' */
    cpy_r_r113 = CPyStatics[34]; /* 'url' */
    cpy_r_r114 = CPyStatics[35]; /* 'created_at' */
    cpy_r_r115 = CPyStatics[36]; /* 'updated_at' */
    cpy_r_r116 = CPyStatics[37]; /* 'closed_at' */
    cpy_r_r117 = CPyStatics[38]; /* 'body' */
    cpy_r_r118 = CPyStatics[39]; /* 'labels' */
    cpy_r_r119 = PyTuple_Pack(0);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 43, CPyStatic__requests___globals);
        goto CPyL89;
    }
    cpy_r_r120 = CPyDict_Build(10, cpy_r_r109, cpy_r_r92, cpy_r_r110, cpy_r_r94, cpy_r_r111, cpy_r_r96, cpy_r_r112, cpy_r_r98, cpy_r_r113, cpy_r_r100, cpy_r_r114, cpy_r_r102, cpy_r_r115, cpy_r_r104, cpy_r_r116, cpy_r_r106, cpy_r_r117, cpy_r_r108, cpy_r_r118, cpy_r_r69);
    CPy_DECREF(cpy_r_r92);
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_r96);
    CPy_DECREF(cpy_r_r98);
    CPy_DECREF(cpy_r_r100);
    CPy_DECREF(cpy_r_r102);
    CPy_DECREF(cpy_r_r104);
    CPy_DECREF(cpy_r_r106);
    CPy_DECREF(cpy_r_r108);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 43, CPyStatic__requests___globals);
        goto CPyL90;
    }
    cpy_r_r121 = CPyDef__request___BudgetRequest(cpy_r_r119, cpy_r_r120);
    CPy_DECREF(cpy_r_r119);
    CPy_DECREF(cpy_r_r120);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 43, CPyStatic__requests___globals);
        goto CPyL73;
    }
    cpy_r_r122 = PyList_Append(cpy_r_r8, cpy_r_r121);
    CPy_DECREF(cpy_r_r121);
    cpy_r_r123 = cpy_r_r122 >= 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 55, CPyStatic__requests___globals);
        goto CPyL73;
    }
CPyL55: ;
    cpy_r_r124 = cpy_r_r47 + 2;
    cpy_r_r47 = cpy_r_r124;
    goto CPyL26;
CPyL56: ;
    cpy_r_r125 = CPyStatics[48]; /* 'page' */
    cpy_r_r126 = CPyDict_GetItem(cpy_r_r7, cpy_r_r125);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 58, CPyStatic__requests___globals);
        goto CPyL65;
    }
    cpy_r_r127 = CPyStatics[72]; /* 1 */
    cpy_r_r128 = PyNumber_InPlaceAdd(cpy_r_r126, cpy_r_r127);
    CPy_DECREF(cpy_r_r126);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 58, CPyStatic__requests___globals);
        goto CPyL65;
    }
    cpy_r_r129 = CPyDict_SetItem(cpy_r_r7, cpy_r_r125, cpy_r_r128);
    CPy_DECREF(cpy_r_r128);
    cpy_r_r130 = cpy_r_r129 >= 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 58, CPyStatic__requests___globals);
        goto CPyL65;
    } else
        goto CPyL3;
CPyL59: ;
    return cpy_r_r8;
CPyL60: ;
    cpy_r_r131 = NULL;
    return cpy_r_r131;
CPyL61: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL60;
CPyL62: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    goto CPyL60;
CPyL63: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r7);
    goto CPyL59;
CPyL64: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    goto CPyL5;
CPyL65: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    goto CPyL60;
CPyL66: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r17);
    goto CPyL60;
CPyL67: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8);
    goto CPyL12;
CPyL68: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL60;
CPyL69: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL60;
CPyL70: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL60;
CPyL71: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r42);
    goto CPyL59;
CPyL72: ;
    CPy_DECREF(cpy_r_r42);
    goto CPyL56;
CPyL73: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r42);
    goto CPyL60;
CPyL74: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r58);
    goto CPyL60;
CPyL75: ;
    CPy_DECREF(cpy_r_r58);
    goto CPyL55;
CPyL76: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r66);
    goto CPyL60;
CPyL77: ;
    CPy_DECREF(cpy_r_r66);
    goto CPyL40;
CPyL78: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r69);
    goto CPyL60;
CPyL79: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r69);
    goto CPyL60;
CPyL80: ;
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r69);
    goto CPyL55;
CPyL81: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r92);
    goto CPyL60;
CPyL82: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r94);
    goto CPyL60;
CPyL83: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r96);
    goto CPyL60;
CPyL84: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r96);
    CPy_DecRef(cpy_r_r98);
    goto CPyL60;
CPyL85: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r96);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r100);
    goto CPyL60;
CPyL86: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r96);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r102);
    goto CPyL60;
CPyL87: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r96);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r104);
    goto CPyL60;
CPyL88: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r96);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r106);
    goto CPyL60;
CPyL89: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r96);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r106);
    CPy_DecRef(cpy_r_r108);
    goto CPyL60;
CPyL90: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r119);
    goto CPyL60;
}

PyObject *CPyPy__requests___fetch_brs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":fetch_brs", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *retval = CPyDef__requests___fetch_brs();
    return retval;
fail: ;
    CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 14, CPyStatic__requests___globals);
    return NULL;
}

char CPyDef__requests_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r5;
    void *cpy_r_r7;
    void *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyTagged cpy_r_r68;
    CPyPtr cpy_r_r69;
    int64_t cpy_r_r70;
    CPyTagged cpy_r_r71;
    char cpy_r_r72;
    int64_t cpy_r_r73;
    CPyPtr cpy_r_r74;
    CPyPtr cpy_r_r75;
    int64_t cpy_r_r76;
    CPyPtr cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    CPyTagged cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    CPyTagged cpy_r_r93;
    CPyPtr cpy_r_r94;
    int64_t cpy_r_r95;
    CPyTagged cpy_r_r96;
    char cpy_r_r97;
    int64_t cpy_r_r98;
    CPyPtr cpy_r_r99;
    CPyPtr cpy_r_r100;
    int64_t cpy_r_r101;
    CPyPtr cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    int32_t cpy_r_r106;
    char cpy_r_r107;
    CPyTagged cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", -1, CPyStatic__requests___globals);
        goto CPyL51;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_os;
    PyObject **cpy_r_r6[1] = {cpy_r_r5};
    cpy_r_r7 = (void *)&cpy_r_r6;
    int64_t cpy_r_r8[1] = {1};
    cpy_r_r9 = (void *)&cpy_r_r8;
    cpy_r_r10 = CPyStatics[81]; /* (('os', 'os', 'os'),) */
    cpy_r_r11 = CPyStatic__requests___globals;
    cpy_r_r12 = CPyStatics[63]; /* 'yearn_treasury/budget/_requests.py' */
    cpy_r_r13 = CPyStatics[64]; /* '<module>' */
    cpy_r_r14 = CPyImport_ImportMany(cpy_r_r10, cpy_r_r7, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r9);
    if (!cpy_r_r14) goto CPyL51;
    cpy_r_r15 = CPyStatics[82]; /* ('get',) */
    cpy_r_r16 = CPyStatics[8]; /* 'requests' */
    cpy_r_r17 = CPyStatic__requests___globals;
    cpy_r_r18 = CPyImport_ImportFromMany(cpy_r_r16, cpy_r_r15, cpy_r_r15, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 2, CPyStatic__requests___globals);
        goto CPyL51;
    }
    CPyModule_requests = cpy_r_r18;
    CPy_INCREF(CPyModule_requests);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r19 = CPyStatics[83]; /* ('Final', 'List') */
    cpy_r_r20 = CPyStatics[26]; /* 'typing' */
    cpy_r_r21 = CPyStatic__requests___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 3, CPyStatic__requests___globals);
        goto CPyL51;
    }
    CPyModule_typing = cpy_r_r22;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[73]; /* ('BudgetRequest',) */
    cpy_r_r24 = CPyStatics[5]; /* 'yearn_treasury.budget._request' */
    cpy_r_r25 = CPyStatic__requests___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 5, CPyStatic__requests___globals);
        goto CPyL51;
    }
    CPyModule_yearn_treasury___budget____request = cpy_r_r26;
    CPy_INCREF(CPyModule_yearn_treasury___budget____request);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyModule_os;
    cpy_r_r28 = CPyStatics[65]; /* 'environ' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 10, CPyStatic__requests___globals);
        goto CPyL51;
    }
    cpy_r_r30 = CPyStatics[66]; /* 'GITHUB_TOKEN' */
    cpy_r_r31 = CPyStatics[49]; /* 'get' */
    PyObject *cpy_r_r32[2] = {cpy_r_r29, cpy_r_r30};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = PyObject_VectorcallMethod(cpy_r_r31, cpy_r_r33, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 10, CPyStatic__requests___globals);
        goto CPyL52;
    }
    CPy_DECREF(cpy_r_r29);
    if (PyUnicode_Check(cpy_r_r34))
        cpy_r_r35 = cpy_r_r34;
    else {
        cpy_r_r35 = NULL;
    }
    if (cpy_r_r35 != NULL) goto __LL3;
    if (cpy_r_r34 == Py_None)
        cpy_r_r35 = cpy_r_r34;
    else {
        cpy_r_r35 = NULL;
    }
    if (cpy_r_r35 != NULL) goto __LL3;
    CPy_TypeErrorTraceback("yearn_treasury/budget/_requests.py", "<module>", 10, CPyStatic__requests___globals, "str or None", cpy_r_r34);
    goto CPyL51;
__LL3: ;
    CPyStatic__requests____TOKEN = cpy_r_r35;
    CPy_INCREF(CPyStatic__requests____TOKEN);
    cpy_r_r36 = CPyStatic__requests___globals;
    cpy_r_r37 = CPyStatics[67]; /* '_TOKEN' */
    cpy_r_r38 = CPyDict_SetItem(cpy_r_r36, cpy_r_r37, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 10, CPyStatic__requests___globals);
        goto CPyL51;
    }
    cpy_r_r40 = CPyStatic__requests____TOKEN;
    if (likely(cpy_r_r40 != NULL)) goto CPyL14;
    PyErr_SetString(PyExc_NameError, "value for final name \"_TOKEN\" was not set");
    cpy_r_r41 = 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 11, CPyStatic__requests___globals);
        goto CPyL51;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r42 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r43 = cpy_r_r40 != cpy_r_r42;
    if (!cpy_r_r43) goto CPyL23;
    CPy_INCREF(cpy_r_r40);
    if (likely(cpy_r_r40 != Py_None))
        cpy_r_r44 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/budget/_requests.py", "<module>", 11, CPyStatic__requests___globals, "str", cpy_r_r40);
        goto CPyL51;
    }
    cpy_r_r45 = CPyStr_IsTrue(cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    if (!cpy_r_r45) goto CPyL23;
    cpy_r_r46 = CPyStatics[68]; /* 'Authorization' */
    cpy_r_r47 = CPyStatics[69]; /* 'token ' */
    cpy_r_r48 = CPyStatic__requests____TOKEN;
    if (likely(cpy_r_r48 != NULL)) goto CPyL20;
    PyErr_SetString(PyExc_NameError, "value for final name \"_TOKEN\" was not set");
    cpy_r_r49 = 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 11, CPyStatic__requests___globals);
        goto CPyL51;
    }
    CPy_Unreachable();
CPyL20: ;
    cpy_r_r50 = CPyStr_Build(2, cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 11, CPyStatic__requests___globals);
        goto CPyL51;
    }
    cpy_r_r51 = CPyDict_Build(1, cpy_r_r46, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 11, CPyStatic__requests___globals);
        goto CPyL51;
    }
    cpy_r_r52 = cpy_r_r51;
    goto CPyL25;
CPyL23: ;
    cpy_r_r53 = PyDict_New();
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 11, CPyStatic__requests___globals);
        goto CPyL51;
    }
    cpy_r_r52 = cpy_r_r53;
CPyL25: ;
    CPyStatic__requests____HEADERS = cpy_r_r52;
    CPy_INCREF(CPyStatic__requests____HEADERS);
    cpy_r_r54 = CPyStatic__requests___globals;
    cpy_r_r55 = CPyStatics[70]; /* '_HEADERS' */
    cpy_r_r56 = CPyDict_SetItem(cpy_r_r54, cpy_r_r55, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 11, CPyStatic__requests___globals);
        goto CPyL51;
    }
    cpy_r_r58 = CPyDef__requests___fetch_brs();
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 63, CPyStatic__requests___globals);
        goto CPyL51;
    }
    cpy_r_r59 = CPyStatic__requests___globals;
    cpy_r_r60 = CPyStatics[8]; /* 'requests' */
    cpy_r_r61 = CPyDict_SetItem(cpy_r_r59, cpy_r_r60, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 63, CPyStatic__requests___globals);
        goto CPyL51;
    }
    cpy_r_r63 = PyList_New(0);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 64, CPyStatic__requests___globals);
        goto CPyL51;
    }
    cpy_r_r64 = CPyStatic__requests___globals;
    cpy_r_r65 = CPyStatics[8]; /* 'requests' */
    cpy_r_r66 = CPyDict_GetItem(cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 64, CPyStatic__requests___globals);
        goto CPyL53;
    }
    if (likely(PyList_Check(cpy_r_r66)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/budget/_requests.py", "<module>", 64, CPyStatic__requests___globals, "list", cpy_r_r66);
        goto CPyL53;
    }
    cpy_r_r68 = 0;
CPyL32: ;
    cpy_r_r69 = (CPyPtr)&((PyVarObject *)cpy_r_r67)->ob_size;
    cpy_r_r70 = *(int64_t *)cpy_r_r69;
    cpy_r_r71 = cpy_r_r70 << 1;
    cpy_r_r72 = (Py_ssize_t)cpy_r_r68 < (Py_ssize_t)cpy_r_r71;
    if (!cpy_r_r72) goto CPyL54;
    cpy_r_r73 = (Py_ssize_t)cpy_r_r68 >> 1;
    cpy_r_r74 = (CPyPtr)&((PyListObject *)cpy_r_r67)->ob_item;
    cpy_r_r75 = *(CPyPtr *)cpy_r_r74;
    cpy_r_r76 = cpy_r_r73 * 8;
    cpy_r_r77 = cpy_r_r75 + cpy_r_r76;
    cpy_r_r78 = *(PyObject * *)cpy_r_r77;
    CPy_INCREF(cpy_r_r78);
    if (likely(Py_TYPE(cpy_r_r78) == CPyType__request___BudgetRequest))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/budget/_requests.py", "<module>", 64, CPyStatic__requests___globals, "yearn_treasury.budget._request.BudgetRequest", cpy_r_r78);
        goto CPyL55;
    }
    cpy_r_r80 = CPyDef__request___BudgetRequest___is_approved(cpy_r_r79);
    if (unlikely(cpy_r_r80 == 2)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 64, CPyStatic__requests___globals);
        goto CPyL56;
    }
    if (!cpy_r_r80) goto CPyL57;
    cpy_r_r81 = PyList_Append(cpy_r_r63, cpy_r_r79);
    CPy_DECREF(cpy_r_r79);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 64, CPyStatic__requests___globals);
        goto CPyL55;
    }
CPyL37: ;
    cpy_r_r83 = cpy_r_r68 + 2;
    cpy_r_r68 = cpy_r_r83;
    goto CPyL32;
CPyL38: ;
    cpy_r_r84 = CPyStatic__requests___globals;
    cpy_r_r85 = CPyStatics[6]; /* 'approved_requests' */
    cpy_r_r86 = CPyDict_SetItem(cpy_r_r84, cpy_r_r85, cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 64, CPyStatic__requests___globals);
        goto CPyL51;
    }
    cpy_r_r88 = PyList_New(0);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 65, CPyStatic__requests___globals);
        goto CPyL51;
    }
    cpy_r_r89 = CPyStatic__requests___globals;
    cpy_r_r90 = CPyStatics[8]; /* 'requests' */
    cpy_r_r91 = CPyDict_GetItem(cpy_r_r89, cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 65, CPyStatic__requests___globals);
        goto CPyL58;
    }
    if (likely(PyList_Check(cpy_r_r91)))
        cpy_r_r92 = cpy_r_r91;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/budget/_requests.py", "<module>", 65, CPyStatic__requests___globals, "list", cpy_r_r91);
        goto CPyL58;
    }
    cpy_r_r93 = 0;
CPyL43: ;
    cpy_r_r94 = (CPyPtr)&((PyVarObject *)cpy_r_r92)->ob_size;
    cpy_r_r95 = *(int64_t *)cpy_r_r94;
    cpy_r_r96 = cpy_r_r95 << 1;
    cpy_r_r97 = (Py_ssize_t)cpy_r_r93 < (Py_ssize_t)cpy_r_r96;
    if (!cpy_r_r97) goto CPyL59;
    cpy_r_r98 = (Py_ssize_t)cpy_r_r93 >> 1;
    cpy_r_r99 = (CPyPtr)&((PyListObject *)cpy_r_r92)->ob_item;
    cpy_r_r100 = *(CPyPtr *)cpy_r_r99;
    cpy_r_r101 = cpy_r_r98 * 8;
    cpy_r_r102 = cpy_r_r100 + cpy_r_r101;
    cpy_r_r103 = *(PyObject * *)cpy_r_r102;
    CPy_INCREF(cpy_r_r103);
    if (likely(Py_TYPE(cpy_r_r103) == CPyType__request___BudgetRequest))
        cpy_r_r104 = cpy_r_r103;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/budget/_requests.py", "<module>", 65, CPyStatic__requests___globals, "yearn_treasury.budget._request.BudgetRequest", cpy_r_r103);
        goto CPyL60;
    }
    cpy_r_r105 = CPyDef__request___BudgetRequest___is_rejected(cpy_r_r104);
    if (unlikely(cpy_r_r105 == 2)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 65, CPyStatic__requests___globals);
        goto CPyL61;
    }
    if (!cpy_r_r105) goto CPyL62;
    cpy_r_r106 = PyList_Append(cpy_r_r88, cpy_r_r104);
    CPy_DECREF(cpy_r_r104);
    cpy_r_r107 = cpy_r_r106 >= 0;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 65, CPyStatic__requests___globals);
        goto CPyL60;
    }
CPyL48: ;
    cpy_r_r108 = cpy_r_r93 + 2;
    cpy_r_r93 = cpy_r_r108;
    goto CPyL43;
CPyL49: ;
    cpy_r_r109 = CPyStatic__requests___globals;
    cpy_r_r110 = CPyStatics[7]; /* 'rejected_requests' */
    cpy_r_r111 = CPyDict_SetItem(cpy_r_r109, cpy_r_r110, cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 65, CPyStatic__requests___globals);
        goto CPyL51;
    }
    return 1;
CPyL51: ;
    cpy_r_r113 = 2;
    return cpy_r_r113;
CPyL52: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL51;
CPyL53: ;
    CPy_DecRef(cpy_r_r63);
    goto CPyL51;
CPyL54: ;
    CPy_DECREF(cpy_r_r67);
    goto CPyL38;
CPyL55: ;
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r67);
    goto CPyL51;
CPyL56: ;
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r79);
    goto CPyL51;
CPyL57: ;
    CPy_DECREF(cpy_r_r79);
    goto CPyL37;
CPyL58: ;
    CPy_DecRef(cpy_r_r88);
    goto CPyL51;
CPyL59: ;
    CPy_DECREF(cpy_r_r92);
    goto CPyL49;
CPyL60: ;
    CPy_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r92);
    goto CPyL51;
CPyL61: ;
    CPy_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r104);
    goto CPyL51;
CPyL62: ;
    CPy_DECREF(cpy_r_r104);
    goto CPyL48;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_yearn_treasury___budget = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_yearn_treasury___budget____request = Py_None;
    CPyModule_yearn_treasury___budget____requests = Py_None;
    CPyModule_yearn_treasury___budget____request = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_dataclasses = Py_None;
    CPyModule_logging = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_yearn_treasury___budget____requests = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_os = Py_None;
    CPyModule_requests = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_yearn_treasury___budget____request = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[84];
const char * const CPyLit_Str[] = {
    "\003\bbuiltins\rBudgetRequest\036yearn_treasury.budget._request",
    "\003\021approved_requests\021rejected_requests\brequests",
    "\004\037yearn_treasury.budget._requests\a__all__\017%s must be paid\awarning",
    "\b\bapproved\brejected\006stream\avesting\004paid\tdataclass\vdataclasses\tgetLogger",
    "\b\alogging\005Final\004List\bOptional\005final\006typing\b__name__\006logger",
    "\b\017__mypyc_attrs__\002id\006number\005title\005state\003url\ncreated_at\nupdated_at",
    "\006\tclosed_at\004body\006labels\017__annotations__\026mypyc filler docstring\a__doc__",
    "\003\n__module__\006frozen0https://api.github.com/repos/yearn/budget/issues",
    "\a\003all\bper_page\004page\003get\aheaders\006params\vstatus_code",
    "\006\030Failed to fetch issues: \001 \004text\017ConnectionError\004json\fpull_request",
    "\005\004name\016budget request\bhtml_url\002os\"yearn_treasury/budget/_requests.py",
    "\a\b<module>\aenviron\fGITHUB_TOKEN\006_TOKEN\rAuthorization\006token \b_HEADERS",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "\002100\0001",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    11, 1, 4, 3, 6, 7, 8, 1, 18, 1, 20, 4, 22, 23, 24, 25, 1, 44, 2, 50,
    51, 3, 62, 62, 62, 1, 80, 1, 49, 2, 22, 23
};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_yearn_treasury___budget_internal = NULL;
CPyModule *CPyModule_yearn_treasury___budget;
PyObject *CPyStatic_budget___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_yearn_treasury___budget____request_internal = NULL;
CPyModule *CPyModule_yearn_treasury___budget____request;
CPyModule *CPyModule_yearn_treasury___budget____requests_internal = NULL;
CPyModule *CPyModule_yearn_treasury___budget____requests;
PyObject *CPyStatic__request___globals;
CPyModule *CPyModule_dataclasses;
CPyModule *CPyModule_logging;
CPyModule *CPyModule_typing;
PyObject *CPyStatic__requests___globals;
CPyModule *CPyModule_os;
CPyModule *CPyModule_requests;
char CPyDef_budget_____top_level__(void);
PyObject *CPyStatic__request___logger = NULL;
PyTypeObject *CPyType__request___BudgetRequest;
PyObject *CPyDef__request___BudgetRequest(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
char CPyDef__request___BudgetRequest_____post_init__(PyObject *cpy_r_self);
PyObject *CPyPy__request___BudgetRequest_____post_init__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__request___BudgetRequest___is_approved(PyObject *cpy_r_self);
PyObject *CPyPy__request___BudgetRequest___is_approved(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__request___BudgetRequest___is_rejected(PyObject *cpy_r_self);
PyObject *CPyPy__request___BudgetRequest___is_rejected(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__request___BudgetRequest___is_stream(PyObject *cpy_r_self);
PyObject *CPyPy__request___BudgetRequest___is_stream(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__request___BudgetRequest___is_vesting(PyObject *cpy_r_self);
PyObject *CPyPy__request___BudgetRequest___is_vesting(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__request___BudgetRequest___is_paid(PyObject *cpy_r_self);
PyObject *CPyPy__request___BudgetRequest___is_paid(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__request_____top_level__(void);
PyObject *CPyStatic__requests____TOKEN = NULL;
PyObject *CPyStatic__requests____HEADERS = NULL;
PyObject *CPyDef__requests___fetch_brs(void);
PyObject *CPyPy__requests___fetch_brs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__requests_____top_level__(void);

static struct export_table_8e23b90b51af9a1e2e83 exports = {
    &CPyDef_budget_____top_level__,
    &CPyStatic__request___logger,
    &CPyType__request___BudgetRequest,
    &CPyDef__request___BudgetRequest,
    &CPyDef__request___BudgetRequest_____post_init__,
    &CPyDef__request___BudgetRequest___is_approved,
    &CPyDef__request___BudgetRequest___is_rejected,
    &CPyDef__request___BudgetRequest___is_stream,
    &CPyDef__request___BudgetRequest___is_vesting,
    &CPyDef__request___BudgetRequest___is_paid,
    &CPyDef__request_____top_level__,
    &CPyStatic__requests____TOKEN,
    &CPyStatic__requests____HEADERS,
    &CPyDef__requests___fetch_brs,
    &CPyDef__requests_____top_level__,
};

PyMODINIT_FUNC PyInit_8e23b90b51af9a1e2e83__mypyc(void)
{
    static PyModuleDef def = { PyModuleDef_HEAD_INIT, "8e23b90b51af9a1e2e83__mypyc", NULL, -1, NULL, NULL };
    int res;
    PyObject *capsule;
    PyObject *tmp;
    static PyObject *module;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&def);
    if (!module) {
        goto fail;
    }
    
    capsule = PyCapsule_New(&exports, "8e23b90b51af9a1e2e83__mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_yearn_treasury___budget(void);
    capsule = PyCapsule_New((void *)CPyInit_yearn_treasury___budget, "8e23b90b51af9a1e2e83__mypyc.init_yearn_treasury___budget", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_yearn_treasury___budget", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_yearn_treasury___budget____request(void);
    capsule = PyCapsule_New((void *)CPyInit_yearn_treasury___budget____request, "8e23b90b51af9a1e2e83__mypyc.init_yearn_treasury___budget____request", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_yearn_treasury___budget____request", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_yearn_treasury___budget____requests(void);
    capsule = PyCapsule_New((void *)CPyInit_yearn_treasury___budget____requests, "8e23b90b51af9a1e2e83__mypyc.init_yearn_treasury___budget____requests", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_yearn_treasury___budget____requests", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    return module;
    fail:
    Py_XDECREF(module);
    return NULL;
}
