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
#include "__native_5752cfb455d892c59a02.h"
#include "__native_internal_5752cfb455d892c59a02.h"
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
    cpy_r_r5 = CPyStatics[422]; /* ('BudgetRequest',) */
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
    cpy_r_r9 = CPyStatics[423]; /* ('approved_requests', 'rejected_requests', 'requests') */
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
    CPy_DECREF_NO_IMM(cpy_r_r17);
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

static CPyVTableItem _request___BudgetRequest_vtable[5];
static bool
CPyDef__request___BudgetRequest_trait_vtable_setup(void)
{
    CPyVTableItem _request___BudgetRequest_vtable_scratch[] = {
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
    if (likely(PySet_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("set", value); 
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

char CPyDef__request___BudgetRequest___is_approved(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[11]; /* 'approved' */
    cpy_r_r1 = ((yearn_treasury___budget____request___BudgetRequestObject *)cpy_r_self)->_labels;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("yearn_treasury/budget/_request.py", "is_approved", "BudgetRequest", "labels", 24, CPyStatic__request___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = PySet_Contains(cpy_r_r1, cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "is_approved", 24, CPyStatic__request___globals);
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
    CPy_AddTraceback("yearn_treasury/budget/_request.py", "is_approved", 23, CPyStatic__request___globals);
    return NULL;
}

char CPyDef__request___BudgetRequest___is_rejected(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[12]; /* 'rejected' */
    cpy_r_r1 = ((yearn_treasury___budget____request___BudgetRequestObject *)cpy_r_self)->_labels;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("yearn_treasury/budget/_request.py", "is_rejected", "BudgetRequest", "labels", 27, CPyStatic__request___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = PySet_Contains(cpy_r_r1, cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "is_rejected", 27, CPyStatic__request___globals);
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
    CPy_AddTraceback("yearn_treasury/budget/_request.py", "is_rejected", 26, CPyStatic__request___globals);
    return NULL;
}

char CPyDef__request___BudgetRequest___is_stream(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[13]; /* 'stream' */
    cpy_r_r1 = ((yearn_treasury___budget____request___BudgetRequestObject *)cpy_r_self)->_labels;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("yearn_treasury/budget/_request.py", "is_stream", "BudgetRequest", "labels", 30, CPyStatic__request___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = PySet_Contains(cpy_r_r1, cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "is_stream", 30, CPyStatic__request___globals);
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
    CPy_AddTraceback("yearn_treasury/budget/_request.py", "is_stream", 29, CPyStatic__request___globals);
    return NULL;
}

char CPyDef__request___BudgetRequest___is_vesting(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[14]; /* 'vesting' */
    cpy_r_r1 = ((yearn_treasury___budget____request___BudgetRequestObject *)cpy_r_self)->_labels;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("yearn_treasury/budget/_request.py", "is_vesting", "BudgetRequest", "labels", 33, CPyStatic__request___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = PySet_Contains(cpy_r_r1, cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "is_vesting", 33, CPyStatic__request___globals);
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
    CPy_AddTraceback("yearn_treasury/budget/_request.py", "is_vesting", 32, CPyStatic__request___globals);
    return NULL;
}

char CPyDef__request___BudgetRequest___is_paid(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyStatics[15]; /* 'paid' */
    cpy_r_r1 = ((yearn_treasury___budget____request___BudgetRequestObject *)cpy_r_self)->_labels;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("yearn_treasury/budget/_request.py", "is_paid", "BudgetRequest", "labels", 36, CPyStatic__request___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = PySet_Contains(cpy_r_r1, cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "is_paid", 36, CPyStatic__request___globals);
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
    CPy_AddTraceback("yearn_treasury/budget/_request.py", "is_paid", 35, CPyStatic__request___globals);
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
    cpy_r_r5 = CPyStatics[424]; /* ('dataclass',) */
    cpy_r_r6 = CPyStatics[17]; /* 'dataclasses' */
    cpy_r_r7 = CPyStatic__request___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 1, CPyStatic__request___globals);
        goto CPyL35;
    }
    CPyModule_dataclasses = cpy_r_r8;
    CPy_INCREF(CPyModule_dataclasses);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[425]; /* ('getLogger',) */
    cpy_r_r10 = CPyStatics[19]; /* 'logging' */
    cpy_r_r11 = CPyStatic__request___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 2, CPyStatic__request___globals);
        goto CPyL35;
    }
    CPyModule_logging = cpy_r_r12;
    CPy_INCREF(CPyModule_logging);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[426]; /* ('Final', 'Optional', 'Set', 'final') */
    cpy_r_r14 = CPyStatics[24]; /* 'typing' */
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
    cpy_r_r18 = CPyStatics[25]; /* '__name__' */
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
    cpy_r_r22 = CPyStatics[18]; /* 'getLogger' */
    cpy_r_r23 = CPyDict_GetItem(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 6, CPyStatic__request___globals);
        goto CPyL36;
    }
    PyObject *cpy_r_r24[1] = {cpy_r_r20};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = PyObject_Vectorcall(cpy_r_r23, cpy_r_r25, 1, 0);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 6, CPyStatic__request___globals);
        goto CPyL36;
    }
    CPy_DECREF(cpy_r_r20);
    CPyStatic__request___logger = cpy_r_r26;
    CPy_INCREF(CPyStatic__request___logger);
    cpy_r_r27 = CPyStatic__request___globals;
    cpy_r_r28 = CPyStatics[26]; /* 'logger' */
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
    cpy_r_r36 = CPyStatics[27]; /* '__mypyc_attrs__' */
    cpy_r_r37 = CPyStatics[28]; /* 'id' */
    cpy_r_r38 = CPyStatics[29]; /* 'number' */
    cpy_r_r39 = CPyStatics[30]; /* 'title' */
    cpy_r_r40 = CPyStatics[31]; /* 'state' */
    cpy_r_r41 = CPyStatics[32]; /* 'url' */
    cpy_r_r42 = CPyStatics[33]; /* 'created_at' */
    cpy_r_r43 = CPyStatics[34]; /* 'updated_at' */
    cpy_r_r44 = CPyStatics[35]; /* 'closed_at' */
    cpy_r_r45 = CPyStatics[36]; /* 'body' */
    cpy_r_r46 = CPyStatics[37]; /* 'labels' */
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
    cpy_r_r59 = CPyStatics[28]; /* 'id' */
    cpy_r_r60 = CPyDict_SetItem(cpy_r_r56, cpy_r_r59, cpy_r_r58);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 12, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r62 = (PyObject *)&PyLong_Type;
    cpy_r_r63 = CPyStatics[29]; /* 'number' */
    cpy_r_r64 = CPyDict_SetItem(cpy_r_r56, cpy_r_r63, cpy_r_r62);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 13, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r66 = (PyObject *)&PyUnicode_Type;
    cpy_r_r67 = CPyStatics[30]; /* 'title' */
    cpy_r_r68 = CPyDict_SetItem(cpy_r_r56, cpy_r_r67, cpy_r_r66);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 14, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r70 = (PyObject *)&PyUnicode_Type;
    cpy_r_r71 = CPyStatics[31]; /* 'state' */
    cpy_r_r72 = CPyDict_SetItem(cpy_r_r56, cpy_r_r71, cpy_r_r70);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 15, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r74 = (PyObject *)&PyUnicode_Type;
    cpy_r_r75 = CPyStatics[32]; /* 'url' */
    cpy_r_r76 = CPyDict_SetItem(cpy_r_r56, cpy_r_r75, cpy_r_r74);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 16, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r78 = (PyObject *)&PyUnicode_Type;
    cpy_r_r79 = CPyStatics[33]; /* 'created_at' */
    cpy_r_r80 = CPyDict_SetItem(cpy_r_r56, cpy_r_r79, cpy_r_r78);
    cpy_r_r81 = cpy_r_r80 >= 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 17, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r82 = (PyObject *)&PyUnicode_Type;
    cpy_r_r83 = CPyStatics[34]; /* 'updated_at' */
    cpy_r_r84 = CPyDict_SetItem(cpy_r_r56, cpy_r_r83, cpy_r_r82);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 18, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r86 = (PyObject *)&PyType_Type;
    cpy_r_r87 = CPyStatics[35]; /* 'closed_at' */
    cpy_r_r88 = CPyDict_SetItem(cpy_r_r56, cpy_r_r87, cpy_r_r86);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 19, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r90 = (PyObject *)&PyType_Type;
    cpy_r_r91 = CPyStatics[36]; /* 'body' */
    cpy_r_r92 = CPyDict_SetItem(cpy_r_r56, cpy_r_r91, cpy_r_r90);
    cpy_r_r93 = cpy_r_r92 >= 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 20, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r94 = (PyObject *)&PySet_Type;
    cpy_r_r95 = CPyStatics[37]; /* 'labels' */
    cpy_r_r96 = CPyDict_SetItem(cpy_r_r56, cpy_r_r95, cpy_r_r94);
    cpy_r_r97 = cpy_r_r96 >= 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 21, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r98 = CPyStatics[38]; /* '__annotations__' */
    cpy_r_r99 = CPyDict_SetItem(cpy_r_r54, cpy_r_r98, cpy_r_r56);
    cpy_r_r100 = cpy_r_r99 >= 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 11, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r101 = CPyStatics[39]; /* 'mypyc filler docstring' */
    cpy_r_r102 = CPyStatics[40]; /* '__doc__' */
    cpy_r_r103 = CPyDict_SetItem(cpy_r_r54, cpy_r_r102, cpy_r_r101);
    cpy_r_r104 = cpy_r_r103 >= 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 11, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r105 = CPyStatics[5]; /* 'yearn_treasury.budget._request' */
    cpy_r_r106 = CPyStatics[41]; /* '__module__' */
    cpy_r_r107 = CPyDict_SetItem(cpy_r_r54, cpy_r_r106, cpy_r_r105);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 11, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r109 = CPyStatic__request___globals;
    cpy_r_r110 = CPyStatics[16]; /* 'dataclass' */
    cpy_r_r111 = CPyDict_GetItem(cpy_r_r109, cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 10, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r112 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r113[1] = {cpy_r_r112};
    cpy_r_r114 = (PyObject **)&cpy_r_r113;
    cpy_r_r115 = CPyStatics[427]; /* ('frozen',) */
    cpy_r_r116 = PyObject_Vectorcall(cpy_r_r111, cpy_r_r114, 0, cpy_r_r115);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_request.py", "<module>", 10, CPyStatic__request___globals);
        goto CPyL39;
    }
    cpy_r_r117 = CPyStatics[17]; /* 'dataclasses' */
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
    CPyTagged cpy_r_retries;
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
    int64_t cpy_r_r22;
    char cpy_r_r23;
    int64_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject **cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject **cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyPtr cpy_r_r50;
    int64_t cpy_r_r51;
    CPyTagged cpy_r_r52;
    char cpy_r_r53;
    CPyTagged cpy_r_r54;
    CPyPtr cpy_r_r55;
    int64_t cpy_r_r56;
    CPyTagged cpy_r_r57;
    char cpy_r_r58;
    int64_t cpy_r_r59;
    CPyPtr cpy_r_r60;
    CPyPtr cpy_r_r61;
    int64_t cpy_r_r62;
    CPyPtr cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyTagged cpy_r_r75;
    CPyPtr cpy_r_r76;
    int64_t cpy_r_r77;
    CPyTagged cpy_r_r78;
    char cpy_r_r79;
    int64_t cpy_r_r80;
    CPyPtr cpy_r_r81;
    CPyPtr cpy_r_r82;
    int64_t cpy_r_r83;
    CPyPtr cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    CPyTagged cpy_r_r91;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
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
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    int32_t cpy_r_r128;
    char cpy_r_r129;
    CPyTagged cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    int32_t cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    cpy_r_r0 = CPyStatics[43]; /* 'https://api.github.com/repos/yearn/budget/issues' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[31]; /* 'state' */
    cpy_r_r2 = CPyStatics[44]; /* 'all' */
    cpy_r_r3 = CPyStatics[45]; /* 'per_page' */
    cpy_r_r4 = CPyStatics[46]; /* 'page' */
    cpy_r_r5 = CPyStatics[403]; /* 100 */
    cpy_r_r6 = CPyStatics[404]; /* 1 */
    cpy_r_r7 = CPyDict_Build(3, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r5, cpy_r_r4, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 18, CPyStatic__requests___globals);
        goto CPyL66;
    }
    cpy_r_r8 = PyList_New(0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 20, CPyStatic__requests___globals);
        goto CPyL67;
    }
    cpy_r_retries = 0;
CPyL3: ;
    if (!1) goto CPyL68;
    cpy_r_r9 = CPyStatic__requests____HEADERS;
    if (unlikely(cpy_r_r9 == NULL)) {
        goto CPyL69;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_HEADERS\" was not set");
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 23, CPyStatic__requests___globals);
        goto CPyL65;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r11 = CPyStatic__requests___globals;
    cpy_r_r12 = CPyStatics[47]; /* 'get' */
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 23, CPyStatic__requests___globals);
        goto CPyL70;
    }
    PyObject *cpy_r_r14[3] = {cpy_r_r0, cpy_r_r9, cpy_r_r7};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = CPyStatics[428]; /* ('headers', 'params') */
    cpy_r_r17 = PyObject_Vectorcall(cpy_r_r13, cpy_r_r15, 1, cpy_r_r16);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 23, CPyStatic__requests___globals);
        goto CPyL70;
    }
    cpy_r_r18 = CPyStatics[50]; /* 'status_code' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 24, CPyStatic__requests___globals);
        goto CPyL71;
    }
    if (likely(PyLong_Check(cpy_r_r19)))
        cpy_r_r20 = CPyTagged_FromObject(cpy_r_r19);
    else {
        CPy_TypeError("int", cpy_r_r19); cpy_r_r20 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == CPY_INT_TAG)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 24, CPyStatic__requests___globals);
        goto CPyL71;
    }
    cpy_r_r21 = cpy_r_r20 != 400;
    CPyTagged_DECREF(cpy_r_r20);
    if (!cpy_r_r21) goto CPyL27;
    cpy_r_r22 = cpy_r_retries & 1;
    cpy_r_r23 = cpy_r_r22 != 0;
    if (cpy_r_r23) goto CPyL14;
    cpy_r_r24 = 10 & 1;
    cpy_r_r25 = cpy_r_r24 != 0;
    if (!cpy_r_r25) goto CPyL15;
CPyL14: ;
    cpy_r_r26 = CPyTagged_IsLt_(cpy_r_retries, 10);
    if (cpy_r_r26) {
        goto CPyL72;
    } else
        goto CPyL73;
CPyL15: ;
    cpy_r_r27 = (Py_ssize_t)cpy_r_retries < (Py_ssize_t)10;
    if (cpy_r_r27) {
        goto CPyL72;
    } else
        goto CPyL73;
CPyL16: ;
    cpy_r_r28 = CPyTagged_Add(cpy_r_retries, 2);
    CPyTagged_DECREF(cpy_r_retries);
    cpy_r_retries = cpy_r_r28;
    goto CPyL3;
CPyL17: ;
    cpy_r_r29 = CPyStatics[51]; /* 'Failed to fetch issues: ' */
    cpy_r_r30 = CPyStatics[50]; /* 'status_code' */
    cpy_r_r31 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 28, CPyStatic__requests___globals);
        goto CPyL74;
    }
    if (likely(PyLong_Check(cpy_r_r31)))
        cpy_r_r32 = CPyTagged_FromObject(cpy_r_r31);
    else {
        CPy_TypeError("int", cpy_r_r31); cpy_r_r32 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == CPY_INT_TAG)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 28, CPyStatic__requests___globals);
        goto CPyL74;
    }
    cpy_r_r33 = CPyTagged_Str(cpy_r_r32);
    CPyTagged_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 28, CPyStatic__requests___globals);
        goto CPyL74;
    }
    cpy_r_r34 = CPyStatics[52]; /* ' ' */
    cpy_r_r35 = CPyStatics[53]; /* 'text' */
    cpy_r_r36 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r35);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 28, CPyStatic__requests___globals);
        goto CPyL75;
    }
    if (likely(PyUnicode_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 28, CPyStatic__requests___globals, "str", cpy_r_r36);
        goto CPyL75;
    }
    cpy_r_r38 = CPyStr_Build(4, cpy_r_r29, cpy_r_r33, cpy_r_r34, cpy_r_r37);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 28, CPyStatic__requests___globals);
        goto CPyL65;
    }
    cpy_r_r39 = CPyModule_builtins;
    cpy_r_r40 = CPyStatics[54]; /* 'ConnectionError' */
    cpy_r_r41 = CPyObject_GetAttr(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 28, CPyStatic__requests___globals);
        goto CPyL76;
    }
    PyObject *cpy_r_r42[1] = {cpy_r_r38};
    cpy_r_r43 = (PyObject **)&cpy_r_r42;
    cpy_r_r44 = PyObject_Vectorcall(cpy_r_r41, cpy_r_r43, 1, 0);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 28, CPyStatic__requests___globals);
        goto CPyL76;
    }
    CPy_DECREF(cpy_r_r38);
    CPy_Raise(cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(!0)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 28, CPyStatic__requests___globals);
        goto CPyL65;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r45 = CPyStatics[55]; /* 'json' */
    PyObject *cpy_r_r46[1] = {cpy_r_r17};
    cpy_r_r47 = (PyObject **)&cpy_r_r46;
    cpy_r_r48 = PyObject_VectorcallMethod(cpy_r_r45, cpy_r_r47, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 30, CPyStatic__requests___globals);
        goto CPyL71;
    }
    CPy_DECREF(cpy_r_r17);
    if (likely(PyList_Check(cpy_r_r48)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 30, CPyStatic__requests___globals, "list", cpy_r_r48);
        goto CPyL70;
    }
    cpy_r_r50 = (CPyPtr)&((PyVarObject *)cpy_r_r49)->ob_size;
    cpy_r_r51 = *(int64_t *)cpy_r_r50;
    cpy_r_r52 = cpy_r_r51 << 1;
    cpy_r_r53 = cpy_r_r52 != 0;
    if (!cpy_r_r53) goto CPyL77;
    cpy_r_r54 = 0;
CPyL31: ;
    cpy_r_r55 = (CPyPtr)&((PyVarObject *)cpy_r_r49)->ob_size;
    cpy_r_r56 = *(int64_t *)cpy_r_r55;
    cpy_r_r57 = cpy_r_r56 << 1;
    cpy_r_r58 = (Py_ssize_t)cpy_r_r54 < (Py_ssize_t)cpy_r_r57;
    if (!cpy_r_r58) goto CPyL78;
    cpy_r_r59 = (Py_ssize_t)cpy_r_r54 >> 1;
    cpy_r_r60 = (CPyPtr)&((PyListObject *)cpy_r_r49)->ob_item;
    cpy_r_r61 = *(CPyPtr *)cpy_r_r60;
    cpy_r_r62 = cpy_r_r59 * 8;
    cpy_r_r63 = cpy_r_r61 + cpy_r_r62;
    cpy_r_r64 = *(PyObject * *)cpy_r_r63;
    CPy_INCREF(cpy_r_r64);
    if (likely(PyDict_Check(cpy_r_r64)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 34, CPyStatic__requests___globals, "dict", cpy_r_r64);
        goto CPyL79;
    }
    cpy_r_r66 = CPyStatics[56]; /* 'pull_request' */
    cpy_r_r67 = PyDict_Contains(cpy_r_r65, cpy_r_r66);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 36, CPyStatic__requests___globals);
        goto CPyL80;
    }
    cpy_r_r69 = cpy_r_r67;
    if (cpy_r_r69) goto CPyL81;
    cpy_r_r70 = CPyStatics[37]; /* 'labels' */
    cpy_r_r71 = PyList_New(0);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 41, CPyStatic__requests___globals);
        goto CPyL80;
    }
    cpy_r_r72 = CPyDict_Get(cpy_r_r65, cpy_r_r70, cpy_r_r71);
    CPy_DECREF_NO_IMM(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 41, CPyStatic__requests___globals);
        goto CPyL80;
    }
    if (likely(PyList_Check(cpy_r_r72)))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 41, CPyStatic__requests___globals, "list", cpy_r_r72);
        goto CPyL80;
    }
    cpy_r_r74 = PySet_New(NULL);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 42, CPyStatic__requests___globals);
        goto CPyL82;
    }
    cpy_r_r75 = 0;
CPyL40: ;
    cpy_r_r76 = (CPyPtr)&((PyVarObject *)cpy_r_r73)->ob_size;
    cpy_r_r77 = *(int64_t *)cpy_r_r76;
    cpy_r_r78 = cpy_r_r77 << 1;
    cpy_r_r79 = (Py_ssize_t)cpy_r_r75 < (Py_ssize_t)cpy_r_r78;
    if (!cpy_r_r79) goto CPyL83;
    cpy_r_r80 = (Py_ssize_t)cpy_r_r75 >> 1;
    cpy_r_r81 = (CPyPtr)&((PyListObject *)cpy_r_r73)->ob_item;
    cpy_r_r82 = *(CPyPtr *)cpy_r_r81;
    cpy_r_r83 = cpy_r_r80 * 8;
    cpy_r_r84 = cpy_r_r82 + cpy_r_r83;
    cpy_r_r85 = *(PyObject * *)cpy_r_r84;
    CPy_INCREF(cpy_r_r85);
    if (likely(PyDict_Check(cpy_r_r85)))
        cpy_r_r86 = cpy_r_r85;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 42, CPyStatic__requests___globals, "dict", cpy_r_r85);
        goto CPyL84;
    }
    cpy_r_r87 = CPyStatics[57]; /* 'name' */
    cpy_r_r88 = CPyDict_GetWithNone(cpy_r_r86, cpy_r_r87);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 42, CPyStatic__requests___globals);
        goto CPyL84;
    }
    cpy_r_r89 = PySet_Add(cpy_r_r74, cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 42, CPyStatic__requests___globals);
        goto CPyL84;
    }
    cpy_r_r91 = cpy_r_r75 + 2;
    cpy_r_r75 = cpy_r_r91;
    goto CPyL40;
CPyL45: ;
    cpy_r_r92 = CPyStatics[58]; /* 'budget request' */
    cpy_r_r93 = PySet_Contains(cpy_r_r74, cpy_r_r92);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 44, CPyStatic__requests___globals);
        goto CPyL85;
    }
    cpy_r_r95 = cpy_r_r93;
    cpy_r_r96 = cpy_r_r95 ^ 1;
    if (cpy_r_r96) goto CPyL86;
    cpy_r_r97 = CPyStatics[28]; /* 'id' */
    cpy_r_r98 = CPyDict_GetWithNone(cpy_r_r65, cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 48, CPyStatic__requests___globals);
        goto CPyL85;
    }
    cpy_r_r99 = CPyStatics[29]; /* 'number' */
    cpy_r_r100 = CPyDict_GetWithNone(cpy_r_r65, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 49, CPyStatic__requests___globals);
        goto CPyL87;
    }
    cpy_r_r101 = CPyStatics[30]; /* 'title' */
    cpy_r_r102 = CPyDict_GetWithNone(cpy_r_r65, cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 50, CPyStatic__requests___globals);
        goto CPyL88;
    }
    cpy_r_r103 = CPyStatics[31]; /* 'state' */
    cpy_r_r104 = CPyDict_GetWithNone(cpy_r_r65, cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 51, CPyStatic__requests___globals);
        goto CPyL89;
    }
    cpy_r_r105 = CPyStatics[59]; /* 'html_url' */
    cpy_r_r106 = CPyDict_GetWithNone(cpy_r_r65, cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 52, CPyStatic__requests___globals);
        goto CPyL90;
    }
    cpy_r_r107 = CPyStatics[33]; /* 'created_at' */
    cpy_r_r108 = CPyDict_GetWithNone(cpy_r_r65, cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 53, CPyStatic__requests___globals);
        goto CPyL91;
    }
    cpy_r_r109 = CPyStatics[34]; /* 'updated_at' */
    cpy_r_r110 = CPyDict_GetWithNone(cpy_r_r65, cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 54, CPyStatic__requests___globals);
        goto CPyL92;
    }
    cpy_r_r111 = CPyStatics[35]; /* 'closed_at' */
    cpy_r_r112 = CPyDict_GetWithNone(cpy_r_r65, cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 55, CPyStatic__requests___globals);
        goto CPyL93;
    }
    cpy_r_r113 = CPyStatics[36]; /* 'body' */
    cpy_r_r114 = CPyDict_GetWithNone(cpy_r_r65, cpy_r_r113);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 56, CPyStatic__requests___globals);
        goto CPyL94;
    }
    cpy_r_r115 = CPyStatics[28]; /* 'id' */
    cpy_r_r116 = CPyStatics[29]; /* 'number' */
    cpy_r_r117 = CPyStatics[30]; /* 'title' */
    cpy_r_r118 = CPyStatics[31]; /* 'state' */
    cpy_r_r119 = CPyStatics[32]; /* 'url' */
    cpy_r_r120 = CPyStatics[33]; /* 'created_at' */
    cpy_r_r121 = CPyStatics[34]; /* 'updated_at' */
    cpy_r_r122 = CPyStatics[35]; /* 'closed_at' */
    cpy_r_r123 = CPyStatics[36]; /* 'body' */
    cpy_r_r124 = CPyStatics[37]; /* 'labels' */
    cpy_r_r125 = PyTuple_Pack(0);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 47, CPyStatic__requests___globals);
        goto CPyL95;
    }
    cpy_r_r126 = CPyDict_Build(10, cpy_r_r115, cpy_r_r98, cpy_r_r116, cpy_r_r100, cpy_r_r117, cpy_r_r102, cpy_r_r118, cpy_r_r104, cpy_r_r119, cpy_r_r106, cpy_r_r120, cpy_r_r108, cpy_r_r121, cpy_r_r110, cpy_r_r122, cpy_r_r112, cpy_r_r123, cpy_r_r114, cpy_r_r124, cpy_r_r74);
    CPy_DECREF(cpy_r_r98);
    CPy_DECREF(cpy_r_r100);
    CPy_DECREF(cpy_r_r102);
    CPy_DECREF(cpy_r_r104);
    CPy_DECREF(cpy_r_r106);
    CPy_DECREF(cpy_r_r108);
    CPy_DECREF(cpy_r_r110);
    CPy_DECREF(cpy_r_r112);
    CPy_DECREF(cpy_r_r114);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 47, CPyStatic__requests___globals);
        goto CPyL96;
    }
    cpy_r_r127 = CPyDef__request___BudgetRequest(cpy_r_r125, cpy_r_r126);
    CPy_DECREF(cpy_r_r125);
    CPy_DECREF(cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 47, CPyStatic__requests___globals);
        goto CPyL79;
    }
    cpy_r_r128 = PyList_Append(cpy_r_r8, cpy_r_r127);
    CPy_DECREF_NO_IMM(cpy_r_r127);
    cpy_r_r129 = cpy_r_r128 >= 0;
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 59, CPyStatic__requests___globals);
        goto CPyL79;
    }
CPyL60: ;
    cpy_r_r130 = cpy_r_r54 + 2;
    cpy_r_r54 = cpy_r_r130;
    goto CPyL31;
CPyL61: ;
    cpy_r_r131 = CPyStatics[46]; /* 'page' */
    cpy_r_r132 = CPyDict_GetItem(cpy_r_r7, cpy_r_r131);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 62, CPyStatic__requests___globals);
        goto CPyL70;
    }
    cpy_r_r133 = CPyStatics[404]; /* 1 */
    cpy_r_r134 = PyNumber_InPlaceAdd(cpy_r_r132, cpy_r_r133);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 62, CPyStatic__requests___globals);
        goto CPyL70;
    }
    cpy_r_r135 = CPyDict_SetItem(cpy_r_r7, cpy_r_r131, cpy_r_r134);
    CPy_DECREF(cpy_r_r134);
    cpy_r_r136 = cpy_r_r135 >= 0;
    if (unlikely(!cpy_r_r136)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "fetch_brs", 62, CPyStatic__requests___globals);
        goto CPyL70;
    } else
        goto CPyL3;
CPyL64: ;
    return cpy_r_r8;
CPyL65: ;
    cpy_r_r137 = NULL;
    return cpy_r_r137;
CPyL66: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL65;
CPyL67: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    goto CPyL65;
CPyL68: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r7);
    CPyTagged_DECREF(cpy_r_retries);
    goto CPyL64;
CPyL69: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPyTagged_DecRef(cpy_r_retries);
    goto CPyL5;
CPyL70: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPyTagged_DecRef(cpy_r_retries);
    goto CPyL65;
CPyL71: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPyTagged_DecRef(cpy_r_retries);
    CPy_DecRef(cpy_r_r17);
    goto CPyL65;
CPyL72: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL16;
CPyL73: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    CPyTagged_DECREF(cpy_r_retries);
    goto CPyL17;
CPyL74: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL65;
CPyL75: ;
    CPy_DecRef(cpy_r_r33);
    goto CPyL65;
CPyL76: ;
    CPy_DecRef(cpy_r_r38);
    goto CPyL65;
CPyL77: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r7);
    CPyTagged_DECREF(cpy_r_retries);
    CPy_DECREF_NO_IMM(cpy_r_r49);
    goto CPyL64;
CPyL78: ;
    CPy_DECREF_NO_IMM(cpy_r_r49);
    goto CPyL61;
CPyL79: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPyTagged_DecRef(cpy_r_retries);
    CPy_DecRef(cpy_r_r49);
    goto CPyL65;
CPyL80: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPyTagged_DecRef(cpy_r_retries);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r65);
    goto CPyL65;
CPyL81: ;
    CPy_DECREF(cpy_r_r65);
    goto CPyL60;
CPyL82: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPyTagged_DecRef(cpy_r_retries);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r73);
    goto CPyL65;
CPyL83: ;
    CPy_DECREF_NO_IMM(cpy_r_r73);
    goto CPyL45;
CPyL84: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPyTagged_DecRef(cpy_r_retries);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r74);
    goto CPyL65;
CPyL85: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPyTagged_DecRef(cpy_r_retries);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r74);
    goto CPyL65;
CPyL86: ;
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r74);
    goto CPyL60;
CPyL87: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPyTagged_DecRef(cpy_r_retries);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r98);
    goto CPyL65;
CPyL88: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPyTagged_DecRef(cpy_r_retries);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r100);
    goto CPyL65;
CPyL89: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPyTagged_DecRef(cpy_r_retries);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r102);
    goto CPyL65;
CPyL90: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPyTagged_DecRef(cpy_r_retries);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r104);
    goto CPyL65;
CPyL91: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPyTagged_DecRef(cpy_r_retries);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r106);
    goto CPyL65;
CPyL92: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPyTagged_DecRef(cpy_r_retries);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r106);
    CPy_DecRef(cpy_r_r108);
    goto CPyL65;
CPyL93: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPyTagged_DecRef(cpy_r_retries);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r106);
    CPy_DecRef(cpy_r_r108);
    CPy_DecRef(cpy_r_r110);
    goto CPyL65;
CPyL94: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPyTagged_DecRef(cpy_r_retries);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r106);
    CPy_DecRef(cpy_r_r108);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r112);
    goto CPyL65;
CPyL95: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPyTagged_DecRef(cpy_r_retries);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r106);
    CPy_DecRef(cpy_r_r108);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r112);
    CPy_DecRef(cpy_r_r114);
    goto CPyL65;
CPyL96: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPyTagged_DecRef(cpy_r_retries);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r125);
    goto CPyL65;
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
    cpy_r_r10 = CPyStatics[430]; /* (('os', 'os', 'os'),) */
    cpy_r_r11 = CPyStatic__requests___globals;
    cpy_r_r12 = CPyStatics[61]; /* 'yearn_treasury/budget/_requests.py' */
    cpy_r_r13 = CPyStatics[62]; /* '<module>' */
    cpy_r_r14 = CPyImport_ImportMany(cpy_r_r10, cpy_r_r7, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r9);
    if (!cpy_r_r14) goto CPyL51;
    cpy_r_r15 = CPyStatics[431]; /* ('get',) */
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
    cpy_r_r19 = CPyStatics[432]; /* ('Final', 'List') */
    cpy_r_r20 = CPyStatics[24]; /* 'typing' */
    cpy_r_r21 = CPyStatic__requests___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 3, CPyStatic__requests___globals);
        goto CPyL51;
    }
    CPyModule_typing = cpy_r_r22;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[422]; /* ('BudgetRequest',) */
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
    cpy_r_r28 = CPyStatics[64]; /* 'environ' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 10, CPyStatic__requests___globals);
        goto CPyL51;
    }
    cpy_r_r30 = CPyStatics[65]; /* 'GITHUB_TOKEN' */
    cpy_r_r31 = CPyStatics[47]; /* 'get' */
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
    cpy_r_r37 = CPyStatics[66]; /* '_TOKEN' */
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
    cpy_r_r46 = CPyStatics[67]; /* 'Authorization' */
    cpy_r_r47 = CPyStatics[68]; /* 'token ' */
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
    cpy_r_r55 = CPyStatics[69]; /* '_HEADERS' */
    cpy_r_r56 = CPyDict_SetItem(cpy_r_r54, cpy_r_r55, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 11, CPyStatic__requests___globals);
        goto CPyL51;
    }
    cpy_r_r58 = CPyDef__requests___fetch_brs();
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 67, CPyStatic__requests___globals);
        goto CPyL51;
    }
    cpy_r_r59 = CPyStatic__requests___globals;
    cpy_r_r60 = CPyStatics[8]; /* 'requests' */
    cpy_r_r61 = CPyDict_SetItem(cpy_r_r59, cpy_r_r60, cpy_r_r58);
    CPy_DECREF_NO_IMM(cpy_r_r58);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 67, CPyStatic__requests___globals);
        goto CPyL51;
    }
    cpy_r_r63 = PyList_New(0);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 68, CPyStatic__requests___globals);
        goto CPyL51;
    }
    cpy_r_r64 = CPyStatic__requests___globals;
    cpy_r_r65 = CPyStatics[8]; /* 'requests' */
    cpy_r_r66 = CPyDict_GetItem(cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 68, CPyStatic__requests___globals);
        goto CPyL53;
    }
    if (likely(PyList_Check(cpy_r_r66)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/budget/_requests.py", "<module>", 68, CPyStatic__requests___globals, "list", cpy_r_r66);
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
        CPy_TypeErrorTraceback("yearn_treasury/budget/_requests.py", "<module>", 68, CPyStatic__requests___globals, "yearn_treasury.budget._request.BudgetRequest", cpy_r_r78);
        goto CPyL55;
    }
    cpy_r_r80 = CPyDef__request___BudgetRequest___is_approved(cpy_r_r79);
    if (unlikely(cpy_r_r80 == 2)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 68, CPyStatic__requests___globals);
        goto CPyL56;
    }
    if (!cpy_r_r80) goto CPyL57;
    cpy_r_r81 = PyList_Append(cpy_r_r63, cpy_r_r79);
    CPy_DECREF_NO_IMM(cpy_r_r79);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 68, CPyStatic__requests___globals);
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
    CPy_DECREF_NO_IMM(cpy_r_r63);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 68, CPyStatic__requests___globals);
        goto CPyL51;
    }
    cpy_r_r88 = PyList_New(0);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 69, CPyStatic__requests___globals);
        goto CPyL51;
    }
    cpy_r_r89 = CPyStatic__requests___globals;
    cpy_r_r90 = CPyStatics[8]; /* 'requests' */
    cpy_r_r91 = CPyDict_GetItem(cpy_r_r89, cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 69, CPyStatic__requests___globals);
        goto CPyL58;
    }
    if (likely(PyList_Check(cpy_r_r91)))
        cpy_r_r92 = cpy_r_r91;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/budget/_requests.py", "<module>", 69, CPyStatic__requests___globals, "list", cpy_r_r91);
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
        CPy_TypeErrorTraceback("yearn_treasury/budget/_requests.py", "<module>", 69, CPyStatic__requests___globals, "yearn_treasury.budget._request.BudgetRequest", cpy_r_r103);
        goto CPyL60;
    }
    cpy_r_r105 = CPyDef__request___BudgetRequest___is_rejected(cpy_r_r104);
    if (unlikely(cpy_r_r105 == 2)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 69, CPyStatic__requests___globals);
        goto CPyL61;
    }
    if (!cpy_r_r105) goto CPyL62;
    cpy_r_r106 = PyList_Append(cpy_r_r88, cpy_r_r104);
    CPy_DECREF_NO_IMM(cpy_r_r104);
    cpy_r_r107 = cpy_r_r106 >= 0;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 69, CPyStatic__requests___globals);
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
    CPy_DECREF_NO_IMM(cpy_r_r88);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("yearn_treasury/budget/_requests.py", "<module>", 69, CPyStatic__requests___globals);
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
    CPy_DECREF_NO_IMM(cpy_r_r67);
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
    CPy_DECREF_NO_IMM(cpy_r_r79);
    goto CPyL37;
CPyL58: ;
    CPy_DecRef(cpy_r_r88);
    goto CPyL51;
CPyL59: ;
    CPy_DECREF_NO_IMM(cpy_r_r92);
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
    CPy_DECREF_NO_IMM(cpy_r_r104);
    goto CPyL48;
}
static PyMethodDef constantsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef constantsmodule = {
    PyModuleDef_HEAD_INIT,
    "yearn_treasury.rules.constants",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    constantsmodule_methods
};

PyObject *CPyInit_yearn_treasury___rules___constants(void)
{
    PyObject* modname = NULL;
    if (CPyModule_yearn_treasury___rules___constants_internal) {
        Py_INCREF(CPyModule_yearn_treasury___rules___constants_internal);
        return CPyModule_yearn_treasury___rules___constants_internal;
    }
    CPyModule_yearn_treasury___rules___constants_internal = PyModule_Create(&constantsmodule);
    if (unlikely(CPyModule_yearn_treasury___rules___constants_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_yearn_treasury___rules___constants_internal, "__name__");
    CPyStatic_constants___globals = PyModule_GetDict(CPyModule_yearn_treasury___rules___constants_internal);
    if (unlikely(CPyStatic_constants___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_constants_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_yearn_treasury___rules___constants_internal;
    fail:
    Py_CLEAR(CPyModule_yearn_treasury___rules___constants_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_constants___YFI);
    CPyStatic_constants___YFI = NULL;
    return NULL;
}

char CPyDef_constants_____top_level__(void) {
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
    int32_t cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
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
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/constants.py", "<module>", -1, CPyStatic_constants___globals);
        goto CPyL23;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[433]; /* ('Final',) */
    cpy_r_r6 = CPyStatics[24]; /* 'typing' */
    cpy_r_r7 = CPyStatic_constants___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/constants.py", "<module>", 2, CPyStatic_constants___globals);
        goto CPyL23;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[434]; /* ('Network',) */
    cpy_r_r10 = CPyStatics[71]; /* 'y' */
    cpy_r_r11 = CPyStatic_constants___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/constants.py", "<module>", 4, CPyStatic_constants___globals);
        goto CPyL23;
    }
    CPyModule_y = cpy_r_r12;
    CPy_INCREF(CPyModule_y);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[435]; /* ('CHAINID',) */
    cpy_r_r14 = CPyStatics[73]; /* 'y.constants' */
    cpy_r_r15 = CPyStatic_constants___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/constants.py", "<module>", 5, CPyStatic_constants___globals);
        goto CPyL23;
    }
    CPyModule_y___constants = cpy_r_r16;
    CPy_INCREF(CPyModule_y___constants);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[74]; /* '0xEeeeeEeeeEeEeeEeEeEeeEEEeeeeEeeeeeeeEEeE' */
    cpy_r_r18 = CPyStatic_constants___globals;
    cpy_r_r19 = CPyStatics[75]; /* 'EEE_ADDRESS' */
    cpy_r_r20 = CPyDict_SetItem(cpy_r_r18, cpy_r_r19, cpy_r_r17);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("yearn_treasury/rules/constants.py", "<module>", 8, CPyStatic_constants___globals);
        goto CPyL23;
    }
    cpy_r_r22 = CPyStatics[76]; /* '0x0000000000000000000000000000000000000000' */
    cpy_r_r23 = CPyStatic_constants___globals;
    cpy_r_r24 = CPyStatics[77]; /* 'ZERO_ADDRESS' */
    cpy_r_r25 = CPyDict_SetItem(cpy_r_r23, cpy_r_r24, cpy_r_r22);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("yearn_treasury/rules/constants.py", "<module>", 9, CPyStatic_constants___globals);
        goto CPyL23;
    }
    cpy_r_r27 = CPyStatic_constants___globals;
    cpy_r_r28 = CPyStatics[70]; /* 'Network' */
    cpy_r_r29 = CPyDict_GetItem(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/constants.py", "<module>", 13, CPyStatic_constants___globals);
        goto CPyL23;
    }
    cpy_r_r30 = CPyStatics[78]; /* 'Mainnet' */
    cpy_r_r31 = CPyObject_GetAttr(cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/constants.py", "<module>", 13, CPyStatic_constants___globals);
        goto CPyL23;
    }
    cpy_r_r32 = CPyStatics[79]; /* '0x0bc529c00C6401aEF6D220BE8C6Ea1667F6Ad93e' */
    cpy_r_r33 = CPyStatic_constants___globals;
    cpy_r_r34 = CPyStatics[70]; /* 'Network' */
    cpy_r_r35 = CPyDict_GetItem(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/constants.py", "<module>", 14, CPyStatic_constants___globals);
        goto CPyL24;
    }
    cpy_r_r36 = CPyStatics[80]; /* 'Fantom' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/constants.py", "<module>", 14, CPyStatic_constants___globals);
        goto CPyL24;
    }
    cpy_r_r38 = CPyStatics[81]; /* '0x29b0Da86e484E1C0029B56e817912d778aC0EC69' */
    cpy_r_r39 = CPyStatic_constants___globals;
    cpy_r_r40 = CPyStatics[70]; /* 'Network' */
    cpy_r_r41 = CPyDict_GetItem(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/constants.py", "<module>", 15, CPyStatic_constants___globals);
        goto CPyL25;
    }
    cpy_r_r42 = CPyStatics[82]; /* 'Arbitrum' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/constants.py", "<module>", 15, CPyStatic_constants___globals);
        goto CPyL25;
    }
    cpy_r_r44 = CPyStatics[83]; /* '0x82e3A8F066a6989666b031d916c43672085b1582' */
    cpy_r_r45 = CPyStatic_constants___globals;
    cpy_r_r46 = CPyStatics[70]; /* 'Network' */
    cpy_r_r47 = CPyDict_GetItem(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/constants.py", "<module>", 16, CPyStatic_constants___globals);
        goto CPyL26;
    }
    cpy_r_r48 = CPyStatics[84]; /* 'Polygon' */
    cpy_r_r49 = CPyObject_GetAttr(cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/constants.py", "<module>", 16, CPyStatic_constants___globals);
        goto CPyL26;
    }
    cpy_r_r50 = CPyStatics[85]; /* '0xDA537104D6A5edd53c6fBba9A898708E465260b6' */
    cpy_r_r51 = CPyDict_Build(4, cpy_r_r31, cpy_r_r32, cpy_r_r37, cpy_r_r38, cpy_r_r43, cpy_r_r44, cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/constants.py", "<module>", 12, CPyStatic_constants___globals);
        goto CPyL23;
    }
    cpy_r_r52 = CPyStatic_constants___globals;
    cpy_r_r53 = CPyStatics[72]; /* 'CHAINID' */
    cpy_r_r54 = CPyDict_GetItem(cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/constants.py", "<module>", 17, CPyStatic_constants___globals);
        goto CPyL27;
    }
    if (likely(PyLong_Check(cpy_r_r54)))
        cpy_r_r55 = CPyTagged_FromObject(cpy_r_r54);
    else {
        CPy_TypeError("int", cpy_r_r54); cpy_r_r55 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == CPY_INT_TAG)) {
        CPy_AddTraceback("yearn_treasury/rules/constants.py", "<module>", 17, CPyStatic_constants___globals);
        goto CPyL27;
    }
    cpy_r_r56 = CPyTagged_StealAsObject(cpy_r_r55);
    cpy_r_r57 = CPyDict_GetItem(cpy_r_r51, cpy_r_r56);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/constants.py", "<module>", 12, CPyStatic_constants___globals);
        goto CPyL23;
    }
    if (likely(PyUnicode_Check(cpy_r_r57)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/constants.py", "<module>", 12, CPyStatic_constants___globals, "str", cpy_r_r57);
        goto CPyL23;
    }
    CPyStatic_constants___YFI = cpy_r_r58;
    CPy_INCREF(CPyStatic_constants___YFI);
    cpy_r_r59 = CPyStatic_constants___globals;
    cpy_r_r60 = CPyStatics[86]; /* 'YFI' */
    cpy_r_r61 = CPyDict_SetItem(cpy_r_r59, cpy_r_r60, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("yearn_treasury/rules/constants.py", "<module>", 12, CPyStatic_constants___globals);
        goto CPyL23;
    }
    return 1;
CPyL23: ;
    cpy_r_r63 = 2;
    return cpy_r_r63;
CPyL24: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL23;
CPyL25: ;
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r37);
    goto CPyL23;
CPyL26: ;
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r43);
    goto CPyL23;
CPyL27: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL23;
}
static PyMethodDef gasmodule_methods[] = {
    {"is_strategist_gas", (PyCFunction)CPyPy_gas___is_strategist_gas, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef gasmodule = {
    PyModuleDef_HEAD_INIT,
    "yearn_treasury.rules.cost_of_revenue.gas",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    gasmodule_methods
};

PyObject *CPyInit_yearn_treasury___rules___cost_of_revenue___gas(void)
{
    PyObject* modname = NULL;
    if (CPyModule_yearn_treasury___rules___cost_of_revenue___gas_internal) {
        Py_INCREF(CPyModule_yearn_treasury___rules___cost_of_revenue___gas_internal);
        return CPyModule_yearn_treasury___rules___cost_of_revenue___gas_internal;
    }
    CPyModule_yearn_treasury___rules___cost_of_revenue___gas_internal = PyModule_Create(&gasmodule);
    if (unlikely(CPyModule_yearn_treasury___rules___cost_of_revenue___gas_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_yearn_treasury___rules___cost_of_revenue___gas_internal, "__name__");
    CPyStatic_gas___globals = PyModule_GetDict(CPyModule_yearn_treasury___rules___cost_of_revenue___gas_internal);
    if (unlikely(CPyStatic_gas___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_gas_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_yearn_treasury___rules___cost_of_revenue___gas_internal;
    fail:
    Py_CLEAR(CPyModule_yearn_treasury___rules___cost_of_revenue___gas_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_gas___gas);
    CPyStatic_gas___gas = NULL;
    CPy_XDECREF(CPyStatic_gas___commit);
    CPyStatic_gas___commit = NULL;
    CPy_XDECREF(CPyStatic_gas____STRATEGIST_GAS_HASHES);
    CPyStatic_gas____STRATEGIST_GAS_HASHES = NULL;
    CPy_XDECREF(CPyStatic_gas____RETURNED_GAS_HASHES);
    CPyStatic_gas____RETURNED_GAS_HASHES = NULL;
    return NULL;
}

char CPyDef_gas___is_strategist_gas(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    cpy_r_r0 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "is_strategist_gas", 47, CPyStatic_gas___globals);
        goto CPyL38;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "is_strategist_gas", 47, CPyStatic_gas___globals, "str", cpy_r_r1);
        goto CPyL38;
    }
    cpy_r_r3 = CPyStatics[88]; /* 'ETH' */
    cpy_r_r4 = PyUnicode_Compare(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 == -1;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r6 = PyErr_Occurred();
    cpy_r_r7 = cpy_r_r6 != NULL;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "is_strategist_gas", 47, CPyStatic_gas___globals);
        goto CPyL38;
    }
CPyL5: ;
    cpy_r_r9 = cpy_r_r4 == 0;
    if (!cpy_r_r9) goto CPyL37;
    cpy_r_r10 = CPyStatics[89]; /* 'from_nickname' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "is_strategist_gas", 48, CPyStatic_gas___globals);
        goto CPyL38;
    }
    if (likely(PyUnicode_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "is_strategist_gas", 48, CPyStatic_gas___globals, "str", cpy_r_r11);
        goto CPyL38;
    }
    cpy_r_r13 = CPyStatics[90]; /* 'Disperse.app' */
    cpy_r_r14 = PyUnicode_Compare(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r15 = cpy_r_r14 == -1;
    if (!cpy_r_r15) goto CPyL11;
    cpy_r_r16 = PyErr_Occurred();
    cpy_r_r17 = cpy_r_r16 != NULL;
    if (!cpy_r_r17) goto CPyL11;
    cpy_r_r18 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "is_strategist_gas", 48, CPyStatic_gas___globals);
        goto CPyL38;
    }
CPyL11: ;
    cpy_r_r19 = cpy_r_r14 == 0;
    if (!cpy_r_r19) goto CPyL19;
    cpy_r_r20 = CPyStatics[91]; /* 'hash' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "is_strategist_gas", 49, CPyStatic_gas___globals);
        goto CPyL38;
    }
    if (likely(PyUnicode_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "is_strategist_gas", 49, CPyStatic_gas___globals, "str", cpy_r_r21);
        goto CPyL38;
    }
    cpy_r_r23 = CPyStatic_gas____STRATEGIST_GAS_HASHES;
    if (unlikely(cpy_r_r23 == NULL)) {
        goto CPyL39;
    } else
        goto CPyL17;
CPyL15: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_STRATEGIST_GAS_HASHES\" was not set");
    cpy_r_r24 = 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "is_strategist_gas", 49, CPyStatic_gas___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r25 = PySet_Contains(cpy_r_r23, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "is_strategist_gas", 49, CPyStatic_gas___globals);
        goto CPyL38;
    }
    cpy_r_r27 = cpy_r_r25;
    return cpy_r_r27;
CPyL19: ;
    cpy_r_r28 = CPyStatics[91]; /* 'hash' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "is_strategist_gas", 52, CPyStatic_gas___globals);
        goto CPyL38;
    }
    if (likely(PyUnicode_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "is_strategist_gas", 52, CPyStatic_gas___globals, "str", cpy_r_r29);
        goto CPyL38;
    }
    cpy_r_r31 = CPyStatic_gas____RETURNED_GAS_HASHES;
    if (unlikely(cpy_r_r31 == NULL)) {
        goto CPyL40;
    } else
        goto CPyL24;
CPyL22: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_RETURNED_GAS_HASHES\" was not set");
    cpy_r_r32 = 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "is_strategist_gas", 52, CPyStatic_gas___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r33 = PySet_Contains(cpy_r_r31, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "is_strategist_gas", 52, CPyStatic_gas___globals);
        goto CPyL38;
    }
    cpy_r_r35 = cpy_r_r33;
    if (!cpy_r_r35) goto CPyL37;
    cpy_r_r36 = CPyStatics[92]; /* 'amount' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "is_strategist_gas", 53, CPyStatic_gas___globals);
        goto CPyL38;
    }
    cpy_r_r38 = CPyStatics[405]; /* -1 */
    cpy_r_r39 = PyNumber_InPlaceMultiply(cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "is_strategist_gas", 53, CPyStatic_gas___globals);
        goto CPyL38;
    }
    cpy_r_r40 = CPyStatics[92]; /* 'amount' */
    cpy_r_r41 = PyObject_SetAttr(cpy_r_tx, cpy_r_r40, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "is_strategist_gas", 53, CPyStatic_gas___globals);
        goto CPyL38;
    }
    cpy_r_r43 = CPyStatics[93]; /* 'value_usd' */
    cpy_r_r44 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "is_strategist_gas", 54, CPyStatic_gas___globals);
        goto CPyL38;
    }
    cpy_r_r45 = CPyStatics[405]; /* -1 */
    cpy_r_r46 = PyNumber_InPlaceMultiply(cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "is_strategist_gas", 54, CPyStatic_gas___globals);
        goto CPyL38;
    }
    cpy_r_r47 = CPyStatics[93]; /* 'value_usd' */
    cpy_r_r48 = PyObject_SetAttr(cpy_r_tx, cpy_r_r47, cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "is_strategist_gas", 54, CPyStatic_gas___globals);
        goto CPyL38;
    }
    cpy_r_r50 = CPyStatic_gas___commit;
    if (likely(cpy_r_r50 != NULL)) goto CPyL35;
    PyErr_SetString(PyExc_NameError, "value for final name \"commit\" was not set");
    cpy_r_r51 = 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "is_strategist_gas", 55, CPyStatic_gas___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r52 = PyObject_Vectorcall(cpy_r_r50, 0, 0, 0);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "is_strategist_gas", 55, CPyStatic_gas___globals);
        goto CPyL38;
    } else
        goto CPyL41;
CPyL36: ;
    return 1;
CPyL37: ;
    return 0;
CPyL38: ;
    cpy_r_r53 = 2;
    return cpy_r_r53;
CPyL39: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL15;
CPyL40: ;
    CPy_DecRef(cpy_r_r30);
    goto CPyL22;
CPyL41: ;
    CPy_DECREF(cpy_r_r52);
    goto CPyL36;
}

PyObject *CPyPy_gas___is_strategist_gas(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_strategist_gas", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_gas___is_strategist_gas(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "is_strategist_gas", 46, CPyStatic_gas___globals);
    return NULL;
}

char CPyDef_gas_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r9;
    void *cpy_r_r11;
    void *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
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
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject **cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject **cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject **cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject **cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    CPyTagged cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    int32_t cpy_r_r90;
    char cpy_r_r91;
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
    int32_t cpy_r_r107;
    char cpy_r_r108;
    int32_t cpy_r_r109;
    char cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    int32_t cpy_r_r115;
    char cpy_r_r116;
    int32_t cpy_r_r117;
    char cpy_r_r118;
    int32_t cpy_r_r119;
    char cpy_r_r120;
    int32_t cpy_r_r121;
    char cpy_r_r122;
    int32_t cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    CPyTagged cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    int32_t cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    char cpy_r_r143;
    PyObject **cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject **cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    int32_t cpy_r_r152;
    char cpy_r_r153;
    char cpy_r_r154;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", -1, CPyStatic_gas___globals);
        goto CPyL58;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[436]; /* ('Final', 'Set') */
    cpy_r_r6 = CPyStatics[24]; /* 'typing' */
    cpy_r_r7 = CPyStatic_gas___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 2, CPyStatic_gas___globals);
        goto CPyL58;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_pony___orm;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {4};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[438]; /* (('pony.orm', 'pony', 'pony'),) */
    cpy_r_r15 = CPyStatic_gas___globals;
    cpy_r_r16 = CPyStatics[96]; /* 'yearn_treasury/rules/cost_of_revenue/gas.py' */
    cpy_r_r17 = CPyStatics[62]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL58;
    cpy_r_r19 = CPyStatics[439]; /* ('TreasuryTx', 'cost_of_revenue') */
    cpy_r_r20 = CPyStatics[99]; /* 'dao_treasury' */
    cpy_r_r21 = CPyStatic_gas___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 5, CPyStatic_gas___globals);
        goto CPyL58;
    }
    CPyModule_dao_treasury = cpy_r_r22;
    CPy_INCREF(CPyModule_dao_treasury);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[440]; /* ('HexStr',) */
    cpy_r_r24 = CPyStatics[101]; /* 'eth_typing' */
    cpy_r_r25 = CPyStatic_gas___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 6, CPyStatic_gas___globals);
        goto CPyL58;
    }
    CPyModule_eth_typing = cpy_r_r26;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[434]; /* ('Network',) */
    cpy_r_r28 = CPyStatics[71]; /* 'y' */
    cpy_r_r29 = CPyStatic_gas___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 7, CPyStatic_gas___globals);
        goto CPyL58;
    }
    CPyModule_y = cpy_r_r30;
    CPy_INCREF(CPyModule_y);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[435]; /* ('CHAINID',) */
    cpy_r_r32 = CPyStatics[73]; /* 'y.constants' */
    cpy_r_r33 = CPyStatic_gas___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 8, CPyStatic_gas___globals);
        goto CPyL58;
    }
    CPyModule_y___constants = cpy_r_r34;
    CPy_INCREF(CPyModule_y___constants);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[102]; /* 'Gas' */
    cpy_r_r36 = CPyStatic_gas___globals;
    cpy_r_r37 = CPyStatics[98]; /* 'cost_of_revenue' */
    cpy_r_r38 = CPyDict_GetItem(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 11, CPyStatic_gas___globals);
        goto CPyL58;
    }
    PyObject *cpy_r_r39[1] = {cpy_r_r35};
    cpy_r_r40 = (PyObject **)&cpy_r_r39;
    cpy_r_r41 = PyObject_Vectorcall(cpy_r_r38, cpy_r_r40, 1, 0);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 11, CPyStatic_gas___globals);
        goto CPyL58;
    }
    CPyStatic_gas___gas = cpy_r_r41;
    CPy_INCREF(CPyStatic_gas___gas);
    cpy_r_r42 = CPyStatic_gas___globals;
    cpy_r_r43 = CPyStatics[103]; /* 'gas' */
    cpy_r_r44 = CPyDict_SetItem(cpy_r_r42, cpy_r_r43, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 11, CPyStatic_gas___globals);
        goto CPyL58;
    }
    cpy_r_r46 = CPyModule_pony___orm;
    cpy_r_r47 = CPyStatics[104]; /* 'commit' */
    cpy_r_r48 = CPyObject_GetAttr(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 13, CPyStatic_gas___globals);
        goto CPyL58;
    }
    CPyStatic_gas___commit = cpy_r_r48;
    CPy_INCREF(CPyStatic_gas___commit);
    cpy_r_r49 = CPyStatic_gas___globals;
    cpy_r_r50 = CPyStatics[104]; /* 'commit' */
    cpy_r_r51 = CPyDict_SetItem(cpy_r_r49, cpy_r_r50, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 13, CPyStatic_gas___globals);
        goto CPyL58;
    }
    cpy_r_r53 = CPyStatics[105]; /* 'Multisig Reimbursement' */
    cpy_r_r54 = CPyStatic_gas___gas;
    if (likely(cpy_r_r54 != NULL)) goto CPyL17;
    PyErr_SetString(PyExc_NameError, "value for final name \"gas\" was not set");
    cpy_r_r55 = 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 16, CPyStatic_gas___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL17: ;
    PyObject *cpy_r_r56[1] = {cpy_r_r53};
    cpy_r_r57 = (PyObject **)&cpy_r_r56;
    cpy_r_r58 = PyObject_Vectorcall(cpy_r_r54, cpy_r_r57, 1, 0);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 16, CPyStatic_gas___globals);
        goto CPyL58;
    }
    cpy_r_r59 = CPyStatics[106]; /* '0x19bcb28cd113896fb06f17b2e5efa86bb8bf78c26e75c633d8f1a0e48b238a86' */
    cpy_r_r60 = CPyStatics[107]; /* 'Yearn yChad Multisig' */
    cpy_r_r61 = CPyStatics[108]; /* 'match' */
    PyObject *cpy_r_r62[3] = {cpy_r_r58, cpy_r_r59, cpy_r_r60};
    cpy_r_r63 = (PyObject **)&cpy_r_r62;
    cpy_r_r64 = CPyStatics[441]; /* ('hash', 'from_nickname') */
    cpy_r_r65 = PyObject_VectorcallMethod(cpy_r_r61, cpy_r_r63, 9223372036854775809ULL, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 16, CPyStatic_gas___globals);
        goto CPyL59;
    } else
        goto CPyL60;
CPyL19: ;
    CPy_DECREF(cpy_r_r58);
    cpy_r_r66 = CPyStatics[109]; /* 'Other Gas' */
    cpy_r_r67 = CPyStatic_gas___gas;
    if (likely(cpy_r_r67 != NULL)) goto CPyL22;
    PyErr_SetString(PyExc_NameError, "value for final name \"gas\" was not set");
    cpy_r_r68 = 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 22, CPyStatic_gas___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL22: ;
    PyObject *cpy_r_r69[1] = {cpy_r_r66};
    cpy_r_r70 = (PyObject **)&cpy_r_r69;
    cpy_r_r71 = PyObject_Vectorcall(cpy_r_r67, cpy_r_r70, 1, 0);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 22, CPyStatic_gas___globals);
        goto CPyL58;
    }
    cpy_r_r72 = CPyStatics[110]; /* '0x57bc99f6007989606bdd9d1adf91c99d198de51f61d29689ee13ccf440b244df' */
    cpy_r_r73 = CPyStatics[111]; /* '0xB1d693B77232D88a3C9467eD5619FfE79E80BCCc' */
    cpy_r_r74 = CPyStatics[108]; /* 'match' */
    PyObject *cpy_r_r75[3] = {cpy_r_r71, cpy_r_r72, cpy_r_r73};
    cpy_r_r76 = (PyObject **)&cpy_r_r75;
    cpy_r_r77 = CPyStatics[442]; /* ('hash', 'to_address') */
    cpy_r_r78 = PyObject_VectorcallMethod(cpy_r_r74, cpy_r_r76, 9223372036854775809ULL, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 22, CPyStatic_gas___globals);
        goto CPyL61;
    } else
        goto CPyL62;
CPyL24: ;
    CPy_DECREF(cpy_r_r71);
    cpy_r_r79 = PyDict_New();
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 28, CPyStatic_gas___globals);
        goto CPyL58;
    }
    cpy_r_r80 = CPyStatic_gas___globals;
    cpy_r_r81 = CPyStatics[72]; /* 'CHAINID' */
    cpy_r_r82 = CPyDict_GetItem(cpy_r_r80, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 28, CPyStatic_gas___globals);
        goto CPyL63;
    }
    if (likely(PyLong_Check(cpy_r_r82)))
        cpy_r_r83 = CPyTagged_FromObject(cpy_r_r82);
    else {
        CPy_TypeError("int", cpy_r_r82); cpy_r_r83 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == CPY_INT_TAG)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 28, CPyStatic_gas___globals);
        goto CPyL63;
    }
    cpy_r_r84 = PySet_New(NULL);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 28, CPyStatic_gas___globals);
        goto CPyL64;
    }
    cpy_r_r85 = CPyTagged_StealAsObject(cpy_r_r83);
    cpy_r_r86 = CPyDict_Get(cpy_r_r79, cpy_r_r85, cpy_r_r84);
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_r85);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 28, CPyStatic_gas___globals);
        goto CPyL58;
    }
    CPy_INCREF(cpy_r_r86);
    if (likely(PySet_Check(cpy_r_r86)))
        cpy_r_r87 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 28, CPyStatic_gas___globals, "set", cpy_r_r86);
        goto CPyL65;
    }
    CPyStatic_gas____STRATEGIST_GAS_HASHES = cpy_r_r87;
    CPy_INCREF(CPyStatic_gas____STRATEGIST_GAS_HASHES);
    CPy_DECREF(cpy_r_r87);
    cpy_r_r88 = CPyStatic_gas___globals;
    cpy_r_r89 = CPyStatics[113]; /* '_STRATEGIST_GAS_HASHES' */
    cpy_r_r90 = CPyDict_SetItem(cpy_r_r88, cpy_r_r89, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r91 = cpy_r_r90 >= 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 28, CPyStatic_gas___globals);
        goto CPyL58;
    }
    cpy_r_r92 = CPyStatic_gas___globals;
    cpy_r_r93 = CPyStatics[70]; /* 'Network' */
    cpy_r_r94 = CPyDict_GetItem(cpy_r_r92, cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 31, CPyStatic_gas___globals);
        goto CPyL58;
    }
    cpy_r_r95 = CPyStatics[78]; /* 'Mainnet' */
    cpy_r_r96 = CPyObject_GetAttr(cpy_r_r94, cpy_r_r95);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 31, CPyStatic_gas___globals);
        goto CPyL58;
    }
    cpy_r_r97 = CPyStatics[114]; /* '0x86fee63ec8efb0e7320a6d48ac3890b1089b77a3d9ed74cade389f512471c299' */
    cpy_r_r98 = CPyStatics[115]; /* '0xa77c4f7596968fef96565a0025cc6f9881622f62cc4c823232f9c9000ba5f981' */
    cpy_r_r99 = CPyStatics[116]; /* '0xac2253f1d8f78680411b353d65135d58bc880cdf9507ea7848daf05925e1443f' */
    cpy_r_r100 = CPyStatics[117]; /* '0xd27d4a732dd1a9ac93c7db1695a6d2aff40e007627d710da91f328b246be44bc' */
    cpy_r_r101 = CPyStatics[118]; /* '0x5a828e5bde96cd8745223fe32daefaa9140a09acc69202c33f6f789228c8134b' */
    cpy_r_r102 = CPyStatics[119]; /* '0x110ef82ec16eb53bf71b073aca4a37d4fbfaa74166c687a726211392a02f0059' */
    cpy_r_r103 = CPyStatics[120]; /* '0xaad012505975dd13a57599a28d33c979f72084ae56ccba76997f05822a5497f5' */
    cpy_r_r104 = CPyStatics[121]; /* '0xd10e8eb19b9493b32daf880da40e8e80ae96e9947ebd372562504e376c253731' */
    cpy_r_r105 = CPyStatics[122]; /* '0xa937f94cd93e07e5a1abf3010267b213caf8fbefb5d56e417ab057de39c697a5' */
    cpy_r_r106 = PySet_New(NULL);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 31, CPyStatic_gas___globals);
        goto CPyL66;
    }
    cpy_r_r107 = PySet_Add(cpy_r_r106, cpy_r_r97);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 31, CPyStatic_gas___globals);
        goto CPyL67;
    }
    cpy_r_r109 = PySet_Add(cpy_r_r106, cpy_r_r98);
    cpy_r_r110 = cpy_r_r109 >= 0;
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 31, CPyStatic_gas___globals);
        goto CPyL67;
    }
    cpy_r_r111 = PySet_Add(cpy_r_r106, cpy_r_r99);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 31, CPyStatic_gas___globals);
        goto CPyL67;
    }
    cpy_r_r113 = PySet_Add(cpy_r_r106, cpy_r_r100);
    cpy_r_r114 = cpy_r_r113 >= 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 31, CPyStatic_gas___globals);
        goto CPyL67;
    }
    cpy_r_r115 = PySet_Add(cpy_r_r106, cpy_r_r101);
    cpy_r_r116 = cpy_r_r115 >= 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 31, CPyStatic_gas___globals);
        goto CPyL67;
    }
    cpy_r_r117 = PySet_Add(cpy_r_r106, cpy_r_r102);
    cpy_r_r118 = cpy_r_r117 >= 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 31, CPyStatic_gas___globals);
        goto CPyL67;
    }
    cpy_r_r119 = PySet_Add(cpy_r_r106, cpy_r_r103);
    cpy_r_r120 = cpy_r_r119 >= 0;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 31, CPyStatic_gas___globals);
        goto CPyL67;
    }
    cpy_r_r121 = PySet_Add(cpy_r_r106, cpy_r_r104);
    cpy_r_r122 = cpy_r_r121 >= 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 31, CPyStatic_gas___globals);
        goto CPyL67;
    }
    cpy_r_r123 = PySet_Add(cpy_r_r106, cpy_r_r105);
    cpy_r_r124 = cpy_r_r123 >= 0;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 31, CPyStatic_gas___globals);
        goto CPyL67;
    }
    cpy_r_r125 = CPyDict_Build(1, cpy_r_r96, cpy_r_r106);
    CPy_DECREF(cpy_r_r96);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 30, CPyStatic_gas___globals);
        goto CPyL58;
    }
    cpy_r_r126 = CPyStatic_gas___globals;
    cpy_r_r127 = CPyStatics[72]; /* 'CHAINID' */
    cpy_r_r128 = CPyDict_GetItem(cpy_r_r126, cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 42, CPyStatic_gas___globals);
        goto CPyL68;
    }
    if (likely(PyLong_Check(cpy_r_r128)))
        cpy_r_r129 = CPyTagged_FromObject(cpy_r_r128);
    else {
        CPy_TypeError("int", cpy_r_r128); cpy_r_r129 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r129 == CPY_INT_TAG)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 42, CPyStatic_gas___globals);
        goto CPyL68;
    }
    cpy_r_r130 = PySet_New(NULL);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 42, CPyStatic_gas___globals);
        goto CPyL69;
    }
    cpy_r_r131 = CPyTagged_StealAsObject(cpy_r_r129);
    cpy_r_r132 = CPyDict_Get(cpy_r_r125, cpy_r_r131, cpy_r_r130);
    CPy_DECREF(cpy_r_r125);
    CPy_DECREF(cpy_r_r131);
    CPy_DECREF(cpy_r_r130);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 30, CPyStatic_gas___globals);
        goto CPyL58;
    }
    CPy_INCREF(cpy_r_r132);
    if (likely(PySet_Check(cpy_r_r132)))
        cpy_r_r133 = cpy_r_r132;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 30, CPyStatic_gas___globals, "set", cpy_r_r132);
        goto CPyL70;
    }
    CPyStatic_gas____RETURNED_GAS_HASHES = cpy_r_r133;
    CPy_INCREF(CPyStatic_gas____RETURNED_GAS_HASHES);
    CPy_DECREF(cpy_r_r133);
    cpy_r_r134 = CPyStatic_gas___globals;
    cpy_r_r135 = CPyStatics[123]; /* '_RETURNED_GAS_HASHES' */
    cpy_r_r136 = CPyDict_SetItem(cpy_r_r134, cpy_r_r135, cpy_r_r132);
    CPy_DECREF(cpy_r_r132);
    cpy_r_r137 = cpy_r_r136 >= 0;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 30, CPyStatic_gas___globals);
        goto CPyL58;
    }
    cpy_r_r138 = CPyStatic_gas___globals;
    cpy_r_r139 = CPyStatics[124]; /* 'is_strategist_gas' */
    cpy_r_r140 = CPyDict_GetItem(cpy_r_r138, cpy_r_r139);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 45, CPyStatic_gas___globals);
        goto CPyL58;
    }
    cpy_r_r141 = CPyStatics[125]; /* 'Strategist Gas' */
    cpy_r_r142 = CPyStatic_gas___gas;
    if (unlikely(cpy_r_r142 == NULL)) {
        goto CPyL71;
    } else
        goto CPyL54;
CPyL52: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"gas\" was not set");
    cpy_r_r143 = 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 45, CPyStatic_gas___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL54: ;
    PyObject *cpy_r_r144[1] = {cpy_r_r141};
    cpy_r_r145 = (PyObject **)&cpy_r_r144;
    cpy_r_r146 = PyObject_Vectorcall(cpy_r_r142, cpy_r_r145, 1, 0);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 45, CPyStatic_gas___globals);
        goto CPyL72;
    }
    PyObject *cpy_r_r147[1] = {cpy_r_r140};
    cpy_r_r148 = (PyObject **)&cpy_r_r147;
    cpy_r_r149 = PyObject_Vectorcall(cpy_r_r146, cpy_r_r148, 1, 0);
    CPy_DECREF(cpy_r_r146);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 45, CPyStatic_gas___globals);
        goto CPyL72;
    }
    CPy_DECREF(cpy_r_r140);
    cpy_r_r150 = CPyStatic_gas___globals;
    cpy_r_r151 = CPyStatics[124]; /* 'is_strategist_gas' */
    cpy_r_r152 = CPyDict_SetItem(cpy_r_r150, cpy_r_r151, cpy_r_r149);
    CPy_DECREF(cpy_r_r149);
    cpy_r_r153 = cpy_r_r152 >= 0;
    if (unlikely(!cpy_r_r153)) {
        CPy_AddTraceback("yearn_treasury/rules/cost_of_revenue/gas.py", "<module>", 45, CPyStatic_gas___globals);
        goto CPyL58;
    }
    return 1;
CPyL58: ;
    cpy_r_r154 = 2;
    return cpy_r_r154;
CPyL59: ;
    CPy_DecRef(cpy_r_r58);
    goto CPyL58;
CPyL60: ;
    CPy_DECREF(cpy_r_r65);
    goto CPyL19;
CPyL61: ;
    CPy_DecRef(cpy_r_r71);
    goto CPyL58;
CPyL62: ;
    CPy_DECREF(cpy_r_r78);
    goto CPyL24;
CPyL63: ;
    CPy_DecRef(cpy_r_r79);
    goto CPyL58;
CPyL64: ;
    CPy_DecRef(cpy_r_r79);
    CPyTagged_DecRef(cpy_r_r83);
    goto CPyL58;
CPyL65: ;
    CPy_DecRef(cpy_r_r86);
    goto CPyL58;
CPyL66: ;
    CPy_DecRef(cpy_r_r96);
    goto CPyL58;
CPyL67: ;
    CPy_DecRef(cpy_r_r96);
    CPy_DecRef(cpy_r_r106);
    goto CPyL58;
CPyL68: ;
    CPy_DecRef(cpy_r_r125);
    goto CPyL58;
CPyL69: ;
    CPy_DecRef(cpy_r_r125);
    CPyTagged_DecRef(cpy_r_r129);
    goto CPyL58;
CPyL70: ;
    CPy_DecRef(cpy_r_r132);
    goto CPyL58;
CPyL71: ;
    CPy_DecRef(cpy_r_r140);
    goto CPyL52;
CPyL72: ;
    CPy_DecRef(cpy_r_r140);
    goto CPyL58;
}
static PyMethodDef expensemodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef expensemodule = {
    PyModuleDef_HEAD_INIT,
    "yearn_treasury.rules.expense",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    expensemodule_methods
};

PyObject *CPyInit_yearn_treasury___rules___expense(void)
{
    PyObject* modname = NULL;
    if (CPyModule_yearn_treasury___rules___expense_internal) {
        Py_INCREF(CPyModule_yearn_treasury___rules___expense_internal);
        return CPyModule_yearn_treasury___rules___expense_internal;
    }
    CPyModule_yearn_treasury___rules___expense_internal = PyModule_Create(&expensemodule);
    if (unlikely(CPyModule_yearn_treasury___rules___expense_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_yearn_treasury___rules___expense_internal, "__name__");
    CPyStatic_expense___globals = PyModule_GetDict(CPyModule_yearn_treasury___rules___expense_internal);
    if (unlikely(CPyStatic_expense___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_expense_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_yearn_treasury___rules___expense_internal;
    fail:
    Py_CLEAR(CPyModule_yearn_treasury___rules___expense_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_expense_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/__init__.py", "<module>", -1, CPyStatic_expense___globals);
        goto CPyL16;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyModule_yearn_treasury___rules___expense___general;
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_r5 != cpy_r_r6;
    if (cpy_r_r7) goto CPyL6;
    cpy_r_r8 = CPyStatics[126]; /* 'yearn_treasury.rules.expense.general' */
    cpy_r_r9 = PyImport_Import(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/__init__.py", "<module>", 1, CPyStatic_expense___globals);
        goto CPyL16;
    }
    CPyModule_yearn_treasury___rules___expense___general = cpy_r_r9;
    CPy_INCREF(CPyModule_yearn_treasury___rules___expense___general);
    CPy_DECREF(cpy_r_r9);
CPyL6: ;
    cpy_r_r10 = CPyModule_yearn_treasury___rules___expense___infrastructure;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_r10 != cpy_r_r11;
    if (cpy_r_r12) goto CPyL9;
    cpy_r_r13 = CPyStatics[127]; /* 'yearn_treasury.rules.expense.infrastructure' */
    cpy_r_r14 = PyImport_Import(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/__init__.py", "<module>", 2, CPyStatic_expense___globals);
        goto CPyL16;
    }
    CPyModule_yearn_treasury___rules___expense___infrastructure = cpy_r_r14;
    CPy_INCREF(CPyModule_yearn_treasury___rules___expense___infrastructure);
    CPy_DECREF(cpy_r_r14);
CPyL9: ;
    cpy_r_r15 = CPyModule_yearn_treasury___rules___expense___people;
    cpy_r_r16 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r17 = cpy_r_r15 != cpy_r_r16;
    if (cpy_r_r17) goto CPyL12;
    cpy_r_r18 = CPyStatics[128]; /* 'yearn_treasury.rules.expense.people' */
    cpy_r_r19 = PyImport_Import(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/__init__.py", "<module>", 3, CPyStatic_expense___globals);
        goto CPyL16;
    }
    CPyModule_yearn_treasury___rules___expense___people = cpy_r_r19;
    CPy_INCREF(CPyModule_yearn_treasury___rules___expense___people);
    CPy_DECREF(cpy_r_r19);
CPyL12: ;
    cpy_r_r20 = CPyModule_yearn_treasury___rules___expense___security;
    cpy_r_r21 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r22 = cpy_r_r20 != cpy_r_r21;
    if (cpy_r_r22) goto CPyL15;
    cpy_r_r23 = CPyStatics[129]; /* 'yearn_treasury.rules.expense.security' */
    cpy_r_r24 = PyImport_Import(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/__init__.py", "<module>", 4, CPyStatic_expense___globals);
        goto CPyL16;
    }
    CPyModule_yearn_treasury___rules___expense___security = cpy_r_r24;
    CPy_INCREF(CPyModule_yearn_treasury___rules___expense___security);
    CPy_DECREF(cpy_r_r24);
CPyL15: ;
    return 1;
CPyL16: ;
    cpy_r_r25 = 2;
    return cpy_r_r25;
}
static PyMethodDef expense___generalmodule_methods[] = {
    {"is_sms_discretionary_budget", (PyCFunction)CPyPy_expense___general___is_sms_discretionary_budget, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef expense___generalmodule = {
    PyModuleDef_HEAD_INIT,
    "yearn_treasury.rules.expense.general",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    expense___generalmodule_methods
};

PyObject *CPyInit_yearn_treasury___rules___expense___general(void)
{
    PyObject* modname = NULL;
    if (CPyModule_yearn_treasury___rules___expense___general_internal) {
        Py_INCREF(CPyModule_yearn_treasury___rules___expense___general_internal);
        return CPyModule_yearn_treasury___rules___expense___general_internal;
    }
    CPyModule_yearn_treasury___rules___expense___general_internal = PyModule_Create(&expense___generalmodule);
    if (unlikely(CPyModule_yearn_treasury___rules___expense___general_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_yearn_treasury___rules___expense___general_internal, "__name__");
    CPyStatic_expense___general___globals = PyModule_GetDict(CPyModule_yearn_treasury___rules___expense___general_internal);
    if (unlikely(CPyStatic_expense___general___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_expense___general_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_yearn_treasury___rules___expense___general_internal;
    fail:
    Py_CLEAR(CPyModule_yearn_treasury___rules___expense___general_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_expense___general___is_sms_discretionary_budget(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    cpy_r_r0 = CPyStatics[130]; /* 'to_nickname' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/general.py", "is_sms_discretionary_budget", 10, CPyStatic_expense___general___globals);
        goto CPyL21;
    }
    if (PyUnicode_Check(cpy_r_r1))
        cpy_r_r2 = cpy_r_r1;
    else {
        cpy_r_r2 = NULL;
    }
    if (cpy_r_r2 != NULL) goto __LL4;
    if (cpy_r_r1 == Py_None)
        cpy_r_r2 = cpy_r_r1;
    else {
        cpy_r_r2 = NULL;
    }
    if (cpy_r_r2 != NULL) goto __LL4;
    CPy_TypeErrorTraceback("yearn_treasury/rules/expense/general.py", "is_sms_discretionary_budget", 10, CPyStatic_expense___general___globals, "str or None", cpy_r_r1);
    goto CPyL21;
__LL4: ;
    cpy_r_r3 = CPyStatics[131]; /* 'Yearn Strategist Multisig' */
    cpy_r_r4 = PyObject_RichCompare(cpy_r_r2, cpy_r_r3, 2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/general.py", "is_sms_discretionary_budget", 10, CPyStatic_expense___general___globals);
        goto CPyL21;
    }
    if (unlikely(!PyBool_Check(cpy_r_r4))) {
        CPy_TypeError("bool", cpy_r_r4); cpy_r_r5 = 2;
    } else
        cpy_r_r5 = cpy_r_r4 == Py_True;
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/general.py", "is_sms_discretionary_budget", 10, CPyStatic_expense___general___globals);
        goto CPyL21;
    }
    if (cpy_r_r5) goto CPyL6;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL20;
CPyL6: ;
    cpy_r_r7 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/general.py", "is_sms_discretionary_budget", 11, CPyStatic_expense___general___globals);
        goto CPyL21;
    }
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/expense/general.py", "is_sms_discretionary_budget", 11, CPyStatic_expense___general___globals, "str", cpy_r_r8);
        goto CPyL21;
    }
    cpy_r_r10 = CPyStatics[132]; /* 'DAI' */
    cpy_r_r11 = PyUnicode_Compare(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 == -1;
    if (!cpy_r_r12) goto CPyL11;
    cpy_r_r13 = PyErr_Occurred();
    cpy_r_r14 = cpy_r_r13 != NULL;
    if (!cpy_r_r14) goto CPyL11;
    cpy_r_r15 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/general.py", "is_sms_discretionary_budget", 11, CPyStatic_expense___general___globals);
        goto CPyL21;
    }
CPyL11: ;
    cpy_r_r16 = cpy_r_r11 == 0;
    if (cpy_r_r16) goto CPyL13;
    cpy_r_r17 = cpy_r_r16;
    goto CPyL19;
CPyL13: ;
    cpy_r_r18 = CPyStatics[92]; /* 'amount' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/general.py", "is_sms_discretionary_budget", 12, CPyStatic_expense___general___globals);
        goto CPyL21;
    }
    cpy_r_r20 = CPyStatic_expense___general___globals;
    cpy_r_r21 = CPyStatics[133]; /* 'Decimal' */
    cpy_r_r22 = CPyDict_GetItem(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/general.py", "is_sms_discretionary_budget", 12, CPyStatic_expense___general___globals);
        goto CPyL22;
    }
    cpy_r_r23 = CPyStatics[406]; /* 200000 */
    PyObject *cpy_r_r24[1] = {cpy_r_r23};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = PyObject_Vectorcall(cpy_r_r22, cpy_r_r25, 1, 0);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/general.py", "is_sms_discretionary_budget", 12, CPyStatic_expense___general___globals);
        goto CPyL22;
    }
    cpy_r_r27 = PyObject_RichCompare(cpy_r_r19, cpy_r_r26, 2);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/general.py", "is_sms_discretionary_budget", 12, CPyStatic_expense___general___globals);
        goto CPyL21;
    }
    if (unlikely(!PyBool_Check(cpy_r_r27))) {
        CPy_TypeError("bool", cpy_r_r27); cpy_r_r28 = 2;
    } else
        cpy_r_r28 = cpy_r_r27 == Py_True;
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/general.py", "is_sms_discretionary_budget", 12, CPyStatic_expense___general___globals);
        goto CPyL21;
    }
    cpy_r_r17 = cpy_r_r28;
CPyL19: ;
    cpy_r_r6 = cpy_r_r17;
CPyL20: ;
    return cpy_r_r6;
CPyL21: ;
    cpy_r_r29 = 2;
    return cpy_r_r29;
CPyL22: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL21;
}

PyObject *CPyPy_expense___general___is_sms_discretionary_budget(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_sms_discretionary_budget", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_expense___general___is_sms_discretionary_budget(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/expense/general.py", "is_sms_discretionary_budget", 8, CPyStatic_expense___general___globals);
    return NULL;
}

char CPyDef_expense___general_____top_level__(void) {
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
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/general.py", "<module>", -1, CPyStatic_expense___general___globals);
        goto CPyL14;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[443]; /* ('Decimal',) */
    cpy_r_r6 = CPyStatics[134]; /* 'decimal' */
    cpy_r_r7 = CPyStatic_expense___general___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/general.py", "<module>", 1, CPyStatic_expense___general___globals);
        goto CPyL14;
    }
    CPyModule_decimal = cpy_r_r8;
    CPy_INCREF(CPyModule_decimal);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[444]; /* ('TreasuryTx', 'expense') */
    cpy_r_r10 = CPyStatics[99]; /* 'dao_treasury' */
    cpy_r_r11 = CPyStatic_expense___general___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/general.py", "<module>", 3, CPyStatic_expense___general___globals);
        goto CPyL14;
    }
    CPyModule_dao_treasury = cpy_r_r12;
    CPy_INCREF(CPyModule_dao_treasury);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[434]; /* ('Network',) */
    cpy_r_r14 = CPyStatics[71]; /* 'y' */
    cpy_r_r15 = CPyStatic_expense___general___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/general.py", "<module>", 4, CPyStatic_expense___general___globals);
        goto CPyL14;
    }
    CPyModule_y = cpy_r_r16;
    CPy_INCREF(CPyModule_y);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatic_expense___general___globals;
    cpy_r_r18 = CPyStatics[136]; /* 'is_sms_discretionary_budget' */
    cpy_r_r19 = CPyDict_GetItem(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/general.py", "<module>", 7, CPyStatic_expense___general___globals);
        goto CPyL14;
    }
    cpy_r_r20 = CPyStatics[137]; /* 'SMS Discretionary Budget' */
    cpy_r_r21 = CPyStatic_expense___general___globals;
    cpy_r_r22 = CPyStatics[70]; /* 'Network' */
    cpy_r_r23 = CPyDict_GetItem(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/general.py", "<module>", 7, CPyStatic_expense___general___globals);
        goto CPyL15;
    }
    cpy_r_r24 = CPyStatics[78]; /* 'Mainnet' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/general.py", "<module>", 7, CPyStatic_expense___general___globals);
        goto CPyL15;
    }
    cpy_r_r26 = CPyStatic_expense___general___globals;
    cpy_r_r27 = CPyStatics[135]; /* 'expense' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/general.py", "<module>", 7, CPyStatic_expense___general___globals);
        goto CPyL16;
    }
    PyObject *cpy_r_r29[2] = {cpy_r_r20, cpy_r_r25};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = CPyStatics[445]; /* ('networks',) */
    cpy_r_r32 = PyObject_Vectorcall(cpy_r_r28, cpy_r_r30, 1, cpy_r_r31);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/general.py", "<module>", 7, CPyStatic_expense___general___globals);
        goto CPyL16;
    }
    CPy_DECREF(cpy_r_r25);
    PyObject *cpy_r_r33[1] = {cpy_r_r19};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = PyObject_Vectorcall(cpy_r_r32, cpy_r_r34, 1, 0);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/general.py", "<module>", 7, CPyStatic_expense___general___globals);
        goto CPyL15;
    }
    CPy_DECREF(cpy_r_r19);
    cpy_r_r36 = CPyStatic_expense___general___globals;
    cpy_r_r37 = CPyStatics[136]; /* 'is_sms_discretionary_budget' */
    cpy_r_r38 = CPyDict_SetItem(cpy_r_r36, cpy_r_r37, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/general.py", "<module>", 7, CPyStatic_expense___general___globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r40 = 2;
    return cpy_r_r40;
CPyL15: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL14;
CPyL16: ;
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r25);
    goto CPyL14;
}
static PyMethodDef infrastructuremodule_methods[] = {
    {"is_generic_infra", (PyCFunction)CPyPy_infrastructure___is_generic_infra, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef infrastructuremodule = {
    PyModuleDef_HEAD_INIT,
    "yearn_treasury.rules.expense.infrastructure",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    infrastructuremodule_methods
};

PyObject *CPyInit_yearn_treasury___rules___expense___infrastructure(void)
{
    PyObject* modname = NULL;
    if (CPyModule_yearn_treasury___rules___expense___infrastructure_internal) {
        Py_INCREF(CPyModule_yearn_treasury___rules___expense___infrastructure_internal);
        return CPyModule_yearn_treasury___rules___expense___infrastructure_internal;
    }
    CPyModule_yearn_treasury___rules___expense___infrastructure_internal = PyModule_Create(&infrastructuremodule);
    if (unlikely(CPyModule_yearn_treasury___rules___expense___infrastructure_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_yearn_treasury___rules___expense___infrastructure_internal, "__name__");
    CPyStatic_infrastructure___globals = PyModule_GetDict(CPyModule_yearn_treasury___rules___expense___infrastructure_internal);
    if (unlikely(CPyStatic_infrastructure___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_infrastructure_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_yearn_treasury___rules___expense___infrastructure_internal;
    fail:
    Py_CLEAR(CPyModule_yearn_treasury___rules___expense___infrastructure_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_infrastructure___infrastructure);
    CPyStatic_infrastructure___infrastructure = NULL;
    return NULL;
}

char CPyDef_infrastructure___is_generic_infra(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
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
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    cpy_r_r0 = CPyStatics[91]; /* 'hash' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "is_generic_infra", 22, CPyStatic_infrastructure___globals);
        goto CPyL23;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/expense/infrastructure.py", "is_generic_infra", 22, CPyStatic_infrastructure___globals, "str", cpy_r_r1);
        goto CPyL23;
    }
    cpy_r_r3 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "is_generic_infra", 23, CPyStatic_infrastructure___globals);
        goto CPyL24;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/expense/infrastructure.py", "is_generic_infra", 23, CPyStatic_infrastructure___globals, "str", cpy_r_r4);
        goto CPyL24;
    }
    cpy_r_r6 = CPyStatics[132]; /* 'DAI' */
    cpy_r_r7 = PyUnicode_Compare(cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r8 = cpy_r_r7 == -1;
    if (!cpy_r_r8) goto CPyL7;
    cpy_r_r9 = PyErr_Occurred();
    cpy_r_r10 = cpy_r_r9 != NULL;
    if (!cpy_r_r10) goto CPyL7;
    cpy_r_r11 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "is_generic_infra", 23, CPyStatic_infrastructure___globals);
        goto CPyL24;
    }
CPyL7: ;
    cpy_r_r12 = cpy_r_r7 == 0;
    if (!cpy_r_r12) goto CPyL11;
    cpy_r_r13 = CPyStatics[473]; /* frozenset({'0x0c59e87027bcdcaa718e322a28bc436106d73ae8623071930437bdb0706c4d65',
                                              '0x40352e7166bf5196aa1160302cfcc157facf99731af0e11741b8729dd84e131c',
                                              '0x47035f156d4e6144c144b2ac5e91497e353c9a4e23133587bbf3da2f9d7da596',
                                              '0xc269f6fb016a48fe150f689231a73532b631877d1376608df639dad79514904b'}) */
    cpy_r_r14 = PySet_Contains(cpy_r_r13, cpy_r_r2);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "is_generic_infra", 23, CPyStatic_infrastructure___globals);
        goto CPyL24;
    }
    cpy_r_r16 = cpy_r_r14;
    if (cpy_r_r16) {
        goto CPyL25;
    } else
        goto CPyL11;
CPyL10: ;
    return 1;
CPyL11: ;
    cpy_r_r17 = CPyStatics[143]; /* '0x08ef1aacdf7d0f16be5e6fd0a64ebd0ba3b0c3dd0a7884a9a470aa89a7fe1a06' */
    cpy_r_r18 = CPyStatics[144]; /* '0xeb51cb5a3b4ae618be75bf3e23c2d8e333d93d5e81e869eca7f9612a30079822' */
    cpy_r_r19 = CPyStatics[145]; /* '0x3e75d22250d87c183824c3b77ddb9cb11935db2061ce7f34df4f024d0646fcfb' */
    cpy_r_r20 = CPyStatics[146]; /* '0x1621ba5c9b57930c97cc43d5d6d401ee9c69fed435b0b458ee031544a10bfa75' */
    cpy_r_r21 = CPyStatics[147]; /* '0x5deca5d6c934372c174bbef8be9a1e103e06d8b93fd3bf8d77865dfeb34fe3be' */
    cpy_r_r22 = CPyStatics[148]; /* '0xfc07ee04d44f8e481f58339b7b8c998d454e4ec427b8021c4e453c8eeee6a9b9' */
    cpy_r_r23 = CPyStatics[407]; /* 222 */
    cpy_r_r24 = CPyStatics[408]; /* 195 */
    cpy_r_r25 = CPyStatics[409]; /* 117 */
    cpy_r_r26 = CPyStatics[410]; /* 460 */
    cpy_r_r27 = CPyStatics[411]; /* 98 */
    cpy_r_r28 = CPyStatics[412]; /* 207 */
    cpy_r_r29 = CPyDict_Build(6, cpy_r_r17, cpy_r_r23, cpy_r_r18, cpy_r_r24, cpy_r_r19, cpy_r_r25, cpy_r_r20, cpy_r_r26, cpy_r_r21, cpy_r_r27, cpy_r_r22, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "is_generic_infra", 31, CPyStatic_infrastructure___globals);
        goto CPyL24;
    }
    cpy_r_r30 = PyDict_Contains(cpy_r_r29, cpy_r_r2);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "is_generic_infra", 40, CPyStatic_infrastructure___globals);
        goto CPyL26;
    }
    cpy_r_r32 = cpy_r_r30;
    if (cpy_r_r32) {
        goto CPyL15;
    } else
        goto CPyL27;
CPyL14: ;
    cpy_r_r33 = cpy_r_r32;
    goto CPyL22;
CPyL15: ;
    cpy_r_r34 = CPyStatics[149]; /* 'log_index' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "is_generic_infra", 40, CPyStatic_infrastructure___globals);
        goto CPyL26;
    }
    if (PyLong_Check(cpy_r_r35))
        cpy_r_r36 = cpy_r_r35;
    else {
        cpy_r_r36 = NULL;
    }
    if (cpy_r_r36 != NULL) goto __LL5;
    if (cpy_r_r35 == Py_None)
        cpy_r_r36 = cpy_r_r35;
    else {
        cpy_r_r36 = NULL;
    }
    if (cpy_r_r36 != NULL) goto __LL5;
    CPy_TypeErrorTraceback("yearn_treasury/rules/expense/infrastructure.py", "is_generic_infra", 40, CPyStatic_infrastructure___globals, "int or None", cpy_r_r35);
    goto CPyL26;
__LL5: ;
    cpy_r_r37 = CPyDict_GetItem(cpy_r_r29, cpy_r_r2);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "is_generic_infra", 40, CPyStatic_infrastructure___globals);
        goto CPyL28;
    }
    if (likely(PyLong_Check(cpy_r_r37)))
        cpy_r_r38 = CPyTagged_FromObject(cpy_r_r37);
    else {
        CPy_TypeError("int", cpy_r_r37); cpy_r_r38 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == CPY_INT_TAG)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "is_generic_infra", 40, CPyStatic_infrastructure___globals);
        goto CPyL28;
    }
    cpy_r_r39 = CPyTagged_StealAsObject(cpy_r_r38);
    cpy_r_r40 = PyObject_RichCompare(cpy_r_r36, cpy_r_r39, 2);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "is_generic_infra", 40, CPyStatic_infrastructure___globals);
        goto CPyL23;
    }
    if (unlikely(!PyBool_Check(cpy_r_r40))) {
        CPy_TypeError("bool", cpy_r_r40); cpy_r_r41 = 2;
    } else
        cpy_r_r41 = cpy_r_r40 == Py_True;
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "is_generic_infra", 40, CPyStatic_infrastructure___globals);
        goto CPyL23;
    }
    cpy_r_r33 = cpy_r_r41;
CPyL22: ;
    return cpy_r_r33;
CPyL23: ;
    cpy_r_r42 = 2;
    return cpy_r_r42;
CPyL24: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL23;
CPyL25: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL10;
CPyL26: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r29);
    goto CPyL23;
CPyL27: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r29);
    goto CPyL14;
CPyL28: ;
    CPy_DecRef(cpy_r_r36);
    goto CPyL23;
}

PyObject *CPyPy_infrastructure___is_generic_infra(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_generic_infra", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_infrastructure___is_generic_infra(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "is_generic_infra", 21, CPyStatic_infrastructure___globals);
    return NULL;
}

char CPyDef_infrastructure_____top_level__(void) {
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
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject **cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject **cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject **cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject **cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "<module>", -1, CPyStatic_infrastructure___globals);
        goto CPyL26;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[433]; /* ('Final',) */
    cpy_r_r6 = CPyStatics[24]; /* 'typing' */
    cpy_r_r7 = CPyStatic_infrastructure___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "<module>", 1, CPyStatic_infrastructure___globals);
        goto CPyL26;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[444]; /* ('TreasuryTx', 'expense') */
    cpy_r_r10 = CPyStatics[99]; /* 'dao_treasury' */
    cpy_r_r11 = CPyStatic_infrastructure___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "<module>", 3, CPyStatic_infrastructure___globals);
        goto CPyL26;
    }
    CPyModule_dao_treasury = cpy_r_r12;
    CPy_INCREF(CPyModule_dao_treasury);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[150]; /* 'Infrastructure' */
    cpy_r_r14 = CPyStatic_infrastructure___globals;
    cpy_r_r15 = CPyStatics[135]; /* 'expense' */
    cpy_r_r16 = CPyDict_GetItem(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "<module>", 6, CPyStatic_infrastructure___globals);
        goto CPyL26;
    }
    PyObject *cpy_r_r17[1] = {cpy_r_r13};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = PyObject_Vectorcall(cpy_r_r16, cpy_r_r18, 1, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "<module>", 6, CPyStatic_infrastructure___globals);
        goto CPyL26;
    }
    CPyStatic_infrastructure___infrastructure = cpy_r_r19;
    CPy_INCREF(CPyStatic_infrastructure___infrastructure);
    cpy_r_r20 = CPyStatic_infrastructure___globals;
    cpy_r_r21 = CPyStatics[151]; /* 'infrastructure' */
    cpy_r_r22 = CPyDict_SetItem(cpy_r_r20, cpy_r_r21, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "<module>", 6, CPyStatic_infrastructure___globals);
        goto CPyL26;
    }
    cpy_r_r24 = CPyStatics[152]; /* 'Tenderly Subscription' */
    cpy_r_r25 = CPyStatic_infrastructure___infrastructure;
    if (likely(cpy_r_r25 != NULL)) goto CPyL11;
    PyErr_SetString(PyExc_NameError, "value for final name \"infrastructure\" was not set");
    cpy_r_r26 = 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "<module>", 9, CPyStatic_infrastructure___globals);
        goto CPyL26;
    }
    CPy_Unreachable();
CPyL11: ;
    PyObject *cpy_r_r27[1] = {cpy_r_r24};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = PyObject_Vectorcall(cpy_r_r25, cpy_r_r28, 1, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "<module>", 9, CPyStatic_infrastructure___globals);
        goto CPyL26;
    }
    cpy_r_r30 = CPyStatics[153]; /* 'USDT' */
    cpy_r_r31 = CPyStatics[154]; /* '0xF6060cE3fC3df2640F72E42441355f50F195D96a' */
    cpy_r_r32 = CPyStatics[108]; /* 'match' */
    PyObject *cpy_r_r33[3] = {cpy_r_r29, cpy_r_r30, cpy_r_r31};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = CPyStatics[446]; /* ('symbol', 'to_address') */
    cpy_r_r36 = PyObject_VectorcallMethod(cpy_r_r32, cpy_r_r34, 9223372036854775809ULL, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "<module>", 9, CPyStatic_infrastructure___globals);
        goto CPyL27;
    } else
        goto CPyL28;
CPyL13: ;
    CPy_DECREF(cpy_r_r29);
    cpy_r_r37 = CPyStatics[155]; /* 'Wonderland Jobs' */
    cpy_r_r38 = CPyStatic_infrastructure___infrastructure;
    if (likely(cpy_r_r38 != NULL)) goto CPyL16;
    PyErr_SetString(PyExc_NameError, "value for final name \"infrastructure\" was not set");
    cpy_r_r39 = 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "<module>", 15, CPyStatic_infrastructure___globals);
        goto CPyL26;
    }
    CPy_Unreachable();
CPyL16: ;
    PyObject *cpy_r_r40[1] = {cpy_r_r37};
    cpy_r_r41 = (PyObject **)&cpy_r_r40;
    cpy_r_r42 = PyObject_Vectorcall(cpy_r_r38, cpy_r_r41, 1, 0);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "<module>", 15, CPyStatic_infrastructure___globals);
        goto CPyL26;
    }
    cpy_r_r43 = CPyStatics[132]; /* 'DAI' */
    cpy_r_r44 = CPyStatics[156]; /* '0x8bA72884984f669aBBc9a5a7b441AD8E3D9a4fD3' */
    cpy_r_r45 = CPyStatics[108]; /* 'match' */
    PyObject *cpy_r_r46[3] = {cpy_r_r42, cpy_r_r43, cpy_r_r44};
    cpy_r_r47 = (PyObject **)&cpy_r_r46;
    cpy_r_r48 = CPyStatics[446]; /* ('symbol', 'to_address') */
    cpy_r_r49 = PyObject_VectorcallMethod(cpy_r_r45, cpy_r_r47, 9223372036854775809ULL, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "<module>", 15, CPyStatic_infrastructure___globals);
        goto CPyL29;
    } else
        goto CPyL30;
CPyL18: ;
    CPy_DECREF(cpy_r_r42);
    cpy_r_r50 = CPyStatic_infrastructure___globals;
    cpy_r_r51 = CPyStatics[157]; /* 'is_generic_infra' */
    cpy_r_r52 = CPyDict_GetItem(cpy_r_r50, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "<module>", 20, CPyStatic_infrastructure___globals);
        goto CPyL26;
    }
    cpy_r_r53 = CPyStatics[158]; /* 'Unspecified Infra' */
    cpy_r_r54 = CPyStatic_infrastructure___infrastructure;
    if (unlikely(cpy_r_r54 == NULL)) {
        goto CPyL31;
    } else
        goto CPyL22;
CPyL20: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"infrastructure\" was not set");
    cpy_r_r55 = 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "<module>", 20, CPyStatic_infrastructure___globals);
        goto CPyL26;
    }
    CPy_Unreachable();
CPyL22: ;
    PyObject *cpy_r_r56[1] = {cpy_r_r53};
    cpy_r_r57 = (PyObject **)&cpy_r_r56;
    cpy_r_r58 = PyObject_Vectorcall(cpy_r_r54, cpy_r_r57, 1, 0);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "<module>", 20, CPyStatic_infrastructure___globals);
        goto CPyL32;
    }
    PyObject *cpy_r_r59[1] = {cpy_r_r52};
    cpy_r_r60 = (PyObject **)&cpy_r_r59;
    cpy_r_r61 = PyObject_Vectorcall(cpy_r_r58, cpy_r_r60, 1, 0);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "<module>", 20, CPyStatic_infrastructure___globals);
        goto CPyL32;
    }
    CPy_DECREF(cpy_r_r52);
    cpy_r_r62 = CPyStatic_infrastructure___globals;
    cpy_r_r63 = CPyStatics[157]; /* 'is_generic_infra' */
    cpy_r_r64 = CPyDict_SetItem(cpy_r_r62, cpy_r_r63, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/infrastructure.py", "<module>", 20, CPyStatic_infrastructure___globals);
        goto CPyL26;
    }
    return 1;
CPyL26: ;
    cpy_r_r66 = 2;
    return cpy_r_r66;
CPyL27: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL26;
CPyL28: ;
    CPy_DECREF(cpy_r_r36);
    goto CPyL13;
CPyL29: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL26;
CPyL30: ;
    CPy_DECREF(cpy_r_r49);
    goto CPyL18;
CPyL31: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL20;
CPyL32: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL26;
}
static PyMethodDef peoplemodule_methods[] = {
    {"is_coordinape", (PyCFunction)CPyPy_people___is_coordinape, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_ygift_grant", (PyCFunction)CPyPy_people___is_ygift_grant, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef peoplemodule = {
    PyModuleDef_HEAD_INIT,
    "yearn_treasury.rules.expense.people",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    peoplemodule_methods
};

PyObject *CPyInit_yearn_treasury___rules___expense___people(void)
{
    PyObject* modname = NULL;
    if (CPyModule_yearn_treasury___rules___expense___people_internal) {
        Py_INCREF(CPyModule_yearn_treasury___rules___expense___people_internal);
        return CPyModule_yearn_treasury___rules___expense___people_internal;
    }
    CPyModule_yearn_treasury___rules___expense___people_internal = PyModule_Create(&peoplemodule);
    if (unlikely(CPyModule_yearn_treasury___rules___expense___people_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_yearn_treasury___rules___expense___people_internal, "__name__");
    CPyStatic_people___globals = PyModule_GetDict(CPyModule_yearn_treasury___rules___expense___people_internal);
    if (unlikely(CPyStatic_people___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_people_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_yearn_treasury___rules___expense___people_internal;
    fail:
    Py_CLEAR(CPyModule_yearn_treasury___rules___expense___people_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_people___grants);
    CPyStatic_people___grants = NULL;
    CPy_XDECREF(CPyStatic_people___website);
    CPyStatic_people___website = NULL;
    CPy_XDECREF(CPyStatic_people___ux);
    CPyStatic_people___ux = NULL;
    return NULL;
}

char CPyDef_people___is_coordinape(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    cpy_r_r0 = CPyStatics[89]; /* 'from_nickname' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "is_coordinape", 14, CPyStatic_people___globals);
        goto CPyL26;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/expense/people.py", "is_coordinape", 14, CPyStatic_people___globals, "str", cpy_r_r1);
        goto CPyL26;
    }
    cpy_r_r3 = CPyStatics[90]; /* 'Disperse.app' */
    cpy_r_r4 = PyUnicode_Compare(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 == -1;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r6 = PyErr_Occurred();
    cpy_r_r7 = cpy_r_r6 != NULL;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "is_coordinape", 14, CPyStatic_people___globals);
        goto CPyL26;
    }
CPyL5: ;
    cpy_r_r9 = cpy_r_r4 == 0;
    if (cpy_r_r9) goto CPyL7;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL25;
CPyL7: ;
    cpy_r_r11 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "is_coordinape", 15, CPyStatic_people___globals);
        goto CPyL26;
    }
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/expense/people.py", "is_coordinape", 15, CPyStatic_people___globals, "str", cpy_r_r12);
        goto CPyL26;
    }
    cpy_r_r14 = CPyStatics[86]; /* 'YFI' */
    cpy_r_r15 = PyUnicode_Compare(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 == -1;
    if (!cpy_r_r16) goto CPyL12;
    cpy_r_r17 = PyErr_Occurred();
    cpy_r_r18 = cpy_r_r17 != NULL;
    if (!cpy_r_r18) goto CPyL12;
    cpy_r_r19 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "is_coordinape", -1, CPyStatic_people___globals);
        goto CPyL26;
    }
CPyL12: ;
    cpy_r_r20 = cpy_r_r15 == 0;
    if (!cpy_r_r20) goto CPyL14;
    cpy_r_r21 = cpy_r_r20;
    goto CPyL20;
CPyL14: ;
    cpy_r_r22 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "is_coordinape", 15, CPyStatic_people___globals);
        goto CPyL26;
    }
    if (likely(PyUnicode_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/expense/people.py", "is_coordinape", 15, CPyStatic_people___globals, "str", cpy_r_r23);
        goto CPyL26;
    }
    cpy_r_r25 = CPyStatics[159]; /* 'yvYFI' */
    cpy_r_r26 = PyUnicode_Compare(cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r27 = cpy_r_r26 == -1;
    if (!cpy_r_r27) goto CPyL19;
    cpy_r_r28 = PyErr_Occurred();
    cpy_r_r29 = cpy_r_r28 != NULL;
    if (!cpy_r_r29) goto CPyL19;
    cpy_r_r30 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "is_coordinape", -1, CPyStatic_people___globals);
        goto CPyL26;
    }
CPyL19: ;
    cpy_r_r31 = cpy_r_r26 == 0;
    cpy_r_r21 = cpy_r_r31;
CPyL20: ;
    if (cpy_r_r21) goto CPyL22;
    cpy_r_r32 = cpy_r_r21;
    goto CPyL24;
CPyL22: ;
    cpy_r_r33 = CPyStatics[474]; /* frozenset({'0x0a9e0f2cadb5dc3209bad74ada2fe71f2cbc0e9e2f16a4de1a29ea663e325798',
                                              '0x0b7159645e66c3b460efeb3e1e3c32d5e4eb845a2f2230b28b388ad34a36fcc3',
                                              '0x1391d6de1f0b5469627da1e23ddd0f892bf7d182780bc2fb807b6bf1e2d0acf1',
                                              '0x2a7c60bb7dd6c15a6d0351e6a2b9f01e51fa6e7df9d1e5f02a3759640211ee56',
                                              '0x371b6a601da36382067a20236d41f540fc77dc793d64d24fc1bdbcd2c666db2b',
                                              '0x38201edb06e8fd3b9aa9d4142594d28cb73768770fdcb68a4da24d8cb0742cfc',
                                              '0x4d404a04bf46b80721f03ad6b821c6d82312c53331d8e7425fb68100116d8b98',
                                              '0x514591e6f8dcac50b6deeabce8a819540cc7caecc182c39dfb93280abb34d3d6',
                                              '0x5cf6a4c70ec2de7cd25a627213344deae28f11ba9814d5cc1b00946f356ed5bf',
                                              '0x8226b3705657f34216483f5091f8bd3eeea385a64b6da458eeaff78521596c28',
                                              '0x8ed57eff8f4a61cd40d109223c5054f87e35a6f0a5c85b65b1a7afe5b6e308da',
                                              '0xa121fd9717d0fb4ac72a223db638f4e59094547ddee253e5ba011a5bb0c67126',
                                              '0xa3627513c8c3e838feaf9ab1076be01df11c5be5a83597626950c3ac38124bba',
                                              '0xb23d189ac94acb68d457e5a21b765fd0affd73ac1cd5afbe9fb57db8c3f95c30',
                                              '0xb3aab771a5581df5b1c8e6faefedcc88d91b8820c5ae5eaf9c9283014288dda2',
                                              '0xf401d432dcaaea39e1b593379d3d63dcdc82f5f694d83b098bb6110eaa19bbde'}) */
    cpy_r_r34 = PySet_Contains(cpy_r_r33, cpy_r_tx);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "is_coordinape", 16, CPyStatic_people___globals);
        goto CPyL26;
    }
    cpy_r_r36 = cpy_r_r34;
    cpy_r_r32 = cpy_r_r36;
CPyL24: ;
    cpy_r_r10 = cpy_r_r32;
CPyL25: ;
    return cpy_r_r10;
CPyL26: ;
    cpy_r_r37 = 2;
    return cpy_r_r37;
}

PyObject *CPyPy_people___is_coordinape(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_coordinape", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_people___is_coordinape(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "is_coordinape", 12, CPyStatic_people___globals);
    return NULL;
}

char CPyDef_people___is_ygift_grant(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = CPyStatics[130]; /* 'to_nickname' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "is_ygift_grant", 41, CPyStatic_people___globals);
        goto CPyL13;
    }
    if (PyUnicode_Check(cpy_r_r1))
        cpy_r_r2 = cpy_r_r1;
    else {
        cpy_r_r2 = NULL;
    }
    if (cpy_r_r2 != NULL) goto __LL6;
    if (cpy_r_r1 == Py_None)
        cpy_r_r2 = cpy_r_r1;
    else {
        cpy_r_r2 = NULL;
    }
    if (cpy_r_r2 != NULL) goto __LL6;
    CPy_TypeErrorTraceback("yearn_treasury/rules/expense/people.py", "is_ygift_grant", 41, CPyStatic_people___globals, "str or None", cpy_r_r1);
    goto CPyL13;
__LL6: ;
    cpy_r_r3 = CPyStatics[176]; /* 'Contract: yGift' */
    cpy_r_r4 = PyObject_RichCompare(cpy_r_r2, cpy_r_r3, 2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "is_ygift_grant", 41, CPyStatic_people___globals);
        goto CPyL13;
    }
    if (unlikely(!PyBool_Check(cpy_r_r4))) {
        CPy_TypeError("bool", cpy_r_r4); cpy_r_r5 = 2;
    } else
        cpy_r_r5 = cpy_r_r4 == Py_True;
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "is_ygift_grant", 41, CPyStatic_people___globals);
        goto CPyL13;
    }
    if (cpy_r_r5) goto CPyL6;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL12;
CPyL6: ;
    cpy_r_r7 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "is_ygift_grant", 41, CPyStatic_people___globals);
        goto CPyL13;
    }
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/expense/people.py", "is_ygift_grant", 41, CPyStatic_people___globals, "str", cpy_r_r8);
        goto CPyL13;
    }
    cpy_r_r10 = CPyStatics[177]; /* 'yyDAI+yUSDC+yUSDT+yTUSD' */
    cpy_r_r11 = PyUnicode_Compare(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 == -1;
    if (!cpy_r_r12) goto CPyL11;
    cpy_r_r13 = PyErr_Occurred();
    cpy_r_r14 = cpy_r_r13 != NULL;
    if (!cpy_r_r14) goto CPyL11;
    cpy_r_r15 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "is_ygift_grant", 41, CPyStatic_people___globals);
        goto CPyL13;
    }
CPyL11: ;
    cpy_r_r16 = cpy_r_r11 == 0;
    cpy_r_r6 = cpy_r_r16;
CPyL12: ;
    return cpy_r_r6;
CPyL13: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
}

PyObject *CPyPy_people___is_ygift_grant(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_ygift_grant", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_people___is_ygift_grant(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "is_ygift_grant", 39, CPyStatic_people___globals);
    return NULL;
}

char CPyDef_people_____top_level__(void) {
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
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject **cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject **cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject **cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject **cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject **cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "<module>", -1, CPyStatic_people___globals);
        goto CPyL31;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[433]; /* ('Final',) */
    cpy_r_r6 = CPyStatics[24]; /* 'typing' */
    cpy_r_r7 = CPyStatic_people___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "<module>", 1, CPyStatic_people___globals);
        goto CPyL31;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[444]; /* ('TreasuryTx', 'expense') */
    cpy_r_r10 = CPyStatics[99]; /* 'dao_treasury' */
    cpy_r_r11 = CPyStatic_people___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "<module>", 3, CPyStatic_people___globals);
        goto CPyL31;
    }
    CPyModule_dao_treasury = cpy_r_r12;
    CPy_INCREF(CPyModule_dao_treasury);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[178]; /* 'Grants' */
    cpy_r_r14 = CPyStatic_people___globals;
    cpy_r_r15 = CPyStatics[135]; /* 'expense' */
    cpy_r_r16 = CPyDict_GetItem(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "<module>", 6, CPyStatic_people___globals);
        goto CPyL31;
    }
    PyObject *cpy_r_r17[1] = {cpy_r_r13};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = PyObject_Vectorcall(cpy_r_r16, cpy_r_r18, 1, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "<module>", 6, CPyStatic_people___globals);
        goto CPyL31;
    }
    CPyStatic_people___grants = cpy_r_r19;
    CPy_INCREF(CPyStatic_people___grants);
    cpy_r_r20 = CPyStatic_people___globals;
    cpy_r_r21 = CPyStatics[179]; /* 'grants' */
    cpy_r_r22 = CPyDict_SetItem(cpy_r_r20, cpy_r_r21, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "<module>", 6, CPyStatic_people___globals);
        goto CPyL31;
    }
    cpy_r_r24 = CPyStatics[180]; /* 'Website' */
    cpy_r_r25 = CPyStatic_people___grants;
    if (likely(cpy_r_r25 != NULL)) goto CPyL11;
    PyErr_SetString(PyExc_NameError, "value for final name \"grants\" was not set");
    cpy_r_r26 = 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "<module>", 7, CPyStatic_people___globals);
        goto CPyL31;
    }
    CPy_Unreachable();
CPyL11: ;
    PyObject *cpy_r_r27[1] = {cpy_r_r24};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = PyObject_Vectorcall(cpy_r_r25, cpy_r_r28, 1, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "<module>", 7, CPyStatic_people___globals);
        goto CPyL31;
    }
    CPyStatic_people___website = cpy_r_r29;
    CPy_INCREF(CPyStatic_people___website);
    cpy_r_r30 = CPyStatic_people___globals;
    cpy_r_r31 = CPyStatics[181]; /* 'website' */
    cpy_r_r32 = CPyDict_SetItem(cpy_r_r30, cpy_r_r31, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "<module>", 7, CPyStatic_people___globals);
        goto CPyL31;
    }
    cpy_r_r34 = CPyStatics[182]; /* 'UX' */
    cpy_r_r35 = CPyStatic_people___website;
    if (likely(cpy_r_r35 != NULL)) goto CPyL16;
    PyErr_SetString(PyExc_NameError, "value for final name \"website\" was not set");
    cpy_r_r36 = 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "<module>", 8, CPyStatic_people___globals);
        goto CPyL31;
    }
    CPy_Unreachable();
CPyL16: ;
    PyObject *cpy_r_r37[1] = {cpy_r_r34};
    cpy_r_r38 = (PyObject **)&cpy_r_r37;
    cpy_r_r39 = PyObject_Vectorcall(cpy_r_r35, cpy_r_r38, 1, 0);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "<module>", 8, CPyStatic_people___globals);
        goto CPyL31;
    }
    CPyStatic_people___ux = cpy_r_r39;
    CPy_INCREF(CPyStatic_people___ux);
    cpy_r_r40 = CPyStatic_people___globals;
    cpy_r_r41 = CPyStatics[183]; /* 'ux' */
    cpy_r_r42 = CPyDict_SetItem(cpy_r_r40, cpy_r_r41, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "<module>", 8, CPyStatic_people___globals);
        goto CPyL31;
    }
    cpy_r_r44 = CPyStatic_people___globals;
    cpy_r_r45 = CPyStatics[184]; /* 'is_coordinape' */
    cpy_r_r46 = CPyDict_GetItem(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "<module>", 11, CPyStatic_people___globals);
        goto CPyL31;
    }
    cpy_r_r47 = CPyStatics[185]; /* 'Coordinape' */
    cpy_r_r48 = CPyStatic_people___globals;
    cpy_r_r49 = CPyStatics[135]; /* 'expense' */
    cpy_r_r50 = CPyDict_GetItem(cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "<module>", 11, CPyStatic_people___globals);
        goto CPyL32;
    }
    PyObject *cpy_r_r51[1] = {cpy_r_r47};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = PyObject_Vectorcall(cpy_r_r50, cpy_r_r52, 1, 0);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "<module>", 11, CPyStatic_people___globals);
        goto CPyL32;
    }
    PyObject *cpy_r_r54[1] = {cpy_r_r46};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = PyObject_Vectorcall(cpy_r_r53, cpy_r_r55, 1, 0);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "<module>", 11, CPyStatic_people___globals);
        goto CPyL32;
    }
    CPy_DECREF(cpy_r_r46);
    cpy_r_r57 = CPyStatic_people___globals;
    cpy_r_r58 = CPyStatics[184]; /* 'is_coordinape' */
    cpy_r_r59 = CPyDict_SetItem(cpy_r_r57, cpy_r_r58, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "<module>", 11, CPyStatic_people___globals);
        goto CPyL31;
    }
    cpy_r_r61 = CPyStatic_people___globals;
    cpy_r_r62 = CPyStatics[186]; /* 'is_ygift_grant' */
    cpy_r_r63 = CPyDict_GetItem(cpy_r_r61, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "<module>", 38, CPyStatic_people___globals);
        goto CPyL31;
    }
    cpy_r_r64 = CPyStatics[187]; /* 'yGift Team Grant' */
    cpy_r_r65 = CPyStatic_people___grants;
    if (unlikely(cpy_r_r65 == NULL)) {
        goto CPyL33;
    } else
        goto CPyL27;
CPyL25: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"grants\" was not set");
    cpy_r_r66 = 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "<module>", 38, CPyStatic_people___globals);
        goto CPyL31;
    }
    CPy_Unreachable();
CPyL27: ;
    PyObject *cpy_r_r67[1] = {cpy_r_r64};
    cpy_r_r68 = (PyObject **)&cpy_r_r67;
    cpy_r_r69 = PyObject_Vectorcall(cpy_r_r65, cpy_r_r68, 1, 0);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "<module>", 38, CPyStatic_people___globals);
        goto CPyL34;
    }
    PyObject *cpy_r_r70[1] = {cpy_r_r63};
    cpy_r_r71 = (PyObject **)&cpy_r_r70;
    cpy_r_r72 = PyObject_Vectorcall(cpy_r_r69, cpy_r_r71, 1, 0);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "<module>", 38, CPyStatic_people___globals);
        goto CPyL34;
    }
    CPy_DECREF(cpy_r_r63);
    cpy_r_r73 = CPyStatic_people___globals;
    cpy_r_r74 = CPyStatics[186]; /* 'is_ygift_grant' */
    cpy_r_r75 = CPyDict_SetItem(cpy_r_r73, cpy_r_r74, cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r76 = cpy_r_r75 >= 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/people.py", "<module>", 38, CPyStatic_people___globals);
        goto CPyL31;
    }
    return 1;
CPyL31: ;
    cpy_r_r77 = 2;
    return cpy_r_r77;
CPyL32: ;
    CPy_DecRef(cpy_r_r46);
    goto CPyL31;
CPyL33: ;
    CPy_DecRef(cpy_r_r63);
    goto CPyL25;
CPyL34: ;
    CPy_DecRef(cpy_r_r63);
    goto CPyL31;
}
static PyMethodDef securitymodule_methods[] = {
    {"is_yacademy_audit", (PyCFunction)CPyPy_security___is_yacademy_audit, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_chainsec_audit", (PyCFunction)CPyPy_security___is_chainsec_audit, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_statemind_audit", (PyCFunction)CPyPy_security___is_statemind_audit, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_mixbytes_audit", (PyCFunction)CPyPy_security___is_mixbytes_audit, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_other_audit", (PyCFunction)CPyPy_security___is_other_audit, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_bug_bounty", (PyCFunction)CPyPy_security___is_bug_bounty, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_warroom_help", (PyCFunction)CPyPy_security___is_warroom_help, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef securitymodule = {
    PyModuleDef_HEAD_INIT,
    "yearn_treasury.rules.expense.security",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    securitymodule_methods
};

PyObject *CPyInit_yearn_treasury___rules___expense___security(void)
{
    PyObject* modname = NULL;
    if (CPyModule_yearn_treasury___rules___expense___security_internal) {
        Py_INCREF(CPyModule_yearn_treasury___rules___expense___security_internal);
        return CPyModule_yearn_treasury___rules___expense___security_internal;
    }
    CPyModule_yearn_treasury___rules___expense___security_internal = PyModule_Create(&securitymodule);
    if (unlikely(CPyModule_yearn_treasury___rules___expense___security_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_yearn_treasury___rules___expense___security_internal, "__name__");
    CPyStatic_security___globals = PyModule_GetDict(CPyModule_yearn_treasury___rules___expense___security_internal);
    if (unlikely(CPyStatic_security___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_security_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_yearn_treasury___rules___expense___security_internal;
    fail:
    Py_CLEAR(CPyModule_yearn_treasury___rules___expense___security_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_security___security);
    CPyStatic_security___security = NULL;
    CPy_XDECREF(CPyStatic_security___audits);
    CPyStatic_security___audits = NULL;
    return NULL;
}

char CPyDef_security___is_yacademy_audit(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    cpy_r_r0 = CPyStatics[112]; /* 'to_address' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_yacademy_audit", 16, CPyStatic_security___globals);
        goto CPyL12;
    }
    cpy_r_r2 = CPyStatics[188]; /* '0x0E0aF03c405E17D0e486354fe709d3294d07EC44' */
    cpy_r_r3 = PyObject_RichCompare(cpy_r_r1, cpy_r_r2, 2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_yacademy_audit", 16, CPyStatic_security___globals);
        goto CPyL12;
    }
    if (unlikely(!PyBool_Check(cpy_r_r3))) {
        CPy_TypeError("bool", cpy_r_r3); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = cpy_r_r3 == Py_True;
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_yacademy_audit", 16, CPyStatic_security___globals);
        goto CPyL12;
    }
    if (cpy_r_r4) goto CPyL5;
    cpy_r_r5 = cpy_r_r4;
    goto CPyL11;
CPyL5: ;
    cpy_r_r6 = CPyStatics[91]; /* 'hash' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_yacademy_audit", 17, CPyStatic_security___globals);
        goto CPyL12;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/expense/security.py", "is_yacademy_audit", 17, CPyStatic_security___globals, "str", cpy_r_r7);
        goto CPyL12;
    }
    cpy_r_r9 = CPyStatics[189]; /* '0xdf3e6cf2e50052e4eeb57fb2562b5e1b02701014ce65b60e6c8a850c409b341a' */
    cpy_r_r10 = PyUnicode_Compare(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r11 = cpy_r_r10 == -1;
    if (!cpy_r_r11) goto CPyL10;
    cpy_r_r12 = PyErr_Occurred();
    cpy_r_r13 = cpy_r_r12 != NULL;
    if (!cpy_r_r13) goto CPyL10;
    cpy_r_r14 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_yacademy_audit", 17, CPyStatic_security___globals);
        goto CPyL12;
    }
CPyL10: ;
    cpy_r_r15 = cpy_r_r10 != 0;
    cpy_r_r5 = cpy_r_r15;
CPyL11: ;
    return cpy_r_r5;
CPyL12: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
}

PyObject *CPyPy_security___is_yacademy_audit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_yacademy_audit", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_security___is_yacademy_audit(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_yacademy_audit", 12, CPyStatic_security___globals);
    return NULL;
}

char CPyDef_security___is_chainsec_audit(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    cpy_r_r0 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_chainsec_audit", 25, CPyStatic_security___globals);
        goto CPyL37;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/expense/security.py", "is_chainsec_audit", 25, CPyStatic_security___globals, "str", cpy_r_r1);
        goto CPyL37;
    }
    cpy_r_r3 = CPyStatics[190]; /* 'USDC' */
    cpy_r_r4 = PyUnicode_Compare(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 == -1;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r6 = PyErr_Occurred();
    cpy_r_r7 = cpy_r_r6 != NULL;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_chainsec_audit", -1, CPyStatic_security___globals);
        goto CPyL37;
    }
CPyL5: ;
    cpy_r_r9 = cpy_r_r4 == 0;
    if (!cpy_r_r9) goto CPyL7;
    if (cpy_r_r9) {
        goto CPyL13;
    } else
        goto CPyL18;
CPyL7: ;
    cpy_r_r10 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_chainsec_audit", 25, CPyStatic_security___globals);
        goto CPyL37;
    }
    if (likely(PyUnicode_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/expense/security.py", "is_chainsec_audit", 25, CPyStatic_security___globals, "str", cpy_r_r11);
        goto CPyL37;
    }
    cpy_r_r13 = CPyStatics[153]; /* 'USDT' */
    cpy_r_r14 = PyUnicode_Compare(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r15 = cpy_r_r14 == -1;
    if (!cpy_r_r15) goto CPyL12;
    cpy_r_r16 = PyErr_Occurred();
    cpy_r_r17 = cpy_r_r16 != NULL;
    if (!cpy_r_r17) goto CPyL12;
    cpy_r_r18 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_chainsec_audit", -1, CPyStatic_security___globals);
        goto CPyL37;
    }
CPyL12: ;
    cpy_r_r19 = cpy_r_r14 == 0;
    if (!cpy_r_r19) goto CPyL18;
CPyL13: ;
    cpy_r_r20 = CPyStatics[112]; /* 'to_address' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_chainsec_audit", 26, CPyStatic_security___globals);
        goto CPyL37;
    }
    cpy_r_r22 = CPyStatics[191]; /* '0x8bAf5eaF92E37CD9B1FcCD676918A9B3D4F87Dc7' */
    cpy_r_r23 = PyObject_RichCompare(cpy_r_r21, cpy_r_r22, 2);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_chainsec_audit", 26, CPyStatic_security___globals);
        goto CPyL37;
    }
    if (unlikely(!PyBool_Check(cpy_r_r23))) {
        CPy_TypeError("bool", cpy_r_r23); cpy_r_r24 = 2;
    } else
        cpy_r_r24 = cpy_r_r23 == Py_True;
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_chainsec_audit", 26, CPyStatic_security___globals);
        goto CPyL37;
    }
    if (!cpy_r_r24) goto CPyL18;
    return 1;
CPyL18: ;
    cpy_r_r25 = CPyStatics[91]; /* 'hash' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_chainsec_audit", 30, CPyStatic_security___globals);
        goto CPyL37;
    }
    if (likely(PyUnicode_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/expense/security.py", "is_chainsec_audit", 30, CPyStatic_security___globals, "str", cpy_r_r26);
        goto CPyL37;
    }
    cpy_r_r28 = CPyStatics[192]; /* '0x83ec212072f82f4aba4b512051d52c5f016de79a620a580622a0f051e3473a78' */
    cpy_r_r29 = PyUnicode_Compare(cpy_r_r27, cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 == -1;
    if (!cpy_r_r30) goto CPyL23;
    cpy_r_r31 = PyErr_Occurred();
    cpy_r_r32 = cpy_r_r31 != NULL;
    if (!cpy_r_r32) goto CPyL23;
    cpy_r_r33 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_chainsec_audit", 31, CPyStatic_security___globals);
        goto CPyL38;
    }
CPyL23: ;
    cpy_r_r34 = cpy_r_r29 == 0;
    if (cpy_r_r34) {
        goto CPyL39;
    } else
        goto CPyL25;
CPyL24: ;
    cpy_r_r35 = cpy_r_r34;
    goto CPyL36;
CPyL25: ;
    cpy_r_r36 = CPyStatics[193]; /* '0xd0fa31ccf6bf7577a533366955bb528d6d17c928bba1ff13ab273487a27d9602' */
    cpy_r_r37 = PyUnicode_Compare(cpy_r_r27, cpy_r_r36);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r38 = cpy_r_r37 == -1;
    if (!cpy_r_r38) goto CPyL28;
    cpy_r_r39 = PyErr_Occurred();
    cpy_r_r40 = cpy_r_r39 != NULL;
    if (!cpy_r_r40) goto CPyL28;
    cpy_r_r41 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_chainsec_audit", 33, CPyStatic_security___globals);
        goto CPyL37;
    }
CPyL28: ;
    cpy_r_r42 = cpy_r_r37 == 0;
    if (cpy_r_r42) goto CPyL30;
    cpy_r_r43 = cpy_r_r42;
    goto CPyL35;
CPyL30: ;
    cpy_r_r44 = CPyStatics[149]; /* 'log_index' */
    cpy_r_r45 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_chainsec_audit", 34, CPyStatic_security___globals);
        goto CPyL37;
    }
    if (PyLong_Check(cpy_r_r45))
        cpy_r_r46 = cpy_r_r45;
    else {
        cpy_r_r46 = NULL;
    }
    if (cpy_r_r46 != NULL) goto __LL7;
    if (cpy_r_r45 == Py_None)
        cpy_r_r46 = cpy_r_r45;
    else {
        cpy_r_r46 = NULL;
    }
    if (cpy_r_r46 != NULL) goto __LL7;
    CPy_TypeErrorTraceback("yearn_treasury/rules/expense/security.py", "is_chainsec_audit", 34, CPyStatic_security___globals, "int or None", cpy_r_r45);
    goto CPyL37;
__LL7: ;
    cpy_r_r47 = CPyStatics[413]; /* 254 */
    cpy_r_r48 = PyObject_RichCompare(cpy_r_r46, cpy_r_r47, 2);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_chainsec_audit", 34, CPyStatic_security___globals);
        goto CPyL37;
    }
    if (unlikely(!PyBool_Check(cpy_r_r48))) {
        CPy_TypeError("bool", cpy_r_r48); cpy_r_r49 = 2;
    } else
        cpy_r_r49 = cpy_r_r48 == Py_True;
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_chainsec_audit", 34, CPyStatic_security___globals);
        goto CPyL37;
    }
    cpy_r_r43 = cpy_r_r49;
CPyL35: ;
    cpy_r_r35 = cpy_r_r43;
CPyL36: ;
    return cpy_r_r35;
CPyL37: ;
    cpy_r_r50 = 2;
    return cpy_r_r50;
CPyL38: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL37;
CPyL39: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL24;
}

PyObject *CPyPy_security___is_chainsec_audit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_chainsec_audit", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_security___is_chainsec_audit(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_chainsec_audit", 22, CPyStatic_security___globals);
    return NULL;
}

char CPyDef_security___is_statemind_audit(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    cpy_r_r0 = CPyStatics[91]; /* 'hash' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_statemind_audit", 41, CPyStatic_security___globals);
        goto CPyL28;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/expense/security.py", "is_statemind_audit", 41, CPyStatic_security___globals, "str", cpy_r_r1);
        goto CPyL28;
    }
    cpy_r_r3 = CPyStatics[149]; /* 'log_index' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_statemind_audit", 42, CPyStatic_security___globals);
        goto CPyL29;
    }
    if (PyLong_Check(cpy_r_r4))
        cpy_r_r5 = cpy_r_r4;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL8;
    if (cpy_r_r4 == Py_None)
        cpy_r_r5 = cpy_r_r4;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL8;
    CPy_TypeErrorTraceback("yearn_treasury/rules/expense/security.py", "is_statemind_audit", 42, CPyStatic_security___globals, "int or None", cpy_r_r4);
    goto CPyL29;
__LL8: ;
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_r5 == cpy_r_r6;
    if (cpy_r_r7) {
        goto CPyL30;
    } else
        goto CPyL6;
CPyL5: ;
    return 0;
CPyL6: ;
    cpy_r_r8 = CPyStatics[144]; /* '0xeb51cb5a3b4ae618be75bf3e23c2d8e333d93d5e81e869eca7f9612a30079822' */
    cpy_r_r9 = PyUnicode_Compare(cpy_r_r2, cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 == -1;
    if (!cpy_r_r10) goto CPyL9;
    cpy_r_r11 = PyErr_Occurred();
    cpy_r_r12 = cpy_r_r11 != NULL;
    if (!cpy_r_r12) goto CPyL9;
    cpy_r_r13 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_statemind_audit", 46, CPyStatic_security___globals);
        goto CPyL31;
    }
CPyL9: ;
    cpy_r_r14 = cpy_r_r9 == 0;
    if (!cpy_r_r14) goto CPyL13;
    if (likely(PyLong_Check(cpy_r_r5)))
        cpy_r_r15 = CPyTagged_FromObject(cpy_r_r5);
    else {
        CPy_TypeError("int", cpy_r_r5); cpy_r_r15 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r15 == CPY_INT_TAG)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_statemind_audit", 47, CPyStatic_security___globals);
        goto CPyL31;
    }
    cpy_r_r16 = cpy_r_r15 == 386;
    CPyTagged_DECREF(cpy_r_r15);
    if (cpy_r_r16) {
        goto CPyL32;
    } else
        goto CPyL13;
CPyL12: ;
    return 1;
CPyL13: ;
    cpy_r_r17 = CPyStatics[194]; /* '0xcb79cbe5b68d04a1a3feab3360734277020ee0536380843a8c9db3e8356b81d6' */
    cpy_r_r18 = PyUnicode_Compare(cpy_r_r2, cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 == -1;
    if (!cpy_r_r19) goto CPyL16;
    cpy_r_r20 = PyErr_Occurred();
    cpy_r_r21 = cpy_r_r20 != NULL;
    if (!cpy_r_r21) goto CPyL16;
    cpy_r_r22 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_statemind_audit", 51, CPyStatic_security___globals);
        goto CPyL31;
    }
CPyL16: ;
    cpy_r_r23 = cpy_r_r18 == 0;
    if (!cpy_r_r23) goto CPyL20;
    if (likely(PyLong_Check(cpy_r_r5)))
        cpy_r_r24 = CPyTagged_FromObject(cpy_r_r5);
    else {
        CPy_TypeError("int", cpy_r_r5); cpy_r_r24 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r24 == CPY_INT_TAG)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_statemind_audit", 52, CPyStatic_security___globals);
        goto CPyL31;
    }
    cpy_r_r25 = cpy_r_r24 == 796;
    CPyTagged_DECREF(cpy_r_r24);
    if (cpy_r_r25) {
        goto CPyL33;
    } else
        goto CPyL20;
CPyL19: ;
    return 1;
CPyL20: ;
    cpy_r_r26 = CPyStatics[145]; /* '0x3e75d22250d87c183824c3b77ddb9cb11935db2061ce7f34df4f024d0646fcfb' */
    cpy_r_r27 = PyUnicode_Compare(cpy_r_r2, cpy_r_r26);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r28 = cpy_r_r27 == -1;
    if (!cpy_r_r28) goto CPyL23;
    cpy_r_r29 = PyErr_Occurred();
    cpy_r_r30 = cpy_r_r29 != NULL;
    if (!cpy_r_r30) goto CPyL23;
    cpy_r_r31 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_statemind_audit", 56, CPyStatic_security___globals);
        goto CPyL34;
    }
CPyL23: ;
    cpy_r_r32 = cpy_r_r27 == 0;
    if (!cpy_r_r32) goto CPyL35;
    if (likely(PyLong_Check(cpy_r_r5)))
        cpy_r_r33 = CPyTagged_FromObject(cpy_r_r5);
    else {
        CPy_TypeError("int", cpy_r_r5); cpy_r_r33 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r33 == CPY_INT_TAG)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_statemind_audit", 57, CPyStatic_security___globals);
        goto CPyL28;
    }
    cpy_r_r34 = cpy_r_r33 == 230;
    CPyTagged_DECREF(cpy_r_r33);
    if (!cpy_r_r34) goto CPyL27;
    return 1;
CPyL27: ;
    return 0;
CPyL28: ;
    cpy_r_r35 = 2;
    return cpy_r_r35;
CPyL29: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL28;
CPyL30: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL5;
CPyL31: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL28;
CPyL32: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL12;
CPyL33: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL19;
CPyL34: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL28;
CPyL35: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL27;
}

PyObject *CPyPy_security___is_statemind_audit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_statemind_audit", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_security___is_statemind_audit(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_statemind_audit", 39, CPyStatic_security___globals);
    return NULL;
}

char CPyDef_security___is_mixbytes_audit(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    cpy_r_r0 = CPyStatics[91]; /* 'hash' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_mixbytes_audit", 66, CPyStatic_security___globals);
        goto CPyL24;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/expense/security.py", "is_mixbytes_audit", 66, CPyStatic_security___globals, "str", cpy_r_r1);
        goto CPyL24;
    }
    cpy_r_r3 = CPyStatics[194]; /* '0xcb79cbe5b68d04a1a3feab3360734277020ee0536380843a8c9db3e8356b81d6' */
    cpy_r_r4 = PyUnicode_Compare(cpy_r_r2, cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 == -1;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r6 = PyErr_Occurred();
    cpy_r_r7 = cpy_r_r6 != NULL;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_mixbytes_audit", 68, CPyStatic_security___globals);
        goto CPyL25;
    }
CPyL5: ;
    cpy_r_r9 = cpy_r_r4 == 0;
    if (!cpy_r_r9) goto CPyL12;
    cpy_r_r10 = CPyStatics[149]; /* 'log_index' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_mixbytes_audit", 69, CPyStatic_security___globals);
        goto CPyL25;
    }
    if (PyLong_Check(cpy_r_r11))
        cpy_r_r12 = cpy_r_r11;
    else {
        cpy_r_r12 = NULL;
    }
    if (cpy_r_r12 != NULL) goto __LL9;
    if (cpy_r_r11 == Py_None)
        cpy_r_r12 = cpy_r_r11;
    else {
        cpy_r_r12 = NULL;
    }
    if (cpy_r_r12 != NULL) goto __LL9;
    CPy_TypeErrorTraceback("yearn_treasury/rules/expense/security.py", "is_mixbytes_audit", 69, CPyStatic_security___globals, "int or None", cpy_r_r11);
    goto CPyL25;
__LL9: ;
    cpy_r_r13 = CPyStatics[414]; /* 399 */
    cpy_r_r14 = PyObject_RichCompare(cpy_r_r12, cpy_r_r13, 2);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_mixbytes_audit", 69, CPyStatic_security___globals);
        goto CPyL25;
    }
    if (unlikely(!PyBool_Check(cpy_r_r14))) {
        CPy_TypeError("bool", cpy_r_r14); cpy_r_r15 = 2;
    } else
        cpy_r_r15 = cpy_r_r14 == Py_True;
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_mixbytes_audit", 69, CPyStatic_security___globals);
        goto CPyL25;
    }
    if (cpy_r_r15) {
        goto CPyL26;
    } else
        goto CPyL12;
CPyL11: ;
    return 1;
CPyL12: ;
    cpy_r_r16 = CPyStatics[195]; /* '0xca61496c32806ba34f0deb331c32969eda11c947fdd6235173e6fa13d9a1c288' */
    cpy_r_r17 = PyUnicode_Compare(cpy_r_r2, cpy_r_r16);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r18 = cpy_r_r17 == -1;
    if (!cpy_r_r18) goto CPyL15;
    cpy_r_r19 = PyErr_Occurred();
    cpy_r_r20 = cpy_r_r19 != NULL;
    if (!cpy_r_r20) goto CPyL15;
    cpy_r_r21 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_mixbytes_audit", 73, CPyStatic_security___globals);
        goto CPyL24;
    }
CPyL15: ;
    cpy_r_r22 = cpy_r_r17 == 0;
    if (!cpy_r_r22) goto CPyL23;
    cpy_r_r23 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_mixbytes_audit", 74, CPyStatic_security___globals);
        goto CPyL24;
    }
    if (likely(PyUnicode_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/expense/security.py", "is_mixbytes_audit", 74, CPyStatic_security___globals, "str", cpy_r_r24);
        goto CPyL24;
    }
    cpy_r_r26 = CPyStatics[190]; /* 'USDC' */
    cpy_r_r27 = PyUnicode_Compare(cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r28 = cpy_r_r27 == -1;
    if (!cpy_r_r28) goto CPyL21;
    cpy_r_r29 = PyErr_Occurred();
    cpy_r_r30 = cpy_r_r29 != NULL;
    if (!cpy_r_r30) goto CPyL21;
    cpy_r_r31 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_mixbytes_audit", 74, CPyStatic_security___globals);
        goto CPyL24;
    }
CPyL21: ;
    cpy_r_r32 = cpy_r_r27 == 0;
    if (!cpy_r_r32) goto CPyL23;
    return 1;
CPyL23: ;
    return 0;
CPyL24: ;
    cpy_r_r33 = 2;
    return cpy_r_r33;
CPyL25: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL24;
CPyL26: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL11;
}

PyObject *CPyPy_security___is_mixbytes_audit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_mixbytes_audit", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_security___is_mixbytes_audit(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_mixbytes_audit", 64, CPyStatic_security___globals);
    return NULL;
}

char CPyDef_security___is_other_audit(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = CPyStatics[91]; /* 'hash' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_other_audit", 82, CPyStatic_security___globals);
        goto CPyL16;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/expense/security.py", "is_other_audit", 82, CPyStatic_security___globals, "str", cpy_r_r1);
        goto CPyL16;
    }
    cpy_r_r3 = CPyStatics[475]; /* frozenset({'0x5e95d5b0773eefaef9c7187d5e9187a89717d269f48e5dcf707acfe1a7e55cb9',
                                             '0x70cdcffa444f70754a1df2d80a1adf9c432dfe678381e05ac78ab50b9de9d393',
                                             '0x7df5566cc9ff8ed0aafe126b74ad0e3957e62d530d007565ee32bd1303bcec32',
                                             '0x9cfd1098c5459002a90ffa23931f7bbec430b3f2ec0ef2d3a641cef574eb0817'}) */
    cpy_r_r4 = PySet_Contains(cpy_r_r3, cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_other_audit", 83, CPyStatic_security___globals);
        goto CPyL17;
    }
    cpy_r_r6 = cpy_r_r4;
    if (cpy_r_r6) {
        goto CPyL18;
    } else
        goto CPyL5;
CPyL4: ;
    return 1;
CPyL5: ;
    cpy_r_r7 = CPyStatics[200]; /* '0x70ecc34da6c461a0bb9dadfbc4d082a8486e742cbb454f0f67b2df384fb9bffc' */
    cpy_r_r8 = PyUnicode_Compare(cpy_r_r2, cpy_r_r7);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r9 = cpy_r_r8 == -1;
    if (!cpy_r_r9) goto CPyL8;
    cpy_r_r10 = PyErr_Occurred();
    cpy_r_r11 = cpy_r_r10 != NULL;
    if (!cpy_r_r11) goto CPyL8;
    cpy_r_r12 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_other_audit", 91, CPyStatic_security___globals);
        goto CPyL16;
    }
CPyL8: ;
    cpy_r_r13 = cpy_r_r8 == 0;
    if (!cpy_r_r13) goto CPyL15;
    cpy_r_r14 = CPyStatics[149]; /* 'log_index' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_other_audit", 92, CPyStatic_security___globals);
        goto CPyL16;
    }
    if (PyLong_Check(cpy_r_r15))
        cpy_r_r16 = cpy_r_r15;
    else {
        cpy_r_r16 = NULL;
    }
    if (cpy_r_r16 != NULL) goto __LL10;
    if (cpy_r_r15 == Py_None)
        cpy_r_r16 = cpy_r_r15;
    else {
        cpy_r_r16 = NULL;
    }
    if (cpy_r_r16 != NULL) goto __LL10;
    CPy_TypeErrorTraceback("yearn_treasury/rules/expense/security.py", "is_other_audit", 92, CPyStatic_security___globals, "int or None", cpy_r_r15);
    goto CPyL16;
__LL10: ;
    cpy_r_r17 = CPyStatics[415]; /* 89 */
    cpy_r_r18 = PyObject_RichCompare(cpy_r_r16, cpy_r_r17, 2);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_other_audit", 92, CPyStatic_security___globals);
        goto CPyL16;
    }
    if (unlikely(!PyBool_Check(cpy_r_r18))) {
        CPy_TypeError("bool", cpy_r_r18); cpy_r_r19 = 2;
    } else
        cpy_r_r19 = cpy_r_r18 == Py_True;
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_other_audit", 92, CPyStatic_security___globals);
        goto CPyL16;
    }
    if (!cpy_r_r19) goto CPyL15;
    return 1;
CPyL15: ;
    return 0;
CPyL16: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL17: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL16;
CPyL18: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL4;
}

PyObject *CPyPy_security___is_other_audit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_other_audit", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_security___is_other_audit(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_other_audit", 81, CPyStatic_security___globals);
    return NULL;
}

char CPyDef_security___is_bug_bounty(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    cpy_r_r0 = CPyStatics[91]; /* 'hash' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_bug_bounty", 100, CPyStatic_security___globals);
        goto CPyL34;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/expense/security.py", "is_bug_bounty", 100, CPyStatic_security___globals, "str", cpy_r_r1);
        goto CPyL34;
    }
    cpy_r_r3 = CPyStatics[201]; /* '0x4df2eee567ebf2a41b555fca3fed41300b12ff2dc3c79ffaee8b7bdf262f9303' */
    cpy_r_r4 = PyUnicode_Compare(cpy_r_r2, cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 == -1;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r6 = PyErr_Occurred();
    cpy_r_r7 = cpy_r_r6 != NULL;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_bug_bounty", 101, CPyStatic_security___globals);
        goto CPyL35;
    }
CPyL5: ;
    cpy_r_r9 = cpy_r_r4 == 0;
    if (cpy_r_r9) {
        goto CPyL36;
    } else
        goto CPyL7;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r10 = CPyStatics[147]; /* '0x5deca5d6c934372c174bbef8be9a1e103e06d8b93fd3bf8d77865dfeb34fe3be' */
    cpy_r_r11 = PyUnicode_Compare(cpy_r_r2, cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 == -1;
    if (!cpy_r_r12) goto CPyL10;
    cpy_r_r13 = PyErr_Occurred();
    cpy_r_r14 = cpy_r_r13 != NULL;
    if (!cpy_r_r14) goto CPyL10;
    cpy_r_r15 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_bug_bounty", 104, CPyStatic_security___globals);
        goto CPyL35;
    }
CPyL10: ;
    cpy_r_r16 = cpy_r_r11 == 0;
    if (!cpy_r_r16) goto CPyL23;
    cpy_r_r17 = CPyStatics[149]; /* 'log_index' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_bug_bounty", 105, CPyStatic_security___globals);
        goto CPyL35;
    }
    if (PyLong_Check(cpy_r_r18))
        cpy_r_r19 = cpy_r_r18;
    else {
        cpy_r_r19 = NULL;
    }
    if (cpy_r_r19 != NULL) goto __LL11;
    if (cpy_r_r18 == Py_None)
        cpy_r_r19 = cpy_r_r18;
    else {
        cpy_r_r19 = NULL;
    }
    if (cpy_r_r19 != NULL) goto __LL11;
    CPy_TypeErrorTraceback("yearn_treasury/rules/expense/security.py", "is_bug_bounty", 105, CPyStatic_security___globals, "int or None", cpy_r_r18);
    goto CPyL35;
__LL11: ;
    cpy_r_r20 = CPyStatics[403]; /* 100 */
    cpy_r_r21 = PyObject_RichCompare(cpy_r_r19, cpy_r_r20, 2);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_bug_bounty", -1, CPyStatic_security___globals);
        goto CPyL35;
    }
    if (unlikely(!PyBool_Check(cpy_r_r21))) {
        CPy_TypeError("bool", cpy_r_r21); cpy_r_r22 = 2;
    } else
        cpy_r_r22 = cpy_r_r21 == Py_True;
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_bug_bounty", -1, CPyStatic_security___globals);
        goto CPyL35;
    }
    if (!cpy_r_r22) goto CPyL17;
    if (cpy_r_r22) {
        goto CPyL37;
    } else
        goto CPyL23;
CPyL17: ;
    cpy_r_r23 = CPyStatics[149]; /* 'log_index' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_bug_bounty", 105, CPyStatic_security___globals);
        goto CPyL35;
    }
    if (PyLong_Check(cpy_r_r24))
        cpy_r_r25 = cpy_r_r24;
    else {
        cpy_r_r25 = NULL;
    }
    if (cpy_r_r25 != NULL) goto __LL12;
    if (cpy_r_r24 == Py_None)
        cpy_r_r25 = cpy_r_r24;
    else {
        cpy_r_r25 = NULL;
    }
    if (cpy_r_r25 != NULL) goto __LL12;
    CPy_TypeErrorTraceback("yearn_treasury/rules/expense/security.py", "is_bug_bounty", 105, CPyStatic_security___globals, "int or None", cpy_r_r24);
    goto CPyL35;
__LL12: ;
    cpy_r_r26 = CPyStatics[416]; /* 101 */
    cpy_r_r27 = PyObject_RichCompare(cpy_r_r25, cpy_r_r26, 2);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_bug_bounty", -1, CPyStatic_security___globals);
        goto CPyL35;
    }
    if (unlikely(!PyBool_Check(cpy_r_r27))) {
        CPy_TypeError("bool", cpy_r_r27); cpy_r_r28 = 2;
    } else
        cpy_r_r28 = cpy_r_r27 == Py_True;
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_bug_bounty", -1, CPyStatic_security___globals);
        goto CPyL35;
    }
    if (cpy_r_r28) {
        goto CPyL37;
    } else
        goto CPyL23;
CPyL22: ;
    return 1;
CPyL23: ;
    cpy_r_r29 = CPyStatics[202]; /* '0x3e045ced19590db8905d8a69c2f0fd0acd4f90301cf6356742e735cd7caa0964' */
    cpy_r_r30 = PyUnicode_Compare(cpy_r_r2, cpy_r_r29);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r31 = cpy_r_r30 == -1;
    if (!cpy_r_r31) goto CPyL26;
    cpy_r_r32 = PyErr_Occurred();
    cpy_r_r33 = cpy_r_r32 != NULL;
    if (!cpy_r_r33) goto CPyL26;
    cpy_r_r34 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_bug_bounty", 110, CPyStatic_security___globals);
        goto CPyL34;
    }
CPyL26: ;
    cpy_r_r35 = cpy_r_r30 == 0;
    if (!cpy_r_r35) goto CPyL33;
    cpy_r_r36 = CPyStatics[149]; /* 'log_index' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_bug_bounty", 111, CPyStatic_security___globals);
        goto CPyL34;
    }
    if (PyLong_Check(cpy_r_r37))
        cpy_r_r38 = cpy_r_r37;
    else {
        cpy_r_r38 = NULL;
    }
    if (cpy_r_r38 != NULL) goto __LL13;
    if (cpy_r_r37 == Py_None)
        cpy_r_r38 = cpy_r_r37;
    else {
        cpy_r_r38 = NULL;
    }
    if (cpy_r_r38 != NULL) goto __LL13;
    CPy_TypeErrorTraceback("yearn_treasury/rules/expense/security.py", "is_bug_bounty", 111, CPyStatic_security___globals, "int or None", cpy_r_r37);
    goto CPyL34;
__LL13: ;
    cpy_r_r39 = CPyStatics[417]; /* 327 */
    cpy_r_r40 = PyObject_RichCompare(cpy_r_r38, cpy_r_r39, 2);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_bug_bounty", 111, CPyStatic_security___globals);
        goto CPyL34;
    }
    if (unlikely(!PyBool_Check(cpy_r_r40))) {
        CPy_TypeError("bool", cpy_r_r40); cpy_r_r41 = 2;
    } else
        cpy_r_r41 = cpy_r_r40 == Py_True;
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_bug_bounty", 111, CPyStatic_security___globals);
        goto CPyL34;
    }
    if (!cpy_r_r41) goto CPyL33;
    return 1;
CPyL33: ;
    return 0;
CPyL34: ;
    cpy_r_r42 = 2;
    return cpy_r_r42;
CPyL35: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL34;
CPyL36: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL6;
CPyL37: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL22;
}

PyObject *CPyPy_security___is_bug_bounty(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_bug_bounty", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_security___is_bug_bounty(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_bug_bounty", 99, CPyStatic_security___globals);
    return NULL;
}

char CPyDef_security___is_warroom_help(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = CPyStatics[91]; /* 'hash' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_warroom_help", 128, CPyStatic_security___globals);
        goto CPyL13;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/expense/security.py", "is_warroom_help", 128, CPyStatic_security___globals, "str", cpy_r_r1);
        goto CPyL13;
    }
    cpy_r_r3 = CPyStatics[195]; /* '0xca61496c32806ba34f0deb331c32969eda11c947fdd6235173e6fa13d9a1c288' */
    cpy_r_r4 = PyUnicode_Compare(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 == -1;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r6 = PyErr_Occurred();
    cpy_r_r7 = cpy_r_r6 != NULL;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_warroom_help", 128, CPyStatic_security___globals);
        goto CPyL13;
    }
CPyL5: ;
    cpy_r_r9 = cpy_r_r4 == 0;
    if (cpy_r_r9) goto CPyL7;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL12;
CPyL7: ;
    cpy_r_r11 = CPyStatics[149]; /* 'log_index' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_warroom_help", 129, CPyStatic_security___globals);
        goto CPyL13;
    }
    if (PyLong_Check(cpy_r_r12))
        cpy_r_r13 = cpy_r_r12;
    else {
        cpy_r_r13 = NULL;
    }
    if (cpy_r_r13 != NULL) goto __LL14;
    if (cpy_r_r12 == Py_None)
        cpy_r_r13 = cpy_r_r12;
    else {
        cpy_r_r13 = NULL;
    }
    if (cpy_r_r13 != NULL) goto __LL14;
    CPy_TypeErrorTraceback("yearn_treasury/rules/expense/security.py", "is_warroom_help", 129, CPyStatic_security___globals, "int or None", cpy_r_r12);
    goto CPyL13;
__LL14: ;
    cpy_r_r14 = CPyStatics[418]; /* 152 */
    cpy_r_r15 = PyObject_RichCompare(cpy_r_r13, cpy_r_r14, 2);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_warroom_help", 129, CPyStatic_security___globals);
        goto CPyL13;
    }
    if (unlikely(!PyBool_Check(cpy_r_r15))) {
        CPy_TypeError("bool", cpy_r_r15); cpy_r_r16 = 2;
    } else
        cpy_r_r16 = cpy_r_r15 == Py_True;
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_warroom_help", 129, CPyStatic_security___globals);
        goto CPyL13;
    }
    cpy_r_r10 = cpy_r_r16;
CPyL12: ;
    return cpy_r_r10;
CPyL13: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
}

PyObject *CPyPy_security___is_warroom_help(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_warroom_help", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_security___is_warroom_help(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "is_warroom_help", 125, CPyStatic_security___globals);
    return NULL;
}

char CPyDef_security_____top_level__(void) {
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
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject **cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
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
    char cpy_r_r48;
    PyObject **cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject **cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject **cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject **cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject **cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject **cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    int32_t cpy_r_r99;
    char cpy_r_r100;
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
    char cpy_r_r111;
    PyObject **cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject **cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    char cpy_r_r132;
    PyObject **cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject **cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    int32_t cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    char cpy_r_r153;
    PyObject **cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject **cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    int32_t cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    char cpy_r_r171;
    PyObject **cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject **cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    char cpy_r_r192;
    PyObject **cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject **cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    int32_t cpy_r_r201;
    char cpy_r_r202;
    char cpy_r_r203;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", -1, CPyStatic_security___globals);
        goto CPyL85;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[433]; /* ('Final',) */
    cpy_r_r6 = CPyStatics[24]; /* 'typing' */
    cpy_r_r7 = CPyStatic_security___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 1, CPyStatic_security___globals);
        goto CPyL85;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[444]; /* ('TreasuryTx', 'expense') */
    cpy_r_r10 = CPyStatics[99]; /* 'dao_treasury' */
    cpy_r_r11 = CPyStatic_security___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 3, CPyStatic_security___globals);
        goto CPyL85;
    }
    CPyModule_dao_treasury = cpy_r_r12;
    CPy_INCREF(CPyModule_dao_treasury);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[434]; /* ('Network',) */
    cpy_r_r14 = CPyStatics[71]; /* 'y' */
    cpy_r_r15 = CPyStatic_security___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 4, CPyStatic_security___globals);
        goto CPyL85;
    }
    CPyModule_y = cpy_r_r16;
    CPy_INCREF(CPyModule_y);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[203]; /* 'Security' */
    cpy_r_r18 = CPyStatic_security___globals;
    cpy_r_r19 = CPyStatics[135]; /* 'expense' */
    cpy_r_r20 = CPyDict_GetItem(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 7, CPyStatic_security___globals);
        goto CPyL85;
    }
    PyObject *cpy_r_r21[1] = {cpy_r_r17};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = PyObject_Vectorcall(cpy_r_r20, cpy_r_r22, 1, 0);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 7, CPyStatic_security___globals);
        goto CPyL85;
    }
    CPyStatic_security___security = cpy_r_r23;
    CPy_INCREF(CPyStatic_security___security);
    cpy_r_r24 = CPyStatic_security___globals;
    cpy_r_r25 = CPyStatics[204]; /* 'security' */
    cpy_r_r26 = CPyDict_SetItem(cpy_r_r24, cpy_r_r25, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 7, CPyStatic_security___globals);
        goto CPyL85;
    }
    cpy_r_r28 = CPyStatics[205]; /* 'Audits' */
    cpy_r_r29 = CPyStatic_security___security;
    if (likely(cpy_r_r29 != NULL)) goto CPyL12;
    PyErr_SetString(PyExc_NameError, "value for final name \"security\" was not set");
    cpy_r_r30 = 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 8, CPyStatic_security___globals);
        goto CPyL85;
    }
    CPy_Unreachable();
CPyL12: ;
    PyObject *cpy_r_r31[1] = {cpy_r_r28};
    cpy_r_r32 = (PyObject **)&cpy_r_r31;
    cpy_r_r33 = PyObject_Vectorcall(cpy_r_r29, cpy_r_r32, 1, 0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 8, CPyStatic_security___globals);
        goto CPyL85;
    }
    CPyStatic_security___audits = cpy_r_r33;
    CPy_INCREF(CPyStatic_security___audits);
    cpy_r_r34 = CPyStatic_security___globals;
    cpy_r_r35 = CPyStatics[206]; /* 'audits' */
    cpy_r_r36 = CPyDict_SetItem(cpy_r_r34, cpy_r_r35, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 8, CPyStatic_security___globals);
        goto CPyL85;
    }
    cpy_r_r38 = CPyStatic_security___globals;
    cpy_r_r39 = CPyStatics[207]; /* 'is_yacademy_audit' */
    cpy_r_r40 = CPyDict_GetItem(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 11, CPyStatic_security___globals);
        goto CPyL85;
    }
    cpy_r_r41 = CPyStatics[208]; /* 'yAcademy' */
    cpy_r_r42 = CPyStatic_security___globals;
    cpy_r_r43 = CPyStatics[70]; /* 'Network' */
    cpy_r_r44 = CPyDict_GetItem(cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 11, CPyStatic_security___globals);
        goto CPyL86;
    }
    cpy_r_r45 = CPyStatics[78]; /* 'Mainnet' */
    cpy_r_r46 = CPyObject_GetAttr(cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 11, CPyStatic_security___globals);
        goto CPyL86;
    }
    cpy_r_r47 = CPyStatic_security___audits;
    if (unlikely(cpy_r_r47 == NULL)) {
        goto CPyL87;
    } else
        goto CPyL20;
CPyL18: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"audits\" was not set");
    cpy_r_r48 = 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 11, CPyStatic_security___globals);
        goto CPyL85;
    }
    CPy_Unreachable();
CPyL20: ;
    PyObject *cpy_r_r49[2] = {cpy_r_r41, cpy_r_r46};
    cpy_r_r50 = (PyObject **)&cpy_r_r49;
    cpy_r_r51 = PyObject_Vectorcall(cpy_r_r47, cpy_r_r50, 2, 0);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 11, CPyStatic_security___globals);
        goto CPyL88;
    }
    CPy_DECREF(cpy_r_r46);
    PyObject *cpy_r_r52[1] = {cpy_r_r40};
    cpy_r_r53 = (PyObject **)&cpy_r_r52;
    cpy_r_r54 = PyObject_Vectorcall(cpy_r_r51, cpy_r_r53, 1, 0);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 11, CPyStatic_security___globals);
        goto CPyL86;
    }
    CPy_DECREF(cpy_r_r40);
    cpy_r_r55 = CPyStatic_security___globals;
    cpy_r_r56 = CPyStatics[207]; /* 'is_yacademy_audit' */
    cpy_r_r57 = CPyDict_SetItem(cpy_r_r55, cpy_r_r56, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 11, CPyStatic_security___globals);
        goto CPyL85;
    }
    cpy_r_r59 = CPyStatic_security___globals;
    cpy_r_r60 = CPyStatics[209]; /* 'is_chainsec_audit' */
    cpy_r_r61 = CPyDict_GetItem(cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 21, CPyStatic_security___globals);
        goto CPyL85;
    }
    cpy_r_r62 = CPyStatics[210]; /* 'ChainSec' */
    cpy_r_r63 = CPyStatic_security___globals;
    cpy_r_r64 = CPyStatics[70]; /* 'Network' */
    cpy_r_r65 = CPyDict_GetItem(cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 21, CPyStatic_security___globals);
        goto CPyL89;
    }
    cpy_r_r66 = CPyStatics[78]; /* 'Mainnet' */
    cpy_r_r67 = CPyObject_GetAttr(cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 21, CPyStatic_security___globals);
        goto CPyL89;
    }
    cpy_r_r68 = CPyStatic_security___audits;
    if (unlikely(cpy_r_r68 == NULL)) {
        goto CPyL90;
    } else
        goto CPyL29;
CPyL27: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"audits\" was not set");
    cpy_r_r69 = 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 21, CPyStatic_security___globals);
        goto CPyL85;
    }
    CPy_Unreachable();
CPyL29: ;
    PyObject *cpy_r_r70[2] = {cpy_r_r62, cpy_r_r67};
    cpy_r_r71 = (PyObject **)&cpy_r_r70;
    cpy_r_r72 = PyObject_Vectorcall(cpy_r_r68, cpy_r_r71, 2, 0);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 21, CPyStatic_security___globals);
        goto CPyL91;
    }
    CPy_DECREF(cpy_r_r67);
    PyObject *cpy_r_r73[1] = {cpy_r_r61};
    cpy_r_r74 = (PyObject **)&cpy_r_r73;
    cpy_r_r75 = PyObject_Vectorcall(cpy_r_r72, cpy_r_r74, 1, 0);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 21, CPyStatic_security___globals);
        goto CPyL89;
    }
    CPy_DECREF(cpy_r_r61);
    cpy_r_r76 = CPyStatic_security___globals;
    cpy_r_r77 = CPyStatics[209]; /* 'is_chainsec_audit' */
    cpy_r_r78 = CPyDict_SetItem(cpy_r_r76, cpy_r_r77, cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 21, CPyStatic_security___globals);
        goto CPyL85;
    }
    cpy_r_r80 = CPyStatic_security___globals;
    cpy_r_r81 = CPyStatics[211]; /* 'is_statemind_audit' */
    cpy_r_r82 = CPyDict_GetItem(cpy_r_r80, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 38, CPyStatic_security___globals);
        goto CPyL85;
    }
    cpy_r_r83 = CPyStatics[212]; /* 'StateMind' */
    cpy_r_r84 = CPyStatic_security___globals;
    cpy_r_r85 = CPyStatics[70]; /* 'Network' */
    cpy_r_r86 = CPyDict_GetItem(cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 38, CPyStatic_security___globals);
        goto CPyL92;
    }
    cpy_r_r87 = CPyStatics[78]; /* 'Mainnet' */
    cpy_r_r88 = CPyObject_GetAttr(cpy_r_r86, cpy_r_r87);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 38, CPyStatic_security___globals);
        goto CPyL92;
    }
    cpy_r_r89 = CPyStatic_security___audits;
    if (unlikely(cpy_r_r89 == NULL)) {
        goto CPyL93;
    } else
        goto CPyL38;
CPyL36: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"audits\" was not set");
    cpy_r_r90 = 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 38, CPyStatic_security___globals);
        goto CPyL85;
    }
    CPy_Unreachable();
CPyL38: ;
    PyObject *cpy_r_r91[2] = {cpy_r_r83, cpy_r_r88};
    cpy_r_r92 = (PyObject **)&cpy_r_r91;
    cpy_r_r93 = PyObject_Vectorcall(cpy_r_r89, cpy_r_r92, 2, 0);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 38, CPyStatic_security___globals);
        goto CPyL94;
    }
    CPy_DECREF(cpy_r_r88);
    PyObject *cpy_r_r94[1] = {cpy_r_r82};
    cpy_r_r95 = (PyObject **)&cpy_r_r94;
    cpy_r_r96 = PyObject_Vectorcall(cpy_r_r93, cpy_r_r95, 1, 0);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 38, CPyStatic_security___globals);
        goto CPyL92;
    }
    CPy_DECREF(cpy_r_r82);
    cpy_r_r97 = CPyStatic_security___globals;
    cpy_r_r98 = CPyStatics[211]; /* 'is_statemind_audit' */
    cpy_r_r99 = CPyDict_SetItem(cpy_r_r97, cpy_r_r98, cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    cpy_r_r100 = cpy_r_r99 >= 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 38, CPyStatic_security___globals);
        goto CPyL85;
    }
    cpy_r_r101 = CPyStatic_security___globals;
    cpy_r_r102 = CPyStatics[213]; /* 'is_mixbytes_audit' */
    cpy_r_r103 = CPyDict_GetItem(cpy_r_r101, cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 63, CPyStatic_security___globals);
        goto CPyL85;
    }
    cpy_r_r104 = CPyStatics[214]; /* 'MixBytes' */
    cpy_r_r105 = CPyStatic_security___globals;
    cpy_r_r106 = CPyStatics[70]; /* 'Network' */
    cpy_r_r107 = CPyDict_GetItem(cpy_r_r105, cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 63, CPyStatic_security___globals);
        goto CPyL95;
    }
    cpy_r_r108 = CPyStatics[78]; /* 'Mainnet' */
    cpy_r_r109 = CPyObject_GetAttr(cpy_r_r107, cpy_r_r108);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 63, CPyStatic_security___globals);
        goto CPyL95;
    }
    cpy_r_r110 = CPyStatic_security___audits;
    if (unlikely(cpy_r_r110 == NULL)) {
        goto CPyL96;
    } else
        goto CPyL47;
CPyL45: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"audits\" was not set");
    cpy_r_r111 = 0;
    if (unlikely(!cpy_r_r111)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 63, CPyStatic_security___globals);
        goto CPyL85;
    }
    CPy_Unreachable();
CPyL47: ;
    PyObject *cpy_r_r112[2] = {cpy_r_r104, cpy_r_r109};
    cpy_r_r113 = (PyObject **)&cpy_r_r112;
    cpy_r_r114 = PyObject_Vectorcall(cpy_r_r110, cpy_r_r113, 2, 0);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 63, CPyStatic_security___globals);
        goto CPyL97;
    }
    CPy_DECREF(cpy_r_r109);
    PyObject *cpy_r_r115[1] = {cpy_r_r103};
    cpy_r_r116 = (PyObject **)&cpy_r_r115;
    cpy_r_r117 = PyObject_Vectorcall(cpy_r_r114, cpy_r_r116, 1, 0);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 63, CPyStatic_security___globals);
        goto CPyL95;
    }
    CPy_DECREF(cpy_r_r103);
    cpy_r_r118 = CPyStatic_security___globals;
    cpy_r_r119 = CPyStatics[213]; /* 'is_mixbytes_audit' */
    cpy_r_r120 = CPyDict_SetItem(cpy_r_r118, cpy_r_r119, cpy_r_r117);
    CPy_DECREF(cpy_r_r117);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 63, CPyStatic_security___globals);
        goto CPyL85;
    }
    cpy_r_r122 = CPyStatic_security___globals;
    cpy_r_r123 = CPyStatics[215]; /* 'is_other_audit' */
    cpy_r_r124 = CPyDict_GetItem(cpy_r_r122, cpy_r_r123);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 80, CPyStatic_security___globals);
        goto CPyL85;
    }
    cpy_r_r125 = CPyStatics[216]; /* 'Unspecified Audit' */
    cpy_r_r126 = CPyStatic_security___globals;
    cpy_r_r127 = CPyStatics[70]; /* 'Network' */
    cpy_r_r128 = CPyDict_GetItem(cpy_r_r126, cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 80, CPyStatic_security___globals);
        goto CPyL98;
    }
    cpy_r_r129 = CPyStatics[78]; /* 'Mainnet' */
    cpy_r_r130 = CPyObject_GetAttr(cpy_r_r128, cpy_r_r129);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 80, CPyStatic_security___globals);
        goto CPyL98;
    }
    cpy_r_r131 = CPyStatic_security___audits;
    if (unlikely(cpy_r_r131 == NULL)) {
        goto CPyL99;
    } else
        goto CPyL56;
CPyL54: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"audits\" was not set");
    cpy_r_r132 = 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 80, CPyStatic_security___globals);
        goto CPyL85;
    }
    CPy_Unreachable();
CPyL56: ;
    PyObject *cpy_r_r133[2] = {cpy_r_r125, cpy_r_r130};
    cpy_r_r134 = (PyObject **)&cpy_r_r133;
    cpy_r_r135 = PyObject_Vectorcall(cpy_r_r131, cpy_r_r134, 2, 0);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 80, CPyStatic_security___globals);
        goto CPyL100;
    }
    CPy_DECREF(cpy_r_r130);
    PyObject *cpy_r_r136[1] = {cpy_r_r124};
    cpy_r_r137 = (PyObject **)&cpy_r_r136;
    cpy_r_r138 = PyObject_Vectorcall(cpy_r_r135, cpy_r_r137, 1, 0);
    CPy_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 80, CPyStatic_security___globals);
        goto CPyL98;
    }
    CPy_DECREF(cpy_r_r124);
    cpy_r_r139 = CPyStatic_security___globals;
    cpy_r_r140 = CPyStatics[215]; /* 'is_other_audit' */
    cpy_r_r141 = CPyDict_SetItem(cpy_r_r139, cpy_r_r140, cpy_r_r138);
    CPy_DECREF(cpy_r_r138);
    cpy_r_r142 = cpy_r_r141 >= 0;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 80, CPyStatic_security___globals);
        goto CPyL85;
    }
    cpy_r_r143 = CPyStatic_security___globals;
    cpy_r_r144 = CPyStatics[217]; /* 'is_bug_bounty' */
    cpy_r_r145 = CPyDict_GetItem(cpy_r_r143, cpy_r_r144);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 98, CPyStatic_security___globals);
        goto CPyL85;
    }
    cpy_r_r146 = CPyStatics[218]; /* 'Bug Bounty' */
    cpy_r_r147 = CPyStatic_security___globals;
    cpy_r_r148 = CPyStatics[70]; /* 'Network' */
    cpy_r_r149 = CPyDict_GetItem(cpy_r_r147, cpy_r_r148);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 98, CPyStatic_security___globals);
        goto CPyL101;
    }
    cpy_r_r150 = CPyStatics[78]; /* 'Mainnet' */
    cpy_r_r151 = CPyObject_GetAttr(cpy_r_r149, cpy_r_r150);
    CPy_DECREF(cpy_r_r149);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 98, CPyStatic_security___globals);
        goto CPyL101;
    }
    cpy_r_r152 = CPyStatic_security___security;
    if (unlikely(cpy_r_r152 == NULL)) {
        goto CPyL102;
    } else
        goto CPyL65;
CPyL63: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"security\" was not set");
    cpy_r_r153 = 0;
    if (unlikely(!cpy_r_r153)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 98, CPyStatic_security___globals);
        goto CPyL85;
    }
    CPy_Unreachable();
CPyL65: ;
    PyObject *cpy_r_r154[2] = {cpy_r_r146, cpy_r_r151};
    cpy_r_r155 = (PyObject **)&cpy_r_r154;
    cpy_r_r156 = PyObject_Vectorcall(cpy_r_r152, cpy_r_r155, 2, 0);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 98, CPyStatic_security___globals);
        goto CPyL103;
    }
    CPy_DECREF(cpy_r_r151);
    PyObject *cpy_r_r157[1] = {cpy_r_r145};
    cpy_r_r158 = (PyObject **)&cpy_r_r157;
    cpy_r_r159 = PyObject_Vectorcall(cpy_r_r156, cpy_r_r158, 1, 0);
    CPy_DECREF(cpy_r_r156);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 98, CPyStatic_security___globals);
        goto CPyL101;
    }
    CPy_DECREF(cpy_r_r145);
    cpy_r_r160 = CPyStatic_security___globals;
    cpy_r_r161 = CPyStatics[217]; /* 'is_bug_bounty' */
    cpy_r_r162 = CPyDict_SetItem(cpy_r_r160, cpy_r_r161, cpy_r_r159);
    CPy_DECREF(cpy_r_r159);
    cpy_r_r163 = cpy_r_r162 >= 0;
    if (unlikely(!cpy_r_r163)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 98, CPyStatic_security___globals);
        goto CPyL85;
    }
    cpy_r_r164 = CPyStatics[219]; /* 'Anti-Spam Discord Bot' */
    cpy_r_r165 = CPyStatic_security___globals;
    cpy_r_r166 = CPyStatics[70]; /* 'Network' */
    cpy_r_r167 = CPyDict_GetItem(cpy_r_r165, cpy_r_r166);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 118, CPyStatic_security___globals);
        goto CPyL85;
    }
    cpy_r_r168 = CPyStatics[78]; /* 'Mainnet' */
    cpy_r_r169 = CPyObject_GetAttr(cpy_r_r167, cpy_r_r168);
    CPy_DECREF(cpy_r_r167);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 118, CPyStatic_security___globals);
        goto CPyL85;
    }
    cpy_r_r170 = CPyStatic_security___security;
    if (unlikely(cpy_r_r170 == NULL)) {
        goto CPyL104;
    } else
        goto CPyL73;
CPyL71: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"security\" was not set");
    cpy_r_r171 = 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 118, CPyStatic_security___globals);
        goto CPyL85;
    }
    CPy_Unreachable();
CPyL73: ;
    PyObject *cpy_r_r172[2] = {cpy_r_r164, cpy_r_r169};
    cpy_r_r173 = (PyObject **)&cpy_r_r172;
    cpy_r_r174 = PyObject_Vectorcall(cpy_r_r170, cpy_r_r173, 2, 0);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 118, CPyStatic_security___globals);
        goto CPyL105;
    }
    CPy_DECREF(cpy_r_r169);
    cpy_r_r175 = CPyStatics[220]; /* '0xe397d5682ef780b5371f8c80670e0cd94b4f945c7b432319b24f65c288995a17' */
    cpy_r_r176 = CPyStatics[108]; /* 'match' */
    cpy_r_r177 = CPyStatics[419]; /* 357 */
    PyObject *cpy_r_r178[3] = {cpy_r_r174, cpy_r_r175, cpy_r_r177};
    cpy_r_r179 = (PyObject **)&cpy_r_r178;
    cpy_r_r180 = CPyStatics[447]; /* ('hash', 'log_index') */
    cpy_r_r181 = PyObject_VectorcallMethod(cpy_r_r176, cpy_r_r179, 9223372036854775809ULL, cpy_r_r180);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 118, CPyStatic_security___globals);
        goto CPyL106;
    } else
        goto CPyL107;
CPyL75: ;
    CPy_DECREF(cpy_r_r174);
    cpy_r_r182 = CPyStatic_security___globals;
    cpy_r_r183 = CPyStatics[221]; /* 'is_warroom_help' */
    cpy_r_r184 = CPyDict_GetItem(cpy_r_r182, cpy_r_r183);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 124, CPyStatic_security___globals);
        goto CPyL85;
    }
    cpy_r_r185 = CPyStatics[222]; /* 'War Room Assistance' */
    cpy_r_r186 = CPyStatic_security___globals;
    cpy_r_r187 = CPyStatics[70]; /* 'Network' */
    cpy_r_r188 = CPyDict_GetItem(cpy_r_r186, cpy_r_r187);
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 124, CPyStatic_security___globals);
        goto CPyL108;
    }
    cpy_r_r189 = CPyStatics[78]; /* 'Mainnet' */
    cpy_r_r190 = CPyObject_GetAttr(cpy_r_r188, cpy_r_r189);
    CPy_DECREF(cpy_r_r188);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 124, CPyStatic_security___globals);
        goto CPyL108;
    }
    cpy_r_r191 = CPyStatic_security___security;
    if (unlikely(cpy_r_r191 == NULL)) {
        goto CPyL109;
    } else
        goto CPyL81;
CPyL79: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"security\" was not set");
    cpy_r_r192 = 0;
    if (unlikely(!cpy_r_r192)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 124, CPyStatic_security___globals);
        goto CPyL85;
    }
    CPy_Unreachable();
CPyL81: ;
    PyObject *cpy_r_r193[2] = {cpy_r_r185, cpy_r_r190};
    cpy_r_r194 = (PyObject **)&cpy_r_r193;
    cpy_r_r195 = PyObject_Vectorcall(cpy_r_r191, cpy_r_r194, 2, 0);
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 124, CPyStatic_security___globals);
        goto CPyL110;
    }
    CPy_DECREF(cpy_r_r190);
    PyObject *cpy_r_r196[1] = {cpy_r_r184};
    cpy_r_r197 = (PyObject **)&cpy_r_r196;
    cpy_r_r198 = PyObject_Vectorcall(cpy_r_r195, cpy_r_r197, 1, 0);
    CPy_DECREF(cpy_r_r195);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 124, CPyStatic_security___globals);
        goto CPyL108;
    }
    CPy_DECREF(cpy_r_r184);
    cpy_r_r199 = CPyStatic_security___globals;
    cpy_r_r200 = CPyStatics[221]; /* 'is_warroom_help' */
    cpy_r_r201 = CPyDict_SetItem(cpy_r_r199, cpy_r_r200, cpy_r_r198);
    CPy_DECREF(cpy_r_r198);
    cpy_r_r202 = cpy_r_r201 >= 0;
    if (unlikely(!cpy_r_r202)) {
        CPy_AddTraceback("yearn_treasury/rules/expense/security.py", "<module>", 124, CPyStatic_security___globals);
        goto CPyL85;
    }
    return 1;
CPyL85: ;
    cpy_r_r203 = 2;
    return cpy_r_r203;
CPyL86: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL85;
CPyL87: ;
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r46);
    goto CPyL18;
CPyL88: ;
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r46);
    goto CPyL85;
CPyL89: ;
    CPy_DecRef(cpy_r_r61);
    goto CPyL85;
CPyL90: ;
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r67);
    goto CPyL27;
CPyL91: ;
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r67);
    goto CPyL85;
CPyL92: ;
    CPy_DecRef(cpy_r_r82);
    goto CPyL85;
CPyL93: ;
    CPy_DecRef(cpy_r_r82);
    CPy_DecRef(cpy_r_r88);
    goto CPyL36;
CPyL94: ;
    CPy_DecRef(cpy_r_r82);
    CPy_DecRef(cpy_r_r88);
    goto CPyL85;
CPyL95: ;
    CPy_DecRef(cpy_r_r103);
    goto CPyL85;
CPyL96: ;
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r109);
    goto CPyL45;
CPyL97: ;
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r109);
    goto CPyL85;
CPyL98: ;
    CPy_DecRef(cpy_r_r124);
    goto CPyL85;
CPyL99: ;
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r130);
    goto CPyL54;
CPyL100: ;
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r130);
    goto CPyL85;
CPyL101: ;
    CPy_DecRef(cpy_r_r145);
    goto CPyL85;
CPyL102: ;
    CPy_DecRef(cpy_r_r145);
    CPy_DecRef(cpy_r_r151);
    goto CPyL63;
CPyL103: ;
    CPy_DecRef(cpy_r_r145);
    CPy_DecRef(cpy_r_r151);
    goto CPyL85;
CPyL104: ;
    CPy_DecRef(cpy_r_r169);
    goto CPyL71;
CPyL105: ;
    CPy_DecRef(cpy_r_r169);
    goto CPyL85;
CPyL106: ;
    CPy_DecRef(cpy_r_r174);
    goto CPyL85;
CPyL107: ;
    CPy_DECREF(cpy_r_r181);
    goto CPyL75;
CPyL108: ;
    CPy_DecRef(cpy_r_r184);
    goto CPyL85;
CPyL109: ;
    CPy_DecRef(cpy_r_r184);
    CPy_DecRef(cpy_r_r190);
    goto CPyL79;
CPyL110: ;
    CPy_DecRef(cpy_r_r184);
    CPy_DecRef(cpy_r_r190);
    goto CPyL85;
}
static PyMethodDef ignore___generalmodule_methods[] = {
    {"is_returned_fundus", (PyCFunction)CPyPy_ignore___general___is_returned_fundus, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef ignore___generalmodule = {
    PyModuleDef_HEAD_INIT,
    "yearn_treasury.rules.ignore.general",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    ignore___generalmodule_methods
};

PyObject *CPyInit_yearn_treasury___rules___ignore___general(void)
{
    PyObject* modname = NULL;
    if (CPyModule_yearn_treasury___rules___ignore___general_internal) {
        Py_INCREF(CPyModule_yearn_treasury___rules___ignore___general_internal);
        return CPyModule_yearn_treasury___rules___ignore___general_internal;
    }
    CPyModule_yearn_treasury___rules___ignore___general_internal = PyModule_Create(&ignore___generalmodule);
    if (unlikely(CPyModule_yearn_treasury___rules___ignore___general_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_yearn_treasury___rules___ignore___general_internal, "__name__");
    CPyStatic_ignore___general___globals = PyModule_GetDict(CPyModule_yearn_treasury___rules___ignore___general_internal);
    if (unlikely(CPyStatic_ignore___general___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_ignore___general_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_yearn_treasury___rules___ignore___general_internal;
    fail:
    Py_CLEAR(CPyModule_yearn_treasury___rules___ignore___general_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_ignore___general___is_returned_fundus(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    cpy_r_r0 = CPyStatics[91]; /* 'hash' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/general.py", "is_returned_fundus", 7, CPyStatic_ignore___general___globals);
        goto CPyL19;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/ignore/general.py", "is_returned_fundus", 7, CPyStatic_ignore___general___globals, "str", cpy_r_r1);
        goto CPyL19;
    }
    cpy_r_r3 = CPyStatics[223]; /* '0x2c2fb9d88a7a25b100ae3ba08bdb1cafbbd6a63386a08fdcfe32d077836defa3' */
    cpy_r_r4 = PyUnicode_Compare(cpy_r_r2, cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 == -1;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r6 = PyErr_Occurred();
    cpy_r_r7 = cpy_r_r6 != NULL;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/general.py", "is_returned_fundus", 8, CPyStatic_ignore___general___globals);
        goto CPyL20;
    }
CPyL5: ;
    cpy_r_r9 = cpy_r_r4 == 0;
    if (cpy_r_r9) {
        goto CPyL21;
    } else
        goto CPyL7;
CPyL6: ;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL18;
CPyL7: ;
    cpy_r_r11 = CPyStatics[224]; /* '0xd7e7abe600aad4a3181a3a410bef2539389579d2ed28f3e75dbbf3a7d8613688' */
    cpy_r_r12 = PyUnicode_Compare(cpy_r_r2, cpy_r_r11);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r13 = cpy_r_r12 == -1;
    if (!cpy_r_r13) goto CPyL10;
    cpy_r_r14 = PyErr_Occurred();
    cpy_r_r15 = cpy_r_r14 != NULL;
    if (!cpy_r_r15) goto CPyL10;
    cpy_r_r16 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/general.py", "is_returned_fundus", 9, CPyStatic_ignore___general___globals);
        goto CPyL19;
    }
CPyL10: ;
    cpy_r_r17 = cpy_r_r12 == 0;
    if (cpy_r_r17) goto CPyL12;
    cpy_r_r18 = cpy_r_r17;
    goto CPyL17;
CPyL12: ;
    cpy_r_r19 = CPyStatics[149]; /* 'log_index' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/general.py", "is_returned_fundus", 10, CPyStatic_ignore___general___globals);
        goto CPyL19;
    }
    if (PyLong_Check(cpy_r_r20))
        cpy_r_r21 = cpy_r_r20;
    else {
        cpy_r_r21 = NULL;
    }
    if (cpy_r_r21 != NULL) goto __LL15;
    if (cpy_r_r20 == Py_None)
        cpy_r_r21 = cpy_r_r20;
    else {
        cpy_r_r21 = NULL;
    }
    if (cpy_r_r21 != NULL) goto __LL15;
    CPy_TypeErrorTraceback("yearn_treasury/rules/ignore/general.py", "is_returned_fundus", 10, CPyStatic_ignore___general___globals, "int or None", cpy_r_r20);
    goto CPyL19;
__LL15: ;
    cpy_r_r22 = CPyStatics[420]; /* 556 */
    cpy_r_r23 = PyObject_RichCompare(cpy_r_r21, cpy_r_r22, 2);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/general.py", "is_returned_fundus", 10, CPyStatic_ignore___general___globals);
        goto CPyL19;
    }
    if (unlikely(!PyBool_Check(cpy_r_r23))) {
        CPy_TypeError("bool", cpy_r_r23); cpy_r_r24 = 2;
    } else
        cpy_r_r24 = cpy_r_r23 == Py_True;
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/general.py", "is_returned_fundus", 10, CPyStatic_ignore___general___globals);
        goto CPyL19;
    }
    cpy_r_r18 = cpy_r_r24;
CPyL17: ;
    cpy_r_r10 = cpy_r_r18;
CPyL18: ;
    return cpy_r_r10;
CPyL19: ;
    cpy_r_r25 = 2;
    return cpy_r_r25;
CPyL20: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL19;
CPyL21: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_ignore___general___is_returned_fundus(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_returned_fundus", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_ignore___general___is_returned_fundus(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/ignore/general.py", "is_returned_fundus", 5, CPyStatic_ignore___general___globals);
    return NULL;
}

char CPyDef_ignore___general_____top_level__(void) {
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
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/general.py", "<module>", -1, CPyStatic_ignore___general___globals);
        goto CPyL10;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[448]; /* ('TreasuryTx', 'ignore') */
    cpy_r_r6 = CPyStatics[99]; /* 'dao_treasury' */
    cpy_r_r7 = CPyStatic_ignore___general___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/general.py", "<module>", 1, CPyStatic_ignore___general___globals);
        goto CPyL10;
    }
    CPyModule_dao_treasury = cpy_r_r8;
    CPy_INCREF(CPyModule_dao_treasury);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatic_ignore___general___globals;
    cpy_r_r10 = CPyStatics[226]; /* 'is_returned_fundus' */
    cpy_r_r11 = CPyDict_GetItem(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/general.py", "<module>", 4, CPyStatic_ignore___general___globals);
        goto CPyL10;
    }
    cpy_r_r12 = CPyStatics[227]; /* 'Returned Funds' */
    cpy_r_r13 = CPyStatic_ignore___general___globals;
    cpy_r_r14 = CPyStatics[225]; /* 'ignore' */
    cpy_r_r15 = CPyDict_GetItem(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/general.py", "<module>", 4, CPyStatic_ignore___general___globals);
        goto CPyL11;
    }
    PyObject *cpy_r_r16[1] = {cpy_r_r12};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = PyObject_Vectorcall(cpy_r_r15, cpy_r_r17, 1, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/general.py", "<module>", 4, CPyStatic_ignore___general___globals);
        goto CPyL11;
    }
    PyObject *cpy_r_r19[1] = {cpy_r_r11};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = PyObject_Vectorcall(cpy_r_r18, cpy_r_r20, 1, 0);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/general.py", "<module>", 4, CPyStatic_ignore___general___globals);
        goto CPyL11;
    }
    CPy_DECREF(cpy_r_r11);
    cpy_r_r22 = CPyStatic_ignore___general___globals;
    cpy_r_r23 = CPyStatics[226]; /* 'is_returned_fundus' */
    cpy_r_r24 = CPyDict_SetItem(cpy_r_r22, cpy_r_r23, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/general.py", "<module>", 4, CPyStatic_ignore___general___globals);
        goto CPyL10;
    }
    return 1;
CPyL10: ;
    cpy_r_r26 = 2;
    return cpy_r_r26;
CPyL11: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL10;
}
static PyMethodDef wethmodule_methods[] = {
    {"is_weth_mint", (PyCFunction)CPyPy_weth___is_weth_mint, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_weth", (PyCFunction)CPyPy_weth___is_weth, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef wethmodule = {
    PyModuleDef_HEAD_INIT,
    "yearn_treasury.rules.ignore.weth",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    wethmodule_methods
};

PyObject *CPyInit_yearn_treasury___rules___ignore___weth(void)
{
    PyObject* modname = NULL;
    if (CPyModule_yearn_treasury___rules___ignore___weth_internal) {
        Py_INCREF(CPyModule_yearn_treasury___rules___ignore___weth_internal);
        return CPyModule_yearn_treasury___rules___ignore___weth_internal;
    }
    CPyModule_yearn_treasury___rules___ignore___weth_internal = PyModule_Create(&wethmodule);
    if (unlikely(CPyModule_yearn_treasury___rules___ignore___weth_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_yearn_treasury___rules___ignore___weth_internal, "__name__");
    CPyStatic_weth___globals = PyModule_GetDict(CPyModule_yearn_treasury___rules___ignore___weth_internal);
    if (unlikely(CPyStatic_weth___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_weth_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_yearn_treasury___rules___ignore___weth_internal;
    fail:
    Py_CLEAR(CPyModule_yearn_treasury___rules___ignore___weth_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_weth___weth);
    CPyStatic_weth___weth = NULL;
    return NULL;
}

char CPyDef_weth___is_weth_mint(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    cpy_r_r0 = CPyStatics[228]; /* 'from_address' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 16, CPyStatic_weth___globals);
        goto CPyL44;
    }
    cpy_r_r2 = CPyStatics[76]; /* '0x0000000000000000000000000000000000000000' */
    cpy_r_r3 = PyObject_RichCompare(cpy_r_r1, cpy_r_r2, 2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 16, CPyStatic_weth___globals);
        goto CPyL44;
    }
    if (unlikely(!PyBool_Check(cpy_r_r3))) {
        CPy_TypeError("bool", cpy_r_r3); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = cpy_r_r3 == Py_True;
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 16, CPyStatic_weth___globals);
        goto CPyL44;
    }
    if (!cpy_r_r4) goto CPyL18;
    cpy_r_r5 = CPyStatic_weth___globals;
    cpy_r_r6 = CPyStatics[229]; /* 'TreasuryWallet' */
    cpy_r_r7 = CPyDict_GetItem(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 17, CPyStatic_weth___globals);
        goto CPyL44;
    }
    cpy_r_r8 = CPyStatics[112]; /* 'to_address' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 17, CPyStatic_weth___globals);
        goto CPyL45;
    }
    cpy_r_r10 = CPyStatics[230]; /* 'address' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 17, CPyStatic_weth___globals);
        goto CPyL45;
    }
    cpy_r_r12 = CPyStatics[231]; /* '_get_instance' */
    PyObject *cpy_r_r13[2] = {cpy_r_r7, cpy_r_r11};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_VectorcallMethod(cpy_r_r12, cpy_r_r14, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 17, CPyStatic_weth___globals);
        goto CPyL46;
    }
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r16 = PyObject_IsTrue(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 17, CPyStatic_weth___globals);
        goto CPyL44;
    }
    cpy_r_r18 = cpy_r_r16;
    if (!cpy_r_r18) goto CPyL18;
    cpy_r_r19 = CPyStatics[232]; /* 'token' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 18, CPyStatic_weth___globals);
        goto CPyL44;
    }
    cpy_r_r21 = CPyStatic_weth___weth;
    if (unlikely(cpy_r_r21 == NULL)) {
        goto CPyL47;
    } else
        goto CPyL14;
CPyL12: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"weth\" was not set");
    cpy_r_r22 = 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 18, CPyStatic_weth___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r23 = PyObject_RichCompare(cpy_r_r20, cpy_r_r21, 2);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 18, CPyStatic_weth___globals);
        goto CPyL44;
    }
    if (unlikely(!PyBool_Check(cpy_r_r23))) {
        CPy_TypeError("bool", cpy_r_r23); cpy_r_r24 = 2;
    } else
        cpy_r_r24 = cpy_r_r23 == Py_True;
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 18, CPyStatic_weth___globals);
        goto CPyL44;
    }
    if (!cpy_r_r24) goto CPyL18;
    return 1;
CPyL18: ;
    cpy_r_r25 = CPyStatic_weth___globals;
    cpy_r_r26 = CPyStatics[229]; /* 'TreasuryWallet' */
    cpy_r_r27 = CPyDict_GetItem(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 22, CPyStatic_weth___globals);
        goto CPyL44;
    }
    cpy_r_r28 = CPyStatics[228]; /* 'from_address' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 22, CPyStatic_weth___globals);
        goto CPyL48;
    }
    cpy_r_r30 = CPyStatics[230]; /* 'address' */
    cpy_r_r31 = CPyObject_GetAttr(cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 22, CPyStatic_weth___globals);
        goto CPyL48;
    }
    cpy_r_r32 = CPyStatics[231]; /* '_get_instance' */
    PyObject *cpy_r_r33[2] = {cpy_r_r27, cpy_r_r31};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = PyObject_VectorcallMethod(cpy_r_r32, cpy_r_r34, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 22, CPyStatic_weth___globals);
        goto CPyL49;
    }
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r36 = PyObject_IsTrue(cpy_r_r35);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 22, CPyStatic_weth___globals);
        goto CPyL50;
    }
    cpy_r_r38 = cpy_r_r36;
    if (cpy_r_r38) goto CPyL51;
    if (cpy_r_r35 == Py_None)
        cpy_r_r39 = cpy_r_r35;
    else {
        cpy_r_r39 = NULL;
    }
    if (cpy_r_r39 != NULL) goto __LL16;
    if (PyBool_Check(cpy_r_r35))
        cpy_r_r39 = cpy_r_r35;
    else {
        cpy_r_r39 = NULL;
    }
    if (cpy_r_r39 != NULL) goto __LL16;
    CPy_TypeErrorTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 22, CPyStatic_weth___globals, "bool or None", cpy_r_r35);
    goto CPyL44;
__LL16: ;
    cpy_r_r40 = cpy_r_r39;
    goto CPyL39;
CPyL26: ;
    cpy_r_r41 = CPyStatics[112]; /* 'to_address' */
    cpy_r_r42 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 23, CPyStatic_weth___globals);
        goto CPyL44;
    }
    cpy_r_r43 = CPyStatic_weth___weth;
    if (unlikely(cpy_r_r43 == NULL)) {
        goto CPyL52;
    } else
        goto CPyL30;
CPyL28: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"weth\" was not set");
    cpy_r_r44 = 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 23, CPyStatic_weth___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL30: ;
    cpy_r_r45 = PyObject_RichCompare(cpy_r_r42, cpy_r_r43, 2);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 23, CPyStatic_weth___globals);
        goto CPyL44;
    }
    if (unlikely(!PyBool_Check(cpy_r_r45))) {
        CPy_TypeError("bool", cpy_r_r45); cpy_r_r46 = 2;
    } else
        cpy_r_r46 = cpy_r_r45 == Py_True;
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 23, CPyStatic_weth___globals);
        goto CPyL44;
    }
    if (cpy_r_r46) goto CPyL34;
    cpy_r_r47 = cpy_r_r46;
    goto CPyL38;
CPyL34: ;
    cpy_r_r48 = CPyStatics[232]; /* 'token' */
    cpy_r_r49 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 24, CPyStatic_weth___globals);
        goto CPyL44;
    }
    cpy_r_r50 = CPyStatics[74]; /* '0xEeeeeEeeeEeEeeEeEeEeeEEEeeeeEeeeeeeeEEeE' */
    cpy_r_r51 = PyObject_RichCompare(cpy_r_r49, cpy_r_r50, 2);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 24, CPyStatic_weth___globals);
        goto CPyL44;
    }
    if (unlikely(!PyBool_Check(cpy_r_r51))) {
        CPy_TypeError("bool", cpy_r_r51); cpy_r_r52 = 2;
    } else
        cpy_r_r52 = cpy_r_r51 == Py_True;
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 24, CPyStatic_weth___globals);
        goto CPyL44;
    }
    cpy_r_r47 = cpy_r_r52;
CPyL38: ;
    cpy_r_r53 = cpy_r_r47 ? Py_True : Py_False;
    cpy_r_r40 = cpy_r_r53;
CPyL39: ;
    cpy_r_r54 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r55 = cpy_r_r40 != cpy_r_r54;
    if (!cpy_r_r55) goto CPyL53;
    if (unlikely(!PyBool_Check(cpy_r_r40))) {
        CPy_TypeError("bool", cpy_r_r40); cpy_r_r56 = 2;
    } else
        cpy_r_r56 = cpy_r_r40 == Py_True;
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", -1, CPyStatic_weth___globals);
        goto CPyL44;
    }
    cpy_r_r57 = cpy_r_r56;
    goto CPyL43;
CPyL42: ;
    cpy_r_r57 = 0;
CPyL43: ;
    return cpy_r_r57;
CPyL44: ;
    cpy_r_r58 = 2;
    return cpy_r_r58;
CPyL45: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL44;
CPyL46: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r11);
    goto CPyL44;
CPyL47: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL12;
CPyL48: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL44;
CPyL49: ;
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r31);
    goto CPyL44;
CPyL50: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL44;
CPyL51: ;
    CPy_DECREF(cpy_r_r35);
    goto CPyL26;
CPyL52: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL28;
CPyL53: ;
    CPy_DECREF(cpy_r_r40);
    goto CPyL42;
}

PyObject *CPyPy_weth___is_weth_mint(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_weth_mint", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_weth___is_weth_mint(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth_mint", 14, CPyStatic_weth___globals);
    return NULL;
}

char CPyDef_weth___is_weth(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject **cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    cpy_r_r0 = CPyStatic_weth___globals;
    cpy_r_r1 = CPyStatics[229]; /* 'TreasuryWallet' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 31, CPyStatic_weth___globals);
        goto CPyL44;
    }
    cpy_r_r3 = CPyStatics[228]; /* 'from_address' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 31, CPyStatic_weth___globals);
        goto CPyL45;
    }
    cpy_r_r5 = CPyStatics[230]; /* 'address' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 31, CPyStatic_weth___globals);
        goto CPyL45;
    }
    cpy_r_r7 = CPyStatics[231]; /* '_get_instance' */
    PyObject *cpy_r_r8[2] = {cpy_r_r2, cpy_r_r6};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = PyObject_VectorcallMethod(cpy_r_r7, cpy_r_r9, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 31, CPyStatic_weth___globals);
        goto CPyL46;
    }
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r11 = PyObject_IsTrue(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 31, CPyStatic_weth___globals);
        goto CPyL44;
    }
    cpy_r_r13 = cpy_r_r11;
    if (!cpy_r_r13) goto CPyL18;
    cpy_r_r14 = CPyStatics[112]; /* 'to_address' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 32, CPyStatic_weth___globals);
        goto CPyL44;
    }
    cpy_r_r16 = CPyStatics[76]; /* '0x0000000000000000000000000000000000000000' */
    cpy_r_r17 = PyObject_RichCompare(cpy_r_r15, cpy_r_r16, 2);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 32, CPyStatic_weth___globals);
        goto CPyL44;
    }
    if (unlikely(!PyBool_Check(cpy_r_r17))) {
        CPy_TypeError("bool", cpy_r_r17); cpy_r_r18 = 2;
    } else
        cpy_r_r18 = cpy_r_r17 == Py_True;
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 32, CPyStatic_weth___globals);
        goto CPyL44;
    }
    if (!cpy_r_r18) goto CPyL18;
    cpy_r_r19 = CPyStatics[232]; /* 'token' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 33, CPyStatic_weth___globals);
        goto CPyL44;
    }
    cpy_r_r21 = CPyStatic_weth___weth;
    if (unlikely(cpy_r_r21 == NULL)) {
        goto CPyL47;
    } else
        goto CPyL14;
CPyL12: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"weth\" was not set");
    cpy_r_r22 = 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 33, CPyStatic_weth___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r23 = PyObject_RichCompare(cpy_r_r20, cpy_r_r21, 2);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 33, CPyStatic_weth___globals);
        goto CPyL44;
    }
    if (unlikely(!PyBool_Check(cpy_r_r23))) {
        CPy_TypeError("bool", cpy_r_r23); cpy_r_r24 = 2;
    } else
        cpy_r_r24 = cpy_r_r23 == Py_True;
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 33, CPyStatic_weth___globals);
        goto CPyL44;
    }
    if (!cpy_r_r24) goto CPyL18;
    return 1;
CPyL18: ;
    cpy_r_r25 = CPyStatics[228]; /* 'from_address' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 37, CPyStatic_weth___globals);
        goto CPyL44;
    }
    cpy_r_r27 = CPyStatic_weth___weth;
    if (unlikely(cpy_r_r27 == NULL)) {
        goto CPyL48;
    } else
        goto CPyL22;
CPyL20: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"weth\" was not set");
    cpy_r_r28 = 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 37, CPyStatic_weth___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r29 = PyObject_RichCompare(cpy_r_r26, cpy_r_r27, 2);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 37, CPyStatic_weth___globals);
        goto CPyL44;
    }
    if (unlikely(!PyBool_Check(cpy_r_r29))) {
        CPy_TypeError("bool", cpy_r_r29); cpy_r_r30 = 2;
    } else
        cpy_r_r30 = cpy_r_r29 == Py_True;
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 37, CPyStatic_weth___globals);
        goto CPyL44;
    }
    if (cpy_r_r30) goto CPyL26;
    cpy_r_r31 = cpy_r_r30 ? Py_True : Py_False;
    cpy_r_r32 = cpy_r_r31;
    goto CPyL39;
CPyL26: ;
    cpy_r_r33 = CPyStatic_weth___globals;
    cpy_r_r34 = CPyStatics[229]; /* 'TreasuryWallet' */
    cpy_r_r35 = CPyDict_GetItem(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 38, CPyStatic_weth___globals);
        goto CPyL44;
    }
    cpy_r_r36 = CPyStatics[112]; /* 'to_address' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 38, CPyStatic_weth___globals);
        goto CPyL49;
    }
    cpy_r_r38 = CPyStatics[230]; /* 'address' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 38, CPyStatic_weth___globals);
        goto CPyL49;
    }
    cpy_r_r40 = CPyStatics[231]; /* '_get_instance' */
    PyObject *cpy_r_r41[2] = {cpy_r_r35, cpy_r_r39};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = PyObject_VectorcallMethod(cpy_r_r40, cpy_r_r42, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 38, CPyStatic_weth___globals);
        goto CPyL50;
    }
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r44 = PyObject_IsTrue(cpy_r_r43);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 38, CPyStatic_weth___globals);
        goto CPyL51;
    }
    cpy_r_r46 = cpy_r_r44;
    if (cpy_r_r46) goto CPyL52;
    if (cpy_r_r43 == Py_None)
        cpy_r_r47 = cpy_r_r43;
    else {
        cpy_r_r47 = NULL;
    }
    if (cpy_r_r47 != NULL) goto __LL17;
    if (PyBool_Check(cpy_r_r43))
        cpy_r_r47 = cpy_r_r43;
    else {
        cpy_r_r47 = NULL;
    }
    if (cpy_r_r47 != NULL) goto __LL17;
    CPy_TypeErrorTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 37, CPyStatic_weth___globals, "bool or None", cpy_r_r43);
    goto CPyL44;
__LL17: ;
    cpy_r_r48 = cpy_r_r47;
    goto CPyL38;
CPyL34: ;
    cpy_r_r49 = CPyStatics[232]; /* 'token' */
    cpy_r_r50 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 39, CPyStatic_weth___globals);
        goto CPyL44;
    }
    cpy_r_r51 = CPyStatics[74]; /* '0xEeeeeEeeeEeEeeEeEeEeeEEEeeeeEeeeeeeeEEeE' */
    cpy_r_r52 = PyObject_RichCompare(cpy_r_r50, cpy_r_r51, 2);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 39, CPyStatic_weth___globals);
        goto CPyL44;
    }
    if (unlikely(!PyBool_Check(cpy_r_r52))) {
        CPy_TypeError("bool", cpy_r_r52); cpy_r_r53 = 2;
    } else
        cpy_r_r53 = cpy_r_r52 == Py_True;
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 39, CPyStatic_weth___globals);
        goto CPyL44;
    }
    cpy_r_r54 = cpy_r_r53 ? Py_True : Py_False;
    cpy_r_r48 = cpy_r_r54;
CPyL38: ;
    cpy_r_r32 = cpy_r_r48;
CPyL39: ;
    cpy_r_r55 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r56 = cpy_r_r32 != cpy_r_r55;
    if (!cpy_r_r56) goto CPyL53;
    if (unlikely(!PyBool_Check(cpy_r_r32))) {
        CPy_TypeError("bool", cpy_r_r32); cpy_r_r57 = 2;
    } else
        cpy_r_r57 = cpy_r_r32 == Py_True;
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r57 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", -1, CPyStatic_weth___globals);
        goto CPyL44;
    }
    cpy_r_r58 = cpy_r_r57;
    goto CPyL43;
CPyL42: ;
    cpy_r_r58 = 0;
CPyL43: ;
    return cpy_r_r58;
CPyL44: ;
    cpy_r_r59 = 2;
    return cpy_r_r59;
CPyL45: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL44;
CPyL46: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    goto CPyL44;
CPyL47: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL12;
CPyL48: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL20;
CPyL49: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL44;
CPyL50: ;
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r39);
    goto CPyL44;
CPyL51: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL44;
CPyL52: ;
    CPy_DECREF(cpy_r_r43);
    goto CPyL34;
CPyL53: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL42;
}

PyObject *CPyPy_weth___is_weth(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_weth", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_weth___is_weth(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "is_weth", 29, CPyStatic_weth___globals);
    return NULL;
}

char CPyDef_weth_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r9;
    void *cpy_r_r11;
    void *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
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
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject **cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject **cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject **cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject **cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "<module>", -1, CPyStatic_weth___globals);
        goto CPyL22;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[433]; /* ('Final',) */
    cpy_r_r6 = CPyStatics[24]; /* 'typing' */
    cpy_r_r7 = CPyStatic_weth___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "<module>", 1, CPyStatic_weth___globals);
        goto CPyL22;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_y;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {3};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[450]; /* (('y', 'y', 'y'),) */
    cpy_r_r15 = CPyStatic_weth___globals;
    cpy_r_r16 = CPyStatics[233]; /* 'yearn_treasury/rules/ignore/weth.py' */
    cpy_r_r17 = CPyStatics[62]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL22;
    cpy_r_r19 = CPyStatics[451]; /* ('TreasuryTx', 'TreasuryWallet', 'ignore') */
    cpy_r_r20 = CPyStatics[99]; /* 'dao_treasury' */
    cpy_r_r21 = CPyStatic_weth___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "<module>", 4, CPyStatic_weth___globals);
        goto CPyL22;
    }
    CPyModule_dao_treasury = cpy_r_r22;
    CPy_INCREF(CPyModule_dao_treasury);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[452]; /* ('ChecksumAddress',) */
    cpy_r_r24 = CPyStatics[101]; /* 'eth_typing' */
    cpy_r_r25 = CPyStatic_weth___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "<module>", 5, CPyStatic_weth___globals);
        goto CPyL22;
    }
    CPyModule_eth_typing = cpy_r_r26;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[453]; /* ('EEE_ADDRESS', 'ZERO_ADDRESS') */
    cpy_r_r28 = CPyStatics[235]; /* 'yearn_treasury.rules.constants' */
    cpy_r_r29 = CPyStatic_weth___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "<module>", 7, CPyStatic_weth___globals);
        goto CPyL22;
    }
    CPyModule_yearn_treasury___rules___constants = cpy_r_r30;
    CPy_INCREF(CPyModule_yearn_treasury___rules___constants);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyModule_y;
    cpy_r_r32 = CPyStatics[236]; /* 'weth' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "<module>", 10, CPyStatic_weth___globals);
        goto CPyL22;
    }
    cpy_r_r34 = CPyStatics[230]; /* 'address' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "<module>", 10, CPyStatic_weth___globals);
        goto CPyL22;
    }
    CPyStatic_weth___weth = cpy_r_r35;
    CPy_INCREF(CPyStatic_weth___weth);
    cpy_r_r36 = CPyStatic_weth___globals;
    cpy_r_r37 = CPyStatics[236]; /* 'weth' */
    cpy_r_r38 = CPyDict_SetItem(cpy_r_r36, cpy_r_r37, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "<module>", 10, CPyStatic_weth___globals);
        goto CPyL22;
    }
    cpy_r_r40 = CPyStatic_weth___globals;
    cpy_r_r41 = CPyStatics[237]; /* 'is_weth_mint' */
    cpy_r_r42 = CPyDict_GetItem(cpy_r_r40, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "<module>", 13, CPyStatic_weth___globals);
        goto CPyL22;
    }
    cpy_r_r43 = CPyStatics[238]; /* 'WETH:Minting' */
    cpy_r_r44 = CPyStatic_weth___globals;
    cpy_r_r45 = CPyStatics[225]; /* 'ignore' */
    cpy_r_r46 = CPyDict_GetItem(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "<module>", 13, CPyStatic_weth___globals);
        goto CPyL23;
    }
    PyObject *cpy_r_r47[1] = {cpy_r_r43};
    cpy_r_r48 = (PyObject **)&cpy_r_r47;
    cpy_r_r49 = PyObject_Vectorcall(cpy_r_r46, cpy_r_r48, 1, 0);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "<module>", 13, CPyStatic_weth___globals);
        goto CPyL23;
    }
    PyObject *cpy_r_r50[1] = {cpy_r_r42};
    cpy_r_r51 = (PyObject **)&cpy_r_r50;
    cpy_r_r52 = PyObject_Vectorcall(cpy_r_r49, cpy_r_r51, 1, 0);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "<module>", 13, CPyStatic_weth___globals);
        goto CPyL23;
    }
    CPy_DECREF(cpy_r_r42);
    cpy_r_r53 = CPyStatic_weth___globals;
    cpy_r_r54 = CPyStatics[237]; /* 'is_weth_mint' */
    cpy_r_r55 = CPyDict_SetItem(cpy_r_r53, cpy_r_r54, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "<module>", 13, CPyStatic_weth___globals);
        goto CPyL22;
    }
    cpy_r_r57 = CPyStatic_weth___globals;
    cpy_r_r58 = CPyStatics[239]; /* 'is_weth' */
    cpy_r_r59 = CPyDict_GetItem(cpy_r_r57, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "<module>", 28, CPyStatic_weth___globals);
        goto CPyL22;
    }
    cpy_r_r60 = CPyStatics[240]; /* 'WETH:Burning' */
    cpy_r_r61 = CPyStatic_weth___globals;
    cpy_r_r62 = CPyStatics[225]; /* 'ignore' */
    cpy_r_r63 = CPyDict_GetItem(cpy_r_r61, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "<module>", 28, CPyStatic_weth___globals);
        goto CPyL24;
    }
    PyObject *cpy_r_r64[1] = {cpy_r_r60};
    cpy_r_r65 = (PyObject **)&cpy_r_r64;
    cpy_r_r66 = PyObject_Vectorcall(cpy_r_r63, cpy_r_r65, 1, 0);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "<module>", 28, CPyStatic_weth___globals);
        goto CPyL24;
    }
    PyObject *cpy_r_r67[1] = {cpy_r_r59};
    cpy_r_r68 = (PyObject **)&cpy_r_r67;
    cpy_r_r69 = PyObject_Vectorcall(cpy_r_r66, cpy_r_r68, 1, 0);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "<module>", 28, CPyStatic_weth___globals);
        goto CPyL24;
    }
    CPy_DECREF(cpy_r_r59);
    cpy_r_r70 = CPyStatic_weth___globals;
    cpy_r_r71 = CPyStatics[239]; /* 'is_weth' */
    cpy_r_r72 = CPyDict_SetItem(cpy_r_r70, cpy_r_r71, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/weth.py", "<module>", 28, CPyStatic_weth___globals);
        goto CPyL22;
    }
    return 1;
CPyL22: ;
    cpy_r_r74 = 2;
    return cpy_r_r74;
CPyL23: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL22;
CPyL24: ;
    CPy_DecRef(cpy_r_r59);
    goto CPyL22;
}
static PyMethodDef ygovmodule_methods[] = {
    {"is_sent_to_ygov", (PyCFunction)CPyPy_ygov___is_sent_to_ygov, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef ygovmodule = {
    PyModuleDef_HEAD_INIT,
    "yearn_treasury.rules.ignore.ygov",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    ygovmodule_methods
};

PyObject *CPyInit_yearn_treasury___rules___ignore___ygov(void)
{
    PyObject* modname = NULL;
    if (CPyModule_yearn_treasury___rules___ignore___ygov_internal) {
        Py_INCREF(CPyModule_yearn_treasury___rules___ignore___ygov_internal);
        return CPyModule_yearn_treasury___rules___ignore___ygov_internal;
    }
    CPyModule_yearn_treasury___rules___ignore___ygov_internal = PyModule_Create(&ygovmodule);
    if (unlikely(CPyModule_yearn_treasury___rules___ignore___ygov_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_yearn_treasury___rules___ignore___ygov_internal, "__name__");
    CPyStatic_ygov___globals = PyModule_GetDict(CPyModule_yearn_treasury___rules___ignore___ygov_internal);
    if (unlikely(CPyStatic_ygov___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_ygov_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_yearn_treasury___rules___ignore___ygov_internal;
    fail:
    Py_CLEAR(CPyModule_yearn_treasury___rules___ignore___ygov_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_ygov___is_sent_to_ygov(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    cpy_r_r0 = CPyStatics[89]; /* 'from_nickname' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/ygov.py", "is_sent_to_ygov", 13, CPyStatic_ygov___globals);
        goto CPyL20;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/ignore/ygov.py", "is_sent_to_ygov", 13, CPyStatic_ygov___globals, "str", cpy_r_r1);
        goto CPyL20;
    }
    cpy_r_r3 = CPyStatics[241]; /* 'Yearn Treasury' */
    cpy_r_r4 = PyUnicode_Compare(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 == -1;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r6 = PyErr_Occurred();
    cpy_r_r7 = cpy_r_r6 != NULL;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/ygov.py", "is_sent_to_ygov", 13, CPyStatic_ygov___globals);
        goto CPyL20;
    }
CPyL5: ;
    cpy_r_r9 = cpy_r_r4 == 0;
    if (cpy_r_r9) goto CPyL7;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL19;
CPyL7: ;
    cpy_r_r11 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/ygov.py", "is_sent_to_ygov", 14, CPyStatic_ygov___globals);
        goto CPyL20;
    }
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/ignore/ygov.py", "is_sent_to_ygov", 14, CPyStatic_ygov___globals, "str", cpy_r_r12);
        goto CPyL20;
    }
    cpy_r_r14 = CPyStatics[242]; /* 'yDAI+yUSDC+yUSDT+yTUSD' */
    cpy_r_r15 = PyUnicode_Compare(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 == -1;
    if (!cpy_r_r16) goto CPyL12;
    cpy_r_r17 = PyErr_Occurred();
    cpy_r_r18 = cpy_r_r17 != NULL;
    if (!cpy_r_r18) goto CPyL12;
    cpy_r_r19 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/ygov.py", "is_sent_to_ygov", 14, CPyStatic_ygov___globals);
        goto CPyL20;
    }
CPyL12: ;
    cpy_r_r20 = cpy_r_r15 == 0;
    if (cpy_r_r20) goto CPyL14;
    cpy_r_r21 = cpy_r_r20;
    goto CPyL18;
CPyL14: ;
    cpy_r_r22 = CPyStatics[112]; /* 'to_address' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/ygov.py", "is_sent_to_ygov", 15, CPyStatic_ygov___globals);
        goto CPyL20;
    }
    cpy_r_r24 = CPyStatics[243]; /* '0xBa37B002AbaFDd8E89a1995dA52740bbC013D992' */
    cpy_r_r25 = PyObject_RichCompare(cpy_r_r23, cpy_r_r24, 2);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/ygov.py", "is_sent_to_ygov", 15, CPyStatic_ygov___globals);
        goto CPyL20;
    }
    if (unlikely(!PyBool_Check(cpy_r_r25))) {
        CPy_TypeError("bool", cpy_r_r25); cpy_r_r26 = 2;
    } else
        cpy_r_r26 = cpy_r_r25 == Py_True;
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/ygov.py", "is_sent_to_ygov", 15, CPyStatic_ygov___globals);
        goto CPyL20;
    }
    cpy_r_r21 = cpy_r_r26;
CPyL18: ;
    cpy_r_r10 = cpy_r_r21;
CPyL19: ;
    return cpy_r_r10;
CPyL20: ;
    cpy_r_r27 = 2;
    return cpy_r_r27;
}

PyObject *CPyPy_ygov___is_sent_to_ygov(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_sent_to_ygov", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_ygov___is_sent_to_ygov(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/ignore/ygov.py", "is_sent_to_ygov", 11, CPyStatic_ygov___globals);
    return NULL;
}

char CPyDef_ygov_____top_level__(void) {
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
    int32_t cpy_r_r20;
    char cpy_r_r21;
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
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject **cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject **cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/ygov.py", "<module>", -1, CPyStatic_ygov___globals);
        goto CPyL15;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[433]; /* ('Final',) */
    cpy_r_r6 = CPyStatics[24]; /* 'typing' */
    cpy_r_r7 = CPyStatic_ygov___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/ygov.py", "<module>", 1, CPyStatic_ygov___globals);
        goto CPyL15;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[448]; /* ('TreasuryTx', 'ignore') */
    cpy_r_r10 = CPyStatics[99]; /* 'dao_treasury' */
    cpy_r_r11 = CPyStatic_ygov___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/ygov.py", "<module>", 3, CPyStatic_ygov___globals);
        goto CPyL15;
    }
    CPyModule_dao_treasury = cpy_r_r12;
    CPy_INCREF(CPyModule_dao_treasury);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[434]; /* ('Network',) */
    cpy_r_r14 = CPyStatics[71]; /* 'y' */
    cpy_r_r15 = CPyStatic_ygov___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/ygov.py", "<module>", 4, CPyStatic_ygov___globals);
        goto CPyL15;
    }
    CPyModule_y = cpy_r_r16;
    CPy_INCREF(CPyModule_y);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[243]; /* '0xBa37B002AbaFDd8E89a1995dA52740bbC013D992' */
    cpy_r_r18 = CPyStatic_ygov___globals;
    cpy_r_r19 = CPyStatics[244]; /* 'YGOV' */
    cpy_r_r20 = CPyDict_SetItem(cpy_r_r18, cpy_r_r19, cpy_r_r17);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/ygov.py", "<module>", 7, CPyStatic_ygov___globals);
        goto CPyL15;
    }
    cpy_r_r22 = CPyStatic_ygov___globals;
    cpy_r_r23 = CPyStatics[245]; /* 'is_sent_to_ygov' */
    cpy_r_r24 = CPyDict_GetItem(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/ygov.py", "<module>", 10, CPyStatic_ygov___globals);
        goto CPyL15;
    }
    cpy_r_r25 = CPyStatics[246]; /* 'Transfer to yGov (Deprecated)' */
    cpy_r_r26 = CPyStatic_ygov___globals;
    cpy_r_r27 = CPyStatics[70]; /* 'Network' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/ygov.py", "<module>", 10, CPyStatic_ygov___globals);
        goto CPyL16;
    }
    cpy_r_r29 = CPyStatics[78]; /* 'Mainnet' */
    cpy_r_r30 = CPyObject_GetAttr(cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/ygov.py", "<module>", 10, CPyStatic_ygov___globals);
        goto CPyL16;
    }
    cpy_r_r31 = CPyStatic_ygov___globals;
    cpy_r_r32 = CPyStatics[225]; /* 'ignore' */
    cpy_r_r33 = CPyDict_GetItem(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/ygov.py", "<module>", 10, CPyStatic_ygov___globals);
        goto CPyL17;
    }
    PyObject *cpy_r_r34[2] = {cpy_r_r25, cpy_r_r30};
    cpy_r_r35 = (PyObject **)&cpy_r_r34;
    cpy_r_r36 = PyObject_Vectorcall(cpy_r_r33, cpy_r_r35, 2, 0);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/ygov.py", "<module>", 10, CPyStatic_ygov___globals);
        goto CPyL17;
    }
    CPy_DECREF(cpy_r_r30);
    PyObject *cpy_r_r37[1] = {cpy_r_r24};
    cpy_r_r38 = (PyObject **)&cpy_r_r37;
    cpy_r_r39 = PyObject_Vectorcall(cpy_r_r36, cpy_r_r38, 1, 0);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/ygov.py", "<module>", 10, CPyStatic_ygov___globals);
        goto CPyL16;
    }
    CPy_DECREF(cpy_r_r24);
    cpy_r_r40 = CPyStatic_ygov___globals;
    cpy_r_r41 = CPyStatics[245]; /* 'is_sent_to_ygov' */
    cpy_r_r42 = CPyDict_SetItem(cpy_r_r40, cpy_r_r41, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("yearn_treasury/rules/ignore/ygov.py", "<module>", 10, CPyStatic_ygov___globals);
        goto CPyL15;
    }
    return 1;
CPyL15: ;
    cpy_r_r44 = 2;
    return cpy_r_r44;
CPyL16: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL15;
CPyL17: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r30);
    goto CPyL15;
}

static PyObject *other_income___is_robovault_share_env_setup(PyTypeObject *type);
PyObject *CPyDef_other_income___is_robovault_share_env(void);

static PyObject *
other_income___is_robovault_share_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_other_income___is_robovault_share_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return other_income___is_robovault_share_env_setup(type);
}

static int
other_income___is_robovault_share_env_traverse(yearn_treasury___rules___other_income___is_robovault_share_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_tx);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->___mypyc_temp__0);
    Py_VISIT(self->___mypyc_temp__1.f0);
    Py_VISIT(self->___mypyc_temp__1.f1);
    Py_VISIT(self->___mypyc_temp__1.f2);
    Py_VISIT(self->_strat);
    Py_VISIT(self->___mypyc_temp__2.f0);
    Py_VISIT(self->___mypyc_temp__2.f1);
    Py_VISIT(self->___mypyc_temp__2.f2);
    Py_VISIT(self->___mypyc_temp__3);
    Py_VISIT(self->___mypyc_temp__4.f0);
    Py_VISIT(self->___mypyc_temp__4.f1);
    Py_VISIT(self->___mypyc_temp__4.f2);
    Py_VISIT(self->___mypyc_temp__5);
    Py_VISIT(self->___mypyc_temp__6.f0);
    Py_VISIT(self->___mypyc_temp__6.f1);
    Py_VISIT(self->___mypyc_temp__6.f2);
    Py_VISIT(self->___mypyc_temp__7);
    Py_VISIT(self->___mypyc_temp__8.f0);
    Py_VISIT(self->___mypyc_temp__8.f1);
    Py_VISIT(self->___mypyc_temp__8.f2);
    return 0;
}

static int
other_income___is_robovault_share_env_clear(yearn_treasury___rules___other_income___is_robovault_share_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_tx);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__0);
    Py_CLEAR(self->___mypyc_temp__1.f0);
    Py_CLEAR(self->___mypyc_temp__1.f1);
    Py_CLEAR(self->___mypyc_temp__1.f2);
    Py_CLEAR(self->_strat);
    Py_CLEAR(self->___mypyc_temp__2.f0);
    Py_CLEAR(self->___mypyc_temp__2.f1);
    Py_CLEAR(self->___mypyc_temp__2.f2);
    Py_CLEAR(self->___mypyc_temp__3);
    Py_CLEAR(self->___mypyc_temp__4.f0);
    Py_CLEAR(self->___mypyc_temp__4.f1);
    Py_CLEAR(self->___mypyc_temp__4.f2);
    Py_CLEAR(self->___mypyc_temp__5);
    Py_CLEAR(self->___mypyc_temp__6.f0);
    Py_CLEAR(self->___mypyc_temp__6.f1);
    Py_CLEAR(self->___mypyc_temp__6.f2);
    Py_CLEAR(self->___mypyc_temp__7);
    Py_CLEAR(self->___mypyc_temp__8.f0);
    Py_CLEAR(self->___mypyc_temp__8.f1);
    Py_CLEAR(self->___mypyc_temp__8.f2);
    return 0;
}

static void
other_income___is_robovault_share_env_dealloc(yearn_treasury___rules___other_income___is_robovault_share_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, other_income___is_robovault_share_env_dealloc)
    other_income___is_robovault_share_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem other_income___is_robovault_share_env_vtable[1];
static bool
CPyDef_other_income___is_robovault_share_env_trait_vtable_setup(void)
{
    CPyVTableItem other_income___is_robovault_share_env_vtable_scratch[] = {
        NULL
    };
    memcpy(other_income___is_robovault_share_env_vtable, other_income___is_robovault_share_env_vtable_scratch, sizeof(other_income___is_robovault_share_env_vtable));
    return 1;
}

static PyMethodDef other_income___is_robovault_share_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_other_income___is_robovault_share_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "is_robovault_share_env",
    .tp_new = other_income___is_robovault_share_env_new,
    .tp_dealloc = (destructor)other_income___is_robovault_share_env_dealloc,
    .tp_traverse = (traverseproc)other_income___is_robovault_share_env_traverse,
    .tp_clear = (inquiry)other_income___is_robovault_share_env_clear,
    .tp_methods = other_income___is_robovault_share_env_methods,
    .tp_basicsize = sizeof(yearn_treasury___rules___other_income___is_robovault_share_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_other_income___is_robovault_share_env_template = &CPyType_other_income___is_robovault_share_env_template_;

static PyObject *
other_income___is_robovault_share_env_setup(PyTypeObject *type)
{
    yearn_treasury___rules___other_income___is_robovault_share_envObject *self;
    self = (yearn_treasury___rules___other_income___is_robovault_share_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = other_income___is_robovault_share_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->___mypyc_temp__1 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__2 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__4 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__6 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__8 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_other_income___is_robovault_share_env(void)
{
    PyObject *self = other_income___is_robovault_share_env_setup(CPyType_other_income___is_robovault_share_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyAsyncMethods other_income___is_robovault_share_gen_as_async = {
    .am_await = CPyDef_other_income___is_robovault_share_gen_____await__,
};
static PyObject *other_income___is_robovault_share_gen_setup(PyTypeObject *type);
PyObject *CPyDef_other_income___is_robovault_share_gen(void);

static PyObject *
other_income___is_robovault_share_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_other_income___is_robovault_share_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return other_income___is_robovault_share_gen_setup(type);
}

static int
other_income___is_robovault_share_gen_traverse(yearn_treasury___rules___other_income___is_robovault_share_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
other_income___is_robovault_share_gen_clear(yearn_treasury___rules___other_income___is_robovault_share_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
other_income___is_robovault_share_gen_dealloc(yearn_treasury___rules___other_income___is_robovault_share_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, other_income___is_robovault_share_gen_dealloc)
    other_income___is_robovault_share_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem other_income___is_robovault_share_gen_vtable[7];
static bool
CPyDef_other_income___is_robovault_share_gen_trait_vtable_setup(void)
{
    CPyVTableItem other_income___is_robovault_share_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_other_income___is_robovault_share_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_other_income___is_robovault_share_gen_____next__,
        (CPyVTableItem)CPyDef_other_income___is_robovault_share_gen___send,
        (CPyVTableItem)CPyDef_other_income___is_robovault_share_gen_____iter__,
        (CPyVTableItem)CPyDef_other_income___is_robovault_share_gen___throw,
        (CPyVTableItem)CPyDef_other_income___is_robovault_share_gen___close,
        (CPyVTableItem)CPyDef_other_income___is_robovault_share_gen_____await__,
    };
    memcpy(other_income___is_robovault_share_gen_vtable, other_income___is_robovault_share_gen_vtable_scratch, sizeof(other_income___is_robovault_share_gen_vtable));
    return 1;
}

static PyMethodDef other_income___is_robovault_share_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_other_income___is_robovault_share_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_other_income___is_robovault_share_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_other_income___is_robovault_share_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_other_income___is_robovault_share_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_other_income___is_robovault_share_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_other_income___is_robovault_share_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__await__",
     (PyCFunction)CPyPy_other_income___is_robovault_share_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_other_income___is_robovault_share_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "is_robovault_share_gen",
    .tp_new = other_income___is_robovault_share_gen_new,
    .tp_dealloc = (destructor)other_income___is_robovault_share_gen_dealloc,
    .tp_traverse = (traverseproc)other_income___is_robovault_share_gen_traverse,
    .tp_clear = (inquiry)other_income___is_robovault_share_gen_clear,
    .tp_methods = other_income___is_robovault_share_gen_methods,
    .tp_iter = CPyDef_other_income___is_robovault_share_gen_____iter__,
    .tp_iternext = CPyDef_other_income___is_robovault_share_gen_____next__,
    .tp_as_async = &other_income___is_robovault_share_gen_as_async,
    .tp_basicsize = sizeof(yearn_treasury___rules___other_income___is_robovault_share_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_other_income___is_robovault_share_gen_template = &CPyType_other_income___is_robovault_share_gen_template_;

static PyObject *
other_income___is_robovault_share_gen_setup(PyTypeObject *type)
{
    yearn_treasury___rules___other_income___is_robovault_share_genObject *self;
    self = (yearn_treasury___rules___other_income___is_robovault_share_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = other_income___is_robovault_share_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_other_income___is_robovault_share_gen(void)
{
    PyObject *self = other_income___is_robovault_share_gen_setup(CPyType_other_income___is_robovault_share_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef other_incomemodule_methods[] = {
    {"is_airdrop", (PyCFunction)CPyPy_other_income___is_airdrop, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_atoken_yield", (PyCFunction)CPyPy_other_income___is_atoken_yield, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_robovault_share", (PyCFunction)CPyPy_other_income___is_robovault_share, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_cowswap_gas_reimbursement", (PyCFunction)CPyPy_other_income___is_cowswap_gas_reimbursement, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_usds_referral_code", (PyCFunction)CPyPy_other_income___is_usds_referral_code, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_yeth_application_fee", (PyCFunction)CPyPy_other_income___is_yeth_application_fee, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_yprisma_fees", (PyCFunction)CPyPy_other_income___is_yprisma_fees, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef other_incomemodule = {
    PyModuleDef_HEAD_INIT,
    "yearn_treasury.rules.other_income",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    other_incomemodule_methods
};

PyObject *CPyInit_yearn_treasury___rules___other_income(void)
{
    PyObject* modname = NULL;
    if (CPyModule_yearn_treasury___rules___other_income_internal) {
        Py_INCREF(CPyModule_yearn_treasury___rules___other_income_internal);
        return CPyModule_yearn_treasury___rules___other_income_internal;
    }
    CPyModule_yearn_treasury___rules___other_income_internal = PyModule_Create(&other_incomemodule);
    if (unlikely(CPyModule_yearn_treasury___rules___other_income_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_yearn_treasury___rules___other_income_internal, "__name__");
    CPyStatic_other_income___globals = PyModule_GetDict(CPyModule_yearn_treasury___rules___other_income_internal);
    if (unlikely(CPyStatic_other_income___globals == NULL))
        goto fail;
    CPyType_other_income___is_robovault_share_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_other_income___is_robovault_share_env_template, NULL, modname);
    if (unlikely(!CPyType_other_income___is_robovault_share_env))
        goto fail;
    CPyType_other_income___is_robovault_share_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_other_income___is_robovault_share_gen_template, NULL, modname);
    if (unlikely(!CPyType_other_income___is_robovault_share_gen))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_other_income_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_yearn_treasury___rules___other_income_internal;
    fail:
    Py_CLEAR(CPyModule_yearn_treasury___rules___other_income_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_other_income____POINT_ONE);
    CPyStatic_other_income____POINT_ONE = NULL;
    Py_CLEAR(CPyType_other_income___is_robovault_share_env);
    Py_CLEAR(CPyType_other_income___is_robovault_share_gen);
    return NULL;
}

char CPyDef_other_income___is_airdrop(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    cpy_r_r0 = CPyStatics[91]; /* 'hash' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_airdrop", 15, CPyStatic_other_income___globals);
        goto CPyL17;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/other_income/__init__.py", "is_airdrop", 15, CPyStatic_other_income___globals, "str", cpy_r_r1);
        goto CPyL17;
    }
    cpy_r_r3 = CPyStatics[476]; /* frozenset({'0x037a9cc5baa7d63a11d0f0720ee552bbf4ad85118ee5425220a263695fedbe9f',
                                             '0x327684dab9e3ce61d125b36fe0b59cbfbc8aa5ac7a5b051125ab7cac3b93b90b',
                                             '0x3424e8a6688c89f7974968213c8c25f3bd8100f78c54475edb001c11a8ad5d21',
                                             '0x44f7d3b2030799ea45932baf6049528a059aabd6387f3128993d646d01c8e877',
                                             '0x4923fd32b4eacdc1617700c67176935676ca4d06bbfbb73644730c55534623db',
                                             '0x5ba604cae0d355835b182fa23c8a58ae695905e69ed08c7cf8a52f3eca889484',
                                             '0x7c086a82b43b2f49db93b76a0698cf86a9c620b3bf924f0003175b04a17455ad',
                                             '0x8079e9cae847da196dc5507561bc9d1434f765f05045bc1a82df735ec83bc6ec',
                                             '0xb39f2991fdc2c70b43046be3eac36bff35c21c7f66e2888a52afc3956abae451',
                                             '0xc12ded505ea158717890e4ae6e7ab5eb5cb61edbc13dfd125dd0e6f9b1af9477',
                                             '0xf2dbe58dffd3bc1476755e9f74e2ae07531579d0a3ea9e2aaac2ef902e080c2a'}) */
    cpy_r_r4 = PySet_Contains(cpy_r_r3, cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_airdrop", 16, CPyStatic_other_income___globals);
        goto CPyL18;
    }
    cpy_r_r6 = cpy_r_r4;
    if (cpy_r_r6) {
        goto CPyL19;
    } else
        goto CPyL5;
CPyL4: ;
    cpy_r_r7 = cpy_r_r6;
    goto CPyL16;
CPyL5: ;
    cpy_r_r8 = CPyStatics[258]; /* '0xe8b5a4ebf1f04048f6226b22b2865a33621e88ea255dcea0cfd7a975a3a7e387' */
    cpy_r_r9 = PyUnicode_Compare(cpy_r_r2, cpy_r_r8);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r10 = cpy_r_r9 == -1;
    if (!cpy_r_r10) goto CPyL8;
    cpy_r_r11 = PyErr_Occurred();
    cpy_r_r12 = cpy_r_r11 != NULL;
    if (!cpy_r_r12) goto CPyL8;
    cpy_r_r13 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_airdrop", 31, CPyStatic_other_income___globals);
        goto CPyL17;
    }
CPyL8: ;
    cpy_r_r14 = cpy_r_r9 == 0;
    if (cpy_r_r14) goto CPyL10;
    cpy_r_r15 = cpy_r_r14;
    goto CPyL15;
CPyL10: ;
    cpy_r_r16 = CPyStatics[149]; /* 'log_index' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_airdrop", 32, CPyStatic_other_income___globals);
        goto CPyL17;
    }
    if (PyLong_Check(cpy_r_r17))
        cpy_r_r18 = cpy_r_r17;
    else {
        cpy_r_r18 = NULL;
    }
    if (cpy_r_r18 != NULL) goto __LL18;
    if (cpy_r_r17 == Py_None)
        cpy_r_r18 = cpy_r_r17;
    else {
        cpy_r_r18 = NULL;
    }
    if (cpy_r_r18 != NULL) goto __LL18;
    CPy_TypeErrorTraceback("yearn_treasury/rules/other_income/__init__.py", "is_airdrop", 32, CPyStatic_other_income___globals, "int or None", cpy_r_r17);
    goto CPyL17;
__LL18: ;
    cpy_r_r19 = CPyStatics[421]; /* 72 */
    cpy_r_r20 = PyObject_RichCompare(cpy_r_r18, cpy_r_r19, 2);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_airdrop", 32, CPyStatic_other_income___globals);
        goto CPyL17;
    }
    if (unlikely(!PyBool_Check(cpy_r_r20))) {
        CPy_TypeError("bool", cpy_r_r20); cpy_r_r21 = 2;
    } else
        cpy_r_r21 = cpy_r_r20 == Py_True;
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_airdrop", 32, CPyStatic_other_income___globals);
        goto CPyL17;
    }
    cpy_r_r15 = cpy_r_r21;
CPyL15: ;
    cpy_r_r7 = cpy_r_r15;
CPyL16: ;
    return cpy_r_r7;
CPyL17: ;
    cpy_r_r22 = 2;
    return cpy_r_r22;
CPyL18: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL17;
CPyL19: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL4;
}

PyObject *CPyPy_other_income___is_airdrop(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_airdrop", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_other_income___is_airdrop(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_airdrop", 14, CPyStatic_other_income___globals);
    return NULL;
}

char CPyDef_other_income___is_atoken_yield(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    cpy_r_r0 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_atoken_yield", 39, CPyStatic_other_income___globals);
        goto CPyL36;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/other_income/__init__.py", "is_atoken_yield", 39, CPyStatic_other_income___globals, "str", cpy_r_r1);
        goto CPyL36;
    }
    cpy_r_r3 = CPyStatics[259]; /* 'aLEND' */
    cpy_r_r4 = PyUnicode_Compare(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 == -1;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r6 = PyErr_Occurred();
    cpy_r_r7 = cpy_r_r6 != NULL;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_atoken_yield", -1, CPyStatic_other_income___globals);
        goto CPyL36;
    }
CPyL5: ;
    cpy_r_r9 = cpy_r_r4 == 0;
    if (!cpy_r_r9) goto CPyL7;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL13;
CPyL7: ;
    cpy_r_r11 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_atoken_yield", 39, CPyStatic_other_income___globals);
        goto CPyL36;
    }
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/other_income/__init__.py", "is_atoken_yield", 39, CPyStatic_other_income___globals, "str", cpy_r_r12);
        goto CPyL36;
    }
    cpy_r_r14 = CPyStatics[260]; /* 'aLINK' */
    cpy_r_r15 = PyUnicode_Compare(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 == -1;
    if (!cpy_r_r16) goto CPyL12;
    cpy_r_r17 = PyErr_Occurred();
    cpy_r_r18 = cpy_r_r17 != NULL;
    if (!cpy_r_r18) goto CPyL12;
    cpy_r_r19 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_atoken_yield", -1, CPyStatic_other_income___globals);
        goto CPyL36;
    }
CPyL12: ;
    cpy_r_r20 = cpy_r_r15 == 0;
    cpy_r_r10 = cpy_r_r20;
CPyL13: ;
    if (cpy_r_r10) goto CPyL15;
    cpy_r_r21 = cpy_r_r10 ? Py_True : Py_False;
    cpy_r_r22 = cpy_r_r21;
    goto CPyL34;
CPyL15: ;
    cpy_r_r23 = CPyStatics[228]; /* 'from_address' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_atoken_yield", 40, CPyStatic_other_income___globals);
        goto CPyL36;
    }
    cpy_r_r25 = CPyStatics[230]; /* 'address' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_atoken_yield", 40, CPyStatic_other_income___globals);
        goto CPyL36;
    }
    cpy_r_r27 = CPyStatics[76]; /* '0x0000000000000000000000000000000000000000' */
    cpy_r_r28 = PyObject_RichCompare(cpy_r_r26, cpy_r_r27, 2);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_atoken_yield", 40, CPyStatic_other_income___globals);
        goto CPyL36;
    }
    cpy_r_r29 = PyObject_IsTrue(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_atoken_yield", 40, CPyStatic_other_income___globals);
        goto CPyL37;
    }
    cpy_r_r31 = cpy_r_r29;
    if (cpy_r_r31) goto CPyL38;
    cpy_r_r32 = cpy_r_r28;
    goto CPyL33;
CPyL21: ;
    cpy_r_r33 = CPyStatics[130]; /* 'to_nickname' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_atoken_yield", 41, CPyStatic_other_income___globals);
        goto CPyL36;
    }
    if (PyUnicode_Check(cpy_r_r34))
        cpy_r_r35 = cpy_r_r34;
    else {
        cpy_r_r35 = NULL;
    }
    if (cpy_r_r35 != NULL) goto __LL19;
    if (cpy_r_r34 == Py_None)
        cpy_r_r35 = cpy_r_r34;
    else {
        cpy_r_r35 = NULL;
    }
    if (cpy_r_r35 != NULL) goto __LL19;
    CPy_TypeErrorTraceback("yearn_treasury/rules/other_income/__init__.py", "is_atoken_yield", 41, CPyStatic_other_income___globals, "str or None", cpy_r_r34);
    goto CPyL36;
__LL19: ;
    cpy_r_r36 = CPyStatics[241]; /* 'Yearn Treasury' */
    cpy_r_r37 = PyObject_RichCompare(cpy_r_r35, cpy_r_r36, 2);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_atoken_yield", -1, CPyStatic_other_income___globals);
        goto CPyL36;
    }
    if (unlikely(!PyBool_Check(cpy_r_r37))) {
        CPy_TypeError("bool", cpy_r_r37); cpy_r_r38 = 2;
    } else
        cpy_r_r38 = cpy_r_r37 == Py_True;
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_atoken_yield", -1, CPyStatic_other_income___globals);
        goto CPyL36;
    }
    if (!cpy_r_r38) goto CPyL27;
    cpy_r_r39 = cpy_r_r38;
    goto CPyL32;
CPyL27: ;
    cpy_r_r40 = CPyStatics[130]; /* 'to_nickname' */
    cpy_r_r41 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_atoken_yield", 41, CPyStatic_other_income___globals);
        goto CPyL36;
    }
    if (PyUnicode_Check(cpy_r_r41))
        cpy_r_r42 = cpy_r_r41;
    else {
        cpy_r_r42 = NULL;
    }
    if (cpy_r_r42 != NULL) goto __LL20;
    if (cpy_r_r41 == Py_None)
        cpy_r_r42 = cpy_r_r41;
    else {
        cpy_r_r42 = NULL;
    }
    if (cpy_r_r42 != NULL) goto __LL20;
    CPy_TypeErrorTraceback("yearn_treasury/rules/other_income/__init__.py", "is_atoken_yield", 41, CPyStatic_other_income___globals, "str or None", cpy_r_r41);
    goto CPyL36;
__LL20: ;
    cpy_r_r43 = CPyStatics[261]; /* 'Yearn Treasury V1' */
    cpy_r_r44 = PyObject_RichCompare(cpy_r_r42, cpy_r_r43, 2);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_atoken_yield", -1, CPyStatic_other_income___globals);
        goto CPyL36;
    }
    if (unlikely(!PyBool_Check(cpy_r_r44))) {
        CPy_TypeError("bool", cpy_r_r44); cpy_r_r45 = 2;
    } else
        cpy_r_r45 = cpy_r_r44 == Py_True;
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_atoken_yield", -1, CPyStatic_other_income___globals);
        goto CPyL36;
    }
    cpy_r_r39 = cpy_r_r45;
CPyL32: ;
    cpy_r_r46 = cpy_r_r39 ? Py_True : Py_False;
    cpy_r_r32 = cpy_r_r46;
CPyL33: ;
    cpy_r_r22 = cpy_r_r32;
CPyL34: ;
    if (unlikely(!PyBool_Check(cpy_r_r22))) {
        CPy_TypeError("bool", cpy_r_r22); cpy_r_r47 = 2;
    } else
        cpy_r_r47 = cpy_r_r22 == Py_True;
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_atoken_yield", 38, CPyStatic_other_income___globals);
        goto CPyL36;
    }
    return cpy_r_r47;
CPyL36: ;
    cpy_r_r48 = 2;
    return cpy_r_r48;
CPyL37: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL36;
CPyL38: ;
    CPy_DECREF(cpy_r_r28);
    goto CPyL21;
}

PyObject *CPyPy_other_income___is_atoken_yield(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_atoken_yield", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_other_income___is_atoken_yield(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_atoken_yield", 37, CPyStatic_other_income___globals);
    return NULL;
}

PyObject *CPyDef_other_income___is_robovault_share_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    tuple_T3OOO cpy_r_r51;
    char cpy_r_r52;
    PyObject **cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    tuple_T3OOO cpy_r_r56;
    tuple_T3OOO cpy_r_r57;
    tuple_T3OOO cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    tuple_T3OOO cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    tuple_T3OOO cpy_r_r72;
    char cpy_r_r73;
    tuple_T3OOO cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyTagged cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject **cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    tuple_T3OOO cpy_r_r104;
    char cpy_r_r105;
    PyObject **cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    tuple_T3OOO cpy_r_r109;
    tuple_T3OOO cpy_r_r110;
    tuple_T3OOO cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    int32_t cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    char cpy_r_r133;
    char cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    int32_t cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    char cpy_r_r146;
    char cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    CPyTagged cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject **cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    char cpy_r_r173;
    tuple_T3OOO cpy_r_r174;
    char cpy_r_r175;
    PyObject **cpy_r_r176;
    PyObject *cpy_r_r177;
    char cpy_r_r178;
    tuple_T3OOO cpy_r_r179;
    tuple_T3OOO cpy_r_r180;
    tuple_T3OOO cpy_r_r181;
    char cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject **cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    char cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    char cpy_r_r203;
    PyObject *cpy_r_r204;
    char cpy_r_r205;
    tuple_T3OOO cpy_r_r206;
    char cpy_r_r207;
    PyObject **cpy_r_r208;
    PyObject *cpy_r_r209;
    char cpy_r_r210;
    tuple_T3OOO cpy_r_r211;
    tuple_T3OOO cpy_r_r212;
    tuple_T3OOO cpy_r_r213;
    char cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    char cpy_r_r220;
    char cpy_r_r221;
    char cpy_r_r222;
    char cpy_r_r223;
    char cpy_r_r224;
    char cpy_r_r225;
    char cpy_r_r226;
    PyObject *cpy_r_r227;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = NULL;
    cpy_r_r3 = cpy_r_r2;
    cpy_r_r4 = NULL;
    cpy_r_r5 = cpy_r_r4;
    cpy_r_r6 = NULL;
    cpy_r_r7 = cpy_r_r6;
    cpy_r_r8 = ((yearn_treasury___rules___other_income___is_robovault_share_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_gen", "__mypyc_env__", 46, CPyStatic_other_income___globals);
        goto CPyL210;
    }
    CPy_INCREF_NO_IMM(cpy_r_r8);
CPyL1: ;
    cpy_r_r9 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__;
    if (unlikely(cpy_r_r9 == CPY_INT_TAG)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "__mypyc_next_label__", 46, CPyStatic_other_income___globals);
        goto CPyL211;
    }
    CPyTagged_INCREF(cpy_r_r9);
    goto CPyL202;
CPyL2: ;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_type != cpy_r_r10;
    if (cpy_r_r11) {
        goto CPyL212;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 46, CPyStatic_other_income___globals);
        goto CPyL209;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r12 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->_tx;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "tx", 50, CPyStatic_other_income___globals);
        goto CPyL211;
    }
    CPy_INCREF(cpy_r_r12);
CPyL6: ;
    cpy_r_r13 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 50, CPyStatic_other_income___globals);
        goto CPyL211;
    }
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 50, CPyStatic_other_income___globals, "str", cpy_r_r14);
        goto CPyL211;
    }
    cpy_r_r16 = CPyStatics[262]; /* 'rv' */
    cpy_r_r17 = CPyStr_Startswith(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r18 = cpy_r_r17;
    if (cpy_r_r18) goto CPyL17;
    cpy_r_r19 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->_tx;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "tx", 50, CPyStatic_other_income___globals);
        goto CPyL211;
    }
    CPy_INCREF(cpy_r_r19);
CPyL10: ;
    cpy_r_r20 = CPyStatics[228]; /* 'from_address' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 50, CPyStatic_other_income___globals);
        goto CPyL211;
    }
    cpy_r_r22 = CPyStatics[263]; /* 'is_contract' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 50, CPyStatic_other_income___globals);
        goto CPyL211;
    }
    cpy_r_r24 = PyObject_IsTrue(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 50, CPyStatic_other_income___globals);
        goto CPyL211;
    }
    cpy_r_r26 = cpy_r_r24;
    if (cpy_r_r26) {
        goto CPyL213;
    } else
        goto CPyL17;
CPyL14: ;
    cpy_r_r27 = 0 ? Py_True : Py_False;
    if (((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__);
    }
    ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__ = -2;
    cpy_r_r28 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r8);
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 51, CPyStatic_other_income___globals);
        goto CPyL209;
    }
    CPyGen_SetStopIterationValue(cpy_r_r27);
    if (!0) goto CPyL209;
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r29 = CPyStatic_other_income___globals;
    cpy_r_r30 = CPyStatics[264]; /* 'Contract' */
    cpy_r_r31 = CPyDict_GetItem(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 54, CPyStatic_other_income___globals);
        goto CPyL214;
    }
    cpy_r_r32 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->_tx;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "tx", 54, CPyStatic_other_income___globals);
        goto CPyL215;
    }
    CPy_INCREF(cpy_r_r32);
CPyL19: ;
    cpy_r_r33 = CPyStatics[228]; /* 'from_address' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 54, CPyStatic_other_income___globals);
        goto CPyL215;
    }
    cpy_r_r35 = CPyStatics[230]; /* 'address' */
    cpy_r_r36 = CPyObject_GetAttr(cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 54, CPyStatic_other_income___globals);
        goto CPyL215;
    }
    cpy_r_r37 = CPyStatics[265]; /* 'coroutine' */
    PyObject *cpy_r_r38[2] = {cpy_r_r31, cpy_r_r36};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = PyObject_VectorcallMethod(cpy_r_r37, cpy_r_r39, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 54, CPyStatic_other_income___globals);
        goto CPyL216;
    }
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r41 = CPy_GetCoro(cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 54, CPyStatic_other_income___globals);
        goto CPyL214;
    }
    if (((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__0);
    }
    ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__0 = cpy_r_r41;
    cpy_r_r42 = 1;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", -1, CPyStatic_other_income___globals);
        goto CPyL214;
    }
    cpy_r_r43 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__0;
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "__mypyc_temp__0", -1, CPyStatic_other_income___globals);
        goto CPyL214;
    }
    CPy_INCREF(cpy_r_r43);
CPyL25: ;
    cpy_r_r44 = CPyIter_Next(cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    if (cpy_r_r44 == NULL) {
        goto CPyL217;
    } else
        goto CPyL28;
CPyL26: ;
    cpy_r_r45 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 54, CPyStatic_other_income___globals);
        goto CPyL218;
    }
    cpy_r_r46 = cpy_r_r45;
    goto CPyL51;
CPyL28: ;
    cpy_r_r47 = cpy_r_r44;
CPyL29: ;
    if (((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__);
    }
    ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__ = 2;
    cpy_r_r48 = 1;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 54, CPyStatic_other_income___globals);
        goto CPyL219;
    } else
        goto CPyL220;
CPyL30: ;
    return cpy_r_r47;
CPyL31: ;
    cpy_r_r49 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r50 = cpy_r_type != cpy_r_r49;
    if (!cpy_r_r50) goto CPyL34;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 54, CPyStatic_other_income___globals);
        goto CPyL35;
    } else
        goto CPyL221;
CPyL33: ;
    CPy_Unreachable();
CPyL34: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL46;
CPyL35: ;
    cpy_r_r51 = CPy_CatchError();
    if (((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__1.f0 != NULL) {
        CPy_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__1.f0);
        CPy_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__1.f1);
        CPy_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__1.f2);
    }
    ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__1 = cpy_r_r51;
    cpy_r_r52 = 1;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", -1, CPyStatic_other_income___globals);
        goto CPyL222;
    }
    cpy_r_r53 = (PyObject **)&cpy_r_r1;
    cpy_r_r54 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__0;
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "__mypyc_temp__0", -1, CPyStatic_other_income___globals);
        goto CPyL222;
    }
    CPy_INCREF(cpy_r_r54);
CPyL37: ;
    cpy_r_r55 = CPy_YieldFromErrorHandle(cpy_r_r54, cpy_r_r53);
    CPy_DecRef(cpy_r_r54);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 54, CPyStatic_other_income___globals);
        goto CPyL222;
    }
    if (cpy_r_r55) goto CPyL41;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r47 = cpy_r_r1;
    cpy_r_r56 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__1;
    if (unlikely(cpy_r_r56.f0 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "__mypyc_temp__1", -1, CPyStatic_other_income___globals);
        goto CPyL223;
    }
    CPy_INCREF(cpy_r_r56.f0);
    CPy_INCREF(cpy_r_r56.f1);
    CPy_INCREF(cpy_r_r56.f2);
CPyL40: ;
    CPy_RestoreExcInfo(cpy_r_r56);
    CPy_DecRef(cpy_r_r56.f0);
    CPy_DecRef(cpy_r_r56.f1);
    CPy_DecRef(cpy_r_r56.f2);
    goto CPyL29;
CPyL41: ;
    cpy_r_r46 = cpy_r_r1;
    cpy_r_r57 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__1;
    if (unlikely(cpy_r_r57.f0 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "__mypyc_temp__1", -1, CPyStatic_other_income___globals);
        goto CPyL224;
    }
    CPy_INCREF(cpy_r_r57.f0);
    CPy_INCREF(cpy_r_r57.f1);
    CPy_INCREF(cpy_r_r57.f2);
CPyL42: ;
    CPy_RestoreExcInfo(cpy_r_r57);
    CPy_DecRef(cpy_r_r57.f0);
    CPy_DecRef(cpy_r_r57.f1);
    CPy_DecRef(cpy_r_r57.f2);
    goto CPyL51;
CPyL43: ;
    cpy_r_r58 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__1;
    if (unlikely(cpy_r_r58.f0 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "__mypyc_temp__1", -1, CPyStatic_other_income___globals);
        goto CPyL53;
    }
    CPy_INCREF(cpy_r_r58.f0);
    CPy_INCREF(cpy_r_r58.f1);
    CPy_INCREF(cpy_r_r58.f2);
CPyL44: ;
    CPy_RestoreExcInfo(cpy_r_r58);
    CPy_DecRef(cpy_r_r58.f0);
    CPy_DecRef(cpy_r_r58.f1);
    CPy_DecRef(cpy_r_r58.f2);
    cpy_r_r59 = CPy_KeepPropagating();
    if (!cpy_r_r59) {
        goto CPyL53;
    } else
        goto CPyL225;
CPyL45: ;
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r60 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__0;
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "__mypyc_temp__0", -1, CPyStatic_other_income___globals);
        goto CPyL226;
    }
    CPy_INCREF(cpy_r_r60);
CPyL47: ;
    cpy_r_r61 = CPyIter_Send(cpy_r_r60, cpy_r_arg);
    CPy_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r61 == NULL) goto CPyL227;
    cpy_r_r47 = cpy_r_r61;
    goto CPyL29;
CPyL49: ;
    cpy_r_r62 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 54, CPyStatic_other_income___globals);
        goto CPyL218;
    }
    cpy_r_r46 = cpy_r_r62;
CPyL51: ;
    if (likely(PyList_Check(cpy_r_r46)))
        cpy_r_r63 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 54, CPyStatic_other_income___globals, "list", cpy_r_r46);
        goto CPyL218;
    }
    if (((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->_strat != NULL) {
        CPy_DECREF_NO_IMM(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->_strat);
    }
    ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->_strat = cpy_r_r63;
    cpy_r_r64 = 1;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 54, CPyStatic_other_income___globals);
        goto CPyL218;
    } else
        goto CPyL65;
CPyL53: ;
    cpy_r_r65 = CPy_CatchError();
    if (((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__2.f0 != NULL) {
        CPy_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__2.f0);
        CPy_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__2.f1);
        CPy_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__2.f2);
    }
    ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__2 = cpy_r_r65;
    cpy_r_r66 = 1;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", -1, CPyStatic_other_income___globals);
        goto CPyL62;
    }
    cpy_r_r67 = CPyStatic_other_income___globals;
    cpy_r_r68 = CPyStatics[266]; /* 'ContractNotVerified' */
    cpy_r_r69 = CPyDict_GetItem(cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 55, CPyStatic_other_income___globals);
        goto CPyL62;
    }
    cpy_r_r70 = CPy_ExceptionMatches(cpy_r_r69);
    CPy_DecRef(cpy_r_r69);
    if (!cpy_r_r70) goto CPyL60;
    cpy_r_r71 = 0 ? Py_True : Py_False;
    cpy_r_r72 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__2;
    if (unlikely(cpy_r_r72.f0 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "__mypyc_temp__2", -1, CPyStatic_other_income___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r72.f0);
    CPy_INCREF(cpy_r_r72.f1);
    CPy_INCREF(cpy_r_r72.f2);
CPyL57: ;
    CPy_RestoreExcInfo(cpy_r_r72);
    CPy_DecRef(cpy_r_r72.f0);
    CPy_DecRef(cpy_r_r72.f1);
    CPy_DecRef(cpy_r_r72.f2);
    if (((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__);
    }
    ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__ = -2;
    cpy_r_r73 = 1;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 56, CPyStatic_other_income___globals);
        goto CPyL62;
    } else
        goto CPyL228;
CPyL58: ;
    CPyGen_SetStopIterationValue(cpy_r_r71);
    if (!0) goto CPyL209;
    CPy_Unreachable();
CPyL60: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL62;
    } else
        goto CPyL229;
CPyL61: ;
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r74 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__2;
    if (unlikely(cpy_r_r74.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__2' of 'is_robovault_share_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r74.f0);
        CPy_INCREF(cpy_r_r74.f1);
        CPy_INCREF(cpy_r_r74.f2);
    }
    CPy_DecRef(cpy_r_r8);
    if (unlikely(cpy_r_r74.f0 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", -1, CPyStatic_other_income___globals);
        goto CPyL209;
    }
CPyL63: ;
    CPy_RestoreExcInfo(cpy_r_r74);
    CPy_DecRef(cpy_r_r74.f0);
    CPy_DecRef(cpy_r_r74.f1);
    CPy_DecRef(cpy_r_r74.f2);
    cpy_r_r75 = CPy_KeepPropagating();
    if (!cpy_r_r75) goto CPyL209;
    CPy_Unreachable();
CPyL65: ;
    cpy_r_r76 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->_strat;
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "strat", 58, CPyStatic_other_income___globals);
        goto CPyL230;
    }
    CPy_INCREF_NO_IMM(cpy_r_r76);
CPyL66: ;
    cpy_r_r77 = CPyStatics[267]; /* 'vault' */
    cpy_r_r78 = PyObject_HasAttr(cpy_r_r76, cpy_r_r77);
    CPy_DECREF_NO_IMM(cpy_r_r76);
    if (cpy_r_r78) {
        goto CPyL70;
    } else
        goto CPyL231;
CPyL67: ;
    cpy_r_r79 = 0 ? Py_True : Py_False;
    if (((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__);
    }
    ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__ = -2;
    cpy_r_r80 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r8);
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 59, CPyStatic_other_income___globals);
        goto CPyL209;
    }
    CPyGen_SetStopIterationValue(cpy_r_r79);
    if (!0) goto CPyL209;
    CPy_Unreachable();
CPyL70: ;
    cpy_r_r81 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->_strat;
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "strat", 61, CPyStatic_other_income___globals);
        goto CPyL230;
    }
    CPy_INCREF_NO_IMM(cpy_r_r81);
CPyL71: ;
    cpy_r_r82 = CPyStatics[267]; /* 'vault' */
    cpy_r_r83 = CPyObject_GetAttr(cpy_r_r81, cpy_r_r82);
    CPy_DECREF_NO_IMM(cpy_r_r81);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 61, CPyStatic_other_income___globals);
        goto CPyL230;
    }
    cpy_r_r84 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->_tx;
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "tx", 61, CPyStatic_other_income___globals);
        goto CPyL232;
    }
    CPy_INCREF(cpy_r_r84);
CPyL73: ;
    cpy_r_r85 = CPyStatics[268]; /* 'block' */
    cpy_r_r86 = CPyObject_GetAttr(cpy_r_r84, cpy_r_r85);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 61, CPyStatic_other_income___globals);
        goto CPyL232;
    }
    if (likely(PyLong_Check(cpy_r_r86)))
        cpy_r_r87 = CPyTagged_FromObject(cpy_r_r86);
    else {
        CPy_TypeError("int", cpy_r_r86); cpy_r_r87 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r87 == CPY_INT_TAG)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 61, CPyStatic_other_income___globals);
        goto CPyL232;
    }
    cpy_r_r88 = CPyStatics[265]; /* 'coroutine' */
    cpy_r_r89 = CPyTagged_StealAsObject(cpy_r_r87);
    PyObject *cpy_r_r90[2] = {cpy_r_r83, cpy_r_r89};
    cpy_r_r91 = (PyObject **)&cpy_r_r90;
    cpy_r_r92 = CPyStatics[454]; /* ('block_identifier',) */
    cpy_r_r93 = PyObject_VectorcallMethod(cpy_r_r88, cpy_r_r91, 9223372036854775809ULL, cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 61, CPyStatic_other_income___globals);
        goto CPyL233;
    }
    CPy_DECREF(cpy_r_r83);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r94 = CPy_GetCoro(cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 61, CPyStatic_other_income___globals);
        goto CPyL230;
    }
    if (((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__3 != NULL) {
        CPy_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__3);
    }
    ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__3 = cpy_r_r94;
    cpy_r_r95 = 1;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", -1, CPyStatic_other_income___globals);
        goto CPyL230;
    }
    cpy_r_r96 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__3;
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "__mypyc_temp__3", -1, CPyStatic_other_income___globals);
        goto CPyL230;
    }
    CPy_INCREF(cpy_r_r96);
CPyL79: ;
    cpy_r_r97 = CPyIter_Next(cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    if (cpy_r_r97 == NULL) {
        goto CPyL234;
    } else
        goto CPyL82;
CPyL80: ;
    cpy_r_r98 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 61, CPyStatic_other_income___globals);
        goto CPyL235;
    }
    cpy_r_r99 = cpy_r_r98;
    goto CPyL105;
CPyL82: ;
    cpy_r_r100 = cpy_r_r97;
CPyL83: ;
    if (((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__);
    }
    ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__ = 4;
    cpy_r_r101 = 1;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 61, CPyStatic_other_income___globals);
        goto CPyL236;
    } else
        goto CPyL237;
CPyL84: ;
    return cpy_r_r100;
CPyL85: ;
    cpy_r_r102 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r103 = cpy_r_type != cpy_r_r102;
    if (!cpy_r_r103) goto CPyL88;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 61, CPyStatic_other_income___globals);
        goto CPyL89;
    } else
        goto CPyL238;
CPyL87: ;
    CPy_Unreachable();
CPyL88: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL100;
CPyL89: ;
    cpy_r_r104 = CPy_CatchError();
    if (((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__4.f0 != NULL) {
        CPy_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__4.f0);
        CPy_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__4.f1);
        CPy_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__4.f2);
    }
    ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__4 = cpy_r_r104;
    cpy_r_r105 = 1;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", -1, CPyStatic_other_income___globals);
        goto CPyL239;
    }
    cpy_r_r106 = (PyObject **)&cpy_r_r3;
    cpy_r_r107 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__3;
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "__mypyc_temp__3", -1, CPyStatic_other_income___globals);
        goto CPyL239;
    }
    CPy_INCREF(cpy_r_r107);
CPyL91: ;
    cpy_r_r108 = CPy_YieldFromErrorHandle(cpy_r_r107, cpy_r_r106);
    CPy_DecRef(cpy_r_r107);
    if (unlikely(cpy_r_r108 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 61, CPyStatic_other_income___globals);
        goto CPyL239;
    }
    if (cpy_r_r108) goto CPyL95;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r100 = cpy_r_r3;
    cpy_r_r109 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__4;
    if (unlikely(cpy_r_r109.f0 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "__mypyc_temp__4", -1, CPyStatic_other_income___globals);
        goto CPyL240;
    }
    CPy_INCREF(cpy_r_r109.f0);
    CPy_INCREF(cpy_r_r109.f1);
    CPy_INCREF(cpy_r_r109.f2);
CPyL94: ;
    CPy_RestoreExcInfo(cpy_r_r109);
    CPy_DecRef(cpy_r_r109.f0);
    CPy_DecRef(cpy_r_r109.f1);
    CPy_DecRef(cpy_r_r109.f2);
    goto CPyL83;
CPyL95: ;
    cpy_r_r99 = cpy_r_r3;
    cpy_r_r110 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__4;
    if (unlikely(cpy_r_r110.f0 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "__mypyc_temp__4", -1, CPyStatic_other_income___globals);
        goto CPyL241;
    }
    CPy_INCREF(cpy_r_r110.f0);
    CPy_INCREF(cpy_r_r110.f1);
    CPy_INCREF(cpy_r_r110.f2);
CPyL96: ;
    CPy_RestoreExcInfo(cpy_r_r110);
    CPy_DecRef(cpy_r_r110.f0);
    CPy_DecRef(cpy_r_r110.f1);
    CPy_DecRef(cpy_r_r110.f2);
    goto CPyL105;
CPyL97: ;
    cpy_r_r111 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__4;
    if (unlikely(cpy_r_r111.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__4' of 'is_robovault_share_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r111.f0);
        CPy_INCREF(cpy_r_r111.f1);
        CPy_INCREF(cpy_r_r111.f2);
    }
    CPy_DecRef(cpy_r_r8);
    if (unlikely(cpy_r_r111.f0 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", -1, CPyStatic_other_income___globals);
        goto CPyL209;
    }
CPyL98: ;
    CPy_RestoreExcInfo(cpy_r_r111);
    CPy_DecRef(cpy_r_r111.f0);
    CPy_DecRef(cpy_r_r111.f1);
    CPy_DecRef(cpy_r_r111.f2);
    cpy_r_r112 = CPy_KeepPropagating();
    if (!cpy_r_r112) goto CPyL209;
    CPy_Unreachable();
CPyL100: ;
    cpy_r_r113 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__3;
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "__mypyc_temp__3", -1, CPyStatic_other_income___globals);
        goto CPyL242;
    }
    CPy_INCREF(cpy_r_r113);
CPyL101: ;
    cpy_r_r114 = CPyIter_Send(cpy_r_r113, cpy_r_arg);
    CPy_DECREF(cpy_r_r113);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r114 == NULL) goto CPyL243;
    cpy_r_r100 = cpy_r_r114;
    goto CPyL83;
CPyL103: ;
    cpy_r_r115 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 61, CPyStatic_other_income___globals);
        goto CPyL235;
    }
    cpy_r_r99 = cpy_r_r115;
CPyL105: ;
    cpy_r_r116 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->_tx;
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "tx", 61, CPyStatic_other_income___globals);
        goto CPyL244;
    }
    CPy_INCREF(cpy_r_r116);
CPyL106: ;
    cpy_r_r117 = CPyStatics[232]; /* 'token' */
    cpy_r_r118 = CPyObject_GetAttr(cpy_r_r116, cpy_r_r117);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 61, CPyStatic_other_income___globals);
        goto CPyL244;
    }
    cpy_r_r119 = PyObject_RichCompare(cpy_r_r99, cpy_r_r118, 2);
    CPy_DECREF(cpy_r_r99);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 61, CPyStatic_other_income___globals);
        goto CPyL235;
    }
    cpy_r_r120 = PyObject_IsTrue(cpy_r_r119);
    CPy_DECREF(cpy_r_r119);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 61, CPyStatic_other_income___globals);
        goto CPyL235;
    }
    cpy_r_r122 = cpy_r_r120;
    if (cpy_r_r122) {
        goto CPyL245;
    } else
        goto CPyL113;
CPyL110: ;
    cpy_r_r123 = 1 ? Py_True : Py_False;
    if (((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__);
    }
    ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__ = -2;
    cpy_r_r124 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r8);
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 62, CPyStatic_other_income___globals);
        goto CPyL209;
    }
    CPyGen_SetStopIterationValue(cpy_r_r123);
    if (!0) goto CPyL209;
    CPy_Unreachable();
CPyL113: ;
    cpy_r_r125 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->_tx;
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "tx", 65, CPyStatic_other_income___globals);
        goto CPyL235;
    }
    CPy_INCREF(cpy_r_r125);
CPyL114: ;
    cpy_r_r126 = CPyStatics[89]; /* 'from_nickname' */
    cpy_r_r127 = CPyObject_GetAttr(cpy_r_r125, cpy_r_r126);
    CPy_DECREF(cpy_r_r125);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 65, CPyStatic_other_income___globals);
        goto CPyL235;
    }
    if (likely(PyUnicode_Check(cpy_r_r127)))
        cpy_r_r128 = cpy_r_r127;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 65, CPyStatic_other_income___globals, "str", cpy_r_r127);
        goto CPyL235;
    }
    cpy_r_r129 = CPyStatics[270]; /* 'Contract: Strategy' */
    cpy_r_r130 = PyUnicode_Compare(cpy_r_r128, cpy_r_r129);
    CPy_DECREF(cpy_r_r128);
    cpy_r_r131 = cpy_r_r130 == -1;
    if (!cpy_r_r131) goto CPyL119;
    cpy_r_r132 = PyErr_Occurred();
    cpy_r_r133 = cpy_r_r132 != NULL;
    if (!cpy_r_r133) goto CPyL119;
    cpy_r_r134 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r134)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 65, CPyStatic_other_income___globals);
        goto CPyL235;
    }
CPyL119: ;
    cpy_r_r135 = cpy_r_r130 == 0;
    if (cpy_r_r135) {
        goto CPyL121;
    } else
        goto CPyL246;
CPyL120: ;
    cpy_r_r136 = cpy_r_r135 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r136);
    cpy_r_r137 = cpy_r_r136;
    goto CPyL199;
CPyL121: ;
    cpy_r_r138 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->_tx;
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "tx", 66, CPyStatic_other_income___globals);
        goto CPyL235;
    }
    CPy_INCREF(cpy_r_r138);
CPyL122: ;
    cpy_r_r139 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r140 = CPyObject_GetAttr(cpy_r_r138, cpy_r_r139);
    CPy_DECREF(cpy_r_r138);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 66, CPyStatic_other_income___globals);
        goto CPyL235;
    }
    if (likely(PyUnicode_Check(cpy_r_r140)))
        cpy_r_r141 = cpy_r_r140;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 66, CPyStatic_other_income___globals, "str", cpy_r_r140);
        goto CPyL235;
    }
    cpy_r_r142 = CPyStatics[271]; /* 'rv3USDCc' */
    cpy_r_r143 = PyUnicode_Compare(cpy_r_r141, cpy_r_r142);
    CPy_DECREF(cpy_r_r141);
    cpy_r_r144 = cpy_r_r143 == -1;
    if (!cpy_r_r144) goto CPyL127;
    cpy_r_r145 = PyErr_Occurred();
    cpy_r_r146 = cpy_r_r145 != NULL;
    if (!cpy_r_r146) goto CPyL127;
    cpy_r_r147 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r147)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 66, CPyStatic_other_income___globals);
        goto CPyL235;
    }
CPyL127: ;
    cpy_r_r148 = cpy_r_r143 == 0;
    if (cpy_r_r148) {
        goto CPyL129;
    } else
        goto CPyL247;
CPyL128: ;
    cpy_r_r149 = cpy_r_r148 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r149);
    cpy_r_r150 = cpy_r_r149;
    goto CPyL198;
CPyL129: ;
    cpy_r_r151 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->_strat;
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "strat", 68, CPyStatic_other_income___globals);
        goto CPyL235;
    }
    CPy_INCREF_NO_IMM(cpy_r_r151);
CPyL130: ;
    cpy_r_r152 = CPyStatics[267]; /* 'vault' */
    cpy_r_r153 = CPyObject_GetAttr(cpy_r_r151, cpy_r_r152);
    CPy_DECREF_NO_IMM(cpy_r_r151);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 68, CPyStatic_other_income___globals);
        goto CPyL235;
    }
    cpy_r_r154 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->_tx;
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "tx", 68, CPyStatic_other_income___globals);
        goto CPyL248;
    }
    CPy_INCREF(cpy_r_r154);
CPyL132: ;
    cpy_r_r155 = CPyStatics[268]; /* 'block' */
    cpy_r_r156 = CPyObject_GetAttr(cpy_r_r154, cpy_r_r155);
    CPy_DECREF(cpy_r_r154);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 68, CPyStatic_other_income___globals);
        goto CPyL248;
    }
    if (likely(PyLong_Check(cpy_r_r156)))
        cpy_r_r157 = CPyTagged_FromObject(cpy_r_r156);
    else {
        CPy_TypeError("int", cpy_r_r156); cpy_r_r157 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r156);
    if (unlikely(cpy_r_r157 == CPY_INT_TAG)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 68, CPyStatic_other_income___globals);
        goto CPyL248;
    }
    cpy_r_r158 = CPyStatics[265]; /* 'coroutine' */
    cpy_r_r159 = CPyTagged_StealAsObject(cpy_r_r157);
    PyObject *cpy_r_r160[2] = {cpy_r_r153, cpy_r_r159};
    cpy_r_r161 = (PyObject **)&cpy_r_r160;
    cpy_r_r162 = CPyStatics[454]; /* ('block_identifier',) */
    cpy_r_r163 = PyObject_VectorcallMethod(cpy_r_r158, cpy_r_r161, 9223372036854775809ULL, cpy_r_r162);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 68, CPyStatic_other_income___globals);
        goto CPyL249;
    }
    CPy_DECREF(cpy_r_r153);
    CPy_DECREF(cpy_r_r159);
    cpy_r_r164 = CPy_GetCoro(cpy_r_r163);
    CPy_DECREF(cpy_r_r163);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 68, CPyStatic_other_income___globals);
        goto CPyL235;
    }
    if (((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__5 != NULL) {
        CPy_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__5);
    }
    ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__5 = cpy_r_r164;
    cpy_r_r165 = 1;
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", -1, CPyStatic_other_income___globals);
        goto CPyL235;
    }
    cpy_r_r166 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__5;
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "__mypyc_temp__5", -1, CPyStatic_other_income___globals);
        goto CPyL235;
    }
    CPy_INCREF(cpy_r_r166);
CPyL138: ;
    cpy_r_r167 = CPyIter_Next(cpy_r_r166);
    CPy_DECREF(cpy_r_r166);
    if (cpy_r_r167 == NULL) {
        goto CPyL250;
    } else
        goto CPyL141;
CPyL139: ;
    cpy_r_r168 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 68, CPyStatic_other_income___globals);
        goto CPyL251;
    }
    cpy_r_r169 = cpy_r_r168;
    goto CPyL164;
CPyL141: ;
    cpy_r_r170 = cpy_r_r167;
CPyL142: ;
    if (((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__);
    }
    ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__ = 6;
    cpy_r_r171 = 1;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 68, CPyStatic_other_income___globals);
        goto CPyL252;
    } else
        goto CPyL253;
CPyL143: ;
    return cpy_r_r170;
CPyL144: ;
    cpy_r_r172 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r173 = cpy_r_type != cpy_r_r172;
    if (!cpy_r_r173) goto CPyL147;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 68, CPyStatic_other_income___globals);
        goto CPyL148;
    } else
        goto CPyL254;
CPyL146: ;
    CPy_Unreachable();
CPyL147: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL159;
CPyL148: ;
    cpy_r_r174 = CPy_CatchError();
    if (((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__6.f0 != NULL) {
        CPy_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__6.f0);
        CPy_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__6.f1);
        CPy_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__6.f2);
    }
    ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__6 = cpy_r_r174;
    cpy_r_r175 = 1;
    if (unlikely(!cpy_r_r175)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", -1, CPyStatic_other_income___globals);
        goto CPyL255;
    }
    cpy_r_r176 = (PyObject **)&cpy_r_r5;
    cpy_r_r177 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__5;
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "__mypyc_temp__5", -1, CPyStatic_other_income___globals);
        goto CPyL255;
    }
    CPy_INCREF(cpy_r_r177);
CPyL150: ;
    cpy_r_r178 = CPy_YieldFromErrorHandle(cpy_r_r177, cpy_r_r176);
    CPy_DecRef(cpy_r_r177);
    if (unlikely(cpy_r_r178 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 68, CPyStatic_other_income___globals);
        goto CPyL255;
    }
    if (cpy_r_r178) goto CPyL154;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r170 = cpy_r_r5;
    cpy_r_r179 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__6;
    if (unlikely(cpy_r_r179.f0 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "__mypyc_temp__6", -1, CPyStatic_other_income___globals);
        goto CPyL256;
    }
    CPy_INCREF(cpy_r_r179.f0);
    CPy_INCREF(cpy_r_r179.f1);
    CPy_INCREF(cpy_r_r179.f2);
CPyL153: ;
    CPy_RestoreExcInfo(cpy_r_r179);
    CPy_DecRef(cpy_r_r179.f0);
    CPy_DecRef(cpy_r_r179.f1);
    CPy_DecRef(cpy_r_r179.f2);
    goto CPyL142;
CPyL154: ;
    cpy_r_r169 = cpy_r_r5;
    cpy_r_r180 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__6;
    if (unlikely(cpy_r_r180.f0 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "__mypyc_temp__6", -1, CPyStatic_other_income___globals);
        goto CPyL257;
    }
    CPy_INCREF(cpy_r_r180.f0);
    CPy_INCREF(cpy_r_r180.f1);
    CPy_INCREF(cpy_r_r180.f2);
CPyL155: ;
    CPy_RestoreExcInfo(cpy_r_r180);
    CPy_DecRef(cpy_r_r180.f0);
    CPy_DecRef(cpy_r_r180.f1);
    CPy_DecRef(cpy_r_r180.f2);
    goto CPyL164;
CPyL156: ;
    cpy_r_r181 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__6;
    if (unlikely(cpy_r_r181.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__6' of 'is_robovault_share_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r181.f0);
        CPy_INCREF(cpy_r_r181.f1);
        CPy_INCREF(cpy_r_r181.f2);
    }
    CPy_DecRef(cpy_r_r8);
    if (unlikely(cpy_r_r181.f0 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", -1, CPyStatic_other_income___globals);
        goto CPyL209;
    }
CPyL157: ;
    CPy_RestoreExcInfo(cpy_r_r181);
    CPy_DecRef(cpy_r_r181.f0);
    CPy_DecRef(cpy_r_r181.f1);
    CPy_DecRef(cpy_r_r181.f2);
    cpy_r_r182 = CPy_KeepPropagating();
    if (!cpy_r_r182) goto CPyL209;
    CPy_Unreachable();
CPyL159: ;
    cpy_r_r183 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__5;
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "__mypyc_temp__5", -1, CPyStatic_other_income___globals);
        goto CPyL258;
    }
    CPy_INCREF(cpy_r_r183);
CPyL160: ;
    cpy_r_r184 = CPyIter_Send(cpy_r_r183, cpy_r_arg);
    CPy_DECREF(cpy_r_r183);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r184 == NULL) goto CPyL259;
    cpy_r_r170 = cpy_r_r184;
    goto CPyL142;
CPyL162: ;
    cpy_r_r185 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 68, CPyStatic_other_income___globals);
        goto CPyL251;
    }
    cpy_r_r169 = cpy_r_r185;
CPyL164: ;
    cpy_r_r186 = CPyStatic_other_income___globals;
    cpy_r_r187 = CPyStatics[272]; /* 'ERC20' */
    cpy_r_r188 = CPyDict_GetItem(cpy_r_r186, cpy_r_r187);
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 67, CPyStatic_other_income___globals);
        goto CPyL260;
    }
    cpy_r_r189 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r190[2] = {cpy_r_r169, cpy_r_r189};
    cpy_r_r191 = (PyObject **)&cpy_r_r190;
    cpy_r_r192 = CPyStatics[455]; /* ('asynchronous',) */
    cpy_r_r193 = PyObject_Vectorcall(cpy_r_r188, cpy_r_r191, 1, cpy_r_r192);
    CPy_DECREF(cpy_r_r188);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 67, CPyStatic_other_income___globals);
        goto CPyL260;
    }
    CPy_DECREF(cpy_r_r169);
    cpy_r_r194 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r195 = CPyObject_GetAttr(cpy_r_r193, cpy_r_r194);
    CPy_DECREF(cpy_r_r193);
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 67, CPyStatic_other_income___globals);
        goto CPyL251;
    }
    cpy_r_r196 = CPy_GetCoro(cpy_r_r195);
    CPy_DECREF(cpy_r_r195);
    if (unlikely(cpy_r_r196 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 67, CPyStatic_other_income___globals);
        goto CPyL251;
    }
    if (((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__7 != NULL) {
        CPy_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__7);
    }
    ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__7 = cpy_r_r196;
    cpy_r_r197 = 1;
    if (unlikely(!cpy_r_r197)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", -1, CPyStatic_other_income___globals);
        goto CPyL251;
    }
    cpy_r_r198 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__7;
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "__mypyc_temp__7", -1, CPyStatic_other_income___globals);
        goto CPyL251;
    }
    CPy_INCREF(cpy_r_r198);
CPyL170: ;
    cpy_r_r199 = CPyIter_Next(cpy_r_r198);
    CPy_DECREF(cpy_r_r198);
    if (cpy_r_r199 == NULL) {
        goto CPyL261;
    } else
        goto CPyL173;
CPyL171: ;
    cpy_r_r200 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 67, CPyStatic_other_income___globals);
        goto CPyL262;
    }
    cpy_r_r201 = cpy_r_r200;
    goto CPyL196;
CPyL173: ;
    cpy_r_r202 = cpy_r_r199;
CPyL174: ;
    if (((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__);
    }
    ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__ = 8;
    cpy_r_r203 = 1;
    if (unlikely(!cpy_r_r203)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 67, CPyStatic_other_income___globals);
        goto CPyL263;
    } else
        goto CPyL264;
CPyL175: ;
    return cpy_r_r202;
CPyL176: ;
    cpy_r_r204 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r205 = cpy_r_type != cpy_r_r204;
    if (!cpy_r_r205) goto CPyL179;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 67, CPyStatic_other_income___globals);
        goto CPyL180;
    } else
        goto CPyL265;
CPyL178: ;
    CPy_Unreachable();
CPyL179: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL191;
CPyL180: ;
    cpy_r_r206 = CPy_CatchError();
    if (((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__8.f0 != NULL) {
        CPy_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__8.f0);
        CPy_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__8.f1);
        CPy_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__8.f2);
    }
    ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__8 = cpy_r_r206;
    cpy_r_r207 = 1;
    if (unlikely(!cpy_r_r207)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", -1, CPyStatic_other_income___globals);
        goto CPyL266;
    }
    cpy_r_r208 = (PyObject **)&cpy_r_r7;
    cpy_r_r209 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__7;
    if (unlikely(cpy_r_r209 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "__mypyc_temp__7", -1, CPyStatic_other_income___globals);
        goto CPyL266;
    }
    CPy_INCREF(cpy_r_r209);
CPyL182: ;
    cpy_r_r210 = CPy_YieldFromErrorHandle(cpy_r_r209, cpy_r_r208);
    CPy_DecRef(cpy_r_r209);
    if (unlikely(cpy_r_r210 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 67, CPyStatic_other_income___globals);
        goto CPyL266;
    }
    if (cpy_r_r210) goto CPyL186;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r202 = cpy_r_r7;
    cpy_r_r211 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__8;
    if (unlikely(cpy_r_r211.f0 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "__mypyc_temp__8", -1, CPyStatic_other_income___globals);
        goto CPyL267;
    }
    CPy_INCREF(cpy_r_r211.f0);
    CPy_INCREF(cpy_r_r211.f1);
    CPy_INCREF(cpy_r_r211.f2);
CPyL185: ;
    CPy_RestoreExcInfo(cpy_r_r211);
    CPy_DecRef(cpy_r_r211.f0);
    CPy_DecRef(cpy_r_r211.f1);
    CPy_DecRef(cpy_r_r211.f2);
    goto CPyL174;
CPyL186: ;
    cpy_r_r201 = cpy_r_r7;
    cpy_r_r212 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__8;
    if (unlikely(cpy_r_r212.f0 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "__mypyc_temp__8", -1, CPyStatic_other_income___globals);
        goto CPyL268;
    }
    CPy_INCREF(cpy_r_r212.f0);
    CPy_INCREF(cpy_r_r212.f1);
    CPy_INCREF(cpy_r_r212.f2);
CPyL187: ;
    CPy_RestoreExcInfo(cpy_r_r212);
    CPy_DecRef(cpy_r_r212.f0);
    CPy_DecRef(cpy_r_r212.f1);
    CPy_DecRef(cpy_r_r212.f2);
    goto CPyL196;
CPyL188: ;
    cpy_r_r213 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__8;
    if (unlikely(cpy_r_r213.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__8' of 'is_robovault_share_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r213.f0);
        CPy_INCREF(cpy_r_r213.f1);
        CPy_INCREF(cpy_r_r213.f2);
    }
    CPy_DecRef(cpy_r_r8);
    if (unlikely(cpy_r_r213.f0 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", -1, CPyStatic_other_income___globals);
        goto CPyL209;
    }
CPyL189: ;
    CPy_RestoreExcInfo(cpy_r_r213);
    CPy_DecRef(cpy_r_r213.f0);
    CPy_DecRef(cpy_r_r213.f1);
    CPy_DecRef(cpy_r_r213.f2);
    cpy_r_r214 = CPy_KeepPropagating();
    if (!cpy_r_r214) goto CPyL209;
    CPy_Unreachable();
CPyL191: ;
    cpy_r_r215 = ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_temp__7;
    if (unlikely(cpy_r_r215 == NULL)) {
        CPy_AttributeError("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", "is_robovault_share_env", "__mypyc_temp__7", -1, CPyStatic_other_income___globals);
        goto CPyL269;
    }
    CPy_INCREF(cpy_r_r215);
CPyL192: ;
    cpy_r_r216 = CPyIter_Send(cpy_r_r215, cpy_r_arg);
    CPy_DECREF(cpy_r_r215);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r216 == NULL) goto CPyL270;
    cpy_r_r202 = cpy_r_r216;
    goto CPyL174;
CPyL194: ;
    cpy_r_r217 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 67, CPyStatic_other_income___globals);
        goto CPyL262;
    }
    cpy_r_r201 = cpy_r_r217;
CPyL196: ;
    cpy_r_r218 = CPyStatics[274]; /* 'rv3USDCb' */
    cpy_r_r219 = PyObject_RichCompare(cpy_r_r201, cpy_r_r218, 2);
    CPy_DECREF(cpy_r_r201);
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 67, CPyStatic_other_income___globals);
        goto CPyL262;
    }
    cpy_r_r150 = cpy_r_r219;
CPyL198: ;
    cpy_r_r137 = cpy_r_r150;
CPyL199: ;
    if (((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__);
    }
    ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r8)->___mypyc_next_label__ = -2;
    cpy_r_r220 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r8);
    if (unlikely(!cpy_r_r220)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 64, CPyStatic_other_income___globals);
        goto CPyL271;
    }
    CPyGen_SetStopIterationValue(cpy_r_r137);
    CPy_DECREF(cpy_r_r137);
    if (!0) goto CPyL209;
    CPy_Unreachable();
CPyL202: ;
    cpy_r_r221 = cpy_r_r9 == 0;
    if (cpy_r_r221) goto CPyL272;
    cpy_r_r222 = cpy_r_r9 == 2;
    if (cpy_r_r222) {
        goto CPyL273;
    } else
        goto CPyL274;
CPyL204: ;
    cpy_r_r223 = cpy_r_r9 == 4;
    if (cpy_r_r223) {
        goto CPyL275;
    } else
        goto CPyL276;
CPyL205: ;
    cpy_r_r224 = cpy_r_r9 == 6;
    if (cpy_r_r224) {
        goto CPyL277;
    } else
        goto CPyL278;
CPyL206: ;
    cpy_r_r225 = cpy_r_r9 == 8;
    CPyTagged_DECREF(cpy_r_r9);
    if (cpy_r_r225) {
        goto CPyL176;
    } else
        goto CPyL279;
CPyL207: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r226 = 0;
    if (unlikely(!cpy_r_r226)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 46, CPyStatic_other_income___globals);
        goto CPyL209;
    }
    CPy_Unreachable();
CPyL209: ;
    cpy_r_r227 = NULL;
    return cpy_r_r227;
CPyL210: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_XDecRef(cpy_r_r3);
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    goto CPyL209;
CPyL211: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_XDecRef(cpy_r_r3);
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    goto CPyL209;
CPyL212: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_XDECREF(cpy_r_r3);
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    goto CPyL3;
CPyL213: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_XDECREF(cpy_r_r3);
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    goto CPyL14;
CPyL214: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_XDecRef(cpy_r_r3);
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    goto CPyL53;
CPyL215: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_XDecRef(cpy_r_r3);
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r31);
    goto CPyL53;
CPyL216: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_XDecRef(cpy_r_r3);
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r36);
    goto CPyL53;
CPyL217: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL26;
CPyL218: ;
    CPy_XDecRef(cpy_r_r3);
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    goto CPyL53;
CPyL219: ;
    CPy_DecRef(cpy_r_r47);
    goto CPyL35;
CPyL220: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_XDECREF(cpy_r_r3);
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    goto CPyL30;
CPyL221: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_XDECREF(cpy_r_r3);
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    goto CPyL33;
CPyL222: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_XDecRef(cpy_r_r3);
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    goto CPyL43;
CPyL223: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_XDecRef(cpy_r_r3);
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r47);
    goto CPyL43;
CPyL224: ;
    CPy_XDecRef(cpy_r_r3);
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r46);
    goto CPyL43;
CPyL225: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL45;
CPyL226: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_XDecRef(cpy_r_r3);
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_arg);
    goto CPyL53;
CPyL227: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL49;
CPyL228: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL58;
CPyL229: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL61;
CPyL230: ;
    CPy_XDecRef(cpy_r_r3);
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    goto CPyL209;
CPyL231: ;
    CPy_XDECREF(cpy_r_r3);
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    goto CPyL67;
CPyL232: ;
    CPy_XDecRef(cpy_r_r3);
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r83);
    goto CPyL209;
CPyL233: ;
    CPy_XDecRef(cpy_r_r3);
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r83);
    CPy_DecRef(cpy_r_r89);
    goto CPyL209;
CPyL234: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL80;
CPyL235: ;
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    goto CPyL209;
CPyL236: ;
    CPy_DecRef(cpy_r_r100);
    goto CPyL89;
CPyL237: ;
    CPy_XDECREF(cpy_r_r3);
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    goto CPyL84;
CPyL238: ;
    CPy_XDECREF(cpy_r_r3);
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    goto CPyL87;
CPyL239: ;
    CPy_XDecRef(cpy_r_r3);
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    goto CPyL97;
CPyL240: ;
    CPy_XDecRef(cpy_r_r3);
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r100);
    goto CPyL97;
CPyL241: ;
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r99);
    goto CPyL97;
CPyL242: ;
    CPy_XDecRef(cpy_r_r3);
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_arg);
    goto CPyL209;
CPyL243: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL103;
CPyL244: ;
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r99);
    goto CPyL209;
CPyL245: ;
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    goto CPyL110;
CPyL246: ;
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    goto CPyL120;
CPyL247: ;
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    goto CPyL128;
CPyL248: ;
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r153);
    goto CPyL209;
CPyL249: ;
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r159);
    goto CPyL209;
CPyL250: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL139;
CPyL251: ;
    CPy_XDecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    goto CPyL209;
CPyL252: ;
    CPy_DecRef(cpy_r_r170);
    goto CPyL148;
CPyL253: ;
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    goto CPyL143;
CPyL254: ;
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    goto CPyL146;
CPyL255: ;
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    goto CPyL156;
CPyL256: ;
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r170);
    goto CPyL156;
CPyL257: ;
    CPy_XDecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r169);
    goto CPyL156;
CPyL258: ;
    CPy_XDecRef(cpy_r_r5);
    CPy_XDecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_arg);
    goto CPyL209;
CPyL259: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL162;
CPyL260: ;
    CPy_XDecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r169);
    goto CPyL209;
CPyL261: ;
    CPy_XDECREF(cpy_r_r7);
    goto CPyL171;
CPyL262: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL209;
CPyL263: ;
    CPy_DecRef(cpy_r_r202);
    goto CPyL180;
CPyL264: ;
    CPy_XDECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    goto CPyL175;
CPyL265: ;
    CPy_XDECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    goto CPyL178;
CPyL266: ;
    CPy_XDecRef(cpy_r_r7);
    goto CPyL188;
CPyL267: ;
    CPy_XDecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r202);
    goto CPyL188;
CPyL268: ;
    CPy_DecRef(cpy_r_r201);
    goto CPyL188;
CPyL269: ;
    CPy_XDecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_arg);
    goto CPyL209;
CPyL270: ;
    CPy_XDECREF(cpy_r_r7);
    goto CPyL194;
CPyL271: ;
    CPy_DecRef(cpy_r_r137);
    goto CPyL209;
CPyL272: ;
    CPyTagged_DECREF(cpy_r_r9);
    goto CPyL2;
CPyL273: ;
    CPyTagged_DECREF(cpy_r_r9);
    goto CPyL31;
CPyL274: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL204;
CPyL275: ;
    CPyTagged_DECREF(cpy_r_r9);
    goto CPyL85;
CPyL276: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL205;
CPyL277: ;
    CPyTagged_DECREF(cpy_r_r9);
    goto CPyL144;
CPyL278: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL206;
CPyL279: ;
    CPy_XDECREF(cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    goto CPyL207;
}

PyObject *CPyPy_other_income___is_robovault_share_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", "arg", 0};
    static CPyArg_Parser parser = {"OOOO:__mypyc_generator_helper__", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value;
    PyObject *obj_traceback;
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_type = obj_type;
    PyObject *arg_value = obj_value;
    PyObject *arg_traceback = obj_traceback;
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_other_income___is_robovault_share_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 46, CPyStatic_other_income___globals);
    return NULL;
}

PyObject *CPyDef_other_income___is_robovault_share_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_other_income___is_robovault_share_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_other_income___is_robovault_share_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_other_income___is_robovault_share_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("yearn_treasury.rules.other_income.is_robovault_share_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_other_income___is_robovault_share_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "__next__", -1, CPyStatic_other_income___globals);
    return NULL;
}

PyObject *CPyDef_other_income___is_robovault_share_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_other_income___is_robovault_share_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_other_income___is_robovault_share_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_other_income___is_robovault_share_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("yearn_treasury.rules.other_income.is_robovault_share_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_other_income___is_robovault_share_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "send", -1, CPyStatic_other_income___globals);
    return NULL;
}

PyObject *CPyDef_other_income___is_robovault_share_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_other_income___is_robovault_share_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_other_income___is_robovault_share_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("yearn_treasury.rules.other_income.is_robovault_share_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_other_income___is_robovault_share_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "__iter__", -1, CPyStatic_other_income___globals);
    return NULL;
}

PyObject *CPyDef_other_income___is_robovault_share_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_other_income___is_robovault_share_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy_other_income___is_robovault_share_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_other_income___is_robovault_share_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("yearn_treasury.rules.other_income.is_robovault_share_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef_other_income___is_robovault_share_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "throw", -1, CPyStatic_other_income___globals);
    return NULL;
}

PyObject *CPyDef_other_income___is_robovault_share_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[275]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_other_income___is_robovault_share_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[276]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp21 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp21);
    PyObject *__tmp22 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp22);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy_other_income___is_robovault_share_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_other_income___is_robovault_share_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("yearn_treasury.rules.other_income.is_robovault_share_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_other_income___is_robovault_share_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "close", -1, CPyStatic_other_income___globals);
    return NULL;
}

PyObject *CPyDef_other_income___is_robovault_share_gen_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_other_income___is_robovault_share_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_other_income___is_robovault_share_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("yearn_treasury.rules.other_income.is_robovault_share_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_other_income___is_robovault_share_gen_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "__await__", -1, CPyStatic_other_income___globals);
    return NULL;
}

PyObject *CPyDef_other_income___is_robovault_share(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_other_income___is_robovault_share_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 46, CPyStatic_other_income___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_tx);
    if (((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r0)->_tx != NULL) {
        CPy_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r0)->_tx);
    }
    ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r0)->_tx = cpy_r_tx;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 46, CPyStatic_other_income___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_other_income___is_robovault_share_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 46, CPyStatic_other_income___globals);
        goto CPyL7;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
    if (((yearn_treasury___rules___other_income___is_robovault_share_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((yearn_treasury___rules___other_income___is_robovault_share_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((yearn_treasury___rules___other_income___is_robovault_share_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 46, CPyStatic_other_income___globals);
        goto CPyL8;
    }
    if (((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((yearn_treasury___rules___other_income___is_robovault_share_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 46, CPyStatic_other_income___globals);
        goto CPyL9;
    }
    return cpy_r_r2;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_other_income___is_robovault_share(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_robovault_share", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    PyObject *retval = CPyDef_other_income___is_robovault_share(arg_tx);
    return retval;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_robovault_share", 46, CPyStatic_other_income___globals);
    return NULL;
}

char CPyDef_other_income___is_cowswap_gas_reimbursement(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    cpy_r_r0 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_cowswap_gas_reimbursement", 78, CPyStatic_other_income___globals);
        goto CPyL21;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/other_income/__init__.py", "is_cowswap_gas_reimbursement", 78, CPyStatic_other_income___globals, "str", cpy_r_r1);
        goto CPyL21;
    }
    cpy_r_r3 = CPyStatics[88]; /* 'ETH' */
    cpy_r_r4 = PyUnicode_Compare(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 == -1;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r6 = PyErr_Occurred();
    cpy_r_r7 = cpy_r_r6 != NULL;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_cowswap_gas_reimbursement", 78, CPyStatic_other_income___globals);
        goto CPyL21;
    }
CPyL5: ;
    cpy_r_r9 = cpy_r_r4 == 0;
    if (cpy_r_r9) goto CPyL7;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL20;
CPyL7: ;
    cpy_r_r11 = CPyStatics[89]; /* 'from_nickname' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_cowswap_gas_reimbursement", 79, CPyStatic_other_income___globals);
        goto CPyL21;
    }
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/other_income/__init__.py", "is_cowswap_gas_reimbursement", 79, CPyStatic_other_income___globals, "str", cpy_r_r12);
        goto CPyL21;
    }
    cpy_r_r14 = CPyStatics[277]; /* 'Cowswap Multisig' */
    cpy_r_r15 = PyUnicode_Compare(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 == -1;
    if (!cpy_r_r16) goto CPyL12;
    cpy_r_r17 = PyErr_Occurred();
    cpy_r_r18 = cpy_r_r17 != NULL;
    if (!cpy_r_r18) goto CPyL12;
    cpy_r_r19 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_cowswap_gas_reimbursement", 79, CPyStatic_other_income___globals);
        goto CPyL21;
    }
CPyL12: ;
    cpy_r_r20 = cpy_r_r15 == 0;
    if (cpy_r_r20) goto CPyL14;
    cpy_r_r21 = cpy_r_r20;
    goto CPyL19;
CPyL14: ;
    cpy_r_r22 = CPyStatics[130]; /* 'to_nickname' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_cowswap_gas_reimbursement", 80, CPyStatic_other_income___globals);
        goto CPyL21;
    }
    if (PyUnicode_Check(cpy_r_r23))
        cpy_r_r24 = cpy_r_r23;
    else {
        cpy_r_r24 = NULL;
    }
    if (cpy_r_r24 != NULL) goto __LL23;
    if (cpy_r_r23 == Py_None)
        cpy_r_r24 = cpy_r_r23;
    else {
        cpy_r_r24 = NULL;
    }
    if (cpy_r_r24 != NULL) goto __LL23;
    CPy_TypeErrorTraceback("yearn_treasury/rules/other_income/__init__.py", "is_cowswap_gas_reimbursement", 80, CPyStatic_other_income___globals, "str or None", cpy_r_r23);
    goto CPyL21;
__LL23: ;
    cpy_r_r25 = CPyStatics[278]; /* 'yMechs Multisig' */
    cpy_r_r26 = PyObject_RichCompare(cpy_r_r24, cpy_r_r25, 2);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_cowswap_gas_reimbursement", 80, CPyStatic_other_income___globals);
        goto CPyL21;
    }
    if (unlikely(!PyBool_Check(cpy_r_r26))) {
        CPy_TypeError("bool", cpy_r_r26); cpy_r_r27 = 2;
    } else
        cpy_r_r27 = cpy_r_r26 == Py_True;
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_cowswap_gas_reimbursement", 80, CPyStatic_other_income___globals);
        goto CPyL21;
    }
    cpy_r_r21 = cpy_r_r27;
CPyL19: ;
    cpy_r_r10 = cpy_r_r21;
CPyL20: ;
    return cpy_r_r10;
CPyL21: ;
    cpy_r_r28 = 2;
    return cpy_r_r28;
}

PyObject *CPyPy_other_income___is_cowswap_gas_reimbursement(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_cowswap_gas_reimbursement", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_other_income___is_cowswap_gas_reimbursement(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_cowswap_gas_reimbursement", 76, CPyStatic_other_income___globals);
    return NULL;
}

char CPyDef_other_income___is_usds_referral_code(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    cpy_r_r0 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_usds_referral_code", 88, CPyStatic_other_income___globals);
        goto CPyL13;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/other_income/__init__.py", "is_usds_referral_code", 88, CPyStatic_other_income___globals, "str", cpy_r_r1);
        goto CPyL13;
    }
    cpy_r_r3 = CPyStatics[279]; /* 'USDS' */
    cpy_r_r4 = PyUnicode_Compare(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 == -1;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r6 = PyErr_Occurred();
    cpy_r_r7 = cpy_r_r6 != NULL;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_usds_referral_code", 88, CPyStatic_other_income___globals);
        goto CPyL13;
    }
CPyL5: ;
    cpy_r_r9 = cpy_r_r4 == 0;
    if (cpy_r_r9) goto CPyL7;
    cpy_r_r10 = cpy_r_r9 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = cpy_r_r10;
    goto CPyL11;
CPyL7: ;
    cpy_r_r12 = CPyStatics[228]; /* 'from_address' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_usds_referral_code", 89, CPyStatic_other_income___globals);
        goto CPyL13;
    }
    cpy_r_r14 = CPyStatics[230]; /* 'address' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_usds_referral_code", 89, CPyStatic_other_income___globals);
        goto CPyL13;
    }
    cpy_r_r16 = CPyStatics[280]; /* '0x3C5142F28567E6a0F172fd0BaaF1f2847f49D02F' */
    cpy_r_r17 = PyObject_RichCompare(cpy_r_r15, cpy_r_r16, 2);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_usds_referral_code", 89, CPyStatic_other_income___globals);
        goto CPyL13;
    }
    cpy_r_r11 = cpy_r_r17;
CPyL11: ;
    if (unlikely(!PyBool_Check(cpy_r_r11))) {
        CPy_TypeError("bool", cpy_r_r11); cpy_r_r18 = 2;
    } else
        cpy_r_r18 = cpy_r_r11 == Py_True;
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_usds_referral_code", 87, CPyStatic_other_income___globals);
        goto CPyL13;
    }
    return cpy_r_r18;
CPyL13: ;
    cpy_r_r19 = 2;
    return cpy_r_r19;
}

PyObject *CPyPy_other_income___is_usds_referral_code(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_usds_referral_code", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_other_income___is_usds_referral_code(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_usds_referral_code", 85, CPyStatic_other_income___globals);
    return NULL;
}

char CPyDef_other_income___is_yeth_application_fee(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    cpy_r_r0 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_yeth_application_fee", 95, CPyStatic_other_income___globals);
        goto CPyL22;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/other_income/__init__.py", "is_yeth_application_fee", 95, CPyStatic_other_income___globals, "str", cpy_r_r1);
        goto CPyL22;
    }
    cpy_r_r3 = CPyStatics[281]; /* 'yETH' */
    cpy_r_r4 = PyUnicode_Compare(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 == -1;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r6 = PyErr_Occurred();
    cpy_r_r7 = cpy_r_r6 != NULL;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_yeth_application_fee", 95, CPyStatic_other_income___globals);
        goto CPyL22;
    }
CPyL5: ;
    cpy_r_r9 = cpy_r_r4 == 0;
    if (cpy_r_r9) goto CPyL7;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL21;
CPyL7: ;
    cpy_r_r11 = CPyStatics[130]; /* 'to_nickname' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_yeth_application_fee", 95, CPyStatic_other_income___globals);
        goto CPyL22;
    }
    if (PyUnicode_Check(cpy_r_r12))
        cpy_r_r13 = cpy_r_r12;
    else {
        cpy_r_r13 = NULL;
    }
    if (cpy_r_r13 != NULL) goto __LL24;
    if (cpy_r_r12 == Py_None)
        cpy_r_r13 = cpy_r_r12;
    else {
        cpy_r_r13 = NULL;
    }
    if (cpy_r_r13 != NULL) goto __LL24;
    CPy_TypeErrorTraceback("yearn_treasury/rules/other_income/__init__.py", "is_yeth_application_fee", 95, CPyStatic_other_income___globals, "str or None", cpy_r_r12);
    goto CPyL22;
__LL24: ;
    cpy_r_r14 = CPyStatics[241]; /* 'Yearn Treasury' */
    cpy_r_r15 = PyObject_RichCompare(cpy_r_r13, cpy_r_r14, 2);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_yeth_application_fee", 95, CPyStatic_other_income___globals);
        goto CPyL22;
    }
    if (unlikely(!PyBool_Check(cpy_r_r15))) {
        CPy_TypeError("bool", cpy_r_r15); cpy_r_r16 = 2;
    } else
        cpy_r_r16 = cpy_r_r15 == Py_True;
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_yeth_application_fee", 95, CPyStatic_other_income___globals);
        goto CPyL22;
    }
    if (cpy_r_r16) goto CPyL13;
    cpy_r_r17 = cpy_r_r16;
    goto CPyL20;
CPyL13: ;
    cpy_r_r18 = CPyStatics[92]; /* 'amount' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_yeth_application_fee", 95, CPyStatic_other_income___globals);
        goto CPyL22;
    }
    cpy_r_r20 = CPyStatic_other_income____POINT_ONE;
    if (unlikely(cpy_r_r20 == NULL)) {
        goto CPyL23;
    } else
        goto CPyL17;
CPyL15: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_POINT_ONE\" was not set");
    cpy_r_r21 = 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_yeth_application_fee", 95, CPyStatic_other_income___globals);
        goto CPyL22;
    }
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r22 = PyObject_RichCompare(cpy_r_r19, cpy_r_r20, 2);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_yeth_application_fee", 95, CPyStatic_other_income___globals);
        goto CPyL22;
    }
    if (unlikely(!PyBool_Check(cpy_r_r22))) {
        CPy_TypeError("bool", cpy_r_r22); cpy_r_r23 = 2;
    } else
        cpy_r_r23 = cpy_r_r22 == Py_True;
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_yeth_application_fee", 95, CPyStatic_other_income___globals);
        goto CPyL22;
    }
    cpy_r_r17 = cpy_r_r23;
CPyL20: ;
    cpy_r_r10 = cpy_r_r17;
CPyL21: ;
    return cpy_r_r10;
CPyL22: ;
    cpy_r_r24 = 2;
    return cpy_r_r24;
CPyL23: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL15;
}

PyObject *CPyPy_other_income___is_yeth_application_fee(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_yeth_application_fee", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_other_income___is_yeth_application_fee(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_yeth_application_fee", 94, CPyStatic_other_income___globals);
    return NULL;
}

char CPyDef_other_income___is_yprisma_fees(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    cpy_r_r0 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_yprisma_fees", 100, CPyStatic_other_income___globals);
        goto CPyL14;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/other_income/__init__.py", "is_yprisma_fees", 100, CPyStatic_other_income___globals, "str", cpy_r_r1);
        goto CPyL14;
    }
    cpy_r_r3 = CPyStatics[282]; /* 'yvmkUSD-A' */
    cpy_r_r4 = PyUnicode_Compare(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 == -1;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r6 = PyErr_Occurred();
    cpy_r_r7 = cpy_r_r6 != NULL;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_yprisma_fees", 100, CPyStatic_other_income___globals);
        goto CPyL14;
    }
CPyL5: ;
    cpy_r_r9 = cpy_r_r4 == 0;
    if (cpy_r_r9) goto CPyL7;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL13;
CPyL7: ;
    cpy_r_r11 = CPyStatics[89]; /* 'from_nickname' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_yprisma_fees", 100, CPyStatic_other_income___globals);
        goto CPyL14;
    }
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/other_income/__init__.py", "is_yprisma_fees", 100, CPyStatic_other_income___globals, "str", cpy_r_r12);
        goto CPyL14;
    }
    cpy_r_r14 = CPyStatics[283]; /* 'Contract: YPrismaFeeDistributor' */
    cpy_r_r15 = PyUnicode_Compare(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 == -1;
    if (!cpy_r_r16) goto CPyL12;
    cpy_r_r17 = PyErr_Occurred();
    cpy_r_r18 = cpy_r_r17 != NULL;
    if (!cpy_r_r18) goto CPyL12;
    cpy_r_r19 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_yprisma_fees", 100, CPyStatic_other_income___globals);
        goto CPyL14;
    }
CPyL12: ;
    cpy_r_r20 = cpy_r_r15 == 0;
    cpy_r_r10 = cpy_r_r20;
CPyL13: ;
    return cpy_r_r10;
CPyL14: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
}

PyObject *CPyPy_other_income___is_yprisma_fees(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_yprisma_fees", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_other_income___is_yprisma_fees(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "is_yprisma_fees", 99, CPyStatic_other_income___globals);
    return NULL;
}

char CPyDef_other_income_____top_level__(void) {
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
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
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
    PyObject **cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject **cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject **cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject **cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject **cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject **cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
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
    PyObject **cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject **cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    int32_t cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject **cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject **cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    int32_t cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject **cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject **cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    int32_t cpy_r_r166;
    char cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject **cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject **cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    int32_t cpy_r_r188;
    char cpy_r_r189;
    char cpy_r_r190;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", -1, CPyStatic_other_income___globals);
        goto CPyL61;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[443]; /* ('Decimal',) */
    cpy_r_r6 = CPyStatics[134]; /* 'decimal' */
    cpy_r_r7 = CPyStatic_other_income___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 1, CPyStatic_other_income___globals);
        goto CPyL61;
    }
    CPyModule_decimal = cpy_r_r8;
    CPy_INCREF(CPyModule_decimal);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[433]; /* ('Final',) */
    cpy_r_r10 = CPyStatics[24]; /* 'typing' */
    cpy_r_r11 = CPyStatic_other_income___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 2, CPyStatic_other_income___globals);
        goto CPyL61;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[456]; /* ('TreasuryTx', 'other_income') */
    cpy_r_r14 = CPyStatics[99]; /* 'dao_treasury' */
    cpy_r_r15 = CPyStatic_other_income___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 4, CPyStatic_other_income___globals);
        goto CPyL61;
    }
    CPyModule_dao_treasury = cpy_r_r16;
    CPy_INCREF(CPyModule_dao_treasury);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[457]; /* ('Contract', 'ContractNotVerified', 'ERC20', 'Network') */
    cpy_r_r18 = CPyStatics[71]; /* 'y' */
    cpy_r_r19 = CPyStatic_other_income___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 5, CPyStatic_other_income___globals);
        goto CPyL61;
    }
    CPyModule_y = cpy_r_r20;
    CPy_INCREF(CPyModule_y);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[458]; /* ('ZERO_ADDRESS',) */
    cpy_r_r22 = CPyStatics[235]; /* 'yearn_treasury.rules.constants' */
    cpy_r_r23 = CPyStatic_other_income___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 7, CPyStatic_other_income___globals);
        goto CPyL61;
    }
    CPyModule_yearn_treasury___rules___constants = cpy_r_r24;
    CPy_INCREF(CPyModule_yearn_treasury___rules___constants);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[285]; /* '0.1' */
    cpy_r_r26 = CPyStatic_other_income___globals;
    cpy_r_r27 = CPyStatics[133]; /* 'Decimal' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 10, CPyStatic_other_income___globals);
        goto CPyL61;
    }
    PyObject *cpy_r_r29[1] = {cpy_r_r25};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = PyObject_Vectorcall(cpy_r_r28, cpy_r_r30, 1, 0);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 10, CPyStatic_other_income___globals);
        goto CPyL61;
    }
    CPyStatic_other_income____POINT_ONE = cpy_r_r31;
    CPy_INCREF(CPyStatic_other_income____POINT_ONE);
    cpy_r_r32 = CPyStatic_other_income___globals;
    cpy_r_r33 = CPyStatics[286]; /* '_POINT_ONE' */
    cpy_r_r34 = CPyDict_SetItem(cpy_r_r32, cpy_r_r33, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 10, CPyStatic_other_income___globals);
        goto CPyL61;
    }
    cpy_r_r36 = CPyStatic_other_income___globals;
    cpy_r_r37 = CPyStatics[287]; /* 'is_airdrop' */
    cpy_r_r38 = CPyDict_GetItem(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 13, CPyStatic_other_income___globals);
        goto CPyL61;
    }
    cpy_r_r39 = CPyStatics[288]; /* 'Airdrop' */
    cpy_r_r40 = CPyStatic_other_income___globals;
    cpy_r_r41 = CPyStatics[70]; /* 'Network' */
    cpy_r_r42 = CPyDict_GetItem(cpy_r_r40, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 13, CPyStatic_other_income___globals);
        goto CPyL62;
    }
    cpy_r_r43 = CPyStatics[78]; /* 'Mainnet' */
    cpy_r_r44 = CPyObject_GetAttr(cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 13, CPyStatic_other_income___globals);
        goto CPyL62;
    }
    cpy_r_r45 = CPyStatic_other_income___globals;
    cpy_r_r46 = CPyStatics[284]; /* 'other_income' */
    cpy_r_r47 = CPyDict_GetItem(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 13, CPyStatic_other_income___globals);
        goto CPyL63;
    }
    PyObject *cpy_r_r48[2] = {cpy_r_r39, cpy_r_r44};
    cpy_r_r49 = (PyObject **)&cpy_r_r48;
    cpy_r_r50 = PyObject_Vectorcall(cpy_r_r47, cpy_r_r49, 2, 0);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 13, CPyStatic_other_income___globals);
        goto CPyL63;
    }
    CPy_DECREF(cpy_r_r44);
    PyObject *cpy_r_r51[1] = {cpy_r_r38};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = PyObject_Vectorcall(cpy_r_r50, cpy_r_r52, 1, 0);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 13, CPyStatic_other_income___globals);
        goto CPyL62;
    }
    CPy_DECREF(cpy_r_r38);
    cpy_r_r54 = CPyStatic_other_income___globals;
    cpy_r_r55 = CPyStatics[287]; /* 'is_airdrop' */
    cpy_r_r56 = CPyDict_SetItem(cpy_r_r54, cpy_r_r55, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 13, CPyStatic_other_income___globals);
        goto CPyL61;
    }
    cpy_r_r58 = CPyStatic_other_income___globals;
    cpy_r_r59 = CPyStatics[289]; /* 'is_atoken_yield' */
    cpy_r_r60 = CPyDict_GetItem(cpy_r_r58, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 36, CPyStatic_other_income___globals);
        goto CPyL61;
    }
    cpy_r_r61 = CPyStatics[290]; /* 'aToken Yield' */
    cpy_r_r62 = CPyStatic_other_income___globals;
    cpy_r_r63 = CPyStatics[70]; /* 'Network' */
    cpy_r_r64 = CPyDict_GetItem(cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 36, CPyStatic_other_income___globals);
        goto CPyL64;
    }
    cpy_r_r65 = CPyStatics[78]; /* 'Mainnet' */
    cpy_r_r66 = CPyObject_GetAttr(cpy_r_r64, cpy_r_r65);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 36, CPyStatic_other_income___globals);
        goto CPyL64;
    }
    cpy_r_r67 = CPyStatic_other_income___globals;
    cpy_r_r68 = CPyStatics[284]; /* 'other_income' */
    cpy_r_r69 = CPyDict_GetItem(cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 36, CPyStatic_other_income___globals);
        goto CPyL65;
    }
    PyObject *cpy_r_r70[2] = {cpy_r_r61, cpy_r_r66};
    cpy_r_r71 = (PyObject **)&cpy_r_r70;
    cpy_r_r72 = PyObject_Vectorcall(cpy_r_r69, cpy_r_r71, 2, 0);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 36, CPyStatic_other_income___globals);
        goto CPyL65;
    }
    CPy_DECREF(cpy_r_r66);
    PyObject *cpy_r_r73[1] = {cpy_r_r60};
    cpy_r_r74 = (PyObject **)&cpy_r_r73;
    cpy_r_r75 = PyObject_Vectorcall(cpy_r_r72, cpy_r_r74, 1, 0);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 36, CPyStatic_other_income___globals);
        goto CPyL64;
    }
    CPy_DECREF(cpy_r_r60);
    cpy_r_r76 = CPyStatic_other_income___globals;
    cpy_r_r77 = CPyStatics[289]; /* 'is_atoken_yield' */
    cpy_r_r78 = CPyDict_SetItem(cpy_r_r76, cpy_r_r77, cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 36, CPyStatic_other_income___globals);
        goto CPyL61;
    }
    cpy_r_r80 = CPyStatic_other_income___globals;
    cpy_r_r81 = CPyStatics[291]; /* 'is_robovault_share' */
    cpy_r_r82 = CPyDict_GetItem(cpy_r_r80, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 45, CPyStatic_other_income___globals);
        goto CPyL61;
    }
    cpy_r_r83 = CPyStatics[292]; /* 'RoboVault Thank You' */
    cpy_r_r84 = CPyStatic_other_income___globals;
    cpy_r_r85 = CPyStatics[70]; /* 'Network' */
    cpy_r_r86 = CPyDict_GetItem(cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 45, CPyStatic_other_income___globals);
        goto CPyL66;
    }
    cpy_r_r87 = CPyStatics[80]; /* 'Fantom' */
    cpy_r_r88 = CPyObject_GetAttr(cpy_r_r86, cpy_r_r87);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 45, CPyStatic_other_income___globals);
        goto CPyL66;
    }
    cpy_r_r89 = CPyStatic_other_income___globals;
    cpy_r_r90 = CPyStatics[284]; /* 'other_income' */
    cpy_r_r91 = CPyDict_GetItem(cpy_r_r89, cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 45, CPyStatic_other_income___globals);
        goto CPyL67;
    }
    PyObject *cpy_r_r92[2] = {cpy_r_r83, cpy_r_r88};
    cpy_r_r93 = (PyObject **)&cpy_r_r92;
    cpy_r_r94 = PyObject_Vectorcall(cpy_r_r91, cpy_r_r93, 2, 0);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 45, CPyStatic_other_income___globals);
        goto CPyL67;
    }
    CPy_DECREF(cpy_r_r88);
    PyObject *cpy_r_r95[1] = {cpy_r_r82};
    cpy_r_r96 = (PyObject **)&cpy_r_r95;
    cpy_r_r97 = PyObject_Vectorcall(cpy_r_r94, cpy_r_r96, 1, 0);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 45, CPyStatic_other_income___globals);
        goto CPyL66;
    }
    CPy_DECREF(cpy_r_r82);
    cpy_r_r98 = CPyStatic_other_income___globals;
    cpy_r_r99 = CPyStatics[291]; /* 'is_robovault_share' */
    cpy_r_r100 = CPyDict_SetItem(cpy_r_r98, cpy_r_r99, cpy_r_r97);
    CPy_DECREF(cpy_r_r97);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 45, CPyStatic_other_income___globals);
        goto CPyL61;
    }
    cpy_r_r102 = CPyStatic_other_income___globals;
    cpy_r_r103 = CPyStatics[293]; /* 'is_cowswap_gas_reimbursement' */
    cpy_r_r104 = CPyDict_GetItem(cpy_r_r102, cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 75, CPyStatic_other_income___globals);
        goto CPyL61;
    }
    cpy_r_r105 = CPyStatics[294]; /* 'Cowswap Gas Reimbursement' */
    cpy_r_r106 = CPyStatic_other_income___globals;
    cpy_r_r107 = CPyStatics[70]; /* 'Network' */
    cpy_r_r108 = CPyDict_GetItem(cpy_r_r106, cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 75, CPyStatic_other_income___globals);
        goto CPyL68;
    }
    cpy_r_r109 = CPyStatics[78]; /* 'Mainnet' */
    cpy_r_r110 = CPyObject_GetAttr(cpy_r_r108, cpy_r_r109);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 75, CPyStatic_other_income___globals);
        goto CPyL68;
    }
    cpy_r_r111 = CPyStatic_other_income___globals;
    cpy_r_r112 = CPyStatics[284]; /* 'other_income' */
    cpy_r_r113 = CPyDict_GetItem(cpy_r_r111, cpy_r_r112);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 75, CPyStatic_other_income___globals);
        goto CPyL69;
    }
    PyObject *cpy_r_r114[2] = {cpy_r_r105, cpy_r_r110};
    cpy_r_r115 = (PyObject **)&cpy_r_r114;
    cpy_r_r116 = PyObject_Vectorcall(cpy_r_r113, cpy_r_r115, 2, 0);
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 75, CPyStatic_other_income___globals);
        goto CPyL69;
    }
    CPy_DECREF(cpy_r_r110);
    PyObject *cpy_r_r117[1] = {cpy_r_r104};
    cpy_r_r118 = (PyObject **)&cpy_r_r117;
    cpy_r_r119 = PyObject_Vectorcall(cpy_r_r116, cpy_r_r118, 1, 0);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 75, CPyStatic_other_income___globals);
        goto CPyL68;
    }
    CPy_DECREF(cpy_r_r104);
    cpy_r_r120 = CPyStatic_other_income___globals;
    cpy_r_r121 = CPyStatics[293]; /* 'is_cowswap_gas_reimbursement' */
    cpy_r_r122 = CPyDict_SetItem(cpy_r_r120, cpy_r_r121, cpy_r_r119);
    CPy_DECREF(cpy_r_r119);
    cpy_r_r123 = cpy_r_r122 >= 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 75, CPyStatic_other_income___globals);
        goto CPyL61;
    }
    cpy_r_r124 = CPyStatic_other_income___globals;
    cpy_r_r125 = CPyStatics[295]; /* 'is_usds_referral_code' */
    cpy_r_r126 = CPyDict_GetItem(cpy_r_r124, cpy_r_r125);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 84, CPyStatic_other_income___globals);
        goto CPyL61;
    }
    cpy_r_r127 = CPyStatics[296]; /* 'USDS Referral Code' */
    cpy_r_r128 = CPyStatic_other_income___globals;
    cpy_r_r129 = CPyStatics[70]; /* 'Network' */
    cpy_r_r130 = CPyDict_GetItem(cpy_r_r128, cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 84, CPyStatic_other_income___globals);
        goto CPyL70;
    }
    cpy_r_r131 = CPyStatics[78]; /* 'Mainnet' */
    cpy_r_r132 = CPyObject_GetAttr(cpy_r_r130, cpy_r_r131);
    CPy_DECREF(cpy_r_r130);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 84, CPyStatic_other_income___globals);
        goto CPyL70;
    }
    cpy_r_r133 = CPyStatic_other_income___globals;
    cpy_r_r134 = CPyStatics[284]; /* 'other_income' */
    cpy_r_r135 = CPyDict_GetItem(cpy_r_r133, cpy_r_r134);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 84, CPyStatic_other_income___globals);
        goto CPyL71;
    }
    PyObject *cpy_r_r136[2] = {cpy_r_r127, cpy_r_r132};
    cpy_r_r137 = (PyObject **)&cpy_r_r136;
    cpy_r_r138 = PyObject_Vectorcall(cpy_r_r135, cpy_r_r137, 2, 0);
    CPy_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 84, CPyStatic_other_income___globals);
        goto CPyL71;
    }
    CPy_DECREF(cpy_r_r132);
    PyObject *cpy_r_r139[1] = {cpy_r_r126};
    cpy_r_r140 = (PyObject **)&cpy_r_r139;
    cpy_r_r141 = PyObject_Vectorcall(cpy_r_r138, cpy_r_r140, 1, 0);
    CPy_DECREF(cpy_r_r138);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 84, CPyStatic_other_income___globals);
        goto CPyL70;
    }
    CPy_DECREF(cpy_r_r126);
    cpy_r_r142 = CPyStatic_other_income___globals;
    cpy_r_r143 = CPyStatics[295]; /* 'is_usds_referral_code' */
    cpy_r_r144 = CPyDict_SetItem(cpy_r_r142, cpy_r_r143, cpy_r_r141);
    CPy_DECREF(cpy_r_r141);
    cpy_r_r145 = cpy_r_r144 >= 0;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 84, CPyStatic_other_income___globals);
        goto CPyL61;
    }
    cpy_r_r146 = CPyStatic_other_income___globals;
    cpy_r_r147 = CPyStatics[297]; /* 'is_yeth_application_fee' */
    cpy_r_r148 = CPyDict_GetItem(cpy_r_r146, cpy_r_r147);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 93, CPyStatic_other_income___globals);
        goto CPyL61;
    }
    cpy_r_r149 = CPyStatics[298]; /* 'yETH Application Fee' */
    cpy_r_r150 = CPyStatic_other_income___globals;
    cpy_r_r151 = CPyStatics[70]; /* 'Network' */
    cpy_r_r152 = CPyDict_GetItem(cpy_r_r150, cpy_r_r151);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 93, CPyStatic_other_income___globals);
        goto CPyL72;
    }
    cpy_r_r153 = CPyStatics[78]; /* 'Mainnet' */
    cpy_r_r154 = CPyObject_GetAttr(cpy_r_r152, cpy_r_r153);
    CPy_DECREF(cpy_r_r152);
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 93, CPyStatic_other_income___globals);
        goto CPyL72;
    }
    cpy_r_r155 = CPyStatic_other_income___globals;
    cpy_r_r156 = CPyStatics[284]; /* 'other_income' */
    cpy_r_r157 = CPyDict_GetItem(cpy_r_r155, cpy_r_r156);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 93, CPyStatic_other_income___globals);
        goto CPyL73;
    }
    PyObject *cpy_r_r158[2] = {cpy_r_r149, cpy_r_r154};
    cpy_r_r159 = (PyObject **)&cpy_r_r158;
    cpy_r_r160 = PyObject_Vectorcall(cpy_r_r157, cpy_r_r159, 2, 0);
    CPy_DECREF(cpy_r_r157);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 93, CPyStatic_other_income___globals);
        goto CPyL73;
    }
    CPy_DECREF(cpy_r_r154);
    PyObject *cpy_r_r161[1] = {cpy_r_r148};
    cpy_r_r162 = (PyObject **)&cpy_r_r161;
    cpy_r_r163 = PyObject_Vectorcall(cpy_r_r160, cpy_r_r162, 1, 0);
    CPy_DECREF(cpy_r_r160);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 93, CPyStatic_other_income___globals);
        goto CPyL72;
    }
    CPy_DECREF(cpy_r_r148);
    cpy_r_r164 = CPyStatic_other_income___globals;
    cpy_r_r165 = CPyStatics[297]; /* 'is_yeth_application_fee' */
    cpy_r_r166 = CPyDict_SetItem(cpy_r_r164, cpy_r_r165, cpy_r_r163);
    CPy_DECREF(cpy_r_r163);
    cpy_r_r167 = cpy_r_r166 >= 0;
    if (unlikely(!cpy_r_r167)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 93, CPyStatic_other_income___globals);
        goto CPyL61;
    }
    cpy_r_r168 = CPyStatic_other_income___globals;
    cpy_r_r169 = CPyStatics[299]; /* 'is_yprisma_fees' */
    cpy_r_r170 = CPyDict_GetItem(cpy_r_r168, cpy_r_r169);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 98, CPyStatic_other_income___globals);
        goto CPyL61;
    }
    cpy_r_r171 = CPyStatics[300]; /* 'yPRISMA Fees' */
    cpy_r_r172 = CPyStatic_other_income___globals;
    cpy_r_r173 = CPyStatics[70]; /* 'Network' */
    cpy_r_r174 = CPyDict_GetItem(cpy_r_r172, cpy_r_r173);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 98, CPyStatic_other_income___globals);
        goto CPyL74;
    }
    cpy_r_r175 = CPyStatics[78]; /* 'Mainnet' */
    cpy_r_r176 = CPyObject_GetAttr(cpy_r_r174, cpy_r_r175);
    CPy_DECREF(cpy_r_r174);
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 98, CPyStatic_other_income___globals);
        goto CPyL74;
    }
    cpy_r_r177 = CPyStatic_other_income___globals;
    cpy_r_r178 = CPyStatics[284]; /* 'other_income' */
    cpy_r_r179 = CPyDict_GetItem(cpy_r_r177, cpy_r_r178);
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 98, CPyStatic_other_income___globals);
        goto CPyL75;
    }
    PyObject *cpy_r_r180[2] = {cpy_r_r171, cpy_r_r176};
    cpy_r_r181 = (PyObject **)&cpy_r_r180;
    cpy_r_r182 = PyObject_Vectorcall(cpy_r_r179, cpy_r_r181, 2, 0);
    CPy_DECREF(cpy_r_r179);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 98, CPyStatic_other_income___globals);
        goto CPyL75;
    }
    CPy_DECREF(cpy_r_r176);
    PyObject *cpy_r_r183[1] = {cpy_r_r170};
    cpy_r_r184 = (PyObject **)&cpy_r_r183;
    cpy_r_r185 = PyObject_Vectorcall(cpy_r_r182, cpy_r_r184, 1, 0);
    CPy_DECREF(cpy_r_r182);
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 98, CPyStatic_other_income___globals);
        goto CPyL74;
    }
    CPy_DECREF(cpy_r_r170);
    cpy_r_r186 = CPyStatic_other_income___globals;
    cpy_r_r187 = CPyStatics[299]; /* 'is_yprisma_fees' */
    cpy_r_r188 = CPyDict_SetItem(cpy_r_r186, cpy_r_r187, cpy_r_r185);
    CPy_DECREF(cpy_r_r185);
    cpy_r_r189 = cpy_r_r188 >= 0;
    if (unlikely(!cpy_r_r189)) {
        CPy_AddTraceback("yearn_treasury/rules/other_income/__init__.py", "<module>", 98, CPyStatic_other_income___globals);
        goto CPyL61;
    }
    return 1;
CPyL61: ;
    cpy_r_r190 = 2;
    return cpy_r_r190;
CPyL62: ;
    CPy_DecRef(cpy_r_r38);
    goto CPyL61;
CPyL63: ;
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r44);
    goto CPyL61;
CPyL64: ;
    CPy_DecRef(cpy_r_r60);
    goto CPyL61;
CPyL65: ;
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r66);
    goto CPyL61;
CPyL66: ;
    CPy_DecRef(cpy_r_r82);
    goto CPyL61;
CPyL67: ;
    CPy_DecRef(cpy_r_r82);
    CPy_DecRef(cpy_r_r88);
    goto CPyL61;
CPyL68: ;
    CPy_DecRef(cpy_r_r104);
    goto CPyL61;
CPyL69: ;
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r110);
    goto CPyL61;
CPyL70: ;
    CPy_DecRef(cpy_r_r126);
    goto CPyL61;
CPyL71: ;
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r132);
    goto CPyL61;
CPyL72: ;
    CPy_DecRef(cpy_r_r148);
    goto CPyL61;
CPyL73: ;
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r154);
    goto CPyL61;
CPyL74: ;
    CPy_DecRef(cpy_r_r170);
    goto CPyL61;
CPyL75: ;
    CPy_DecRef(cpy_r_r170);
    CPy_DecRef(cpy_r_r176);
    goto CPyL61;
}
static PyMethodDef bribesmodule_methods[] = {
    {"is_ycrv_bribe", (PyCFunction)CPyPy_bribes___is_ycrv_bribe, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_ybribe_fees", (PyCFunction)CPyPy_bribes___is_ybribe_fees, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef bribesmodule = {
    PyModuleDef_HEAD_INIT,
    "yearn_treasury.rules.revenue.bribes",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    bribesmodule_methods
};

PyObject *CPyInit_yearn_treasury___rules___revenue___bribes(void)
{
    PyObject* modname = NULL;
    if (CPyModule_yearn_treasury___rules___revenue___bribes_internal) {
        Py_INCREF(CPyModule_yearn_treasury___rules___revenue___bribes_internal);
        return CPyModule_yearn_treasury___rules___revenue___bribes_internal;
    }
    CPyModule_yearn_treasury___rules___revenue___bribes_internal = PyModule_Create(&bribesmodule);
    if (unlikely(CPyModule_yearn_treasury___rules___revenue___bribes_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_yearn_treasury___rules___revenue___bribes_internal, "__name__");
    CPyStatic_bribes___globals = PyModule_GetDict(CPyModule_yearn_treasury___rules___revenue___bribes_internal);
    if (unlikely(CPyStatic_bribes___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_bribes_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_yearn_treasury___rules___revenue___bribes_internal;
    fail:
    Py_CLEAR(CPyModule_yearn_treasury___rules___revenue___bribes_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_bribes___bribes);
    CPyStatic_bribes___bribes = NULL;
    return NULL;
}

char CPyDef_bribes___is_ycrv_bribe(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    cpy_r_r0 = CPyStatics[89]; /* 'from_nickname' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "is_ycrv_bribe", 12, CPyStatic_bribes___globals);
        goto CPyL22;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/revenue/bribes.py", "is_ycrv_bribe", 12, CPyStatic_bribes___globals, "str", cpy_r_r1);
        goto CPyL22;
    }
    cpy_r_r3 = CPyStatics[301]; /* 'Contract: BribeSplitter' */
    cpy_r_r4 = PyUnicode_Compare(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 == -1;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r6 = PyErr_Occurred();
    cpy_r_r7 = cpy_r_r6 != NULL;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "is_ycrv_bribe", -1, CPyStatic_bribes___globals);
        goto CPyL22;
    }
CPyL5: ;
    cpy_r_r9 = cpy_r_r4 == 0;
    if (!cpy_r_r9) goto CPyL7;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL13;
CPyL7: ;
    cpy_r_r11 = CPyStatics[89]; /* 'from_nickname' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "is_ycrv_bribe", 12, CPyStatic_bribes___globals);
        goto CPyL22;
    }
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/revenue/bribes.py", "is_ycrv_bribe", 12, CPyStatic_bribes___globals, "str", cpy_r_r12);
        goto CPyL22;
    }
    cpy_r_r14 = CPyStatics[302]; /* 'Contract: YCRVSplitter' */
    cpy_r_r15 = PyUnicode_Compare(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 == -1;
    if (!cpy_r_r16) goto CPyL12;
    cpy_r_r17 = PyErr_Occurred();
    cpy_r_r18 = cpy_r_r17 != NULL;
    if (!cpy_r_r18) goto CPyL12;
    cpy_r_r19 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "is_ycrv_bribe", -1, CPyStatic_bribes___globals);
        goto CPyL22;
    }
CPyL12: ;
    cpy_r_r20 = cpy_r_r15 == 0;
    cpy_r_r10 = cpy_r_r20;
CPyL13: ;
    if (!cpy_r_r10) goto CPyL15;
    cpy_r_r21 = cpy_r_r10;
    goto CPyL21;
CPyL15: ;
    cpy_r_r22 = CPyStatics[91]; /* 'hash' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "is_ycrv_bribe", 20, CPyStatic_bribes___globals);
        goto CPyL22;
    }
    if (likely(PyUnicode_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/revenue/bribes.py", "is_ycrv_bribe", 20, CPyStatic_bribes___globals, "str", cpy_r_r23);
        goto CPyL22;
    }
    cpy_r_r25 = CPyStatics[303]; /* '0x3c635388812bed82845c0df3531583399fdf736ccfb95837b362379766955f2d' */
    cpy_r_r26 = PyUnicode_Compare(cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r27 = cpy_r_r26 == -1;
    if (!cpy_r_r27) goto CPyL20;
    cpy_r_r28 = PyErr_Occurred();
    cpy_r_r29 = cpy_r_r28 != NULL;
    if (!cpy_r_r29) goto CPyL20;
    cpy_r_r30 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "is_ycrv_bribe", 20, CPyStatic_bribes___globals);
        goto CPyL22;
    }
CPyL20: ;
    cpy_r_r31 = cpy_r_r26 == 0;
    cpy_r_r21 = cpy_r_r31;
CPyL21: ;
    return cpy_r_r21;
CPyL22: ;
    cpy_r_r32 = 2;
    return cpy_r_r32;
}

PyObject *CPyPy_bribes___is_ycrv_bribe(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_ycrv_bribe", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_bribes___is_ycrv_bribe(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "is_ycrv_bribe", 10, CPyStatic_bribes___globals);
    return NULL;
}

char CPyDef_bribes___is_ybribe_fees(PyObject *cpy_r_tx) {
    return 0;
}

PyObject *CPyPy_bribes___is_ybribe_fees(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_ybribe_fees", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_bribes___is_ybribe_fees(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "is_ybribe_fees", 25, CPyStatic_bribes___globals);
    return NULL;
}

char CPyDef_bribes_____top_level__(void) {
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
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject **cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject **cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject **cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "<module>", -1, CPyStatic_bribes___globals);
        goto CPyL23;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[433]; /* ('Final',) */
    cpy_r_r6 = CPyStatics[24]; /* 'typing' */
    cpy_r_r7 = CPyStatic_bribes___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "<module>", 1, CPyStatic_bribes___globals);
        goto CPyL23;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[459]; /* ('TreasuryTx', 'revenue') */
    cpy_r_r10 = CPyStatics[99]; /* 'dao_treasury' */
    cpy_r_r11 = CPyStatic_bribes___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "<module>", 3, CPyStatic_bribes___globals);
        goto CPyL23;
    }
    CPyModule_dao_treasury = cpy_r_r12;
    CPy_INCREF(CPyModule_dao_treasury);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[305]; /* 'Bribes' */
    cpy_r_r14 = CPyStatic_bribes___globals;
    cpy_r_r15 = CPyStatics[304]; /* 'revenue' */
    cpy_r_r16 = CPyDict_GetItem(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "<module>", 6, CPyStatic_bribes___globals);
        goto CPyL23;
    }
    PyObject *cpy_r_r17[1] = {cpy_r_r13};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = PyObject_Vectorcall(cpy_r_r16, cpy_r_r18, 1, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "<module>", 6, CPyStatic_bribes___globals);
        goto CPyL23;
    }
    CPyStatic_bribes___bribes = cpy_r_r19;
    CPy_INCREF(CPyStatic_bribes___bribes);
    cpy_r_r20 = CPyStatic_bribes___globals;
    cpy_r_r21 = CPyStatics[306]; /* 'bribes' */
    cpy_r_r22 = CPyDict_SetItem(cpy_r_r20, cpy_r_r21, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "<module>", 6, CPyStatic_bribes___globals);
        goto CPyL23;
    }
    cpy_r_r24 = CPyStatic_bribes___globals;
    cpy_r_r25 = CPyStatics[307]; /* 'is_ycrv_bribe' */
    cpy_r_r26 = CPyDict_GetItem(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "<module>", 9, CPyStatic_bribes___globals);
        goto CPyL23;
    }
    cpy_r_r27 = CPyStatics[308]; /* 'yCRV Bribes' */
    cpy_r_r28 = CPyStatic_bribes___bribes;
    if (unlikely(cpy_r_r28 == NULL)) {
        goto CPyL24;
    } else
        goto CPyL12;
CPyL10: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bribes\" was not set");
    cpy_r_r29 = 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "<module>", 9, CPyStatic_bribes___globals);
        goto CPyL23;
    }
    CPy_Unreachable();
CPyL12: ;
    PyObject *cpy_r_r30[1] = {cpy_r_r27};
    cpy_r_r31 = (PyObject **)&cpy_r_r30;
    cpy_r_r32 = PyObject_Vectorcall(cpy_r_r28, cpy_r_r31, 1, 0);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "<module>", 9, CPyStatic_bribes___globals);
        goto CPyL25;
    }
    PyObject *cpy_r_r33[1] = {cpy_r_r26};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = PyObject_Vectorcall(cpy_r_r32, cpy_r_r34, 1, 0);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "<module>", 9, CPyStatic_bribes___globals);
        goto CPyL25;
    }
    CPy_DECREF(cpy_r_r26);
    cpy_r_r36 = CPyStatic_bribes___globals;
    cpy_r_r37 = CPyStatics[307]; /* 'is_ycrv_bribe' */
    cpy_r_r38 = CPyDict_SetItem(cpy_r_r36, cpy_r_r37, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "<module>", 9, CPyStatic_bribes___globals);
        goto CPyL23;
    }
    cpy_r_r40 = CPyStatic_bribes___globals;
    cpy_r_r41 = CPyStatics[309]; /* 'is_ybribe_fees' */
    cpy_r_r42 = CPyDict_GetItem(cpy_r_r40, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "<module>", 24, CPyStatic_bribes___globals);
        goto CPyL23;
    }
    cpy_r_r43 = CPyStatics[310]; /* 'yBribe Fees' */
    cpy_r_r44 = CPyStatic_bribes___bribes;
    if (unlikely(cpy_r_r44 == NULL)) {
        goto CPyL26;
    } else
        goto CPyL19;
CPyL17: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bribes\" was not set");
    cpy_r_r45 = 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "<module>", 24, CPyStatic_bribes___globals);
        goto CPyL23;
    }
    CPy_Unreachable();
CPyL19: ;
    PyObject *cpy_r_r46[1] = {cpy_r_r43};
    cpy_r_r47 = (PyObject **)&cpy_r_r46;
    cpy_r_r48 = PyObject_Vectorcall(cpy_r_r44, cpy_r_r47, 1, 0);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "<module>", 24, CPyStatic_bribes___globals);
        goto CPyL27;
    }
    PyObject *cpy_r_r49[1] = {cpy_r_r42};
    cpy_r_r50 = (PyObject **)&cpy_r_r49;
    cpy_r_r51 = PyObject_Vectorcall(cpy_r_r48, cpy_r_r50, 1, 0);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "<module>", 24, CPyStatic_bribes___globals);
        goto CPyL27;
    }
    CPy_DECREF(cpy_r_r42);
    cpy_r_r52 = CPyStatic_bribes___globals;
    cpy_r_r53 = CPyStatics[309]; /* 'is_ybribe_fees' */
    cpy_r_r54 = CPyDict_SetItem(cpy_r_r52, cpy_r_r53, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/bribes.py", "<module>", 24, CPyStatic_bribes___globals);
        goto CPyL23;
    }
    return 1;
CPyL23: ;
    cpy_r_r56 = 2;
    return cpy_r_r56;
CPyL24: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL10;
CPyL25: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL23;
CPyL26: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL17;
CPyL27: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL23;
}
static PyMethodDef keepcoinsmodule_methods[] = {
    {"is_keep_angle", (PyCFunction)CPyPy_keepcoins___is_keep_angle, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_keep_bal", (PyCFunction)CPyPy_keepcoins___is_keep_bal, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_keep_beets", (PyCFunction)CPyPy_keepcoins___is_keep_beets, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_keep_pool", (PyCFunction)CPyPy_keepcoins___is_keep_pool, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef keepcoinsmodule = {
    PyModuleDef_HEAD_INIT,
    "yearn_treasury.rules.revenue.keepcoins",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    keepcoinsmodule_methods
};

PyObject *CPyInit_yearn_treasury___rules___revenue___keepcoins(void)
{
    PyObject* modname = NULL;
    if (CPyModule_yearn_treasury___rules___revenue___keepcoins_internal) {
        Py_INCREF(CPyModule_yearn_treasury___rules___revenue___keepcoins_internal);
        return CPyModule_yearn_treasury___rules___revenue___keepcoins_internal;
    }
    CPyModule_yearn_treasury___rules___revenue___keepcoins_internal = PyModule_Create(&keepcoinsmodule);
    if (unlikely(CPyModule_yearn_treasury___rules___revenue___keepcoins_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_yearn_treasury___rules___revenue___keepcoins_internal, "__name__");
    CPyStatic_keepcoins___globals = PyModule_GetDict(CPyModule_yearn_treasury___rules___revenue___keepcoins_internal);
    if (unlikely(CPyStatic_keepcoins___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_keepcoins_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_yearn_treasury___rules___revenue___keepcoins_internal;
    fail:
    Py_CLEAR(CPyModule_yearn_treasury___rules___revenue___keepcoins_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_keepcoins___keepcoins);
    CPyStatic_keepcoins___keepcoins = NULL;
    CPy_XDECREF(CPyStatic_keepcoins___angle_strats_with_non_specific_names);
    CPyStatic_keepcoins___angle_strats_with_non_specific_names = NULL;
    return NULL;
}

char CPyDef_keepcoins___is_keep_angle(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    cpy_r_r0 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_angle", 22, CPyStatic_keepcoins___globals);
        goto CPyL22;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_angle", 22, CPyStatic_keepcoins___globals, "str", cpy_r_r1);
        goto CPyL22;
    }
    cpy_r_r3 = CPyStatics[311]; /* 'ANGLE' */
    cpy_r_r4 = PyUnicode_Compare(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 == -1;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r6 = PyErr_Occurred();
    cpy_r_r7 = cpy_r_r6 != NULL;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_angle", 22, CPyStatic_keepcoins___globals);
        goto CPyL22;
    }
CPyL5: ;
    cpy_r_r9 = cpy_r_r4 == 0;
    if (cpy_r_r9) goto CPyL7;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL21;
CPyL7: ;
    cpy_r_r11 = CPyStatics[89]; /* 'from_nickname' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_angle", 23, CPyStatic_keepcoins___globals);
        goto CPyL22;
    }
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_angle", 23, CPyStatic_keepcoins___globals, "str", cpy_r_r12);
        goto CPyL22;
    }
    cpy_r_r14 = CPyStatics[312]; /* 'Contract: StrategyAngleUSDC' */
    cpy_r_r15 = PyUnicode_Compare(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 == -1;
    if (!cpy_r_r16) goto CPyL12;
    cpy_r_r17 = PyErr_Occurred();
    cpy_r_r18 = cpy_r_r17 != NULL;
    if (!cpy_r_r18) goto CPyL12;
    cpy_r_r19 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_angle", 23, CPyStatic_keepcoins___globals);
        goto CPyL22;
    }
CPyL12: ;
    cpy_r_r20 = cpy_r_r15 == 0;
    if (!cpy_r_r20) goto CPyL14;
    cpy_r_r21 = cpy_r_r20;
    goto CPyL20;
CPyL14: ;
    cpy_r_r22 = CPyStatics[228]; /* 'from_address' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_angle", 24, CPyStatic_keepcoins___globals);
        goto CPyL22;
    }
    cpy_r_r24 = CPyStatic_keepcoins___angle_strats_with_non_specific_names;
    if (unlikely(cpy_r_r24 == NULL)) {
        goto CPyL23;
    } else
        goto CPyL18;
CPyL16: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"angle_strats_with_non_specific_names\" was not set");
    cpy_r_r25 = 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_angle", 24, CPyStatic_keepcoins___globals);
        goto CPyL22;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r26 = PySequence_Contains(cpy_r_r24, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_angle", 24, CPyStatic_keepcoins___globals);
        goto CPyL22;
    }
    cpy_r_r28 = cpy_r_r26;
    cpy_r_r21 = cpy_r_r28;
CPyL20: ;
    cpy_r_r10 = cpy_r_r21;
CPyL21: ;
    return cpy_r_r10;
CPyL22: ;
    cpy_r_r29 = 2;
    return cpy_r_r29;
CPyL23: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL16;
}

PyObject *CPyPy_keepcoins___is_keep_angle(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_keep_angle", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_keepcoins___is_keep_angle(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_angle", 21, CPyStatic_keepcoins___globals);
    return NULL;
}

char CPyDef_keepcoins___is_keep_bal(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    int32_t cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    cpy_r_r0 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", 32, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", 32, CPyStatic_keepcoins___globals, "str", cpy_r_r1);
        goto CPyL81;
    }
    cpy_r_r3 = CPyStatics[313]; /* 'BAL' */
    cpy_r_r4 = PyUnicode_Compare(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 == -1;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r6 = PyErr_Occurred();
    cpy_r_r7 = cpy_r_r6 != NULL;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", 32, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
CPyL5: ;
    cpy_r_r9 = cpy_r_r4 != 0;
    if (cpy_r_r9) goto CPyL12;
    cpy_r_r10 = CPyStatics[91]; /* 'hash' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", 33, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
    if (likely(PyUnicode_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", 33, CPyStatic_keepcoins___globals, "str", cpy_r_r11);
        goto CPyL81;
    }
    cpy_r_r13 = CPyStatics[314]; /* '0xf4677cce1a08ecd54272cdc1b23bc64693450f8bb5d6de59b8e58e288ec3b2a7' */
    cpy_r_r14 = PyUnicode_Compare(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r15 = cpy_r_r14 == -1;
    if (!cpy_r_r15) goto CPyL11;
    cpy_r_r16 = PyErr_Occurred();
    cpy_r_r17 = cpy_r_r16 != NULL;
    if (!cpy_r_r17) goto CPyL11;
    cpy_r_r18 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", 33, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
CPyL11: ;
    cpy_r_r19 = cpy_r_r14 == 0;
    if (!cpy_r_r19) goto CPyL13;
CPyL12: ;
    return 0;
CPyL13: ;
    cpy_r_r20 = CPyStatics[89]; /* 'from_nickname' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", 37, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
    if (likely(PyUnicode_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", 37, CPyStatic_keepcoins___globals, "str", cpy_r_r21);
        goto CPyL81;
    }
    cpy_r_r23 = CPyStatics[315]; /* 'Contract: SSBv3 DAI staBAL3' */
    cpy_r_r24 = PyUnicode_Compare(cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r25 = cpy_r_r24 == -1;
    if (!cpy_r_r25) goto CPyL18;
    cpy_r_r26 = PyErr_Occurred();
    cpy_r_r27 = cpy_r_r26 != NULL;
    if (!cpy_r_r27) goto CPyL18;
    cpy_r_r28 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", -1, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
CPyL18: ;
    cpy_r_r29 = cpy_r_r24 == 0;
    if (!cpy_r_r29) goto CPyL20;
    cpy_r_r30 = cpy_r_r29;
    goto CPyL26;
CPyL20: ;
    cpy_r_r31 = CPyStatics[89]; /* 'from_nickname' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", 37, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
    if (likely(PyUnicode_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", 37, CPyStatic_keepcoins___globals, "str", cpy_r_r32);
        goto CPyL81;
    }
    cpy_r_r34 = CPyStatics[316]; /* 'Contract: SSBv3 USDC staBAL3' */
    cpy_r_r35 = PyUnicode_Compare(cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r36 = cpy_r_r35 == -1;
    if (!cpy_r_r36) goto CPyL25;
    cpy_r_r37 = PyErr_Occurred();
    cpy_r_r38 = cpy_r_r37 != NULL;
    if (!cpy_r_r38) goto CPyL25;
    cpy_r_r39 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", -1, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
CPyL25: ;
    cpy_r_r40 = cpy_r_r35 == 0;
    cpy_r_r30 = cpy_r_r40;
CPyL26: ;
    if (!cpy_r_r30) goto CPyL28;
    cpy_r_r41 = cpy_r_r30;
    goto CPyL34;
CPyL28: ;
    cpy_r_r42 = CPyStatics[89]; /* 'from_nickname' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", 37, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
    if (likely(PyUnicode_Check(cpy_r_r43)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", 37, CPyStatic_keepcoins___globals, "str", cpy_r_r43);
        goto CPyL81;
    }
    cpy_r_r45 = CPyStatics[317]; /* 'Contract: SSBv3 USDT staBAL3' */
    cpy_r_r46 = PyUnicode_Compare(cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r47 = cpy_r_r46 == -1;
    if (!cpy_r_r47) goto CPyL33;
    cpy_r_r48 = PyErr_Occurred();
    cpy_r_r49 = cpy_r_r48 != NULL;
    if (!cpy_r_r49) goto CPyL33;
    cpy_r_r50 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", -1, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
CPyL33: ;
    cpy_r_r51 = cpy_r_r46 == 0;
    cpy_r_r41 = cpy_r_r51;
CPyL34: ;
    if (!cpy_r_r41) goto CPyL36;
    cpy_r_r52 = cpy_r_r41;
    goto CPyL42;
CPyL36: ;
    cpy_r_r53 = CPyStatics[89]; /* 'from_nickname' */
    cpy_r_r54 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", 37, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
    if (likely(PyUnicode_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", 37, CPyStatic_keepcoins___globals, "str", cpy_r_r54);
        goto CPyL81;
    }
    cpy_r_r56 = CPyStatics[318]; /* 'Contract: SSBv3 WETH B-stETH-STABLE' */
    cpy_r_r57 = PyUnicode_Compare(cpy_r_r55, cpy_r_r56);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r58 = cpy_r_r57 == -1;
    if (!cpy_r_r58) goto CPyL41;
    cpy_r_r59 = PyErr_Occurred();
    cpy_r_r60 = cpy_r_r59 != NULL;
    if (!cpy_r_r60) goto CPyL41;
    cpy_r_r61 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", -1, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
CPyL41: ;
    cpy_r_r62 = cpy_r_r57 == 0;
    cpy_r_r52 = cpy_r_r62;
CPyL42: ;
    if (!cpy_r_r52) goto CPyL44;
    cpy_r_r63 = cpy_r_r52;
    goto CPyL50;
CPyL44: ;
    cpy_r_r64 = CPyStatics[89]; /* 'from_nickname' */
    cpy_r_r65 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", 37, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
    if (likely(PyUnicode_Check(cpy_r_r65)))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", 37, CPyStatic_keepcoins___globals, "str", cpy_r_r65);
        goto CPyL81;
    }
    cpy_r_r67 = CPyStatics[319]; /* 'Contract: SSBv3 WBTC staBAL3-BTC' */
    cpy_r_r68 = PyUnicode_Compare(cpy_r_r66, cpy_r_r67);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r69 = cpy_r_r68 == -1;
    if (!cpy_r_r69) goto CPyL49;
    cpy_r_r70 = PyErr_Occurred();
    cpy_r_r71 = cpy_r_r70 != NULL;
    if (!cpy_r_r71) goto CPyL49;
    cpy_r_r72 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", -1, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
CPyL49: ;
    cpy_r_r73 = cpy_r_r68 == 0;
    cpy_r_r63 = cpy_r_r73;
CPyL50: ;
    if (!cpy_r_r63) goto CPyL52;
    cpy_r_r74 = cpy_r_r63;
    goto CPyL80;
CPyL52: ;
    cpy_r_r75 = CPyStatics[228]; /* 'from_address' */
    cpy_r_r76 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", 43, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
    cpy_r_r77 = CPyStatics[320]; /* '0x960818b3F08dADca90b840298721FE7B419fBE12' */
    cpy_r_r78 = PyObject_RichCompare(cpy_r_r76, cpy_r_r77, 2);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", -1, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
    if (unlikely(!PyBool_Check(cpy_r_r78))) {
        CPy_TypeError("bool", cpy_r_r78); cpy_r_r79 = 2;
    } else
        cpy_r_r79 = cpy_r_r78 == Py_True;
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", -1, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
    if (!cpy_r_r79) goto CPyL57;
    cpy_r_r80 = cpy_r_r79;
    goto CPyL61;
CPyL57: ;
    cpy_r_r81 = CPyStatics[228]; /* 'from_address' */
    cpy_r_r82 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", 43, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
    cpy_r_r83 = CPyStatics[321]; /* '0x074620e389B5715f7ba51Fc062D8fFaf973c7E02' */
    cpy_r_r84 = PyObject_RichCompare(cpy_r_r82, cpy_r_r83, 2);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", -1, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
    if (unlikely(!PyBool_Check(cpy_r_r84))) {
        CPy_TypeError("bool", cpy_r_r84); cpy_r_r85 = 2;
    } else
        cpy_r_r85 = cpy_r_r84 == Py_True;
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", -1, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
    cpy_r_r80 = cpy_r_r85;
CPyL61: ;
    if (!cpy_r_r80) goto CPyL63;
    cpy_r_r86 = cpy_r_r80;
    goto CPyL67;
CPyL63: ;
    cpy_r_r87 = CPyStatics[228]; /* 'from_address' */
    cpy_r_r88 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", 43, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
    cpy_r_r89 = CPyStatics[322]; /* '0xB0F8b341951233BF08A5F15a838A1a85B016aEf9' */
    cpy_r_r90 = PyObject_RichCompare(cpy_r_r88, cpy_r_r89, 2);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", -1, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
    if (unlikely(!PyBool_Check(cpy_r_r90))) {
        CPy_TypeError("bool", cpy_r_r90); cpy_r_r91 = 2;
    } else
        cpy_r_r91 = cpy_r_r90 == Py_True;
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r91 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", -1, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
    cpy_r_r86 = cpy_r_r91;
CPyL67: ;
    if (!cpy_r_r86) goto CPyL69;
    cpy_r_r92 = cpy_r_r86;
    goto CPyL73;
CPyL69: ;
    cpy_r_r93 = CPyStatics[228]; /* 'from_address' */
    cpy_r_r94 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", 43, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
    cpy_r_r95 = CPyStatics[323]; /* '0x034d775615d50D870D742caA1e539fC8d97955c2' */
    cpy_r_r96 = PyObject_RichCompare(cpy_r_r94, cpy_r_r95, 2);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", -1, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
    if (unlikely(!PyBool_Check(cpy_r_r96))) {
        CPy_TypeError("bool", cpy_r_r96); cpy_r_r97 = 2;
    } else
        cpy_r_r97 = cpy_r_r96 == Py_True;
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r97 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", -1, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
    cpy_r_r92 = cpy_r_r97;
CPyL73: ;
    if (!cpy_r_r92) goto CPyL75;
    cpy_r_r98 = cpy_r_r92;
    goto CPyL79;
CPyL75: ;
    cpy_r_r99 = CPyStatics[228]; /* 'from_address' */
    cpy_r_r100 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", 43, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
    cpy_r_r101 = CPyStatics[324]; /* '0xe614f717b3e8273f38Ed7e0536DfBA60AD021c85' */
    cpy_r_r102 = PyObject_RichCompare(cpy_r_r100, cpy_r_r101, 2);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", -1, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
    if (unlikely(!PyBool_Check(cpy_r_r102))) {
        CPy_TypeError("bool", cpy_r_r102); cpy_r_r103 = 2;
    } else
        cpy_r_r103 = cpy_r_r102 == Py_True;
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r103 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", -1, CPyStatic_keepcoins___globals);
        goto CPyL81;
    }
    cpy_r_r98 = cpy_r_r103;
CPyL79: ;
    cpy_r_r74 = cpy_r_r98;
CPyL80: ;
    return cpy_r_r74;
CPyL81: ;
    cpy_r_r104 = 2;
    return cpy_r_r104;
}

PyObject *CPyPy_keepcoins___is_keep_bal(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_keep_bal", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_keepcoins___is_keep_bal(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_bal", 29, CPyStatic_keepcoins___globals);
    return NULL;
}

char CPyDef_keepcoins___is_keep_beets(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    cpy_r_r0 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_beets", 56, CPyStatic_keepcoins___globals);
        goto CPyL14;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_beets", 56, CPyStatic_keepcoins___globals, "str", cpy_r_r1);
        goto CPyL14;
    }
    cpy_r_r3 = CPyStatics[325]; /* 'BEETS' */
    cpy_r_r4 = PyUnicode_Compare(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 == -1;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r6 = PyErr_Occurred();
    cpy_r_r7 = cpy_r_r6 != NULL;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_beets", 56, CPyStatic_keepcoins___globals);
        goto CPyL14;
    }
CPyL5: ;
    cpy_r_r9 = cpy_r_r4 == 0;
    if (cpy_r_r9) goto CPyL7;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL13;
CPyL7: ;
    cpy_r_r11 = CPyStatics[91]; /* 'hash' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_beets", 57, CPyStatic_keepcoins___globals);
        goto CPyL14;
    }
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_beets", 57, CPyStatic_keepcoins___globals, "str", cpy_r_r12);
        goto CPyL14;
    }
    cpy_r_r14 = CPyStatics[326]; /* '0x1e997aa8c79ece76face8deb8fe7df4cea4f6a1ef7cd28501013ed30dfbe238f' */
    cpy_r_r15 = PyUnicode_Compare(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 == -1;
    if (!cpy_r_r16) goto CPyL12;
    cpy_r_r17 = PyErr_Occurred();
    cpy_r_r18 = cpy_r_r17 != NULL;
    if (!cpy_r_r18) goto CPyL12;
    cpy_r_r19 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_beets", 57, CPyStatic_keepcoins___globals);
        goto CPyL14;
    }
CPyL12: ;
    cpy_r_r20 = cpy_r_r15 != 0;
    cpy_r_r10 = cpy_r_r20;
CPyL13: ;
    return cpy_r_r10;
CPyL14: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
}

PyObject *CPyPy_keepcoins___is_keep_beets(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_keep_beets", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_keepcoins___is_keep_beets(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_beets", 54, CPyStatic_keepcoins___globals);
    return NULL;
}

char CPyDef_keepcoins___is_keep_pool(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    cpy_r_r0 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_pool", 63, CPyStatic_keepcoins___globals);
        goto CPyL14;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_pool", 63, CPyStatic_keepcoins___globals, "str", cpy_r_r1);
        goto CPyL14;
    }
    cpy_r_r3 = CPyStatics[327]; /* 'POOL' */
    cpy_r_r4 = PyUnicode_Compare(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 == -1;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r6 = PyErr_Occurred();
    cpy_r_r7 = cpy_r_r6 != NULL;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_pool", 63, CPyStatic_keepcoins___globals);
        goto CPyL14;
    }
CPyL5: ;
    cpy_r_r9 = cpy_r_r4 == 0;
    if (cpy_r_r9) goto CPyL7;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL13;
CPyL7: ;
    cpy_r_r11 = CPyStatics[89]; /* 'from_nickname' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_pool", 63, CPyStatic_keepcoins___globals);
        goto CPyL14;
    }
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_pool", 63, CPyStatic_keepcoins___globals, "str", cpy_r_r12);
        goto CPyL14;
    }
    cpy_r_r14 = CPyStatics[328]; /* 'Contract: StrategyPoolTogether' */
    cpy_r_r15 = PyUnicode_Compare(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 == -1;
    if (!cpy_r_r16) goto CPyL12;
    cpy_r_r17 = PyErr_Occurred();
    cpy_r_r18 = cpy_r_r17 != NULL;
    if (!cpy_r_r18) goto CPyL12;
    cpy_r_r19 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_pool", 63, CPyStatic_keepcoins___globals);
        goto CPyL14;
    }
CPyL12: ;
    cpy_r_r20 = cpy_r_r15 == 0;
    cpy_r_r10 = cpy_r_r20;
CPyL13: ;
    return cpy_r_r10;
CPyL14: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
}

PyObject *CPyPy_keepcoins___is_keep_pool(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_keep_pool", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_keepcoins___is_keep_pool(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "is_keep_pool", 62, CPyStatic_keepcoins___globals);
    return NULL;
}

char CPyDef_keepcoins_____top_level__(void) {
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
    PyObject *cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    tuple_T2OO cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    tuple_T0 cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject **cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject **cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject **cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject **cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    PyObject **cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject **cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject **cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject **cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    int32_t cpy_r_r117;
    char cpy_r_r118;
    char cpy_r_r119;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", -1, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[460]; /* ('Final', 'Tuple') */
    cpy_r_r6 = CPyStatics[24]; /* 'typing' */
    cpy_r_r7 = CPyStatic_keepcoins___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 2, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[434]; /* ('Network',) */
    cpy_r_r10 = CPyStatics[71]; /* 'y' */
    cpy_r_r11 = CPyStatic_keepcoins___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 4, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    CPyModule_y = cpy_r_r12;
    CPy_INCREF(CPyModule_y);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[435]; /* ('CHAINID',) */
    cpy_r_r14 = CPyStatics[73]; /* 'y.constants' */
    cpy_r_r15 = CPyStatic_keepcoins___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 5, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    CPyModule_y___constants = cpy_r_r16;
    CPy_INCREF(CPyModule_y___constants);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[459]; /* ('TreasuryTx', 'revenue') */
    cpy_r_r18 = CPyStatics[99]; /* 'dao_treasury' */
    cpy_r_r19 = CPyStatic_keepcoins___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 7, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    CPyModule_dao_treasury = cpy_r_r20;
    CPy_INCREF(CPyModule_dao_treasury);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[330]; /* 'keepCOINS' */
    cpy_r_r22 = CPyStatic_keepcoins___globals;
    cpy_r_r23 = CPyStatics[304]; /* 'revenue' */
    cpy_r_r24 = CPyDict_GetItem(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 10, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    PyObject *cpy_r_r25[1] = {cpy_r_r21};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = PyObject_Vectorcall(cpy_r_r24, cpy_r_r26, 1, 0);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 10, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    CPyStatic_keepcoins___keepcoins = cpy_r_r27;
    CPy_INCREF(CPyStatic_keepcoins___keepcoins);
    cpy_r_r28 = CPyStatic_keepcoins___globals;
    cpy_r_r29 = CPyStatics[331]; /* 'keepcoins' */
    cpy_r_r30 = CPyDict_SetItem(cpy_r_r28, cpy_r_r29, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 10, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    cpy_r_r32 = CPyStatic_keepcoins___globals;
    cpy_r_r33 = CPyStatics[70]; /* 'Network' */
    cpy_r_r34 = CPyDict_GetItem(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 13, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    cpy_r_r35 = CPyStatics[78]; /* 'Mainnet' */
    cpy_r_r36 = CPyObject_GetAttr(cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 13, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    cpy_r_r37 = CPyStatics[332]; /* '0x2CB390212b0e5091a3c0D0331669c1419165CF80' */
    cpy_r_r38 = CPyStatics[333]; /* '0x7C2b9DB2Ae5aCC6fAC2Fd6cE9b01A5EB4bDD1309' */
    CPy_INCREF(cpy_r_r37);
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39.f0 = cpy_r_r37;
    cpy_r_r39.f1 = cpy_r_r38;
    cpy_r_r40 = PyTuple_New(2);
    if (unlikely(cpy_r_r40 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp25 = cpy_r_r39.f0;
    PyTuple_SET_ITEM(cpy_r_r40, 0, __tmp25);
    PyObject *__tmp26 = cpy_r_r39.f1;
    PyTuple_SET_ITEM(cpy_r_r40, 1, __tmp26);
    cpy_r_r41 = CPyDict_Build(1, cpy_r_r36, cpy_r_r40);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 12, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    cpy_r_r42 = CPyStatic_keepcoins___globals;
    cpy_r_r43 = CPyStatics[72]; /* 'CHAINID' */
    cpy_r_r44 = CPyDict_GetItem(cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 17, CPyStatic_keepcoins___globals);
        goto CPyL48;
    }
    if (likely(PyLong_Check(cpy_r_r44)))
        cpy_r_r45 = CPyTagged_FromObject(cpy_r_r44);
    else {
        CPy_TypeError("int", cpy_r_r44); cpy_r_r45 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == CPY_INT_TAG)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 17, CPyStatic_keepcoins___globals);
        goto CPyL48;
    }
    cpy_r_r46.empty_struct_error_flag = 0;
    cpy_r_r47 = CPyTagged_StealAsObject(cpy_r_r45);
    cpy_r_r48 = PyTuple_New(0);
    if (unlikely(cpy_r_r48 == NULL))
        CPyError_OutOfMemory();
    cpy_r_r49 = CPyDict_Get(cpy_r_r41, cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 12, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r49);
    if (likely(PyTuple_Check(cpy_r_r49)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 12, CPyStatic_keepcoins___globals, "tuple", cpy_r_r49);
        goto CPyL49;
    }
    CPyStatic_keepcoins___angle_strats_with_non_specific_names = cpy_r_r50;
    CPy_INCREF(CPyStatic_keepcoins___angle_strats_with_non_specific_names);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r51 = CPyStatic_keepcoins___globals;
    cpy_r_r52 = CPyStatics[334]; /* 'angle_strats_with_non_specific_names' */
    cpy_r_r53 = CPyDict_SetItem(cpy_r_r51, cpy_r_r52, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 12, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    cpy_r_r55 = CPyStatic_keepcoins___globals;
    cpy_r_r56 = CPyStatics[335]; /* 'is_keep_angle' */
    cpy_r_r57 = CPyDict_GetItem(cpy_r_r55, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 20, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    cpy_r_r58 = CPyStatics[336]; /* 'KeepANGLE' */
    cpy_r_r59 = CPyStatic_keepcoins___keepcoins;
    if (unlikely(cpy_r_r59 == NULL)) {
        goto CPyL50;
    } else
        goto CPyL22;
CPyL20: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"keepcoins\" was not set");
    cpy_r_r60 = 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 20, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    CPy_Unreachable();
CPyL22: ;
    PyObject *cpy_r_r61[1] = {cpy_r_r58};
    cpy_r_r62 = (PyObject **)&cpy_r_r61;
    cpy_r_r63 = PyObject_Vectorcall(cpy_r_r59, cpy_r_r62, 1, 0);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 20, CPyStatic_keepcoins___globals);
        goto CPyL51;
    }
    PyObject *cpy_r_r64[1] = {cpy_r_r57};
    cpy_r_r65 = (PyObject **)&cpy_r_r64;
    cpy_r_r66 = PyObject_Vectorcall(cpy_r_r63, cpy_r_r65, 1, 0);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 20, CPyStatic_keepcoins___globals);
        goto CPyL51;
    }
    CPy_DECREF(cpy_r_r57);
    cpy_r_r67 = CPyStatic_keepcoins___globals;
    cpy_r_r68 = CPyStatics[335]; /* 'is_keep_angle' */
    cpy_r_r69 = CPyDict_SetItem(cpy_r_r67, cpy_r_r68, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 20, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    cpy_r_r71 = CPyStatic_keepcoins___globals;
    cpy_r_r72 = CPyStatics[337]; /* 'is_keep_bal' */
    cpy_r_r73 = CPyDict_GetItem(cpy_r_r71, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 28, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    cpy_r_r74 = CPyStatics[338]; /* 'KeepBAL' */
    cpy_r_r75 = CPyStatic_keepcoins___keepcoins;
    if (unlikely(cpy_r_r75 == NULL)) {
        goto CPyL52;
    } else
        goto CPyL29;
CPyL27: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"keepcoins\" was not set");
    cpy_r_r76 = 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 28, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    CPy_Unreachable();
CPyL29: ;
    PyObject *cpy_r_r77[1] = {cpy_r_r74};
    cpy_r_r78 = (PyObject **)&cpy_r_r77;
    cpy_r_r79 = PyObject_Vectorcall(cpy_r_r75, cpy_r_r78, 1, 0);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 28, CPyStatic_keepcoins___globals);
        goto CPyL53;
    }
    PyObject *cpy_r_r80[1] = {cpy_r_r73};
    cpy_r_r81 = (PyObject **)&cpy_r_r80;
    cpy_r_r82 = PyObject_Vectorcall(cpy_r_r79, cpy_r_r81, 1, 0);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 28, CPyStatic_keepcoins___globals);
        goto CPyL53;
    }
    CPy_DECREF(cpy_r_r73);
    cpy_r_r83 = CPyStatic_keepcoins___globals;
    cpy_r_r84 = CPyStatics[337]; /* 'is_keep_bal' */
    cpy_r_r85 = CPyDict_SetItem(cpy_r_r83, cpy_r_r84, cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 28, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    cpy_r_r87 = CPyStatic_keepcoins___globals;
    cpy_r_r88 = CPyStatics[339]; /* 'is_keep_beets' */
    cpy_r_r89 = CPyDict_GetItem(cpy_r_r87, cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 53, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    cpy_r_r90 = CPyStatics[340]; /* 'KeepBEETS' */
    cpy_r_r91 = CPyStatic_keepcoins___keepcoins;
    if (unlikely(cpy_r_r91 == NULL)) {
        goto CPyL54;
    } else
        goto CPyL36;
CPyL34: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"keepcoins\" was not set");
    cpy_r_r92 = 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 53, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    CPy_Unreachable();
CPyL36: ;
    PyObject *cpy_r_r93[1] = {cpy_r_r90};
    cpy_r_r94 = (PyObject **)&cpy_r_r93;
    cpy_r_r95 = PyObject_Vectorcall(cpy_r_r91, cpy_r_r94, 1, 0);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 53, CPyStatic_keepcoins___globals);
        goto CPyL55;
    }
    PyObject *cpy_r_r96[1] = {cpy_r_r89};
    cpy_r_r97 = (PyObject **)&cpy_r_r96;
    cpy_r_r98 = PyObject_Vectorcall(cpy_r_r95, cpy_r_r97, 1, 0);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 53, CPyStatic_keepcoins___globals);
        goto CPyL55;
    }
    CPy_DECREF(cpy_r_r89);
    cpy_r_r99 = CPyStatic_keepcoins___globals;
    cpy_r_r100 = CPyStatics[339]; /* 'is_keep_beets' */
    cpy_r_r101 = CPyDict_SetItem(cpy_r_r99, cpy_r_r100, cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 53, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    cpy_r_r103 = CPyStatic_keepcoins___globals;
    cpy_r_r104 = CPyStatics[341]; /* 'is_keep_pool' */
    cpy_r_r105 = CPyDict_GetItem(cpy_r_r103, cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 61, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    cpy_r_r106 = CPyStatics[342]; /* 'KeepPOOL' */
    cpy_r_r107 = CPyStatic_keepcoins___keepcoins;
    if (unlikely(cpy_r_r107 == NULL)) {
        goto CPyL56;
    } else
        goto CPyL43;
CPyL41: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"keepcoins\" was not set");
    cpy_r_r108 = 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 61, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    CPy_Unreachable();
CPyL43: ;
    PyObject *cpy_r_r109[1] = {cpy_r_r106};
    cpy_r_r110 = (PyObject **)&cpy_r_r109;
    cpy_r_r111 = PyObject_Vectorcall(cpy_r_r107, cpy_r_r110, 1, 0);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 61, CPyStatic_keepcoins___globals);
        goto CPyL57;
    }
    PyObject *cpy_r_r112[1] = {cpy_r_r105};
    cpy_r_r113 = (PyObject **)&cpy_r_r112;
    cpy_r_r114 = PyObject_Vectorcall(cpy_r_r111, cpy_r_r113, 1, 0);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 61, CPyStatic_keepcoins___globals);
        goto CPyL57;
    }
    CPy_DECREF(cpy_r_r105);
    cpy_r_r115 = CPyStatic_keepcoins___globals;
    cpy_r_r116 = CPyStatics[341]; /* 'is_keep_pool' */
    cpy_r_r117 = CPyDict_SetItem(cpy_r_r115, cpy_r_r116, cpy_r_r114);
    CPy_DECREF(cpy_r_r114);
    cpy_r_r118 = cpy_r_r117 >= 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/keepcoins.py", "<module>", 61, CPyStatic_keepcoins___globals);
        goto CPyL47;
    }
    return 1;
CPyL47: ;
    cpy_r_r119 = 2;
    return cpy_r_r119;
CPyL48: ;
    CPy_DecRef(cpy_r_r41);
    goto CPyL47;
CPyL49: ;
    CPy_DecRef(cpy_r_r49);
    goto CPyL47;
CPyL50: ;
    CPy_DecRef(cpy_r_r57);
    goto CPyL20;
CPyL51: ;
    CPy_DecRef(cpy_r_r57);
    goto CPyL47;
CPyL52: ;
    CPy_DecRef(cpy_r_r73);
    goto CPyL27;
CPyL53: ;
    CPy_DecRef(cpy_r_r73);
    goto CPyL47;
CPyL54: ;
    CPy_DecRef(cpy_r_r89);
    goto CPyL34;
CPyL55: ;
    CPy_DecRef(cpy_r_r89);
    goto CPyL47;
CPyL56: ;
    CPy_DecRef(cpy_r_r105);
    goto CPyL41;
CPyL57: ;
    CPy_DecRef(cpy_r_r105);
    goto CPyL47;
}
static PyMethodDef seasolvermodule_methods[] = {
    {"is_seasolver_slippage_revenue", (PyCFunction)CPyPy_seasolver___is_seasolver_slippage_revenue, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_cowswap_incentive", (PyCFunction)CPyPy_seasolver___is_cowswap_incentive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef seasolvermodule = {
    PyModuleDef_HEAD_INIT,
    "yearn_treasury.rules.revenue.seasolver",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    seasolvermodule_methods
};

PyObject *CPyInit_yearn_treasury___rules___revenue___seasolver(void)
{
    PyObject* modname = NULL;
    if (CPyModule_yearn_treasury___rules___revenue___seasolver_internal) {
        Py_INCREF(CPyModule_yearn_treasury___rules___revenue___seasolver_internal);
        return CPyModule_yearn_treasury___rules___revenue___seasolver_internal;
    }
    CPyModule_yearn_treasury___rules___revenue___seasolver_internal = PyModule_Create(&seasolvermodule);
    if (unlikely(CPyModule_yearn_treasury___rules___revenue___seasolver_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_yearn_treasury___rules___revenue___seasolver_internal, "__name__");
    CPyStatic_seasolver___globals = PyModule_GetDict(CPyModule_yearn_treasury___rules___revenue___seasolver_internal);
    if (unlikely(CPyStatic_seasolver___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_seasolver_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_yearn_treasury___rules___revenue___seasolver_internal;
    fail:
    Py_CLEAR(CPyModule_yearn_treasury___rules___revenue___seasolver_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_seasolver___seasolver);
    CPyStatic_seasolver___seasolver = NULL;
    return NULL;
}

char CPyDef_seasolver___is_seasolver_slippage_revenue(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    int64_t cpy_r_r3;
    char cpy_r_r4;
    int64_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    cpy_r_r0 = CPyStatics[268]; /* 'block' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "is_seasolver_slippage_revenue", 14, CPyStatic_seasolver___globals);
        goto CPyL22;
    }
    if (likely(PyLong_Check(cpy_r_r1)))
        cpy_r_r2 = CPyTagged_FromObject(cpy_r_r1);
    else {
        CPy_TypeError("int", cpy_r_r1); cpy_r_r2 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == CPY_INT_TAG)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "is_seasolver_slippage_revenue", 14, CPyStatic_seasolver___globals);
        goto CPyL22;
    }
    cpy_r_r3 = cpy_r_r2 & 1;
    cpy_r_r4 = cpy_r_r3 != 0;
    if (cpy_r_r4) goto CPyL4;
    cpy_r_r5 = 34324572 & 1;
    cpy_r_r6 = cpy_r_r5 != 0;
    if (!cpy_r_r6) goto CPyL5;
CPyL4: ;
    cpy_r_r7 = CPyTagged_IsLt_(34324572, cpy_r_r2);
    cpy_r_r8 = cpy_r_r7 ^ 1;
    cpy_r_r9 = cpy_r_r8;
    goto CPyL6;
CPyL5: ;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r2 <= (Py_ssize_t)34324572;
    cpy_r_r9 = cpy_r_r10;
CPyL6: ;
    CPyTagged_DECREF(cpy_r_r2);
    if (cpy_r_r9) goto CPyL8;
    cpy_r_r11 = cpy_r_r9;
    goto CPyL21;
CPyL8: ;
    cpy_r_r12 = CPyStatics[89]; /* 'from_nickname' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "is_seasolver_slippage_revenue", 15, CPyStatic_seasolver___globals);
        goto CPyL22;
    }
    if (likely(PyUnicode_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/revenue/seasolver.py", "is_seasolver_slippage_revenue", 15, CPyStatic_seasolver___globals, "str", cpy_r_r13);
        goto CPyL22;
    }
    cpy_r_r15 = CPyStatics[343]; /* 'Contract: TradeHandler' */
    cpy_r_r16 = PyUnicode_Compare(cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r17 = cpy_r_r16 == -1;
    if (!cpy_r_r17) goto CPyL13;
    cpy_r_r18 = PyErr_Occurred();
    cpy_r_r19 = cpy_r_r18 != NULL;
    if (!cpy_r_r19) goto CPyL13;
    cpy_r_r20 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "is_seasolver_slippage_revenue", 15, CPyStatic_seasolver___globals);
        goto CPyL22;
    }
CPyL13: ;
    cpy_r_r21 = cpy_r_r16 == 0;
    if (cpy_r_r21) goto CPyL15;
    cpy_r_r22 = cpy_r_r21;
    goto CPyL20;
CPyL15: ;
    cpy_r_r23 = CPyStatics[130]; /* 'to_nickname' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "is_seasolver_slippage_revenue", 16, CPyStatic_seasolver___globals);
        goto CPyL22;
    }
    if (PyUnicode_Check(cpy_r_r24))
        cpy_r_r25 = cpy_r_r24;
    else {
        cpy_r_r25 = NULL;
    }
    if (cpy_r_r25 != NULL) goto __LL27;
    if (cpy_r_r24 == Py_None)
        cpy_r_r25 = cpy_r_r24;
    else {
        cpy_r_r25 = NULL;
    }
    if (cpy_r_r25 != NULL) goto __LL27;
    CPy_TypeErrorTraceback("yearn_treasury/rules/revenue/seasolver.py", "is_seasolver_slippage_revenue", 16, CPyStatic_seasolver___globals, "str or None", cpy_r_r24);
    goto CPyL22;
__LL27: ;
    cpy_r_r26 = CPyStatics[278]; /* 'yMechs Multisig' */
    cpy_r_r27 = PyObject_RichCompare(cpy_r_r25, cpy_r_r26, 2);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "is_seasolver_slippage_revenue", 16, CPyStatic_seasolver___globals);
        goto CPyL22;
    }
    if (unlikely(!PyBool_Check(cpy_r_r27))) {
        CPy_TypeError("bool", cpy_r_r27); cpy_r_r28 = 2;
    } else
        cpy_r_r28 = cpy_r_r27 == Py_True;
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "is_seasolver_slippage_revenue", 16, CPyStatic_seasolver___globals);
        goto CPyL22;
    }
    cpy_r_r22 = cpy_r_r28;
CPyL20: ;
    cpy_r_r11 = cpy_r_r22;
CPyL21: ;
    return cpy_r_r11;
CPyL22: ;
    cpy_r_r29 = 2;
    return cpy_r_r29;
}

PyObject *CPyPy_seasolver___is_seasolver_slippage_revenue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_seasolver_slippage_revenue", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_seasolver___is_seasolver_slippage_revenue(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "is_seasolver_slippage_revenue", 10, CPyStatic_seasolver___globals);
    return NULL;
}

char CPyDef_seasolver___is_cowswap_incentive(PyObject *cpy_r_tx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    cpy_r_r0 = CPyStatics[87]; /* 'symbol' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "is_cowswap_incentive", 23, CPyStatic_seasolver___globals);
        goto CPyL12;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/rules/revenue/seasolver.py", "is_cowswap_incentive", 23, CPyStatic_seasolver___globals, "str", cpy_r_r1);
        goto CPyL12;
    }
    cpy_r_r3 = CPyStatics[344]; /* 'COW' */
    cpy_r_r4 = PyUnicode_Compare(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 == -1;
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r6 = PyErr_Occurred();
    cpy_r_r7 = cpy_r_r6 != NULL;
    if (!cpy_r_r7) goto CPyL5;
    cpy_r_r8 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "is_cowswap_incentive", 23, CPyStatic_seasolver___globals);
        goto CPyL12;
    }
CPyL5: ;
    cpy_r_r9 = cpy_r_r4 == 0;
    if (cpy_r_r9) goto CPyL7;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL11;
CPyL7: ;
    cpy_r_r11 = CPyStatics[228]; /* 'from_address' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_tx, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "is_cowswap_incentive", 23, CPyStatic_seasolver___globals);
        goto CPyL12;
    }
    cpy_r_r13 = CPyStatics[345]; /* '0xA03be496e67Ec29bC62F01a428683D7F9c204930' */
    cpy_r_r14 = PyObject_RichCompare(cpy_r_r12, cpy_r_r13, 2);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "is_cowswap_incentive", 23, CPyStatic_seasolver___globals);
        goto CPyL12;
    }
    if (unlikely(!PyBool_Check(cpy_r_r14))) {
        CPy_TypeError("bool", cpy_r_r14); cpy_r_r15 = 2;
    } else
        cpy_r_r15 = cpy_r_r14 == Py_True;
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "is_cowswap_incentive", 23, CPyStatic_seasolver___globals);
        goto CPyL12;
    }
    cpy_r_r10 = cpy_r_r15;
CPyL11: ;
    return cpy_r_r10;
CPyL12: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
}

PyObject *CPyPy_seasolver___is_cowswap_incentive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tx", 0};
    static CPyArg_Parser parser = {"O:is_cowswap_incentive", kwlist, 0};
    PyObject *obj_tx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tx)) {
        return NULL;
    }
    PyObject *arg_tx = obj_tx;
    char retval = CPyDef_seasolver___is_cowswap_incentive(arg_tx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "is_cowswap_incentive", 21, CPyStatic_seasolver___globals);
    return NULL;
}

char CPyDef_seasolver_____top_level__(void) {
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
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject **cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject **cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject **cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    int32_t cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "<module>", -1, CPyStatic_seasolver___globals);
        goto CPyL26;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[433]; /* ('Final',) */
    cpy_r_r6 = CPyStatics[24]; /* 'typing' */
    cpy_r_r7 = CPyStatic_seasolver___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "<module>", 1, CPyStatic_seasolver___globals);
        goto CPyL26;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[459]; /* ('TreasuryTx', 'revenue') */
    cpy_r_r10 = CPyStatics[99]; /* 'dao_treasury' */
    cpy_r_r11 = CPyStatic_seasolver___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "<module>", 2, CPyStatic_seasolver___globals);
        goto CPyL26;
    }
    CPyModule_dao_treasury = cpy_r_r12;
    CPy_INCREF(CPyModule_dao_treasury);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[434]; /* ('Network',) */
    cpy_r_r14 = CPyStatics[71]; /* 'y' */
    cpy_r_r15 = CPyStatic_seasolver___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "<module>", 3, CPyStatic_seasolver___globals);
        goto CPyL26;
    }
    CPyModule_y = cpy_r_r16;
    CPy_INCREF(CPyModule_y);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[346]; /* 'Seasolver' */
    cpy_r_r18 = CPyStatic_seasolver___globals;
    cpy_r_r19 = CPyStatics[70]; /* 'Network' */
    cpy_r_r20 = CPyDict_GetItem(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "<module>", 6, CPyStatic_seasolver___globals);
        goto CPyL26;
    }
    cpy_r_r21 = CPyStatics[78]; /* 'Mainnet' */
    cpy_r_r22 = CPyObject_GetAttr(cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "<module>", 6, CPyStatic_seasolver___globals);
        goto CPyL26;
    }
    cpy_r_r23 = CPyStatic_seasolver___globals;
    cpy_r_r24 = CPyStatics[304]; /* 'revenue' */
    cpy_r_r25 = CPyDict_GetItem(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "<module>", 6, CPyStatic_seasolver___globals);
        goto CPyL27;
    }
    PyObject *cpy_r_r26[2] = {cpy_r_r17, cpy_r_r22};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = PyObject_Vectorcall(cpy_r_r25, cpy_r_r27, 2, 0);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "<module>", 6, CPyStatic_seasolver___globals);
        goto CPyL27;
    }
    CPy_DECREF(cpy_r_r22);
    CPyStatic_seasolver___seasolver = cpy_r_r28;
    CPy_INCREF(CPyStatic_seasolver___seasolver);
    cpy_r_r29 = CPyStatic_seasolver___globals;
    cpy_r_r30 = CPyStatics[347]; /* 'seasolver' */
    cpy_r_r31 = CPyDict_SetItem(cpy_r_r29, cpy_r_r30, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "<module>", 6, CPyStatic_seasolver___globals);
        goto CPyL26;
    }
    cpy_r_r33 = CPyStatic_seasolver___globals;
    cpy_r_r34 = CPyStatics[348]; /* 'is_seasolver_slippage_revenue' */
    cpy_r_r35 = CPyDict_GetItem(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "<module>", 9, CPyStatic_seasolver___globals);
        goto CPyL26;
    }
    cpy_r_r36 = CPyStatics[349]; /* 'Positive Slippage' */
    cpy_r_r37 = CPyStatic_seasolver___seasolver;
    if (unlikely(cpy_r_r37 == NULL)) {
        goto CPyL28;
    } else
        goto CPyL15;
CPyL13: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"seasolver\" was not set");
    cpy_r_r38 = 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "<module>", 9, CPyStatic_seasolver___globals);
        goto CPyL26;
    }
    CPy_Unreachable();
CPyL15: ;
    PyObject *cpy_r_r39[1] = {cpy_r_r36};
    cpy_r_r40 = (PyObject **)&cpy_r_r39;
    cpy_r_r41 = PyObject_Vectorcall(cpy_r_r37, cpy_r_r40, 1, 0);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "<module>", 9, CPyStatic_seasolver___globals);
        goto CPyL29;
    }
    PyObject *cpy_r_r42[1] = {cpy_r_r35};
    cpy_r_r43 = (PyObject **)&cpy_r_r42;
    cpy_r_r44 = PyObject_Vectorcall(cpy_r_r41, cpy_r_r43, 1, 0);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "<module>", 9, CPyStatic_seasolver___globals);
        goto CPyL29;
    }
    CPy_DECREF(cpy_r_r35);
    cpy_r_r45 = CPyStatic_seasolver___globals;
    cpy_r_r46 = CPyStatics[348]; /* 'is_seasolver_slippage_revenue' */
    cpy_r_r47 = CPyDict_SetItem(cpy_r_r45, cpy_r_r46, cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "<module>", 9, CPyStatic_seasolver___globals);
        goto CPyL26;
    }
    cpy_r_r49 = CPyStatic_seasolver___globals;
    cpy_r_r50 = CPyStatics[350]; /* 'is_cowswap_incentive' */
    cpy_r_r51 = CPyDict_GetItem(cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "<module>", 20, CPyStatic_seasolver___globals);
        goto CPyL26;
    }
    cpy_r_r52 = CPyStatics[351]; /* 'CowSwap Incentives' */
    cpy_r_r53 = CPyStatic_seasolver___seasolver;
    if (unlikely(cpy_r_r53 == NULL)) {
        goto CPyL30;
    } else
        goto CPyL22;
CPyL20: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"seasolver\" was not set");
    cpy_r_r54 = 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "<module>", 20, CPyStatic_seasolver___globals);
        goto CPyL26;
    }
    CPy_Unreachable();
CPyL22: ;
    PyObject *cpy_r_r55[1] = {cpy_r_r52};
    cpy_r_r56 = (PyObject **)&cpy_r_r55;
    cpy_r_r57 = PyObject_Vectorcall(cpy_r_r53, cpy_r_r56, 1, 0);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "<module>", 20, CPyStatic_seasolver___globals);
        goto CPyL31;
    }
    PyObject *cpy_r_r58[1] = {cpy_r_r51};
    cpy_r_r59 = (PyObject **)&cpy_r_r58;
    cpy_r_r60 = PyObject_Vectorcall(cpy_r_r57, cpy_r_r59, 1, 0);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "<module>", 20, CPyStatic_seasolver___globals);
        goto CPyL31;
    }
    CPy_DECREF(cpy_r_r51);
    cpy_r_r61 = CPyStatic_seasolver___globals;
    cpy_r_r62 = CPyStatics[350]; /* 'is_cowswap_incentive' */
    cpy_r_r63 = CPyDict_SetItem(cpy_r_r61, cpy_r_r62, cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r64 = cpy_r_r63 >= 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("yearn_treasury/rules/revenue/seasolver.py", "<module>", 20, CPyStatic_seasolver___globals);
        goto CPyL26;
    }
    return 1;
CPyL26: ;
    cpy_r_r65 = 2;
    return cpy_r_r65;
CPyL27: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL26;
CPyL28: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL13;
CPyL29: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL26;
CPyL30: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL20;
CPyL31: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL26;
}
static PyMethodDef _dbmodule_methods[] = {
    {"prepare_db", (PyCFunction)CPyPy__db___prepare_db, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef _dbmodule = {
    PyModuleDef_HEAD_INIT,
    "yearn_treasury._db",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    _dbmodule_methods
};

PyObject *CPyInit_yearn_treasury____db(void)
{
    PyObject* modname = NULL;
    if (CPyModule_yearn_treasury____db_internal) {
        Py_INCREF(CPyModule_yearn_treasury____db_internal);
        return CPyModule_yearn_treasury____db_internal;
    }
    CPyModule_yearn_treasury____db_internal = PyModule_Create(&_dbmodule);
    if (unlikely(CPyModule_yearn_treasury____db_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_yearn_treasury____db_internal, "__name__");
    CPyStatic__db___globals = PyModule_GetDict(CPyModule_yearn_treasury____db_internal);
    if (unlikely(CPyStatic__db___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef__db_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_yearn_treasury____db_internal;
    fail:
    Py_CLEAR(CPyModule_yearn_treasury____db_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef__db___prepare_db(void) {
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
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
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
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject **cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    cpy_r_r0 = CPyStatic__db___globals;
    cpy_r_r1 = CPyStatics[70]; /* 'Network' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_db.py", "prepare_db", 10, CPyStatic__db___globals);
        goto CPyL18;
    }
    cpy_r_r3 = CPyStatics[78]; /* 'Mainnet' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_db.py", "prepare_db", 10, CPyStatic__db___globals);
        goto CPyL18;
    }
    cpy_r_r5 = CPyStatics[71]; /* 'y' */
    cpy_r_r6 = CPyStatic__db___globals;
    cpy_r_r7 = CPyStatics[70]; /* 'Network' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_db.py", "prepare_db", 10, CPyStatic__db___globals);
        goto CPyL19;
    }
    cpy_r_r9 = CPyStatics[80]; /* 'Fantom' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_db.py", "prepare_db", 10, CPyStatic__db___globals);
        goto CPyL19;
    }
    cpy_r_r11 = CPyStatics[352]; /* 'f' */
    cpy_r_r12 = CPyDict_Build(2, cpy_r_r4, cpy_r_r5, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_db.py", "prepare_db", 10, CPyStatic__db___globals);
        goto CPyL18;
    }
    cpy_r_r13 = CPyStatic__db___globals;
    cpy_r_r14 = CPyStatics[72]; /* 'CHAINID' */
    cpy_r_r15 = CPyDict_GetItem(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_db.py", "prepare_db", 10, CPyStatic__db___globals);
        goto CPyL20;
    }
    if (likely(PyLong_Check(cpy_r_r15)))
        cpy_r_r16 = CPyTagged_FromObject(cpy_r_r15);
    else {
        CPy_TypeError("int", cpy_r_r15); cpy_r_r16 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == CPY_INT_TAG)) {
        CPy_AddTraceback("yearn_treasury/_db.py", "prepare_db", 10, CPyStatic__db___globals);
        goto CPyL20;
    }
    cpy_r_r17 = CPyTagged_StealAsObject(cpy_r_r16);
    cpy_r_r18 = CPyDict_GetItem(cpy_r_r12, cpy_r_r17);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_db.py", "prepare_db", 10, CPyStatic__db___globals);
        goto CPyL18;
    }
    if (likely(PyUnicode_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/_db.py", "prepare_db", 10, CPyStatic__db___globals, "str", cpy_r_r18);
        goto CPyL18;
    }
    cpy_r_r20 = CPyStatic__db___globals;
    cpy_r_r21 = CPyStatics[353]; /* 'constants' */
    cpy_r_r22 = CPyDict_GetItem(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_db.py", "prepare_db", 13, CPyStatic__db___globals);
        goto CPyL21;
    }
    cpy_r_r23 = CPyStatics[354]; /* 'TREASURY_MULTISIG' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_db.py", "prepare_db", 13, CPyStatic__db___globals);
        goto CPyL21;
    }
    cpy_r_r25 = CPyStatics[241]; /* 'Yearn Treasury' */
    cpy_r_r26 = CPyStatic__db___globals;
    cpy_r_r27 = CPyStatics[353]; /* 'constants' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_db.py", "prepare_db", 14, CPyStatic__db___globals);
        goto CPyL22;
    }
    cpy_r_r29 = CPyStatics[355]; /* 'YCHAD_MULTISIG' */
    cpy_r_r30 = CPyObject_GetAttr(cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_db.py", "prepare_db", 14, CPyStatic__db___globals);
        goto CPyL22;
    }
    cpy_r_r31 = CPyStatics[356]; /* 'Yearn ' */
    cpy_r_r32 = CPyStatics[357]; /* 'Chad Multisig' */
    cpy_r_r33 = CPyStr_Build(3, cpy_r_r31, cpy_r_r19, cpy_r_r32);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_db.py", "prepare_db", 14, CPyStatic__db___globals);
        goto CPyL23;
    }
    cpy_r_r34 = CPyStatics[358]; /* '0x5FcdC32DfC361a32e9d5AB9A384b890C62D0b8AC' */
    cpy_r_r35 = CPyStatics[359]; /* 'Bridge Assistooor EOA' */
    cpy_r_r36 = CPyDict_Build(3, cpy_r_r24, cpy_r_r25, cpy_r_r30, cpy_r_r33, cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_db.py", "prepare_db", 12, CPyStatic__db___globals);
        goto CPyL18;
    }
    cpy_r_r37 = CPyStatic__db___globals;
    cpy_r_r38 = CPyStatics[360]; /* 'Address' */
    cpy_r_r39 = CPyDict_GetItem(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_db.py", "prepare_db", 20, CPyStatic__db___globals);
        goto CPyL24;
    }
    cpy_r_r40 = CPyStatics[361]; /* 'set_nicknames' */
    PyObject *cpy_r_r41[2] = {cpy_r_r39, cpy_r_r36};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = PyObject_VectorcallMethod(cpy_r_r40, cpy_r_r42, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_db.py", "prepare_db", 20, CPyStatic__db___globals);
        goto CPyL25;
    } else
        goto CPyL26;
CPyL17: ;
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r36);
    return 1;
CPyL18: ;
    cpy_r_r44 = 2;
    return cpy_r_r44;
CPyL19: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL18;
CPyL20: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL18;
CPyL21: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r24);
    goto CPyL18;
CPyL23: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r30);
    goto CPyL18;
CPyL24: ;
    CPy_DecRef(cpy_r_r36);
    goto CPyL18;
CPyL25: ;
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r39);
    goto CPyL18;
CPyL26: ;
    CPy_DECREF(cpy_r_r43);
    goto CPyL17;
}

PyObject *CPyPy__db___prepare_db(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":prepare_db", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    char retval = CPyDef__db___prepare_db();
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("yearn_treasury/_db.py", "prepare_db", 9, CPyStatic__db___globals);
    return NULL;
}

char CPyDef__db_____top_level__(void) {
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
    char cpy_r_r21;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_db.py", "<module>", -1, CPyStatic__db___globals);
        goto CPyL8;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[461]; /* ('Address',) */
    cpy_r_r6 = CPyStatics[362]; /* 'dao_treasury.db' */
    cpy_r_r7 = CPyStatic__db___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_db.py", "<module>", 2, CPyStatic__db___globals);
        goto CPyL8;
    }
    CPyModule_dao_treasury___db = cpy_r_r8;
    CPy_INCREF(CPyModule_dao_treasury___db);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[434]; /* ('Network',) */
    cpy_r_r10 = CPyStatics[71]; /* 'y' */
    cpy_r_r11 = CPyStatic__db___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_db.py", "<module>", 3, CPyStatic__db___globals);
        goto CPyL8;
    }
    CPyModule_y = cpy_r_r12;
    CPy_INCREF(CPyModule_y);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[435]; /* ('CHAINID',) */
    cpy_r_r14 = CPyStatics[73]; /* 'y.constants' */
    cpy_r_r15 = CPyStatic__db___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_db.py", "<module>", 4, CPyStatic__db___globals);
        goto CPyL8;
    }
    CPyModule_y___constants = cpy_r_r16;
    CPy_INCREF(CPyModule_y___constants);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[462]; /* ('constants',) */
    cpy_r_r18 = CPyStatics[363]; /* 'yearn_treasury' */
    cpy_r_r19 = CPyStatic__db___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_db.py", "<module>", 6, CPyStatic__db___globals);
        goto CPyL8;
    }
    CPyModule_yearn_treasury = cpy_r_r20;
    CPy_INCREF(CPyModule_yearn_treasury);
    CPy_DECREF(cpy_r_r20);
    return 1;
CPyL8: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
}
static PyMethodDef _ensmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef _ensmodule = {
    PyModuleDef_HEAD_INIT,
    "yearn_treasury._ens",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    _ensmodule_methods
};

PyObject *CPyInit_yearn_treasury____ens(void)
{
    PyObject* modname = NULL;
    if (CPyModule_yearn_treasury____ens_internal) {
        Py_INCREF(CPyModule_yearn_treasury____ens_internal);
        return CPyModule_yearn_treasury____ens_internal;
    }
    CPyModule_yearn_treasury____ens_internal = PyModule_Create(&_ensmodule);
    if (unlikely(CPyModule_yearn_treasury____ens_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_yearn_treasury____ens_internal, "__name__");
    CPyStatic__ens___globals = PyModule_GetDict(CPyModule_yearn_treasury____ens_internal);
    if (unlikely(CPyStatic__ens___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef__ens_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_yearn_treasury____ens_internal;
    fail:
    Py_CLEAR(CPyModule_yearn_treasury____ens_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic__ens___resolver);
    CPyStatic__ens___resolver = NULL;
    CPy_XDECREF_NO_IMM(CPyStatic__ens___topics);
    CPyStatic__ens___topics = NULL;
    return NULL;
}

char CPyDef__ens_____top_level__(void) {
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
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject **cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject **cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject **cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    CPyPtr cpy_r_r81;
    CPyPtr cpy_r_r82;
    CPyPtr cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", -1, CPyStatic__ens___globals);
        goto CPyL33;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[433]; /* ('Final',) */
    cpy_r_r6 = CPyStatics[24]; /* 'typing' */
    cpy_r_r7 = CPyStatic__ens___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 1, CPyStatic__ens___globals);
        goto CPyL33;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[463]; /* ('web3',) */
    cpy_r_r10 = CPyStatics[365]; /* 'brownie' */
    cpy_r_r11 = CPyStatic__ens___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 3, CPyStatic__ens___globals);
        goto CPyL33;
    }
    CPyModule_brownie = cpy_r_r12;
    CPy_INCREF(CPyModule_brownie);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[464]; /* ('filter_by_name',) */
    cpy_r_r14 = CPyStatics[367]; /* 'web3._utils.abi' */
    cpy_r_r15 = CPyStatic__ens___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 4, CPyStatic__ens___globals);
        goto CPyL33;
    }
    CPyModule_web3____utils___abi = cpy_r_r16;
    CPy_INCREF(CPyModule_web3____utils___abi);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[465]; /* ('construct_event_topic_set',) */
    cpy_r_r18 = CPyStatics[369]; /* 'web3._utils.events' */
    cpy_r_r19 = CPyStatic__ens___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 5, CPyStatic__ens___globals);
        goto CPyL33;
    }
    CPyModule_web3____utils___events = cpy_r_r20;
    CPy_INCREF(CPyModule_web3____utils___events);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[466]; /* ('Contract',) */
    cpy_r_r22 = CPyStatics[71]; /* 'y' */
    cpy_r_r23 = CPyStatic__ens___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 6, CPyStatic__ens___globals);
        goto CPyL33;
    }
    CPyModule_y = cpy_r_r24;
    CPy_INCREF(CPyModule_y);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[370]; /* '0x4976fb03C32e5B8cfe2b6cCB31c09Ba78EBaBa41' */
    cpy_r_r26 = CPyStatic__ens___globals;
    cpy_r_r27 = CPyStatics[264]; /* 'Contract' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 9, CPyStatic__ens___globals);
        goto CPyL33;
    }
    PyObject *cpy_r_r29[1] = {cpy_r_r25};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = PyObject_Vectorcall(cpy_r_r28, cpy_r_r30, 1, 0);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 9, CPyStatic__ens___globals);
        goto CPyL33;
    }
    CPyStatic__ens___resolver = cpy_r_r31;
    CPy_INCREF(CPyStatic__ens___resolver);
    cpy_r_r32 = CPyStatic__ens___globals;
    cpy_r_r33 = CPyStatics[371]; /* 'resolver' */
    cpy_r_r34 = CPyDict_SetItem(cpy_r_r32, cpy_r_r33, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 9, CPyStatic__ens___globals);
        goto CPyL33;
    }
    cpy_r_r36 = CPyStatics[372]; /* 'AddressChanged' */
    cpy_r_r37 = CPyStatic__ens___resolver;
    if (likely(cpy_r_r37 != NULL)) goto CPyL14;
    PyErr_SetString(PyExc_NameError, "value for final name \"resolver\" was not set");
    cpy_r_r38 = 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 12, CPyStatic__ens___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r39 = CPyStatics[373]; /* 'abi' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 12, CPyStatic__ens___globals);
        goto CPyL33;
    }
    cpy_r_r41 = CPyStatic__ens___globals;
    cpy_r_r42 = CPyStatics[366]; /* 'filter_by_name' */
    cpy_r_r43 = CPyDict_GetItem(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 12, CPyStatic__ens___globals);
        goto CPyL34;
    }
    PyObject *cpy_r_r44[2] = {cpy_r_r36, cpy_r_r40};
    cpy_r_r45 = (PyObject **)&cpy_r_r44;
    cpy_r_r46 = PyObject_Vectorcall(cpy_r_r43, cpy_r_r45, 2, 0);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 12, CPyStatic__ens___globals);
        goto CPyL34;
    }
    CPy_DECREF(cpy_r_r40);
    if (likely(PyList_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/_ens.py", "<module>", 12, CPyStatic__ens___globals, "list", cpy_r_r46);
        goto CPyL35;
    }
    cpy_r_r48 = CPyList_GetItemShort(cpy_r_r47, 0);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 12, CPyStatic__ens___globals);
        goto CPyL35;
    }
    if (likely(PyDict_Check(cpy_r_r48)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/_ens.py", "<module>", 12, CPyStatic__ens___globals, "dict", cpy_r_r48);
        goto CPyL35;
    }
    CPy_DECREF(cpy_r_r46);
    cpy_r_r50 = CPyStatic__ens___globals;
    cpy_r_r51 = CPyStatics[364]; /* 'web3' */
    cpy_r_r52 = CPyDict_GetItem(cpy_r_r50, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 13, CPyStatic__ens___globals);
        goto CPyL36;
    }
    cpy_r_r53 = CPyStatics[374]; /* 'codec' */
    cpy_r_r54 = CPyObject_GetAttr(cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 13, CPyStatic__ens___globals);
        goto CPyL36;
    }
    cpy_r_r55 = CPyStatics[375]; /* 'node' */
    cpy_r_r56 = CPyStatic__ens___globals;
    cpy_r_r57 = CPyStatics[364]; /* 'web3' */
    cpy_r_r58 = CPyDict_GetItem(cpy_r_r56, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 14, CPyStatic__ens___globals);
        goto CPyL37;
    }
    cpy_r_r59 = CPyStatics[376]; /* 'ens' */
    cpy_r_r60 = CPyObject_GetAttr(cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 14, CPyStatic__ens___globals);
        goto CPyL37;
    }
    cpy_r_r61 = CPyStatics[377]; /* 'v2.registry.ychad.eth' */
    cpy_r_r62 = CPyStatics[378]; /* 'namehash' */
    PyObject *cpy_r_r63[2] = {cpy_r_r60, cpy_r_r61};
    cpy_r_r64 = (PyObject **)&cpy_r_r63;
    cpy_r_r65 = PyObject_VectorcallMethod(cpy_r_r62, cpy_r_r64, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 14, CPyStatic__ens___globals);
        goto CPyL38;
    }
    CPy_DECREF(cpy_r_r60);
    cpy_r_r66 = CPyDict_Build(1, cpy_r_r55, cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 14, CPyStatic__ens___globals);
        goto CPyL37;
    }
    cpy_r_r67 = CPyStatic__ens___globals;
    cpy_r_r68 = CPyStatics[368]; /* 'construct_event_topic_set' */
    cpy_r_r69 = CPyDict_GetItem(cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 11, CPyStatic__ens___globals);
        goto CPyL39;
    }
    PyObject *cpy_r_r70[3] = {cpy_r_r49, cpy_r_r54, cpy_r_r66};
    cpy_r_r71 = (PyObject **)&cpy_r_r70;
    cpy_r_r72 = PyObject_Vectorcall(cpy_r_r69, cpy_r_r71, 3, 0);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 11, CPyStatic__ens___globals);
        goto CPyL39;
    }
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r66);
    if (likely(PyList_Check(cpy_r_r72)))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/_ens.py", "<module>", 11, CPyStatic__ens___globals, "list", cpy_r_r72);
        goto CPyL33;
    }
    CPyStatic__ens___topics = cpy_r_r73;
    CPy_INCREF_NO_IMM(CPyStatic__ens___topics);
    cpy_r_r74 = CPyStatic__ens___globals;
    cpy_r_r75 = CPyStatics[379]; /* 'topics' */
    cpy_r_r76 = CPyDict_SetItem(cpy_r_r74, cpy_r_r75, cpy_r_r73);
    CPy_DECREF_NO_IMM(cpy_r_r73);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 11, CPyStatic__ens___globals);
        goto CPyL33;
    }
    cpy_r_r78 = CPyStatics[371]; /* 'resolver' */
    cpy_r_r79 = CPyStatics[379]; /* 'topics' */
    cpy_r_r80 = PyList_New(2);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 17, CPyStatic__ens___globals);
        goto CPyL33;
    }
    cpy_r_r81 = (CPyPtr)&((PyListObject *)cpy_r_r80)->ob_item;
    cpy_r_r82 = *(CPyPtr *)cpy_r_r81;
    CPy_INCREF(cpy_r_r78);
    *(PyObject * *)cpy_r_r82 = cpy_r_r78;
    CPy_INCREF(cpy_r_r79);
    cpy_r_r83 = cpy_r_r82 + 8;
    *(PyObject * *)cpy_r_r83 = cpy_r_r79;
    cpy_r_r84 = CPyStatic__ens___globals;
    cpy_r_r85 = CPyStatics[10]; /* '__all__' */
    cpy_r_r86 = CPyDict_SetItem(cpy_r_r84, cpy_r_r85, cpy_r_r80);
    CPy_DECREF_NO_IMM(cpy_r_r80);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("yearn_treasury/_ens.py", "<module>", 17, CPyStatic__ens___globals);
        goto CPyL33;
    }
    return 1;
CPyL33: ;
    cpy_r_r88 = 2;
    return cpy_r_r88;
CPyL34: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL33;
CPyL35: ;
    CPy_DecRef(cpy_r_r46);
    goto CPyL33;
CPyL36: ;
    CPy_DecRef(cpy_r_r49);
    goto CPyL33;
CPyL37: ;
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r54);
    goto CPyL33;
CPyL38: ;
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r60);
    goto CPyL33;
CPyL39: ;
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r66);
    goto CPyL33;
}
static PyMethodDef vaultsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef vaultsmodule = {
    PyModuleDef_HEAD_INIT,
    "yearn_treasury.vaults",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    vaultsmodule_methods
};

PyObject *CPyInit_yearn_treasury___vaults(void)
{
    PyObject* modname = NULL;
    if (CPyModule_yearn_treasury___vaults_internal) {
        Py_INCREF(CPyModule_yearn_treasury___vaults_internal);
        return CPyModule_yearn_treasury___vaults_internal;
    }
    CPyModule_yearn_treasury___vaults_internal = PyModule_Create(&vaultsmodule);
    if (unlikely(CPyModule_yearn_treasury___vaults_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_yearn_treasury___vaults_internal, "__name__");
    CPyStatic_vaults___globals = PyModule_GetDict(CPyModule_yearn_treasury___vaults_internal);
    if (unlikely(CPyStatic_vaults___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_vaults_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_yearn_treasury___vaults_internal;
    fail:
    Py_CLEAR(CPyModule_yearn_treasury___vaults_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_vaults___v1);
    CPyStatic_vaults___v1 = NULL;
    CPy_XDECREF(CPyStatic_vaults___v2);
    CPyStatic_vaults___v2 = NULL;
    return NULL;
}

char CPyDef_vaults_____top_level__(void) {
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
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject **cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject **cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject **cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject **cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject **cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    int32_t cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject **cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    int32_t cpy_r_r112;
    char cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    CPyTagged cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    int32_t cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject **cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    CPyTagged cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject **cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject **cpy_r_r154;
    PyObject *cpy_r_r155;
    int32_t cpy_r_r156;
    char cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    int32_t cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject **cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject **cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    CPyTagged cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject **cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    int32_t cpy_r_r195;
    char cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    int32_t cpy_r_r204;
    char cpy_r_r205;
    PyObject *cpy_r_r206;
    char cpy_r_r207;
    char cpy_r_r208;
    char cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    int32_t cpy_r_r218;
    char cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject **cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    char cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    int32_t cpy_r_r236;
    char cpy_r_r237;
    char cpy_r_r238;
    char cpy_r_r239;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", -1, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[467]; /* ('Dict', 'Final', 'List') */
    cpy_r_r6 = CPyStatics[24]; /* 'typing' */
    cpy_r_r7 = CPyStatic_vaults___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 1, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[468]; /* ('chain',) */
    cpy_r_r10 = CPyStatics[365]; /* 'brownie' */
    cpy_r_r11 = CPyStatic_vaults___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 3, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    CPyModule_brownie = cpy_r_r12;
    CPy_INCREF(CPyModule_brownie);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[452]; /* ('ChecksumAddress',) */
    cpy_r_r14 = CPyStatics[101]; /* 'eth_typing' */
    cpy_r_r15 = CPyStatic_vaults___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 4, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    CPyModule_eth_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[469]; /* ('Contract', 'Events', 'Network') */
    cpy_r_r18 = CPyStatics[71]; /* 'y' */
    cpy_r_r19 = CPyStatic_vaults___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 5, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    CPyModule_y = cpy_r_r20;
    CPy_INCREF(CPyModule_y);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[470]; /* ('resolver', 'topics') */
    cpy_r_r22 = CPyStatics[383]; /* 'yearn_treasury._ens' */
    cpy_r_r23 = CPyStatic_vaults___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 7, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    CPyModule_yearn_treasury____ens = cpy_r_r24;
    CPy_INCREF(CPyModule_yearn_treasury____ens);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = PyDict_New();
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 10, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    CPyStatic_vaults___v1 = cpy_r_r25;
    CPy_INCREF(CPyStatic_vaults___v1);
    cpy_r_r26 = CPyStatic_vaults___globals;
    cpy_r_r27 = CPyStatics[384]; /* 'v1' */
    cpy_r_r28 = CPyDict_SetItem(cpy_r_r26, cpy_r_r27, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 10, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    cpy_r_r30 = PyDict_New();
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 13, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    CPyStatic_vaults___v2 = cpy_r_r30;
    CPy_INCREF(CPyStatic_vaults___v2);
    cpy_r_r31 = CPyStatic_vaults___globals;
    cpy_r_r32 = CPyStatics[385]; /* 'v2' */
    cpy_r_r33 = CPyDict_SetItem(cpy_r_r31, cpy_r_r32, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 13, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    cpy_r_r35 = CPyStatic_vaults___globals;
    cpy_r_r36 = CPyStatics[381]; /* 'chain' */
    cpy_r_r37 = CPyDict_GetItem(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 17, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    cpy_r_r38 = CPyStatics[28]; /* 'id' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 17, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    if (likely(PyLong_Check(cpy_r_r39)))
        cpy_r_r40 = CPyTagged_FromObject(cpy_r_r39);
    else {
        CPy_TypeError("int", cpy_r_r39); cpy_r_r40 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == CPY_INT_TAG)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 17, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    cpy_r_r41 = CPyStatic_vaults___globals;
    cpy_r_r42 = CPyStatics[70]; /* 'Network' */
    cpy_r_r43 = CPyDict_GetItem(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 17, CPyStatic_vaults___globals);
        goto CPyL105;
    }
    cpy_r_r44 = CPyStatics[78]; /* 'Mainnet' */
    cpy_r_r45 = CPyObject_GetAttr(cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 17, CPyStatic_vaults___globals);
        goto CPyL105;
    }
    cpy_r_r46 = CPyTagged_StealAsObject(cpy_r_r40);
    cpy_r_r47 = PyObject_RichCompare(cpy_r_r46, cpy_r_r45, 2);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 17, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    if (unlikely(!PyBool_Check(cpy_r_r47))) {
        CPy_TypeError("bool", cpy_r_r47); cpy_r_r48 = 2;
    } else
        cpy_r_r48 = cpy_r_r47 == Py_True;
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 17, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    if (!cpy_r_r48) goto CPyL103;
    cpy_r_r49 = CPyStatics[386]; /* '0x9be19Ee7Bc4099D62737a7255f5c227fBcd6dB93' */
    cpy_r_r50 = CPyStatic_vaults___globals;
    cpy_r_r51 = CPyStatics[264]; /* 'Contract' */
    cpy_r_r52 = CPyDict_GetItem(cpy_r_r50, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 18, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    PyObject *cpy_r_r53[1] = {cpy_r_r49};
    cpy_r_r54 = (PyObject **)&cpy_r_r53;
    cpy_r_r55 = PyObject_Vectorcall(cpy_r_r52, cpy_r_r54, 1, 0);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 18, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    cpy_r_r56 = CPyStatic_vaults___globals;
    cpy_r_r57 = CPyStatics[387]; /* '_v1_addresses_provider' */
    cpy_r_r58 = CPyDict_SetItem(cpy_r_r56, cpy_r_r57, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 18, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    cpy_r_r60 = CPyStatic_vaults___globals;
    cpy_r_r61 = CPyStatics[387]; /* '_v1_addresses_provider' */
    cpy_r_r62 = CPyDict_GetItem(cpy_r_r60, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 20, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    cpy_r_r63 = CPyStatics[388]; /* 'ADDRESSES_GENERATOR_V1_VAULTS' */
    cpy_r_r64 = CPyStatics[389]; /* 'addressById' */
    PyObject *cpy_r_r65[2] = {cpy_r_r62, cpy_r_r63};
    cpy_r_r66 = (PyObject **)&cpy_r_r65;
    cpy_r_r67 = PyObject_VectorcallMethod(cpy_r_r64, cpy_r_r66, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 20, CPyStatic_vaults___globals);
        goto CPyL106;
    }
    CPy_DECREF(cpy_r_r62);
    cpy_r_r68 = CPyStatic_vaults___globals;
    cpy_r_r69 = CPyStatics[264]; /* 'Contract' */
    cpy_r_r70 = CPyDict_GetItem(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 19, CPyStatic_vaults___globals);
        goto CPyL107;
    }
    PyObject *cpy_r_r71[1] = {cpy_r_r67};
    cpy_r_r72 = (PyObject **)&cpy_r_r71;
    cpy_r_r73 = PyObject_Vectorcall(cpy_r_r70, cpy_r_r72, 1, 0);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 19, CPyStatic_vaults___globals);
        goto CPyL107;
    }
    CPy_DECREF(cpy_r_r67);
    cpy_r_r74 = CPyStatic_vaults___globals;
    cpy_r_r75 = CPyStatics[390]; /* '_addresses_generator_v1_vaults' */
    cpy_r_r76 = CPyDict_SetItem(cpy_r_r74, cpy_r_r75, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 19, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    cpy_r_r78 = CPyStatic_vaults___globals;
    cpy_r_r79 = CPyStatics[264]; /* 'Contract' */
    cpy_r_r80 = CPyDict_GetItem(cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 23, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    cpy_r_r81 = CPyStatic_vaults___globals;
    cpy_r_r82 = CPyStatics[390]; /* '_addresses_generator_v1_vaults' */
    cpy_r_r83 = CPyDict_GetItem(cpy_r_r81, cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 23, CPyStatic_vaults___globals);
        goto CPyL108;
    }
    cpy_r_r84 = CPyStatics[391]; /* 'assetsAddresses' */
    PyObject *cpy_r_r85[1] = {cpy_r_r83};
    cpy_r_r86 = (PyObject **)&cpy_r_r85;
    cpy_r_r87 = PyObject_VectorcallMethod(cpy_r_r84, cpy_r_r86, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 23, CPyStatic_vaults___globals);
        goto CPyL109;
    }
    CPy_DECREF(cpy_r_r83);
    cpy_r_r88 = CPyModule_builtins;
    cpy_r_r89 = CPyStatics[392]; /* 'map' */
    cpy_r_r90 = CPyObject_GetAttr(cpy_r_r88, cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 23, CPyStatic_vaults___globals);
        goto CPyL110;
    }
    PyObject *cpy_r_r91[2] = {cpy_r_r80, cpy_r_r87};
    cpy_r_r92 = (PyObject **)&cpy_r_r91;
    cpy_r_r93 = PyObject_Vectorcall(cpy_r_r90, cpy_r_r92, 2, 0);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 23, CPyStatic_vaults___globals);
        goto CPyL110;
    }
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_r87);
    cpy_r_r94 = PyObject_GetIter(cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 23, CPyStatic_vaults___globals);
        goto CPyL104;
    }
CPyL34: ;
    cpy_r_r95 = PyIter_Next(cpy_r_r94);
    if (cpy_r_r95 == NULL) goto CPyL111;
    cpy_r_r96 = CPyStatic_vaults___globals;
    cpy_r_r97 = CPyStatics[267]; /* 'vault' */
    cpy_r_r98 = CPyDict_SetItem(cpy_r_r96, cpy_r_r97, cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    cpy_r_r99 = cpy_r_r98 >= 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 23, CPyStatic_vaults___globals);
        goto CPyL112;
    }
    cpy_r_r100 = CPyStatic_vaults___globals;
    cpy_r_r101 = CPyStatics[267]; /* 'vault' */
    cpy_r_r102 = CPyDict_GetItem(cpy_r_r100, cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 24, CPyStatic_vaults___globals);
        goto CPyL112;
    }
    cpy_r_r103 = CPyStatics[232]; /* 'token' */
    PyObject *cpy_r_r104[1] = {cpy_r_r102};
    cpy_r_r105 = (PyObject **)&cpy_r_r104;
    cpy_r_r106 = PyObject_VectorcallMethod(cpy_r_r103, cpy_r_r105, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 24, CPyStatic_vaults___globals);
        goto CPyL113;
    }
    CPy_DECREF(cpy_r_r102);
    cpy_r_r107 = CPyStatic_vaults___v1;
    if (unlikely(cpy_r_r107 == NULL)) {
        goto CPyL114;
    } else
        goto CPyL41;
CPyL39: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"v1\" was not set");
    cpy_r_r108 = 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 24, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    CPy_Unreachable();
CPyL41: ;
    cpy_r_r109 = CPyStatic_vaults___globals;
    cpy_r_r110 = CPyStatics[267]; /* 'vault' */
    cpy_r_r111 = CPyDict_GetItem(cpy_r_r109, cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 24, CPyStatic_vaults___globals);
        goto CPyL115;
    }
    cpy_r_r112 = CPyDict_SetItem(cpy_r_r107, cpy_r_r111, cpy_r_r106);
    CPy_DECREF(cpy_r_r111);
    CPy_DECREF(cpy_r_r106);
    cpy_r_r113 = cpy_r_r112 >= 0;
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 24, CPyStatic_vaults___globals);
        goto CPyL112;
    } else
        goto CPyL34;
CPyL43: ;
    cpy_r_r114 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 23, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    cpy_r_r115 = CPyStatic_vaults___globals;
    cpy_r_r116 = CPyStatics[381]; /* 'chain' */
    cpy_r_r117 = CPyDict_GetItem(cpy_r_r115, cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 26, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    cpy_r_r118 = CPyStatics[393]; /* 'height' */
    cpy_r_r119 = CPyObject_GetAttr(cpy_r_r117, cpy_r_r118);
    CPy_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 26, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    if (likely(PyLong_Check(cpy_r_r119)))
        cpy_r_r120 = CPyTagged_FromObject(cpy_r_r119);
    else {
        CPy_TypeError("int", cpy_r_r119); cpy_r_r120 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r120 == CPY_INT_TAG)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 26, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    cpy_r_r121 = CPyStatic_vaults___globals;
    cpy_r_r122 = CPyStatics[394]; /* 'now' */
    cpy_r_r123 = CPyTagged_StealAsObject(cpy_r_r120);
    cpy_r_r124 = CPyDict_SetItem(cpy_r_r121, cpy_r_r122, cpy_r_r123);
    CPy_DECREF(cpy_r_r123);
    cpy_r_r125 = cpy_r_r124 >= 0;
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 26, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    cpy_r_r126 = PyList_New(0);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 29, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    cpy_r_r127 = CPyStatic__ens___resolver;
    if (unlikely(cpy_r_r127 == NULL)) {
        goto CPyL116;
    } else
        goto CPyL52;
CPyL50: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"resolver\" was not set");
    cpy_r_r128 = 0;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 31, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    CPy_Unreachable();
CPyL52: ;
    cpy_r_r129 = CPyStatic__ens___topics;
    if (unlikely(cpy_r_r129 == NULL)) {
        goto CPyL117;
    } else
        goto CPyL55;
CPyL53: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"topics\" was not set");
    cpy_r_r130 = 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 31, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    CPy_Unreachable();
CPyL55: ;
    cpy_r_r131 = CPyStatic_vaults___globals;
    cpy_r_r132 = CPyStatics[382]; /* 'Events' */
    cpy_r_r133 = CPyDict_GetItem(cpy_r_r131, cpy_r_r132);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 31, CPyStatic_vaults___globals);
        goto CPyL118;
    }
    PyObject *cpy_r_r134[2] = {cpy_r_r127, cpy_r_r129};
    cpy_r_r135 = (PyObject **)&cpy_r_r134;
    cpy_r_r136 = CPyStatics[471]; /* ('addresses', 'topics') */
    cpy_r_r137 = PyObject_Vectorcall(cpy_r_r133, cpy_r_r135, 0, cpy_r_r136);
    CPy_DECREF(cpy_r_r133);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 31, CPyStatic_vaults___globals);
        goto CPyL118;
    }
    cpy_r_r138 = CPyStatic_vaults___globals;
    cpy_r_r139 = CPyStatics[394]; /* 'now' */
    cpy_r_r140 = CPyDict_GetItem(cpy_r_r138, cpy_r_r139);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 31, CPyStatic_vaults___globals);
        goto CPyL119;
    }
    if (likely(PyLong_Check(cpy_r_r140)))
        cpy_r_r141 = CPyTagged_FromObject(cpy_r_r140);
    else {
        CPy_TypeError("int", cpy_r_r140); cpy_r_r141 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r140);
    if (unlikely(cpy_r_r141 == CPY_INT_TAG)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 31, CPyStatic_vaults___globals);
        goto CPyL119;
    }
    cpy_r_r142 = CPyStatics[396]; /* 'events' */
    cpy_r_r143 = CPyTagged_StealAsObject(cpy_r_r141);
    PyObject *cpy_r_r144[2] = {cpy_r_r137, cpy_r_r143};
    cpy_r_r145 = (PyObject **)&cpy_r_r144;
    cpy_r_r146 = PyObject_VectorcallMethod(cpy_r_r142, cpy_r_r145, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 31, CPyStatic_vaults___globals);
        goto CPyL120;
    }
    CPy_DECREF(cpy_r_r137);
    CPy_DECREF(cpy_r_r143);
    cpy_r_r147 = PyObject_GetIter(cpy_r_r146);
    CPy_DECREF(cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 29, CPyStatic_vaults___globals);
        goto CPyL118;
    }
CPyL61: ;
    cpy_r_r148 = PyIter_Next(cpy_r_r147);
    if (cpy_r_r148 == NULL) goto CPyL121;
    cpy_r_r149 = CPyStatics[397]; /* 'newAddress' */
    cpy_r_r150 = PyObject_GetItem(cpy_r_r148, cpy_r_r149);
    CPy_DECREF(cpy_r_r148);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 30, CPyStatic_vaults___globals);
        goto CPyL122;
    }
    if (likely(PyList_Check(cpy_r_r150)))
        cpy_r_r151 = cpy_r_r150;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/vaults.py", "<module>", 30, CPyStatic_vaults___globals, "list", cpy_r_r150);
        goto CPyL122;
    }
    cpy_r_r152 = CPyStatics[398]; /* 'hex' */
    PyObject *cpy_r_r153[1] = {cpy_r_r151};
    cpy_r_r154 = (PyObject **)&cpy_r_r153;
    cpy_r_r155 = PyObject_VectorcallMethod(cpy_r_r152, cpy_r_r154, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 30, CPyStatic_vaults___globals);
        goto CPyL123;
    }
    CPy_DECREF_NO_IMM(cpy_r_r151);
    cpy_r_r156 = PyList_Append(cpy_r_r126, cpy_r_r155);
    CPy_DECREF(cpy_r_r155);
    cpy_r_r157 = cpy_r_r156 >= 0;
    if (unlikely(!cpy_r_r157)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 29, CPyStatic_vaults___globals);
        goto CPyL122;
    } else
        goto CPyL61;
CPyL66: ;
    cpy_r_r158 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r158)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 29, CPyStatic_vaults___globals);
        goto CPyL118;
    }
    cpy_r_r159 = CPyStatic_vaults___globals;
    cpy_r_r160 = CPyStatics[399]; /* 'v2_registries' */
    cpy_r_r161 = CPyDict_SetItem(cpy_r_r159, cpy_r_r160, cpy_r_r126);
    CPy_DECREF_NO_IMM(cpy_r_r126);
    cpy_r_r162 = cpy_r_r161 >= 0;
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 29, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    cpy_r_r163 = (PyObject *)&PyUnicode_Type;
    cpy_r_r164 = CPyStatic_vaults___globals;
    cpy_r_r165 = CPyStatics[399]; /* 'v2_registries' */
    cpy_r_r166 = CPyDict_GetItem(cpy_r_r164, cpy_r_r165);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 34, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    if (likely(PyList_Check(cpy_r_r166)))
        cpy_r_r167 = cpy_r_r166;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/vaults.py", "<module>", 34, CPyStatic_vaults___globals, "list", cpy_r_r166);
        goto CPyL104;
    }
    cpy_r_r168 = CPyModule_builtins;
    cpy_r_r169 = CPyStatics[392]; /* 'map' */
    cpy_r_r170 = CPyObject_GetAttr(cpy_r_r168, cpy_r_r169);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 34, CPyStatic_vaults___globals);
        goto CPyL124;
    }
    PyObject *cpy_r_r171[2] = {cpy_r_r163, cpy_r_r167};
    cpy_r_r172 = (PyObject **)&cpy_r_r171;
    cpy_r_r173 = PyObject_Vectorcall(cpy_r_r170, cpy_r_r172, 2, 0);
    CPy_DECREF(cpy_r_r170);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 34, CPyStatic_vaults___globals);
        goto CPyL124;
    }
    CPy_DECREF_NO_IMM(cpy_r_r167);
    cpy_r_r174 = PySequence_List(cpy_r_r173);
    CPy_DECREF(cpy_r_r173);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 34, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    cpy_r_r175 = CPyStatic_vaults___globals;
    cpy_r_r176 = CPyStatics[382]; /* 'Events' */
    cpy_r_r177 = CPyDict_GetItem(cpy_r_r175, cpy_r_r176);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 34, CPyStatic_vaults___globals);
        goto CPyL125;
    }
    PyObject *cpy_r_r178[1] = {cpy_r_r174};
    cpy_r_r179 = (PyObject **)&cpy_r_r178;
    cpy_r_r180 = CPyStatics[472]; /* ('addresses',) */
    cpy_r_r181 = PyObject_Vectorcall(cpy_r_r177, cpy_r_r179, 0, cpy_r_r180);
    CPy_DECREF(cpy_r_r177);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 34, CPyStatic_vaults___globals);
        goto CPyL125;
    }
    CPy_DECREF_NO_IMM(cpy_r_r174);
    cpy_r_r182 = CPyStatic_vaults___globals;
    cpy_r_r183 = CPyStatics[394]; /* 'now' */
    cpy_r_r184 = CPyDict_GetItem(cpy_r_r182, cpy_r_r183);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 34, CPyStatic_vaults___globals);
        goto CPyL126;
    }
    if (likely(PyLong_Check(cpy_r_r184)))
        cpy_r_r185 = CPyTagged_FromObject(cpy_r_r184);
    else {
        CPy_TypeError("int", cpy_r_r184); cpy_r_r185 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r184);
    if (unlikely(cpy_r_r185 == CPY_INT_TAG)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 34, CPyStatic_vaults___globals);
        goto CPyL126;
    }
    cpy_r_r186 = CPyStatics[396]; /* 'events' */
    cpy_r_r187 = CPyTagged_StealAsObject(cpy_r_r185);
    PyObject *cpy_r_r188[2] = {cpy_r_r181, cpy_r_r187};
    cpy_r_r189 = (PyObject **)&cpy_r_r188;
    cpy_r_r190 = PyObject_VectorcallMethod(cpy_r_r186, cpy_r_r189, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 34, CPyStatic_vaults___globals);
        goto CPyL127;
    }
    CPy_DECREF(cpy_r_r181);
    CPy_DECREF(cpy_r_r187);
    cpy_r_r191 = PyObject_GetIter(cpy_r_r190);
    CPy_DECREF(cpy_r_r190);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 34, CPyStatic_vaults___globals);
        goto CPyL104;
    }
CPyL79: ;
    cpy_r_r192 = PyIter_Next(cpy_r_r191);
    if (cpy_r_r192 == NULL) goto CPyL128;
    cpy_r_r193 = CPyStatic_vaults___globals;
    cpy_r_r194 = CPyStatics[400]; /* 'event' */
    cpy_r_r195 = CPyDict_SetItem(cpy_r_r193, cpy_r_r194, cpy_r_r192);
    CPy_DECREF(cpy_r_r192);
    cpy_r_r196 = cpy_r_r195 >= 0;
    if (unlikely(!cpy_r_r196)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 34, CPyStatic_vaults___globals);
        goto CPyL129;
    }
    cpy_r_r197 = CPyStatic_vaults___globals;
    cpy_r_r198 = CPyStatics[400]; /* 'event' */
    cpy_r_r199 = CPyDict_GetItem(cpy_r_r197, cpy_r_r198);
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 35, CPyStatic_vaults___globals);
        goto CPyL129;
    }
    cpy_r_r200 = CPyStatics[57]; /* 'name' */
    cpy_r_r201 = CPyObject_GetAttr(cpy_r_r199, cpy_r_r200);
    CPy_DECREF(cpy_r_r199);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 35, CPyStatic_vaults___globals);
        goto CPyL129;
    }
    if (likely(PyUnicode_Check(cpy_r_r201)))
        cpy_r_r202 = cpy_r_r201;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/vaults.py", "<module>", 35, CPyStatic_vaults___globals, "str", cpy_r_r201);
        goto CPyL129;
    }
    cpy_r_r203 = CPyStatics[401]; /* 'NewVault' */
    cpy_r_r204 = PyUnicode_Compare(cpy_r_r202, cpy_r_r203);
    CPy_DECREF(cpy_r_r202);
    cpy_r_r205 = cpy_r_r204 == -1;
    if (!cpy_r_r205) goto CPyL87;
    cpy_r_r206 = PyErr_Occurred();
    cpy_r_r207 = cpy_r_r206 != NULL;
    if (!cpy_r_r207) goto CPyL87;
    cpy_r_r208 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r208)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 35, CPyStatic_vaults___globals);
        goto CPyL129;
    }
CPyL87: ;
    cpy_r_r209 = cpy_r_r204 == 0;
    if (!cpy_r_r209) goto CPyL79;
    cpy_r_r210 = CPyStatic_vaults___globals;
    cpy_r_r211 = CPyStatics[400]; /* 'event' */
    cpy_r_r212 = CPyDict_GetItem(cpy_r_r210, cpy_r_r211);
    if (unlikely(cpy_r_r212 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 36, CPyStatic_vaults___globals);
        goto CPyL129;
    }
    cpy_r_r213 = CPyStatics[267]; /* 'vault' */
    cpy_r_r214 = PyObject_GetItem(cpy_r_r212, cpy_r_r213);
    CPy_DECREF(cpy_r_r212);
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 36, CPyStatic_vaults___globals);
        goto CPyL129;
    }
    if (likely(PyList_Check(cpy_r_r214)))
        cpy_r_r215 = cpy_r_r214;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/vaults.py", "<module>", 36, CPyStatic_vaults___globals, "list", cpy_r_r214);
        goto CPyL129;
    }
    cpy_r_r216 = CPyStatic_vaults___globals;
    cpy_r_r217 = CPyStatics[402]; /* 'vault_address' */
    cpy_r_r218 = CPyDict_SetItem(cpy_r_r216, cpy_r_r217, cpy_r_r215);
    CPy_DECREF_NO_IMM(cpy_r_r215);
    cpy_r_r219 = cpy_r_r218 >= 0;
    if (unlikely(!cpy_r_r219)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 36, CPyStatic_vaults___globals);
        goto CPyL129;
    }
    cpy_r_r220 = CPyStatic_vaults___globals;
    cpy_r_r221 = CPyStatics[402]; /* 'vault_address' */
    cpy_r_r222 = CPyDict_GetItem(cpy_r_r220, cpy_r_r221);
    if (unlikely(cpy_r_r222 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 37, CPyStatic_vaults___globals);
        goto CPyL129;
    }
    if (likely(PyList_Check(cpy_r_r222)))
        cpy_r_r223 = cpy_r_r222;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/vaults.py", "<module>", 37, CPyStatic_vaults___globals, "list", cpy_r_r222);
        goto CPyL129;
    }
    cpy_r_r224 = CPyStatic_vaults___globals;
    cpy_r_r225 = CPyStatics[264]; /* 'Contract' */
    cpy_r_r226 = CPyDict_GetItem(cpy_r_r224, cpy_r_r225);
    if (unlikely(cpy_r_r226 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 37, CPyStatic_vaults___globals);
        goto CPyL130;
    }
    PyObject *cpy_r_r227[1] = {cpy_r_r223};
    cpy_r_r228 = (PyObject **)&cpy_r_r227;
    cpy_r_r229 = PyObject_Vectorcall(cpy_r_r226, cpy_r_r228, 1, 0);
    CPy_DECREF(cpy_r_r226);
    if (unlikely(cpy_r_r229 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 37, CPyStatic_vaults___globals);
        goto CPyL130;
    }
    CPy_DECREF_NO_IMM(cpy_r_r223);
    cpy_r_r230 = CPyStatic_vaults___v2;
    if (unlikely(cpy_r_r230 == NULL)) {
        goto CPyL131;
    } else
        goto CPyL99;
CPyL97: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"v2\" was not set");
    cpy_r_r231 = 0;
    if (unlikely(!cpy_r_r231)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 37, CPyStatic_vaults___globals);
        goto CPyL104;
    }
    CPy_Unreachable();
CPyL99: ;
    cpy_r_r232 = CPyStatic_vaults___globals;
    cpy_r_r233 = CPyStatics[402]; /* 'vault_address' */
    cpy_r_r234 = CPyDict_GetItem(cpy_r_r232, cpy_r_r233);
    if (unlikely(cpy_r_r234 == NULL)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 37, CPyStatic_vaults___globals);
        goto CPyL132;
    }
    if (likely(PyList_Check(cpy_r_r234)))
        cpy_r_r235 = cpy_r_r234;
    else {
        CPy_TypeErrorTraceback("yearn_treasury/vaults.py", "<module>", 37, CPyStatic_vaults___globals, "list", cpy_r_r234);
        goto CPyL132;
    }
    cpy_r_r236 = CPyDict_SetItem(cpy_r_r230, cpy_r_r235, cpy_r_r229);
    CPy_DECREF_NO_IMM(cpy_r_r235);
    CPy_DECREF(cpy_r_r229);
    cpy_r_r237 = cpy_r_r236 >= 0;
    if (unlikely(!cpy_r_r237)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 37, CPyStatic_vaults___globals);
        goto CPyL129;
    } else
        goto CPyL79;
CPyL102: ;
    cpy_r_r238 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r238)) {
        CPy_AddTraceback("yearn_treasury/vaults.py", "<module>", 34, CPyStatic_vaults___globals);
        goto CPyL104;
    }
CPyL103: ;
    return 1;
CPyL104: ;
    cpy_r_r239 = 2;
    return cpy_r_r239;
CPyL105: ;
    CPyTagged_DecRef(cpy_r_r40);
    goto CPyL104;
CPyL106: ;
    CPy_DecRef(cpy_r_r62);
    goto CPyL104;
CPyL107: ;
    CPy_DecRef(cpy_r_r67);
    goto CPyL104;
CPyL108: ;
    CPy_DecRef(cpy_r_r80);
    goto CPyL104;
CPyL109: ;
    CPy_DecRef(cpy_r_r80);
    CPy_DecRef(cpy_r_r83);
    goto CPyL104;
CPyL110: ;
    CPy_DecRef(cpy_r_r80);
    CPy_DecRef(cpy_r_r87);
    goto CPyL104;
CPyL111: ;
    CPy_DECREF(cpy_r_r94);
    goto CPyL43;
CPyL112: ;
    CPy_DecRef(cpy_r_r94);
    goto CPyL104;
CPyL113: ;
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r102);
    goto CPyL104;
CPyL114: ;
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r106);
    goto CPyL39;
CPyL115: ;
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r106);
    goto CPyL104;
CPyL116: ;
    CPy_DecRef(cpy_r_r126);
    goto CPyL50;
CPyL117: ;
    CPy_DecRef(cpy_r_r126);
    goto CPyL53;
CPyL118: ;
    CPy_DecRef(cpy_r_r126);
    goto CPyL104;
CPyL119: ;
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r137);
    goto CPyL104;
CPyL120: ;
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r143);
    goto CPyL104;
CPyL121: ;
    CPy_DECREF(cpy_r_r147);
    goto CPyL66;
CPyL122: ;
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r147);
    goto CPyL104;
CPyL123: ;
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r147);
    CPy_DecRef(cpy_r_r151);
    goto CPyL104;
CPyL124: ;
    CPy_DecRef(cpy_r_r167);
    goto CPyL104;
CPyL125: ;
    CPy_DecRef(cpy_r_r174);
    goto CPyL104;
CPyL126: ;
    CPy_DecRef(cpy_r_r181);
    goto CPyL104;
CPyL127: ;
    CPy_DecRef(cpy_r_r181);
    CPy_DecRef(cpy_r_r187);
    goto CPyL104;
CPyL128: ;
    CPy_DECREF(cpy_r_r191);
    goto CPyL102;
CPyL129: ;
    CPy_DecRef(cpy_r_r191);
    goto CPyL104;
CPyL130: ;
    CPy_DecRef(cpy_r_r191);
    CPy_DecRef(cpy_r_r223);
    goto CPyL104;
CPyL131: ;
    CPy_DecRef(cpy_r_r191);
    CPy_DecRef(cpy_r_r229);
    goto CPyL97;
CPyL132: ;
    CPy_DecRef(cpy_r_r191);
    CPy_DecRef(cpy_r_r229);
    goto CPyL104;
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
    CPyModule_yearn_treasury___rules___constants = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_y = Py_None;
    CPyModule_y___constants = Py_None;
    CPyModule_yearn_treasury___rules___cost_of_revenue___gas = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_pony___orm = Py_None;
    CPyModule_dao_treasury = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_y = Py_None;
    CPyModule_y___constants = Py_None;
    CPyModule_yearn_treasury___rules___expense = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_yearn_treasury___rules___expense___general = Py_None;
    CPyModule_yearn_treasury___rules___expense___infrastructure = Py_None;
    CPyModule_yearn_treasury___rules___expense___people = Py_None;
    CPyModule_yearn_treasury___rules___expense___security = Py_None;
    CPyModule_yearn_treasury___rules___expense___general = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_decimal = Py_None;
    CPyModule_dao_treasury = Py_None;
    CPyModule_y = Py_None;
    CPyModule_yearn_treasury___rules___expense___infrastructure = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_dao_treasury = Py_None;
    CPyModule_yearn_treasury___rules___expense___people = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_dao_treasury = Py_None;
    CPyModule_yearn_treasury___rules___expense___security = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_dao_treasury = Py_None;
    CPyModule_y = Py_None;
    CPyModule_yearn_treasury___rules___ignore___general = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_dao_treasury = Py_None;
    CPyModule_yearn_treasury___rules___ignore___weth = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_y = Py_None;
    CPyModule_dao_treasury = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_yearn_treasury___rules___constants = Py_None;
    CPyModule_yearn_treasury___rules___ignore___ygov = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_dao_treasury = Py_None;
    CPyModule_y = Py_None;
    CPyModule_yearn_treasury___rules___other_income = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_decimal = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_dao_treasury = Py_None;
    CPyModule_y = Py_None;
    CPyModule_yearn_treasury___rules___constants = Py_None;
    CPyModule_yearn_treasury___rules___revenue___bribes = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_dao_treasury = Py_None;
    CPyModule_yearn_treasury___rules___revenue___keepcoins = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_y = Py_None;
    CPyModule_y___constants = Py_None;
    CPyModule_dao_treasury = Py_None;
    CPyModule_yearn_treasury___rules___revenue___seasolver = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_dao_treasury = Py_None;
    CPyModule_y = Py_None;
    CPyModule_yearn_treasury____db = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_dao_treasury___db = Py_None;
    CPyModule_y = Py_None;
    CPyModule_y___constants = Py_None;
    CPyModule_yearn_treasury = Py_None;
    CPyModule_yearn_treasury____ens = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_brownie = Py_None;
    CPyModule_web3____utils___abi = Py_None;
    CPyModule_web3____utils___events = Py_None;
    CPyModule_y = Py_None;
    CPyModule_yearn_treasury___vaults = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_brownie = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_y = Py_None;
    CPyModule_yearn_treasury____ens = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[477];
const char * const CPyLit_Str[] = {
    "\003\bbuiltins\rBudgetRequest\036yearn_treasury.budget._request",
    "\003\021approved_requests\021rejected_requests\brequests",
    "\005\037yearn_treasury.budget._requests\a__all__\bapproved\brejected\006stream",
    "\b\avesting\004paid\tdataclass\vdataclasses\tgetLogger\alogging\005Final\bOptional",
    "\t\003Set\005final\006typing\b__name__\006logger\017__mypyc_attrs__\002id\006number\005title",
    "\b\005state\003url\ncreated_at\nupdated_at\tclosed_at\004body\006labels\017__annotations__",
    "\004\026mypyc filler docstring\a__doc__\n__module__\006frozen",
    "\0040https://api.github.com/repos/yearn/budget/issues\003all\bper_page\004page",
    "\a\003get\aheaders\006params\vstatus_code\030Failed to fetch issues: \001 \004text",
    "\a\017ConnectionError\004json\fpull_request\004name\016budget request\bhtml_url\002os",
    "\005\"yearn_treasury/budget/_requests.py\b<module>\004List\aenviron\fGITHUB_TOKEN",
    "\b\006_TOKEN\rAuthorization\006token \b_HEADERS\aNetwork\001y\aCHAINID\vy.constants",
    "\002*0xEeeeeEeeeEeEeeEeEeEeeEEEeeeeEeeeeeeeEEeE\vEEE_ADDRESS",
    "\003*0x0000000000000000000000000000000000000000\fZERO_ADDRESS\aMainnet",
    "\002*0x0bc529c00C6401aEF6D220BE8C6Ea1667F6Ad93e\006Fantom",
    "\002*0x29b0Da86e484E1C0029B56e817912d778aC0EC69\bArbitrum",
    "\002*0x82e3A8F066a6989666b031d916c43672085b1582\aPolygon",
    "\004*0xDA537104D6A5edd53c6fBba9A898708E465260b6\003YFI\006symbol\003ETH",
    "\a\rfrom_nickname\fDisperse.app\004hash\006amount\tvalue_usd\bpony.orm\004pony",
    "\002+yearn_treasury/rules/cost_of_revenue/gas.py\nTreasuryTx",
    "\a\017cost_of_revenue\fdao_treasury\006HexStr\neth_typing\003Gas\003gas\006commit",
    "\001\026Multisig Reimbursement",
    "\001B0x19bcb28cd113896fb06f17b2e5efa86bb8bf78c26e75c633d8f1a0e48b238a86",
    "\003\024Yearn yChad Multisig\005match\tOther Gas",
    "\001B0x57bc99f6007989606bdd9d1adf91c99d198de51f61d29689ee13ccf440b244df",
    "\002*0xB1d693B77232D88a3C9467eD5619FfE79E80BCCc\nto_address",
    "\001\026_STRATEGIST_GAS_HASHES",
    "\001B0x86fee63ec8efb0e7320a6d48ac3890b1089b77a3d9ed74cade389f512471c299",
    "\001B0xa77c4f7596968fef96565a0025cc6f9881622f62cc4c823232f9c9000ba5f981",
    "\001B0xac2253f1d8f78680411b353d65135d58bc880cdf9507ea7848daf05925e1443f",
    "\001B0xd27d4a732dd1a9ac93c7db1695a6d2aff40e007627d710da91f328b246be44bc",
    "\001B0x5a828e5bde96cd8745223fe32daefaa9140a09acc69202c33f6f789228c8134b",
    "\001B0x110ef82ec16eb53bf71b073aca4a37d4fbfaa74166c687a726211392a02f0059",
    "\001B0xaad012505975dd13a57599a28d33c979f72084ae56ccba76997f05822a5497f5",
    "\001B0xd10e8eb19b9493b32daf880da40e8e80ae96e9947ebd372562504e376c253731",
    "\001B0xa937f94cd93e07e5a1abf3010267b213caf8fbefb5d56e417ab057de39c697a5",
    "\003\024_RETURNED_GAS_HASHES\021is_strategist_gas\016Strategist Gas",
    "\001$yearn_treasury.rules.expense.general",
    "\001+yearn_treasury.rules.expense.infrastructure",
    "\001#yearn_treasury.rules.expense.people",
    "\002%yearn_treasury.rules.expense.security\vto_nickname",
    "\005\031Yearn Strategist Multisig\003DAI\aDecimal\adecimal\aexpense",
    "\003\033is_sms_discretionary_budget\030SMS Discretionary Budget\bnetworks",
    "\001B0xc269f6fb016a48fe150f689231a73532b631877d1376608df639dad79514904b",
    "\001B0x0c59e87027bcdcaa718e322a28bc436106d73ae8623071930437bdb0706c4d65",
    "\001B0x40352e7166bf5196aa1160302cfcc157facf99731af0e11741b8729dd84e131c",
    "\001B0x47035f156d4e6144c144b2ac5e91497e353c9a4e23133587bbf3da2f9d7da596",
    "\001B0x08ef1aacdf7d0f16be5e6fd0a64ebd0ba3b0c3dd0a7884a9a470aa89a7fe1a06",
    "\001B0xeb51cb5a3b4ae618be75bf3e23c2d8e333d93d5e81e869eca7f9612a30079822",
    "\001B0x3e75d22250d87c183824c3b77ddb9cb11935db2061ce7f34df4f024d0646fcfb",
    "\001B0x1621ba5c9b57930c97cc43d5d6d401ee9c69fed435b0b458ee031544a10bfa75",
    "\001B0x5deca5d6c934372c174bbef8be9a1e103e06d8b93fd3bf8d77865dfeb34fe3be",
    "\001B0xfc07ee04d44f8e481f58339b7b8c998d454e4ec427b8021c4e453c8eeee6a9b9",
    "\005\tlog_index\016Infrastructure\016infrastructure\025Tenderly Subscription\004USDT",
    "\002*0xF6060cE3fC3df2640F72E42441355f50F195D96a\017Wonderland Jobs",
    "\002*0x8bA72884984f669aBBc9a5a7b441AD8E3D9a4fD3\020is_generic_infra",
    "\002\021Unspecified Infra\005yvYFI",
    "\001B0xb3aab771a5581df5b1c8e6faefedcc88d91b8820c5ae5eaf9c9283014288dda2",
    "\001B0x371b6a601da36382067a20236d41f540fc77dc793d64d24fc1bdbcd2c666db2b",
    "\001B0xf401d432dcaaea39e1b593379d3d63dcdc82f5f694d83b098bb6110eaa19bbde",
    "\001B0x0b7159645e66c3b460efeb3e1e3c32d5e4eb845a2f2230b28b388ad34a36fcc3",
    "\001B0xa121fd9717d0fb4ac72a223db638f4e59094547ddee253e5ba011a5bb0c67126",
    "\001B0x2a7c60bb7dd6c15a6d0351e6a2b9f01e51fa6e7df9d1e5f02a3759640211ee56",
    "\001B0x5cf6a4c70ec2de7cd25a627213344deae28f11ba9814d5cc1b00946f356ed5bf",
    "\001B0x8226b3705657f34216483f5091f8bd3eeea385a64b6da458eeaff78521596c28",
    "\001B0x4d404a04bf46b80721f03ad6b821c6d82312c53331d8e7425fb68100116d8b98",
    "\001B0x8ed57eff8f4a61cd40d109223c5054f87e35a6f0a5c85b65b1a7afe5b6e308da",
    "\001B0x1391d6de1f0b5469627da1e23ddd0f892bf7d182780bc2fb807b6bf1e2d0acf1",
    "\001B0x514591e6f8dcac50b6deeabce8a819540cc7caecc182c39dfb93280abb34d3d6",
    "\001B0x38201edb06e8fd3b9aa9d4142594d28cb73768770fdcb68a4da24d8cb0742cfc",
    "\001B0x0a9e0f2cadb5dc3209bad74ada2fe71f2cbc0e9e2f16a4de1a29ea663e325798",
    "\001B0xa3627513c8c3e838feaf9ab1076be01df11c5be5a83597626950c3ac38124bba",
    "\001B0xb23d189ac94acb68d457e5a21b765fd0affd73ac1cd5afbe9fb57db8c3f95c30",
    "\006\017Contract: yGift\027yyDAI+yUSDC+yUSDT+yTUSD\006Grants\006grants\aWebsite\awebsite",
    "\006\002UX\002ux\ris_coordinape\nCoordinape\016is_ygift_grant\020yGift Team Grant",
    "\001*0x0E0aF03c405E17D0e486354fe709d3294d07EC44",
    "\001B0xdf3e6cf2e50052e4eeb57fb2562b5e1b02701014ce65b60e6c8a850c409b341a",
    "\002\004USDC*0x8bAf5eaF92E37CD9B1FcCD676918A9B3D4F87Dc7",
    "\001B0x83ec212072f82f4aba4b512051d52c5f016de79a620a580622a0f051e3473a78",
    "\001B0xd0fa31ccf6bf7577a533366955bb528d6d17c928bba1ff13ab273487a27d9602",
    "\001B0xcb79cbe5b68d04a1a3feab3360734277020ee0536380843a8c9db3e8356b81d6",
    "\001B0xca61496c32806ba34f0deb331c32969eda11c947fdd6235173e6fa13d9a1c288",
    "\001B0x70cdcffa444f70754a1df2d80a1adf9c432dfe678381e05ac78ab50b9de9d393",
    "\001B0x7df5566cc9ff8ed0aafe126b74ad0e3957e62d530d007565ee32bd1303bcec32",
    "\001B0x5e95d5b0773eefaef9c7187d5e9187a89717d269f48e5dcf707acfe1a7e55cb9",
    "\001B0x9cfd1098c5459002a90ffa23931f7bbec430b3f2ec0ef2d3a641cef574eb0817",
    "\001B0x70ecc34da6c461a0bb9dadfbc4d082a8486e742cbb454f0f67b2df384fb9bffc",
    "\001B0x4df2eee567ebf2a41b555fca3fed41300b12ff2dc3c79ffaee8b7bdf262f9303",
    "\001B0x3e045ced19590db8905d8a69c2f0fd0acd4f90301cf6356742e735cd7caa0964",
    "\006\bSecurity\bsecurity\006Audits\006audits\021is_yacademy_audit\byAcademy",
    "\004\021is_chainsec_audit\bChainSec\022is_statemind_audit\tStateMind",
    "\004\021is_mixbytes_audit\bMixBytes\016is_other_audit\021Unspecified Audit",
    "\003\ris_bug_bounty\nBug Bounty\025Anti-Spam Discord Bot",
    "\001B0xe397d5682ef780b5371f8c80670e0cd94b4f945c7b432319b24f65c288995a17",
    "\002\017is_warroom_help\023War Room Assistance",
    "\001B0x2c2fb9d88a7a25b100ae3ba08bdb1cafbbd6a63386a08fdcfe32d077836defa3",
    "\001B0xd7e7abe600aad4a3181a3a410bef2539389579d2ed28f3e75dbbf3a7d8613688",
    "\005\006ignore\022is_returned_fundus\016Returned Funds\ffrom_address\016TreasuryWallet",
    "\004\aaddress\r_get_instance\005token#yearn_treasury/rules/ignore/weth.py",
    "\004\017ChecksumAddress\036yearn_treasury.rules.constants\004weth\fis_weth_mint",
    "\004\fWETH:Minting\ais_weth\fWETH:Burning\016Yearn Treasury",
    "\002\026yDAI+yUSDC+yUSDT+yTUSD*0xBa37B002AbaFDd8E89a1995dA52740bbC013D992",
    "\003\004YGOV\017is_sent_to_ygov\035Transfer to yGov (Deprecated)",
    "\001B0x44f7d3b2030799ea45932baf6049528a059aabd6387f3128993d646d01c8e877",
    "\001B0x7c086a82b43b2f49db93b76a0698cf86a9c620b3bf924f0003175b04a17455ad",
    "\001B0x327684dab9e3ce61d125b36fe0b59cbfbc8aa5ac7a5b051125ab7cac3b93b90b",
    "\001B0xc12ded505ea158717890e4ae6e7ab5eb5cb61edbc13dfd125dd0e6f9b1af9477",
    "\001B0x4923fd32b4eacdc1617700c67176935676ca4d06bbfbb73644730c55534623db",
    "\001B0x037a9cc5baa7d63a11d0f0720ee552bbf4ad85118ee5425220a263695fedbe9f",
    "\001B0x5ba604cae0d355835b182fa23c8a58ae695905e69ed08c7cf8a52f3eca889484",
    "\001B0xf2dbe58dffd3bc1476755e9f74e2ae07531579d0a3ea9e2aaac2ef902e080c2a",
    "\001B0x8079e9cae847da196dc5507561bc9d1434f765f05045bc1a82df735ec83bc6ec",
    "\001B0xb39f2991fdc2c70b43046be3eac36bff35c21c7f66e2888a52afc3956abae451",
    "\001B0x3424e8a6688c89f7974968213c8c25f3bd8100f78c54475edb001c11a8ad5d21",
    "\001B0xe8b5a4ebf1f04048f6226b22b2865a33621e88ea255dcea0cfd7a975a3a7e387",
    "\a\005aLEND\005aLINK\021Yearn Treasury V1\002rv\vis_contract\bContract\tcoroutine",
    "\005\023ContractNotVerified\005vault\005block\020block_identifier\022Contract: Strategy",
    "\006\brv3USDCc\005ERC20\fasynchronous\brv3USDCb\rGeneratorExit\rStopIteration",
    "\003\020Cowswap Multisig\017yMechs Multisig\004USDS",
    "\003*0x3C5142F28567E6a0F172fd0BaaF1f2847f49D02F\004yETH\tyvmkUSD-A",
    "\004\037Contract: YPrismaFeeDistributor\fother_income\0030.1\n_POINT_ONE",
    "\005\nis_airdrop\aAirdrop\017is_atoken_yield\faToken Yield\022is_robovault_share",
    "\002\023RoboVault Thank You\034is_cowswap_gas_reimbursement",
    "\003\031Cowswap Gas Reimbursement\025is_usds_referral_code\022USDS Referral Code",
    "\003\027is_yeth_application_fee\024yETH Application Fee\017is_yprisma_fees",
    "\003\fyPRISMA Fees\027Contract: BribeSplitter\026Contract: YCRVSplitter",
    "\001B0x3c635388812bed82845c0df3531583399fdf736ccfb95837b362379766955f2d",
    "\006\arevenue\006Bribes\006bribes\ris_ycrv_bribe\vyCRV Bribes\016is_ybribe_fees",
    "\004\vyBribe Fees\005ANGLE\033Contract: StrategyAngleUSDC\003BAL",
    "\001B0xf4677cce1a08ecd54272cdc1b23bc64693450f8bb5d6de59b8e58e288ec3b2a7",
    "\002\033Contract: SSBv3 DAI staBAL3\034Contract: SSBv3 USDC staBAL3",
    "\002\034Contract: SSBv3 USDT staBAL3#Contract: SSBv3 WETH B-stETH-STABLE",
    "\001 Contract: SSBv3 WBTC staBAL3-BTC",
    "\001*0x960818b3F08dADca90b840298721FE7B419fBE12",
    "\001*0x074620e389B5715f7ba51Fc062D8fFaf973c7E02",
    "\001*0xB0F8b341951233BF08A5F15a838A1a85B016aEf9",
    "\001*0x034d775615d50D870D742caA1e539fC8d97955c2",
    "\002*0xe614f717b3e8273f38Ed7e0536DfBA60AD021c85\005BEETS",
    "\001B0x1e997aa8c79ece76face8deb8fe7df4cea4f6a1ef7cd28501013ed30dfbe238f",
    "\005\004POOL\036Contract: StrategyPoolTogether\005Tuple\tkeepCOINS\tkeepcoins",
    "\001*0x2CB390212b0e5091a3c0D0331669c1419165CF80",
    "\001*0x7C2b9DB2Ae5aCC6fAC2Fd6cE9b01A5EB4bDD1309",
    "\003$angle_strats_with_non_specific_names\ris_keep_angle\tKeepANGLE",
    "\006\vis_keep_bal\aKeepBAL\ris_keep_beets\tKeepBEETS\fis_keep_pool\bKeepPOOL",
    "\003\026Contract: TradeHandler\003COW*0xA03be496e67Ec29bC62F01a428683D7F9c204930",
    "\004\tSeasolver\tseasolver\035is_seasolver_slippage_revenue\021Positive Slippage",
    "\005\024is_cowswap_incentive\022CowSwap Incentives\001f\tconstants\021TREASURY_MULTISIG",
    "\003\016YCHAD_MULTISIG\006Yearn \rChad Multisig",
    "\002*0x5FcdC32DfC361a32e9d5AB9A384b890C62D0b8AC\025Bridge Assistooor EOA",
    "\006\aAddress\rset_nicknames\017dao_treasury.db\016yearn_treasury\004web3\abrownie",
    "\003\016filter_by_name\017web3._utils.abi\031construct_event_topic_set",
    "\002\022web3._utils.events*0x4976fb03C32e5B8cfe2b6cCB31c09Ba78EBaBa41",
    "\a\bresolver\016AddressChanged\003abi\005codec\004node\003ens\025v2.registry.ychad.eth",
    "\b\bnamehash\006topics\004Dict\005chain\006Events\023yearn_treasury._ens\002v1\002v2",
    "\002*0x9be19Ee7Bc4099D62737a7255f5c227fBcd6dB93\026_v1_addresses_provider",
    "\002\035ADDRESSES_GENERATOR_V1_VAULTS\vaddressById",
    "\005\036_addresses_generator_v1_vaults\017assetsAddresses\003map\006height\003now",
    "\a\taddresses\006events\nnewAddress\003hex\rv2_registries\005event\bNewVault",
    "\001\rvault_address",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "\023100\0001\000-1\000200000\000222\000195\000117\000460\00098\000207\000254\000399\00089\000101\000327\000152\000357\000556\00072",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    51, 1, 4, 3, 6, 7, 8, 1, 16, 1, 18, 4, 20, 21, 22, 23, 1, 42, 2, 48,
    49, 3, 60, 60, 60, 1, 429, 1, 47, 2, 20, 63, 1, 20, 1, 70, 1, 72, 2,
    20, 22, 3, 94, 95, 95, 1, 437, 2, 97, 98, 1, 100, 2, 91, 89, 2, 91,
    112, 1, 133, 2, 97, 135, 1, 138, 2, 87, 112, 2, 91, 149, 2, 97, 225,
    3, 71, 71, 71, 1, 449, 3, 97, 229, 225, 1, 234, 2, 75, 77, 1, 269, 1,
    273, 2, 97, 284, 4, 264, 266, 272, 70, 1, 77, 2, 97, 304, 2, 20, 329,
    1, 360, 1, 353, 1, 364, 1, 366, 1, 368, 1, 264, 3, 380, 20, 63, 1,
    381, 3, 264, 382, 70, 2, 371, 379, 2, 395, 379, 1, 395
};
const int CPyLit_FrozenSet[] = {
    4, 4, 139, 140, 141, 142, 16, 160, 161, 162, 163, 164, 165, 166,
    167, 168, 169, 170, 171, 172, 173, 174, 175, 4, 196, 197, 198, 199,
    11, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257
};
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
CPyModule *CPyModule_yearn_treasury___rules___constants_internal = NULL;
CPyModule *CPyModule_yearn_treasury___rules___constants;
PyObject *CPyStatic_constants___globals;
CPyModule *CPyModule_y;
CPyModule *CPyModule_y___constants;
CPyModule *CPyModule_yearn_treasury___rules___cost_of_revenue___gas_internal = NULL;
CPyModule *CPyModule_yearn_treasury___rules___cost_of_revenue___gas;
PyObject *CPyStatic_gas___globals;
CPyModule *CPyModule_pony___orm;
CPyModule *CPyModule_dao_treasury;
CPyModule *CPyModule_eth_typing;
CPyModule *CPyModule_yearn_treasury___rules___expense_internal = NULL;
CPyModule *CPyModule_yearn_treasury___rules___expense;
PyObject *CPyStatic_expense___globals;
CPyModule *CPyModule_yearn_treasury___rules___expense___general_internal = NULL;
CPyModule *CPyModule_yearn_treasury___rules___expense___general;
CPyModule *CPyModule_yearn_treasury___rules___expense___infrastructure_internal = NULL;
CPyModule *CPyModule_yearn_treasury___rules___expense___infrastructure;
CPyModule *CPyModule_yearn_treasury___rules___expense___people_internal = NULL;
CPyModule *CPyModule_yearn_treasury___rules___expense___people;
CPyModule *CPyModule_yearn_treasury___rules___expense___security_internal = NULL;
CPyModule *CPyModule_yearn_treasury___rules___expense___security;
PyObject *CPyStatic_expense___general___globals;
CPyModule *CPyModule_decimal;
PyObject *CPyStatic_infrastructure___globals;
PyObject *CPyStatic_people___globals;
PyObject *CPyStatic_security___globals;
CPyModule *CPyModule_yearn_treasury___rules___ignore___general_internal = NULL;
CPyModule *CPyModule_yearn_treasury___rules___ignore___general;
PyObject *CPyStatic_ignore___general___globals;
CPyModule *CPyModule_yearn_treasury___rules___ignore___weth_internal = NULL;
CPyModule *CPyModule_yearn_treasury___rules___ignore___weth;
PyObject *CPyStatic_weth___globals;
CPyModule *CPyModule_yearn_treasury___rules___ignore___ygov_internal = NULL;
CPyModule *CPyModule_yearn_treasury___rules___ignore___ygov;
PyObject *CPyStatic_ygov___globals;
CPyModule *CPyModule_yearn_treasury___rules___other_income_internal = NULL;
CPyModule *CPyModule_yearn_treasury___rules___other_income;
PyObject *CPyStatic_other_income___globals;
CPyModule *CPyModule_yearn_treasury___rules___revenue___bribes_internal = NULL;
CPyModule *CPyModule_yearn_treasury___rules___revenue___bribes;
PyObject *CPyStatic_bribes___globals;
CPyModule *CPyModule_yearn_treasury___rules___revenue___keepcoins_internal = NULL;
CPyModule *CPyModule_yearn_treasury___rules___revenue___keepcoins;
PyObject *CPyStatic_keepcoins___globals;
CPyModule *CPyModule_yearn_treasury___rules___revenue___seasolver_internal = NULL;
CPyModule *CPyModule_yearn_treasury___rules___revenue___seasolver;
PyObject *CPyStatic_seasolver___globals;
CPyModule *CPyModule_yearn_treasury____db_internal = NULL;
CPyModule *CPyModule_yearn_treasury____db;
PyObject *CPyStatic__db___globals;
CPyModule *CPyModule_dao_treasury___db;
CPyModule *CPyModule_yearn_treasury;
CPyModule *CPyModule_yearn_treasury____ens_internal = NULL;
CPyModule *CPyModule_yearn_treasury____ens;
PyObject *CPyStatic__ens___globals;
CPyModule *CPyModule_brownie;
CPyModule *CPyModule_web3____utils___abi;
CPyModule *CPyModule_web3____utils___events;
CPyModule *CPyModule_yearn_treasury___vaults_internal = NULL;
CPyModule *CPyModule_yearn_treasury___vaults;
PyObject *CPyStatic_vaults___globals;
char CPyDef_budget_____top_level__(void);
PyObject *CPyStatic__request___logger = NULL;
PyTypeObject *CPyType__request___BudgetRequest;
PyObject *CPyDef__request___BudgetRequest(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
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
PyObject *CPyStatic_constants___YFI = NULL;
char CPyDef_constants_____top_level__(void);
PyObject *CPyStatic_gas___gas = NULL;
PyObject *CPyStatic_gas___commit = NULL;
PyObject *CPyStatic_gas____STRATEGIST_GAS_HASHES = NULL;
PyObject *CPyStatic_gas____RETURNED_GAS_HASHES = NULL;
char CPyDef_gas___is_strategist_gas(PyObject *cpy_r_tx);
PyObject *CPyPy_gas___is_strategist_gas(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_gas_____top_level__(void);
char CPyDef_expense_____top_level__(void);
char CPyDef_expense___general___is_sms_discretionary_budget(PyObject *cpy_r_tx);
PyObject *CPyPy_expense___general___is_sms_discretionary_budget(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_expense___general_____top_level__(void);
PyObject *CPyStatic_infrastructure___infrastructure = NULL;
char CPyDef_infrastructure___is_generic_infra(PyObject *cpy_r_tx);
PyObject *CPyPy_infrastructure___is_generic_infra(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_infrastructure_____top_level__(void);
PyObject *CPyStatic_people___grants = NULL;
PyObject *CPyStatic_people___website = NULL;
PyObject *CPyStatic_people___ux = NULL;
char CPyDef_people___is_coordinape(PyObject *cpy_r_tx);
PyObject *CPyPy_people___is_coordinape(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_people___is_ygift_grant(PyObject *cpy_r_tx);
PyObject *CPyPy_people___is_ygift_grant(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_people_____top_level__(void);
PyObject *CPyStatic_security___security = NULL;
PyObject *CPyStatic_security___audits = NULL;
char CPyDef_security___is_yacademy_audit(PyObject *cpy_r_tx);
PyObject *CPyPy_security___is_yacademy_audit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_security___is_chainsec_audit(PyObject *cpy_r_tx);
PyObject *CPyPy_security___is_chainsec_audit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_security___is_statemind_audit(PyObject *cpy_r_tx);
PyObject *CPyPy_security___is_statemind_audit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_security___is_mixbytes_audit(PyObject *cpy_r_tx);
PyObject *CPyPy_security___is_mixbytes_audit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_security___is_other_audit(PyObject *cpy_r_tx);
PyObject *CPyPy_security___is_other_audit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_security___is_bug_bounty(PyObject *cpy_r_tx);
PyObject *CPyPy_security___is_bug_bounty(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_security___is_warroom_help(PyObject *cpy_r_tx);
PyObject *CPyPy_security___is_warroom_help(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_security_____top_level__(void);
char CPyDef_ignore___general___is_returned_fundus(PyObject *cpy_r_tx);
PyObject *CPyPy_ignore___general___is_returned_fundus(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_ignore___general_____top_level__(void);
PyObject *CPyStatic_weth___weth = NULL;
char CPyDef_weth___is_weth_mint(PyObject *cpy_r_tx);
PyObject *CPyPy_weth___is_weth_mint(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_weth___is_weth(PyObject *cpy_r_tx);
PyObject *CPyPy_weth___is_weth(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_weth_____top_level__(void);
char CPyDef_ygov___is_sent_to_ygov(PyObject *cpy_r_tx);
PyObject *CPyPy_ygov___is_sent_to_ygov(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_ygov_____top_level__(void);
PyObject *CPyStatic_other_income____POINT_ONE = NULL;
PyTypeObject *CPyType_other_income___is_robovault_share_env;
PyObject *CPyDef_other_income___is_robovault_share_env(void);
PyTypeObject *CPyType_other_income___is_robovault_share_gen;
PyObject *CPyDef_other_income___is_robovault_share_gen(void);
char CPyDef_other_income___is_airdrop(PyObject *cpy_r_tx);
PyObject *CPyPy_other_income___is_airdrop(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_other_income___is_atoken_yield(PyObject *cpy_r_tx);
PyObject *CPyPy_other_income___is_atoken_yield(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_other_income___is_robovault_share_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
PyObject *CPyPy_other_income___is_robovault_share_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_other_income___is_robovault_share_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_other_income___is_robovault_share_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_other_income___is_robovault_share_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_other_income___is_robovault_share_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_other_income___is_robovault_share_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_other_income___is_robovault_share_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_other_income___is_robovault_share_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_other_income___is_robovault_share_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_other_income___is_robovault_share_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_other_income___is_robovault_share_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_other_income___is_robovault_share_gen_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_other_income___is_robovault_share_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_other_income___is_robovault_share(PyObject *cpy_r_tx);
PyObject *CPyPy_other_income___is_robovault_share(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_other_income___is_cowswap_gas_reimbursement(PyObject *cpy_r_tx);
PyObject *CPyPy_other_income___is_cowswap_gas_reimbursement(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_other_income___is_usds_referral_code(PyObject *cpy_r_tx);
PyObject *CPyPy_other_income___is_usds_referral_code(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_other_income___is_yeth_application_fee(PyObject *cpy_r_tx);
PyObject *CPyPy_other_income___is_yeth_application_fee(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_other_income___is_yprisma_fees(PyObject *cpy_r_tx);
PyObject *CPyPy_other_income___is_yprisma_fees(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_other_income_____top_level__(void);
PyObject *CPyStatic_bribes___bribes = NULL;
char CPyDef_bribes___is_ycrv_bribe(PyObject *cpy_r_tx);
PyObject *CPyPy_bribes___is_ycrv_bribe(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_bribes___is_ybribe_fees(PyObject *cpy_r_tx);
PyObject *CPyPy_bribes___is_ybribe_fees(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_bribes_____top_level__(void);
PyObject *CPyStatic_keepcoins___keepcoins = NULL;
PyObject *CPyStatic_keepcoins___angle_strats_with_non_specific_names = NULL;
char CPyDef_keepcoins___is_keep_angle(PyObject *cpy_r_tx);
PyObject *CPyPy_keepcoins___is_keep_angle(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_keepcoins___is_keep_bal(PyObject *cpy_r_tx);
PyObject *CPyPy_keepcoins___is_keep_bal(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_keepcoins___is_keep_beets(PyObject *cpy_r_tx);
PyObject *CPyPy_keepcoins___is_keep_beets(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_keepcoins___is_keep_pool(PyObject *cpy_r_tx);
PyObject *CPyPy_keepcoins___is_keep_pool(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_keepcoins_____top_level__(void);
PyObject *CPyStatic_seasolver___seasolver = NULL;
char CPyDef_seasolver___is_seasolver_slippage_revenue(PyObject *cpy_r_tx);
PyObject *CPyPy_seasolver___is_seasolver_slippage_revenue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_seasolver___is_cowswap_incentive(PyObject *cpy_r_tx);
PyObject *CPyPy_seasolver___is_cowswap_incentive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_seasolver_____top_level__(void);
char CPyDef__db___prepare_db(void);
PyObject *CPyPy__db___prepare_db(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__db_____top_level__(void);
PyObject *CPyStatic__ens___resolver = NULL;
PyObject *CPyStatic__ens___topics = NULL;
char CPyDef__ens_____top_level__(void);
PyObject *CPyStatic_vaults___v1 = NULL;
PyObject *CPyStatic_vaults___v2 = NULL;
char CPyDef_vaults_____top_level__(void);

static struct export_table_5752cfb455d892c59a02 exports = {
    &CPyDef_budget_____top_level__,
    &CPyStatic__request___logger,
    &CPyType__request___BudgetRequest,
    &CPyDef__request___BudgetRequest,
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
    &CPyStatic_constants___YFI,
    &CPyDef_constants_____top_level__,
    &CPyStatic_gas___gas,
    &CPyStatic_gas___commit,
    &CPyStatic_gas____STRATEGIST_GAS_HASHES,
    &CPyStatic_gas____RETURNED_GAS_HASHES,
    &CPyDef_gas___is_strategist_gas,
    &CPyDef_gas_____top_level__,
    &CPyDef_expense_____top_level__,
    &CPyDef_expense___general___is_sms_discretionary_budget,
    &CPyDef_expense___general_____top_level__,
    &CPyStatic_infrastructure___infrastructure,
    &CPyDef_infrastructure___is_generic_infra,
    &CPyDef_infrastructure_____top_level__,
    &CPyStatic_people___grants,
    &CPyStatic_people___website,
    &CPyStatic_people___ux,
    &CPyDef_people___is_coordinape,
    &CPyDef_people___is_ygift_grant,
    &CPyDef_people_____top_level__,
    &CPyStatic_security___security,
    &CPyStatic_security___audits,
    &CPyDef_security___is_yacademy_audit,
    &CPyDef_security___is_chainsec_audit,
    &CPyDef_security___is_statemind_audit,
    &CPyDef_security___is_mixbytes_audit,
    &CPyDef_security___is_other_audit,
    &CPyDef_security___is_bug_bounty,
    &CPyDef_security___is_warroom_help,
    &CPyDef_security_____top_level__,
    &CPyDef_ignore___general___is_returned_fundus,
    &CPyDef_ignore___general_____top_level__,
    &CPyStatic_weth___weth,
    &CPyDef_weth___is_weth_mint,
    &CPyDef_weth___is_weth,
    &CPyDef_weth_____top_level__,
    &CPyDef_ygov___is_sent_to_ygov,
    &CPyDef_ygov_____top_level__,
    &CPyStatic_other_income____POINT_ONE,
    &CPyType_other_income___is_robovault_share_env,
    &CPyDef_other_income___is_robovault_share_env,
    &CPyType_other_income___is_robovault_share_gen,
    &CPyDef_other_income___is_robovault_share_gen,
    &CPyDef_other_income___is_airdrop,
    &CPyDef_other_income___is_atoken_yield,
    &CPyDef_other_income___is_robovault_share_gen_____mypyc_generator_helper__,
    &CPyDef_other_income___is_robovault_share_gen_____next__,
    &CPyDef_other_income___is_robovault_share_gen___send,
    &CPyDef_other_income___is_robovault_share_gen_____iter__,
    &CPyDef_other_income___is_robovault_share_gen___throw,
    &CPyDef_other_income___is_robovault_share_gen___close,
    &CPyDef_other_income___is_robovault_share_gen_____await__,
    &CPyDef_other_income___is_robovault_share,
    &CPyDef_other_income___is_cowswap_gas_reimbursement,
    &CPyDef_other_income___is_usds_referral_code,
    &CPyDef_other_income___is_yeth_application_fee,
    &CPyDef_other_income___is_yprisma_fees,
    &CPyDef_other_income_____top_level__,
    &CPyStatic_bribes___bribes,
    &CPyDef_bribes___is_ycrv_bribe,
    &CPyDef_bribes___is_ybribe_fees,
    &CPyDef_bribes_____top_level__,
    &CPyStatic_keepcoins___keepcoins,
    &CPyStatic_keepcoins___angle_strats_with_non_specific_names,
    &CPyDef_keepcoins___is_keep_angle,
    &CPyDef_keepcoins___is_keep_bal,
    &CPyDef_keepcoins___is_keep_beets,
    &CPyDef_keepcoins___is_keep_pool,
    &CPyDef_keepcoins_____top_level__,
    &CPyStatic_seasolver___seasolver,
    &CPyDef_seasolver___is_seasolver_slippage_revenue,
    &CPyDef_seasolver___is_cowswap_incentive,
    &CPyDef_seasolver_____top_level__,
    &CPyDef__db___prepare_db,
    &CPyDef__db_____top_level__,
    &CPyStatic__ens___resolver,
    &CPyStatic__ens___topics,
    &CPyDef__ens_____top_level__,
    &CPyStatic_vaults___v1,
    &CPyStatic_vaults___v2,
    &CPyDef_vaults_____top_level__,
};

PyMODINIT_FUNC PyInit_5752cfb455d892c59a02__mypyc(void)
{
    static PyModuleDef def = { PyModuleDef_HEAD_INIT, "5752cfb455d892c59a02__mypyc", NULL, -1, NULL, NULL };
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
    
    capsule = PyCapsule_New(&exports, "5752cfb455d892c59a02__mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_yearn_treasury___budget(void);
    capsule = PyCapsule_New((void *)CPyInit_yearn_treasury___budget, "5752cfb455d892c59a02__mypyc.init_yearn_treasury___budget", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_yearn_treasury___budget", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_yearn_treasury___budget____request(void);
    capsule = PyCapsule_New((void *)CPyInit_yearn_treasury___budget____request, "5752cfb455d892c59a02__mypyc.init_yearn_treasury___budget____request", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_yearn_treasury___budget____request", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_yearn_treasury___budget____requests(void);
    capsule = PyCapsule_New((void *)CPyInit_yearn_treasury___budget____requests, "5752cfb455d892c59a02__mypyc.init_yearn_treasury___budget____requests", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_yearn_treasury___budget____requests", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_yearn_treasury___rules___constants(void);
    capsule = PyCapsule_New((void *)CPyInit_yearn_treasury___rules___constants, "5752cfb455d892c59a02__mypyc.init_yearn_treasury___rules___constants", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_yearn_treasury___rules___constants", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_yearn_treasury___rules___cost_of_revenue___gas(void);
    capsule = PyCapsule_New((void *)CPyInit_yearn_treasury___rules___cost_of_revenue___gas, "5752cfb455d892c59a02__mypyc.init_yearn_treasury___rules___cost_of_revenue___gas", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_yearn_treasury___rules___cost_of_revenue___gas", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_yearn_treasury___rules___expense(void);
    capsule = PyCapsule_New((void *)CPyInit_yearn_treasury___rules___expense, "5752cfb455d892c59a02__mypyc.init_yearn_treasury___rules___expense", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_yearn_treasury___rules___expense", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_yearn_treasury___rules___expense___general(void);
    capsule = PyCapsule_New((void *)CPyInit_yearn_treasury___rules___expense___general, "5752cfb455d892c59a02__mypyc.init_yearn_treasury___rules___expense___general", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_yearn_treasury___rules___expense___general", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_yearn_treasury___rules___expense___infrastructure(void);
    capsule = PyCapsule_New((void *)CPyInit_yearn_treasury___rules___expense___infrastructure, "5752cfb455d892c59a02__mypyc.init_yearn_treasury___rules___expense___infrastructure", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_yearn_treasury___rules___expense___infrastructure", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_yearn_treasury___rules___expense___people(void);
    capsule = PyCapsule_New((void *)CPyInit_yearn_treasury___rules___expense___people, "5752cfb455d892c59a02__mypyc.init_yearn_treasury___rules___expense___people", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_yearn_treasury___rules___expense___people", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_yearn_treasury___rules___expense___security(void);
    capsule = PyCapsule_New((void *)CPyInit_yearn_treasury___rules___expense___security, "5752cfb455d892c59a02__mypyc.init_yearn_treasury___rules___expense___security", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_yearn_treasury___rules___expense___security", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_yearn_treasury___rules___ignore___general(void);
    capsule = PyCapsule_New((void *)CPyInit_yearn_treasury___rules___ignore___general, "5752cfb455d892c59a02__mypyc.init_yearn_treasury___rules___ignore___general", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_yearn_treasury___rules___ignore___general", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_yearn_treasury___rules___ignore___weth(void);
    capsule = PyCapsule_New((void *)CPyInit_yearn_treasury___rules___ignore___weth, "5752cfb455d892c59a02__mypyc.init_yearn_treasury___rules___ignore___weth", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_yearn_treasury___rules___ignore___weth", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_yearn_treasury___rules___ignore___ygov(void);
    capsule = PyCapsule_New((void *)CPyInit_yearn_treasury___rules___ignore___ygov, "5752cfb455d892c59a02__mypyc.init_yearn_treasury___rules___ignore___ygov", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_yearn_treasury___rules___ignore___ygov", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_yearn_treasury___rules___other_income(void);
    capsule = PyCapsule_New((void *)CPyInit_yearn_treasury___rules___other_income, "5752cfb455d892c59a02__mypyc.init_yearn_treasury___rules___other_income", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_yearn_treasury___rules___other_income", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_yearn_treasury___rules___revenue___bribes(void);
    capsule = PyCapsule_New((void *)CPyInit_yearn_treasury___rules___revenue___bribes, "5752cfb455d892c59a02__mypyc.init_yearn_treasury___rules___revenue___bribes", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_yearn_treasury___rules___revenue___bribes", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_yearn_treasury___rules___revenue___keepcoins(void);
    capsule = PyCapsule_New((void *)CPyInit_yearn_treasury___rules___revenue___keepcoins, "5752cfb455d892c59a02__mypyc.init_yearn_treasury___rules___revenue___keepcoins", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_yearn_treasury___rules___revenue___keepcoins", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_yearn_treasury___rules___revenue___seasolver(void);
    capsule = PyCapsule_New((void *)CPyInit_yearn_treasury___rules___revenue___seasolver, "5752cfb455d892c59a02__mypyc.init_yearn_treasury___rules___revenue___seasolver", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_yearn_treasury___rules___revenue___seasolver", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_yearn_treasury____db(void);
    capsule = PyCapsule_New((void *)CPyInit_yearn_treasury____db, "5752cfb455d892c59a02__mypyc.init_yearn_treasury____db", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_yearn_treasury____db", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_yearn_treasury____ens(void);
    capsule = PyCapsule_New((void *)CPyInit_yearn_treasury____ens, "5752cfb455d892c59a02__mypyc.init_yearn_treasury____ens", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_yearn_treasury____ens", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_yearn_treasury___vaults(void);
    capsule = PyCapsule_New((void *)CPyInit_yearn_treasury___vaults, "5752cfb455d892c59a02__mypyc.init_yearn_treasury___vaults", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_yearn_treasury___vaults", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    return module;
    fail:
    Py_XDECREF(module);
    return NULL;
}
