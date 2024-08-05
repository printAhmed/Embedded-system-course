#include <stdio.h>

int main(){

int x , y=0;
printf("enter int number: ");
scanf("%d" ,& x);

for(int i =1 ; i<=(x) ; i++)
 {
  y=y+i;	

 }
printf("the sum %d\n" , y);

return 0;
}



