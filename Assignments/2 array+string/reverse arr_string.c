#include <stdio.h>

int main(){

char str[30], revrs[30] ;
int i, length;
printf("Entar a String: ");
gets(str);

	for(i=0 ; str[i]!=0; i++);
		length = i-1;	
		printf("\nthe length of string: %d\n", length+1);

	
	
	for(i= length ; i>-1; i--){

		revrs[i]= str[length-i];
	
	}
	printf("\nReverse is: %s\n", revrs);
	
	
return 0;
}





	
















