#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

 struct Calc_t
{
    add_func addFunc;
    sub_func subFunc;
    mul_func mulFunc;
    div_func divFunc;
};

Calc CreateCalc(add_func addF , sub_func subF ,mul_func mulF ,div_func divF)
{
    Calc c=(Calc)malloc(sizeof(struct Calc_t));
    if(!c)
        return NULL;
    c->addFunc= addF;
    c->subFunc= subF;
    c->mulFunc= mulF;
    c->divFunc= divF;
    return c;
}

int Add(Calc theCalculator , void* var_1 ,void* var_2)
{
    return theCalculator->addFunc(var_1,var_2);
}

int Sub(Calc theCalculator ,int var_1 , int var_2 )
{
    return theCalculator->subFunc(var_1,var_2);
}

int Mult(Calc theCalculator ,int var_1 , int var_2)
{
    return theCalculator->mulFunc(var_1,var_2);
}

double Div(Calc theCalculator ,double var_1 , double var_2)
{
    return theCalculator->divFunc(var_1,var_2);
}
