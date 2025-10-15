#ifndef MYPYC_NATIVE_yearn_treasury_H
#define MYPYC_NATIVE_yearn_treasury_H
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

#ifndef MYPYC_DECLARED_tuple_T5IIIII
#define MYPYC_DECLARED_tuple_T5IIIII
typedef struct tuple_T5IIIII {
    CPyTagged f0;
    CPyTagged f1;
    CPyTagged f2;
    CPyTagged f3;
    CPyTagged f4;
} tuple_T5IIIII;
#endif

#ifndef MYPYC_DECLARED_tuple_T2OT5IIIII
#define MYPYC_DECLARED_tuple_T2OT5IIIII
typedef struct tuple_T2OT5IIIII {
    PyObject *f0;
    tuple_T5IIIII f1;
} tuple_T2OT5IIIII;
#endif

#ifndef MYPYC_DECLARED_tuple_T2II
#define MYPYC_DECLARED_tuple_T2II
typedef struct tuple_T2II {
    CPyTagged f0;
    CPyTagged f1;
} tuple_T2II;
#endif

#ifndef MYPYC_DECLARED_tuple_T2OT2II
#define MYPYC_DECLARED_tuple_T2OT2II
typedef struct tuple_T2OT2II {
    PyObject *f0;
    tuple_T2II f1;
} tuple_T2OT2II;
#endif

#ifndef MYPYC_DECLARED_tuple_T16OOOOOOOOOT2OT5IIIIIOOOT2OT2IIOO
#define MYPYC_DECLARED_tuple_T16OOOOOOOOOT2OT5IIIIIOOOT2OT2IIOO
typedef struct tuple_T16OOOOOOOOOT2OT5IIIIIOOOT2OT2IIOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
    PyObject *f3;
    PyObject *f4;
    PyObject *f5;
    PyObject *f6;
    PyObject *f7;
    PyObject *f8;
    tuple_T2OT5IIIII f9;
    PyObject *f10;
    PyObject *f11;
    PyObject *f12;
    tuple_T2OT2II f13;
    PyObject *f14;
    PyObject *f15;
} tuple_T16OOOOOOOOOT2OT5IIIIIOOOT2OT2IIOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T2OO
#define MYPYC_DECLARED_tuple_T2OO
typedef struct tuple_T2OO {
    PyObject *f0;
    PyObject *f1;
} tuple_T2OO;
#endif

#ifndef MYPYC_DECLARED_tuple_T4OOOO
#define MYPYC_DECLARED_tuple_T4OOOO
typedef struct tuple_T4OOOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
    PyObject *f3;
} tuple_T4OOOO;
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
    PyObject *___mypyc_generator_attribute__tx;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__0;
    tuple_T3OOO ___mypyc_temp__1;
} yearn_treasury___rules___ignore___swaps___vaults___is_vault_deposit_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__tx;
    int32_t ___mypyc_next_label__;
    tuple_T3OOO ___mypyc_temp__2;
    PyObject *___mypyc_generator_attribute__e;
    PyObject *___mypyc_generator_attribute__transfer_events;
    PyObject *___mypyc_generator_attribute__tx_token;
    CPyTagged ___mypyc_generator_attribute__block;
    PyObject *___mypyc_generator_attribute__sender;
    PyObject *___mypyc_generator_attribute__receiver;
    PyObject *___mypyc_generator_attribute__underlying_address;
    PyObject *___mypyc_temp__3;
    int64_t ___mypyc_temp__4;
    int64_t ___mypyc_temp__5;
    PyObject *___mypyc_generator_attribute__vault;
    PyObject *___mypyc_temp__6;
    PyObject *___mypyc_temp__7;
    PyObject *___mypyc_generator_attribute__event;
    PyObject *___mypyc_generator_attribute__event_pos;
    PyObject *___mypyc_generator_attribute__value;
    PyObject *___mypyc_generator_attribute__tx_to_address;
    PyObject *___mypyc_temp__8;
    tuple_T3OOO ___mypyc_temp__9;
    PyObject *___mypyc_temp__10;
    PyObject *___mypyc_temp__11;
    PyObject *___mypyc_generator_attribute___event;
    PyObject *___mypyc_generator_attribute___sender;
    PyObject *___mypyc_generator_attribute___receiver;
    PyObject *___mypyc_generator_attribute___value;
    PyObject *___mypyc_temp__12;
    int64_t ___mypyc_temp__13;
    int64_t ___mypyc_temp__14;
    PyObject *___mypyc_temp__15;
    tuple_T3OOO ___mypyc_temp__16;
    PyObject *___mypyc_temp__17;
    PyObject *___mypyc_temp__18;
    PyObject *___mypyc_generator_attribute__vault_address;
    PyObject *___mypyc_temp__19;
    PyObject *___mypyc_temp__20;
    PyObject *___mypyc_temp__2_0;
} yearn_treasury___rules___ignore___swaps___vaults___is_v1_or_v2_vault_deposit_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__vault;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__21;
    tuple_T3OOO ___mypyc_temp__22;
    PyObject *___mypyc_generator_attribute__underlying;
} yearn_treasury___rules___ignore___swaps___vaults____get_underlying_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__tx;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__to_address;
    tuple_T3OOO ___mypyc_temp__23;
    PyObject *___mypyc_generator_attribute__e;
    PyObject *___mypyc_generator_attribute__transfer_events;
    PyObject *___mypyc_generator_attribute__token;
    PyObject *___mypyc_generator_attribute__token_address;
    CPyTagged ___mypyc_generator_attribute__block;
    PyObject *___mypyc_generator_attribute__underlying;
    PyObject *___mypyc_temp__24;
    int64_t ___mypyc_temp__25;
    int64_t ___mypyc_temp__26;
    PyObject *___mypyc_generator_attribute__vault;
    PyObject *___mypyc_temp__27;
    PyObject *___mypyc_temp__28;
    PyObject *___mypyc_generator_attribute__event;
    PyObject *___mypyc_generator_attribute__sender;
    PyObject *___mypyc_generator_attribute__receiver;
    PyObject *___mypyc_generator_attribute__value;
    PyObject *___mypyc_temp__29;
    tuple_T3OOO ___mypyc_temp__30;
    PyObject *___mypyc_temp__31;
    PyObject *___mypyc_temp__32;
    PyObject *___mypyc_generator_attribute___event;
    PyObject *___mypyc_generator_attribute___sender;
    PyObject *___mypyc_generator_attribute___receiver;
    PyObject *___mypyc_generator_attribute___value;
    PyObject *___mypyc_temp__33;
    int64_t ___mypyc_temp__34;
    int64_t ___mypyc_temp__35;
    PyObject *___mypyc_temp__36;
    tuple_T3OOO ___mypyc_temp__37;
    PyObject *___mypyc_generator_attribute__vault_address;
    PyObject *___mypyc_temp__38;
    PyObject *___mypyc_temp__39;
    PyObject *___mypyc_temp__40;
    PyObject *___mypyc_temp__41;
    PyObject *___mypyc_temp__2_0;
} yearn_treasury___rules___ignore___swaps___vaults___is_vault_withdrawal_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__tx;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__0;
    tuple_T3OOO ___mypyc_temp__1;
    PyObject *___mypyc_generator_attribute__strat;
    tuple_T3OOO ___mypyc_temp__2;
    PyObject *___mypyc_generator_attribute__vault;
    PyObject *___mypyc_temp__3;
    tuple_T3OOO ___mypyc_temp__4;
    PyObject *___mypyc_temp__5;
    tuple_T3OOO ___mypyc_temp__6;
    PyObject *___mypyc_temp__7;
    tuple_T3OOO ___mypyc_temp__8;
} yearn_treasury___rules___other_income___misc___is_robovault_share_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__tx;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__0;
    tuple_T3OOO ___mypyc_temp__1;
} yearn_treasury___rules___revenue___farming___is_comp_rewards_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__tx;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__2;
    tuple_T3OOO ___mypyc_temp__3;
} yearn_treasury___rules___revenue___farming___is_scream_rewards_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__tx;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__4;
    PyObject *___mypyc_temp__5;
    PyObject *___mypyc_generator_attribute__event;
    PyObject *___mypyc_temp__6;
    tuple_T3OOO ___mypyc_temp__7;
    PyObject *___mypyc_generator_attribute__troller;
    PyObject *___mypyc_temp__8;
    tuple_T3OOO ___mypyc_temp__9;
    PyObject *___mypyc_temp__2_0;
} yearn_treasury___rules___revenue___farming____is_generic_comp_rewards_genObject;

#endif
