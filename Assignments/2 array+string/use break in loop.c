#include <stdio.h>

int main(){

 
float x [50] , sum ,avrg ;    // with out array float num and overwrite in loop sum = sum + num instead of array
int no_ele ,i;


printf("enter no. of element: ");                          
scanf("%d" , &no_ele);

	for( i =0 ; i< no_ele ; i++){
	printf("number %d = " ,i+1);
	scanf("%f" , &x[i]);

	if(x[i]<0){break;}

	sum = sum +x[i];
	}

	

avrg = sum/i;
 

printf("\nthe avarage is %0.2f , %d" , avrg , i );







return 0;
}





	
















