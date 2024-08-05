#include <stdio.h>

int main(){

int dia_num;
printf("enter the daigonal number: ");
scanf("%d",& dia_num);

for(int i = 0 ; i<= dia_num ; i++){


	for(int x =i ; x <=dia_num; x++){
	
 	printf("%d ", x);


	}
	printf("\n");

}





return 0;
}

