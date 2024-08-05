#include <stdio.h>

int main(){

int x;
printf("enter your number to know it is [even] or [odd] : ");
scanf("%d",& x);

printf("this number [%d] is : " , x);
printf((x%2)? "odd\n" :"even\n" );

return 0;
}
