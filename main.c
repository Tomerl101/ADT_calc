#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

int result=0;
    int addition(void* x,void* y)
    {
       result= *((int*)x)+*((int*)y);
       return result;
    }

    int Subtract(int x,int y)
    {
      result= x-y;
       return result;
    }

    int Multi (int x,int y)
    {
       result= x*y;
       return result;
    }

    double Division (double x,double y)
    {
      result= x/y;
       return (double)result;
    }


int main()
{
    printf("enter x and y numeric values and choose between + - * / operations\n");
    int x,y;
    void* x1, *x2;
    char op;
    Calc c = CreateCalc(addition,Subtract,Multi,Division);
    do{
        //printf("x");
        scanf("%d",&x);

        scanf("%c",&op);
        //printf("y");
        scanf("%d",&y);
        //printf("\n1.addition\n2.Subtract\n3.multipaction\n4.division\n0.quit\n");
        switch(op)
        {
        case '+':
            printf("%d+%d=%d\n",x,y,Add(c,(void*)&x,(void*)&y));
            break;
        case '-':
            printf("%d-%d=%d\n",x,y,Sub(c,x,y));
            break;
        case '*':
            printf("%d*%d=%d\n",x,y,Mult(c,x,y));
            break;
        case '/':
            printf("%d/%d=%d\n",x,y,Div(c,x,y));
            break;
        case 0:
            printf("Good Bye!\n");
        }
    }while(1);
return 0;
}
