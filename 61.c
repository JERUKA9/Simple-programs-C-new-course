#include<stdio.h>
#include<stdlib.h>


int arraysum(int myarray[],int size);
{

  int sum = 0;

  for(i=0;i<6;i++)
   {

    sum+=myarray[i];


   }

   return sum;

}


int main ()
{


int mynumber array[6]={0,1,2,3,4,5};


int sum_of_array = arraysum(mynumber array,6);


printf("array sum %d",mynumber array);

return 0;


}

