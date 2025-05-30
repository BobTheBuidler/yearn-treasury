#ifndef MYPYC_NATIVE_92e75bee3b0f09844b5a_H
#define MYPYC_NATIVE_92e75bee3b0f09844b5a_H
#include <Python.h>
#include <CPy.h>
#ifndef MYPYC_DECLARED_tuple_T0
#define MYPYC_DECLARED_tuple_T0
typedef struct tuple_T0 {
    int empty_struct_error_flag;
} tuple_T0;
#endif

#ifndef MYPYC_DECLARED_tuple_T3OOO
#define MYPYC_DECLARED_tuple_T3OOO
typedef struct tuple_T3OOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
} tuple_T3OOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T2OO
#define MYPYC_DECLARED_tuple_T2OO
typedef struct tuple_T2OO {
    PyObject *f0;
    PyObject *f1;
} tuple_T2OO;
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

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_tx;
    PyObject *_type;
    PyObject *_value;
    PyObject *_traceback;
    PyObject *_arg;
    CPyTagged ___mypyc_next_label__;
    PyObject *___mypyc_temp__0;
    tuple_T3OOO ___mypyc_temp__1;
    PyObject *_strat;
    tuple_T3OOO ___mypyc_temp__2;
    PyObject *___mypyc_temp__3;
    tuple_T3OOO ___mypyc_temp__4;
    PyObject *___mypyc_temp__5;
    tuple_T3OOO ___mypyc_temp__6;
    PyObject *___mypyc_temp__7;
    tuple_T3OOO ___mypyc_temp__8;
} yearn_treasury___rules___other_income___is_robovault_share_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_env__;
} yearn_treasury___rules___other_income___is_robovault_share_genObject;


struct export_table_92e75bee3b0f09844b5a {
    char (*CPyDef_budget_____top_level__)(void);
    PyObject **CPyStatic__request___logger;
    PyTypeObject **CPyType__request___BudgetRequest;
    PyObject *(*CPyDef__request___BudgetRequest)(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
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
    PyObject **CPyStatic_gas___gas;
    PyObject **CPyStatic_gas___commit;
    PyObject **CPyStatic_gas____STRATEGIST_GAS_HASHES;
    PyObject **CPyStatic_gas____RETURNED_GAS_HASHES;
    char (*CPyDef_gas___is_strategist_gas)(PyObject *cpy_r_tx);
    char (*CPyDef_gas_____top_level__)(void);
    char (*CPyDef_expense_____top_level__)(void);
    char (*CPyDef_general___is_sms_discretionary_budget)(PyObject *cpy_r_tx);
    char (*CPyDef_general_____top_level__)(void);
    PyObject **CPyStatic_infrastructure___infrastructure;
    char (*CPyDef_infrastructure_____top_level__)(void);
    PyObject **CPyStatic_people___grants;
    PyObject **CPyStatic_people___website;
    PyObject **CPyStatic_people___ux;
    char (*CPyDef_people___is_coordinape)(PyObject *cpy_r_tx);
    char (*CPyDef_people___is_ygift_grant)(PyObject *cpy_r_tx);
    char (*CPyDef_people_____top_level__)(void);
    PyObject **CPyStatic_security___security;
    PyObject **CPyStatic_security___audits;
    char (*CPyDef_security___is_yacademy_audit)(PyObject *cpy_r_tx);
    char (*CPyDef_security___is_chainsec_audit)(PyObject *cpy_r_tx);
    char (*CPyDef_security___is_statemind_audit)(PyObject *cpy_r_tx);
    char (*CPyDef_security___is_mixbytes_audit)(PyObject *cpy_r_tx);
    char (*CPyDef_security___is_other_audit)(PyObject *cpy_r_tx);
    char (*CPyDef_security___is_bug_bounty)(PyObject *cpy_r_tx);
    char (*CPyDef_security___is_warroom_help)(PyObject *cpy_r_tx);
    char (*CPyDef_security_____top_level__)(void);
    PyObject **CPyStatic_other_income____POINT_ONE;
    PyTypeObject **CPyType_other_income___is_robovault_share_env;
    PyObject *(*CPyDef_other_income___is_robovault_share_env)(void);
    PyTypeObject **CPyType_other_income___is_robovault_share_gen;
    PyObject *(*CPyDef_other_income___is_robovault_share_gen)(void);
    char (*CPyDef_other_income___is_atoken_yield)(PyObject *cpy_r_tx);
    PyObject *(*CPyDef_other_income___is_robovault_share_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_other_income___is_robovault_share_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_other_income___is_robovault_share_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_other_income___is_robovault_share_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_other_income___is_robovault_share_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_other_income___is_robovault_share_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_other_income___is_robovault_share_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_other_income___is_robovault_share)(PyObject *cpy_r_tx);
    char (*CPyDef_other_income___is_cowswap_gas_reimbursement)(PyObject *cpy_r_tx);
    char (*CPyDef_other_income___is_usds_referral_code)(PyObject *cpy_r_tx);
    char (*CPyDef_other_income___is_yeth_application_fee)(PyObject *cpy_r_tx);
    char (*CPyDef_other_income___is_yprisma_fees)(PyObject *cpy_r_tx);
    char (*CPyDef_other_income_____top_level__)(void);
    PyObject **CPyStatic_bribes___bribes;
    char (*CPyDef_bribes___is_ycrv_bribe)(PyObject *cpy_r_tx);
    char (*CPyDef_bribes___is_ybribe_fees)(PyObject *cpy_r_tx);
    char (*CPyDef_bribes_____top_level__)(void);
    PyObject **CPyStatic_keepcoins___keepcoins;
    PyObject **CPyStatic_keepcoins___angle_strats_with_non_specific_names;
    char (*CPyDef_keepcoins___is_keep_angle)(PyObject *cpy_r_tx);
    char (*CPyDef_keepcoins___is_keep_bal)(PyObject *cpy_r_tx);
    char (*CPyDef_keepcoins___is_keep_beets)(PyObject *cpy_r_tx);
    char (*CPyDef_keepcoins___is_keep_pool)(PyObject *cpy_r_tx);
    char (*CPyDef_keepcoins_____top_level__)(void);
    PyObject **CPyStatic_seasolver___seasolver;
    char (*CPyDef_seasolver___is_seasolver_slippage_revenue)(PyObject *cpy_r_tx);
    char (*CPyDef_seasolver___is_cowswap_incentive)(PyObject *cpy_r_tx);
    char (*CPyDef_seasolver_____top_level__)(void);
    PyObject **CPyStatic__ens___resolver;
    PyObject **CPyStatic__ens___topics;
    char (*CPyDef__ens_____top_level__)(void);
    char (*CPyDef_vaults_____top_level__)(void);
};
#endif
