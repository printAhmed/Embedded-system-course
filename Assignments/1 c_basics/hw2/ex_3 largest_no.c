#include<stdio.h>

int main(){

float x , y ,z;
printf("enter three float numbers: ");
scanf("%f  %f  %f" , &x,&y ,&z);


if(x>z){
 
   if(x>y){
	printf("%0.2f is largest\n", x);
   }
   else{
	printf("%0.2f is largest\n" , y);
   }	
}
else if(z > y){
	printf("%0.2f is the largest\n", z);
}
else if(y>z){
 	printf("%0.2f is the largest\n" ,y);
}







return 0;
}
