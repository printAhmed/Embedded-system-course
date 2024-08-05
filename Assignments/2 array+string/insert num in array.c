#include <stdio.h>

int main(){


int x[20] ;
int i, num_ele , ele_pos , ele_insert;

printf("plz enter number of elements: ");
scanf("%d", & num_ele);

	for(i=0 ; i< num_ele ; i++){

		x[i]= i+1;
		printf("%d " , x[i]);	

	}	

	printf("\nenter element to be inserted: ");
	scanf("%d", &  ele_insert);
	printf("enter location: ");
	scanf("%d", &  ele_pos);

	for(i=(num_ele+1) ; i>(ele_pos-1) ; i--){
	
		x[i] = x[i-1];

	}
	x[i] = ele_insert;


	for(i=0 ; i<(num_ele+1) ; i++){
	
 		printf("%d " , x[i]);

	}
	printf("\n");

return 0;
}





	
















