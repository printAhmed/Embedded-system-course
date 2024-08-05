#include <stdio.h>

int main(){

int x , y=1;
printf("enter int number: ");
scanf("%d" ,& x);



if(x==0){
    printf("the factorial of 0 equal 1\n");
}
else if(x<0){
  	printf("Error!! factorial doesnt exist for negative\n");
}
else{
	for(int i =1 ; i<=(x) ; i++)
 	{
  		y=y*i;	

 	}
	printf("the sum %d\n" , y);
}
return 0;
}



