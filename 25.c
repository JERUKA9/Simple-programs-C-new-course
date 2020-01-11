#include<stdio.h>
#include<stdlib.h>





int main()
{

double num1;
double num2;
char op;



    printf("enter number");
    scanf("%lf",&num1);
    printf("enter operator");
    scanf(" %c",&op);
    scanf("%lf",&num2);

    if(op == '+'){

        printf("%lf",num1+num2);

    }if(op == '-'){
        printf("%lf",num1-num2);

    }

      }if(op == '/'){
        printf("%lf",num1/num2);

    }

     }if(op == '*'){
        printf("l%f",num1*num2);

    }
    if (op !='_'){
       printf("error");
    }





    return 0;




}


