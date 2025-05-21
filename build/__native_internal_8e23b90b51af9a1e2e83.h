#ifndef MYPYC_NATIVE_INTERNAL_8e23b90b51af9a1e2e83_H
#define MYPYC_NATIVE_INTERNAL_8e23b90b51af9a1e2e83_H
#include <Python.h>
#include <CPy.h>
#include "__native_8e23b90b51af9a1e2e83.h"

int CPyGlobalsInit(void);

extern PyObject *CPyStatics[84];
extern const char * const CPyLit_Str[];
extern const char * const CPyLit_Bytes[];
extern const char * const CPyLit_Int[];
extern const double CPyLit_Float[];
extern const double CPyLit_Complex[];
extern const int CPyLit_Tuple[];
extern const int CPyLit_FrozenSet[];
extern CPyModule *CPyModule_yearn_treasury___budget_internal;
extern CPyModule *CPyModule_yearn_treasury___budget;
extern PyObject *CPyStatic_budget___globals;
extern CPyModule *CPyModule_builtins;
extern CPyModule *CPyModule_yearn_treasury___budget____request_internal;
extern CPyModule *CPyModule_yearn_treasury___budget____request;
extern CPyModule *CPyModule_yearn_treasury___budget____requests_internal;
extern CPyModule *CPyModule_yearn_treasury___budget____requests;
extern PyObject *CPyStatic__request___globals;
extern CPyModule *CPyModule_dataclasses;
extern CPyModule *CPyModule_logging;
extern CPyModule *CPyModule_typing;
extern PyObject *CPyStatic__requests___globals;
extern CPyModule *CPyModule_os;
extern CPyModule *CPyModule_requests;
extern char CPyDef_budget_____top_level__(void);
extern PyObject *CPyStatic__request___logger;
extern PyTypeObject *CPyType__request___BudgetRequest;
extern PyObject *CPyDef__request___BudgetRequest(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
extern char CPyDef__request___BudgetRequest_____post_init__(PyObject *cpy_r_self);
extern PyObject *CPyPy__request___BudgetRequest_____post_init__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef__request___BudgetRequest___is_approved(PyObject *cpy_r_self);
extern PyObject *CPyPy__request___BudgetRequest___is_approved(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef__request___BudgetRequest___is_rejected(PyObject *cpy_r_self);
extern PyObject *CPyPy__request___BudgetRequest___is_rejected(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef__request___BudgetRequest___is_stream(PyObject *cpy_r_self);
extern PyObject *CPyPy__request___BudgetRequest___is_stream(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef__request___BudgetRequest___is_vesting(PyObject *cpy_r_self);
extern PyObject *CPyPy__request___BudgetRequest___is_vesting(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef__request___BudgetRequest___is_paid(PyObject *cpy_r_self);
extern PyObject *CPyPy__request___BudgetRequest___is_paid(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef__request_____top_level__(void);
extern PyObject *CPyStatic__requests____TOKEN;
extern PyObject *CPyStatic__requests____HEADERS;
extern PyObject *CPyDef__requests___fetch_brs(void);
extern PyObject *CPyPy__requests___fetch_brs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef__requests_____top_level__(void);
#endif
