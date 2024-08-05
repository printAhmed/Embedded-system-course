#include <stdio.h>


int reverse(char arr[] , int len);


int main(){
int i ;
char x[100] ;

 

scanf("%s" , x);

for( i=0; x[i] !=0 ; i++);


reverse(x , i-1);



return 0;
}

int reverse( char arr[] , int len ){


arr[len];
printf("%c" , arr[len]);


if(len >0)
	reverse( arr , len-1);




}


















