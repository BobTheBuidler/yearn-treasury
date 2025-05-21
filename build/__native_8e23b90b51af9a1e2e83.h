#ifndef MYPYC_NATIVE_8e23b90b51af9a1e2e83_H
#define MYPYC_NATIVE_8e23b90b51af9a1e2e83_H
#include <Python.h>
#include <CPy.h>
#ifndef MYPYC_DECLARED_tuple_T0
#define MYPYC_DECLARED_tuple_T0
typedef struct tuple_T0 {
    int empty_struct_error_flag;
} tuple_T0;
#endif

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    CPyTagged _id;
    CPyTagged _number;
    PyObject *_title;
    PyObject *_state;
    PyObject *_url;
    PyObject *_created_at;
    PyObject *_updated_at;
    PyObject *_closed_at;
    PyObject *_body;
    PyObject *_labels;
} yearn_treasury___budget____request___BudgetRequestObject;


struct export_table_8e23b90b51af9a1e2e83 {
    char (*CPyDef_budget_____top_level__)(void);
    PyObject **CPyStatic__request___logger;
    PyTypeObject **CPyType__request___BudgetRequest;
    PyObject *(*CPyDef__request___BudgetRequest)(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    char (*CPyDef__request___BudgetRequest_____post_init__)(PyObject *cpy_r_self);
    char (*CPyDef__request___BudgetRequest___is_approved)(PyObject *cpy_r_self);
    char (*CPyDef__request___BudgetRequest___is_rejected)(PyObject *cpy_r_self);
    char (*CPyDef__request___BudgetRequest___is_stream)(PyObject *cpy_r_self);
    char (*CPyDef__request___BudgetRequest___is_vesting)(PyObject *cpy_r_self);
    char (*CPyDef__request___BudgetRequest___is_paid)(PyObject *cpy_r_self);
    char (*CPyDef__request_____top_level__)(void);
    PyObject **CPyStatic__requests____TOKEN;
    PyObject **CPyStatic__requests____HEADERS;
    PyObject *(*CPyDef__requests___fetch_brs)(void);
    char (*CPyDef__requests_____top_level__)(void);
};
#endif
