#include <stdio.h>

int main(){

 
float a[2][2] , b[2][2]; 
int i , y ;

printf("Enter 4 elements for matrix_1\n");
for(i=0 ; i<2 ; i++){
	for(y=0 ; y<2 ; y++){
	printf("enter a%d%d :",i+1,y+1);
	scanf("%f" , &a[i][y]);

	}	
	
}
printf("\nEnter 4 elements for matrix_2\n");
for(i=0 ; i<2 ; i++){
	for(y=0 ; y<2 ; y++){
	printf("enter b%d%d :",i+1,y+1);
	scanf("%f" , &b[i][y]);

	}	
	
}
printf("\nthe out put the sum\n");
for(i=0 ; i<2 ; i++){
	for(y=0 ; y<2 ; y++){
	
	printf("%0.1f  " , a[i][y]+b[i][y]);
	}
	printf("\n");
		
	
}

return 0;
}





	
















