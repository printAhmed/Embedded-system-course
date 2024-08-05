#include <stdio.h>

int main(){


int row , colu , i,y;
int x[20][20] , trans[20][20];

printf("Enter [row] & [column] of amatrix\n");
printf("row: ");
scanf("%d", &row);
printf("column: ");
scanf("%d", &colu);

printf("\nenter matrix element\n");
for(i=0 ; i<row; i++){
	for(y=0 ; y<colu; y++){
	printf("enter element x%d%d: ",i+1,y+1);	
	scanf("%d" ,& x[i][y]);
	}
	
}
printf("\nthe transpose matrix\n");
for(i=0 ; i<colu; i++){
	for(y=0 ; y<row; y++){
	trans[y][i] = x[y][i]; 
	
	printf("%d " , trans[y][i]);
	}
	printf("\n");
}


return 0;
}





	
















