#include <stdio.h>

int main(){


int x[20];
int i , ele_num, srch_num;

printf("enter number element: ");
scanf("%d",&  ele_num);

for(i=0 ; i<ele_num ; i++){

	scanf("%d", &x[i]);

}

printf("\nenter the search number: ");
scanf("%d",& srch_num);


for(i=0 ; x[i]-srch_num !=0 ; i++);



//printf("%d\n",i);

if(x[i]==srch_num){
	
printf("number found at location = %d\n" , i+1);		
	
		
}
else{
printf("number not found\n");}


return 0;
}





	
















