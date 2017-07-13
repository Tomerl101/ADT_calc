#ifndef _CALC_H
#define _CALC_H

typedef struct Calc_t* Calc ;

typedef int (*add_func)(int, int);
typedef int (*sub_func)(int, int);
typedef int (*mul_func)(int, int);
typedef double (*div_func)(double, double);


Calc CreateCalc(add_func addFunc , sub_func subFunc ,mul_func mulFunc ,div_func divFunc);

int Add(Calc theCalculator , void* var_1 , void* var_2);

int Sub(Calc theCalculator ,int var_1 , int var_2 );

int Mult(Calc theCalculator ,int var_1 , int var_2);

double Div(Calc theCalculator ,double var_1 , double var_2);

#endif

