#include "stdio.h"

typedef struct{
    char    customer_name[20];
    char    customer_address[40];
    char    model[20];
    enum    {PURE_CASH,CASH_LOAN,LEASE}type;
    union{
        struct {
            float   msrp;
            float   asp;
            float   tax;
            float   fee;
        }pure_cash;
        struct {
            float   msrp;
            float   asp;
            float   tax;
            float   fee;
            float   doun_pay;
            int   loan_duration;
            float   rate;
            float   month_pay;
            char    bank_name[20];
        }cash_loan;
        struct {
            float   msrp;
            float   asp;
            float   down_pay;
            float   secu_dep;
            float   month_pay;
            int     lease_term;
        }lease;
    };
}sales_info;