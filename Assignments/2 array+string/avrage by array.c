#include <stdio.h>

int main(){

float x[20] ,  sum ,avg ;
int data ,i;

printf("enter the number of data: " );
scanf("%d" ,& data);


	for(i=0 ,sum=0 ; i< data ; i++){
		printf("%d. enter number: ", i+1);
		scanf("%f" , &x[i]);
		
		sum = sum + x[i];
	
	}

avg = sum /data;

printf("\nthe avarage is %0.2f" , avg);

return 0;
}





	
















