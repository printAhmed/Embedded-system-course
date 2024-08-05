#include<stdio.h>

int main(){

float x ;
printf("enter float number: ");
scanf("%f",& x);

if(x==0)
  printf("%.0f it is zero \n", x);

if(x>0)
  printf("%f this number is postive \n", x);

else if(x<0)
  printf("%f this number is  negative \n", x);


return 0;
}
