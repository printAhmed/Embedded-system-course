#include <stdio.h>

int print_prim(int num1);

int main(){

int x, y;

printf("enter the two numbers: ");
scanf("%d %d" , &x, &y);

for(int i = x ; i<= y; i++){
	 
	x=print_prim(i);
	if(x==1)
	printf("%d " , i);
	

}
return 0;
}






int print_prim(int num1){

int i,x=0;

	

	for(i =2;i <=num1 ; i++ ){
		
		if((num1%i)  ==0  )
			x=x+1;      		// x acts like flag to know that num1 divided into it self only must x = 1
	
	}

	return x;
}













