#include <stdio.h>


int pow_(int base , int power );


int main(){

int x,y, z;
printf("enter the base number: ");
scanf("%d", &x);
printf("enter the power (int) number: ");
scanf("%d", &y);

z= pow_(x , y );
printf("%d^%d = %d\n", x,y,z);

return 0;
}



int pow_(int base , int power ){

   		
	if(power>0){

	 return base*pow_(base, (power-1));
	} 
	else{
	return 1;
	}

	
}

















