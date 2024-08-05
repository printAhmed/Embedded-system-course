#include <stdio.h>

int main(){

 
float num , product =1,avrg ;    
int no_ele ,i;


printf("enter no. of element: ");                          
scanf("%d" , &no_ele);

	for( i =0 ; i< no_ele ; i++){
	printf("number %d = " ,i+1);
	scanf("%f" , &num);

	if(num==0){continue ;}

	product *= num;
	}

	


 

printf("\nthe product is %0.2f , %d" , product , i );







return 0;
}





	
















