#include<stdio.h>
#include<stdlib.h>



int main()
{

  FILE * fpointer = fopen("employees.txt","a");



  fclose(fpointer);


fprintf(fpointer,"Jim,Salesman\Pam reprecionist\Oscar Acounting\Kelly,Customer Service");




    return 0;




}


