#include <stdio.h>

int main(){

char x;
char ch[10] = {'a' ,'A' ,'e','E' ,'i','I' ,'o','O' ,'u','U' };
printf("enter character :");
scanf(" %c" , &x);



for(int i = 0 ; i<=9 ; i++)
{
 if(x == ch[i]){
  printf("this character [%c] is vowel\n" , x);
  break;
 }
 else{
  printf("this character [%c] is consonant\n" , x);
  break;
 }
 
}

return 0;
}
