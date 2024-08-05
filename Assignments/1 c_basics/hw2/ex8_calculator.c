#include <stdio.h>

int main(){

float x , y;
char op;
printf("welcome plaese enter your operation (* , /, + , -) :");
scanf(" %c",& op);
printf("please enter your two numbers: ");
scanf("%f %f", &x,&y);

switch(op){


	case '*':{
 		printf("%f %c %f = %f\n" , x , op , y , x*y);
	}break;

	case '/':{
 	printf("%f %c %f = %f\n" , x , op , y,  x/y);
	}break;

	case '+':{
 	printf("%f %c %f = %f\n" , x , op , y,  x+y);
	}break;

	case '-':{
 	printf("%f %c %f = %f\n" , x , op , y,  x-y);
	}break;

	default:{
	printf("error ocured\n");
	}
}


return 0;
}



