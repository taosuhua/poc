/*
    1992年美国公民个人所得税计算器
*/
#include "stdio.h"
#define RULE_NUM    5
#define UNITED_STATES   0
#define CHINA           1

#if UNITED_STATES
const float tax_rule[][2] = {
    {0,0.15},
    {23350,0.28},
    {56550,0.31},
    {117950,0.36},
    {256500,0.396}
};
#endif

#if CHINA
const float tax_rule[][2] = {
    {0,0},
    {5000,0.03},
    {8000,0.1},
    {17000,0.2},
    {30000,0.25},
    {40000,0.3},
    {60000,0.35},
    {85000,0.45}  
};
#endif


/* 计算最小纳税额 */
double min_tax(const float (*tax_table)[2],float income){
    int i;
    double minimize_tax = 0;
    for(i = 0;i < RULE_NUM - 1; i++){
        if(income <= tax_table[i + 1][0]){
            minimize_tax += 0;
            return minimize_tax;
        }else{
            minimize_tax += (tax_table[i + 1][0] - tax_table[i][0])*tax_table[i][1];
        }
    }
    return minimize_tax;
};

static double tax_calculate(const float (*tax_table)[2],double (*minimal_tax)(const float (*)[2],float),float income){
    int i;
    double total_tax;
    for(i = RULE_NUM - 1; i >= 0; i--){
        if(income > tax_table[i][0]){
            total_tax = (minimal_tax)(tax_table,income) + (income - tax_table[i][0])*tax_table[i][1];
            return total_tax;
        }
    }
    return 0;
}

int main(void){
    float myincome;
    double my_mintax,mytax;
    scanf("%f[\n]",&myincome);
    my_mintax = min_tax(tax_rule,myincome);
    printf("Minimal_Tax is %.2f\n",my_mintax);
    mytax = tax_calculate(tax_rule,min_tax,myincome);
    printf("My_Tax is %.2f\n",mytax);
}