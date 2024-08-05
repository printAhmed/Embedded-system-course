#include <stdio.h>

int fraction(int num1 );


int main(){
int x;
printf("the number: ");
scanf("%d", &x);
x=fraction(x);
printf("%d\n",x);

return 0;
}


int fraction(int num1 ){


 if(num1>1)	
  return num1*fraction(num1-1);

}
















