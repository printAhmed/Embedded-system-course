#include <stdio.h>

int main(){

char x;

printf("enter character :");
scanf(" %c" , &x);

switch(x){
case 'a': 
case 'A':
case 'e':
case 'E':
case 'i':
case 'o':
case 'O':
case 'u':
case 'U':
{
 printf("this character [ %c] is vawel\n" , x);
}break;
default:{
 printf("this character [ %c] is consonant\n", x);
}break;

}
return 0;
}
