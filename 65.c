#include<stdio.h>
#include<stdlib.h>

int getsum(int *array_val,int size)
{

int sum =0;

for(int i;i<size;i++)
{

  sum+=array_val[i];

}
  return sum;

}




int main ()
{

int my_array[4]={13,20,30,40};



 int  mysum = getsum(my_array,4);

printf("the value of sum is %d",mysum);



return 0;


}

