#include <stdio.h>

int main(){

char x;
printf("enter a character : ");
scanf(" %c" ,& x);

if((x >= 61 && x <=122) || (x >= 'A' && x <='Z')){
 printf("%c it is an alphabet \n" , x);
}
else{
 printf("%c it is not an alphabet \n", x);
}


return 0;
}



