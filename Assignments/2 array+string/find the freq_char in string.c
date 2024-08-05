#include <stdio.h>

int main(){

char str[30] ;
char ch_feq;
int i ,x=0;
printf("Entar a String: ");
gets(str);


printf("Enter a character to find frequency: ");
scanf(" %c",&ch_feq);



	for(i=0 ; str[i]!=0; i++){

			
			if(str[i]==ch_feq){

				x=x+1;
			}
	


	}
	printf("\nfrequency of %c is %d\n", ch_feq , x);




return 0;
}





	
















