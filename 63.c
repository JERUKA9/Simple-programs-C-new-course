#include<stdio.h>
#include<stdlib.h>



int main ()
{

 int val_array[3] ={30,40,50};

 int *pointer_array[3];

 for (int i =0 ; i<3;i++){

 pointer_array[i]= &val_array[i];

 printf("value of array %d",pointer_array[i]);


 }

return 0;


}

