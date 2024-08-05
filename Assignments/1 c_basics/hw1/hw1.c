#include<stdio.h>

int main(){

// EX_1
printf("EX_1 printing \n");
printf("C Programming\n");

printf("\n=========================================\n");
printf("\n");

// EX_2  printed an integer that i entered
printf("EX_2 print intger with scanf\n");
int x;
printf("enter a integer: ");
scanf("%d",& x);
printf("you entered %d\n", x);

printf("\n=========================================\n");
printf("\n");

// EX_3 sum two integer that i entered
printf("EX_3 sum two int\n");
int no_1, no_2;
printf("enter two integer: ");
scanf("%d",& no_1);
scanf("%d",& no_2);
printf("the sum is %d\n", no_1+no_2);

printf("\n=========================================\n");
printf("\n");

// EX_4 multiply two floating no. i enterd
printf("EX_4 multiply two flaots no\n");
float num_1, num_2;
printf("enter two float number: ");
scanf("%f",& num_1);
scanf("%f",& num_2);
printf("the result is %f\n", num_1*num_2);



printf("\n=========================================\n");
printf("\n");


// EX_5 find the ASCII code of a character
printf("EX_5 know ASCII code of character\n");
char character;
printf("enter a Character : ");
scanf(" %c",&character);
printf("the ASCII code of this no [%c] is %d\n" , character , character);


printf("\n=========================================\n");
printf("\n");


// EX_6 swap two entered variable with third variable
printf("EX_6 swap\n");
int swap_v_1;
int swap_v_2;
int temp;

printf("enter two int number\n");
printf("frist no.");
scanf("%d",& swap_v_1 );
printf("second no.");
scanf("%d",& swap_v_2 );

temp = swap_v_1;
swap_v_1 = swap_v_2;
swap_v_2 =temp;


printf("After swapping value of first no.  : %d\n", swap_v_1 );
printf("After swapping value of second no. : %d\n", swap_v_2 );





printf("\n=========================================\n");
printf("\n");



// EX_7 swap two entered variable [without] third variable
printf("EX_7 swap without third variable\n");
int swapv1;                                                    // ex swapv1 = 1
int swapv2;						       // ex swapv2 = 2

printf("enter two int number\n");
printf("frist no.");
scanf("%d",& swapv1 );
printf("second no.");
scanf("%d",& swapv2 );


swapv1 = swapv1 + swapv2;               //  swapv1 = 1+2 = 3 
swapv2 = swapv1 - swapv2;               //  swapv2 = 3-2 = 1        this equal value of swapv1 that i entered 1
swapv1 = swapv1 - swapv2;               //  swapv1 = 3-1 = 2        this equal value of swapv2 that i entered 2
									
printf("After swapping value of first no.  : %d\n", swapv1 );
printf("After swapping value of second no. : %d\n", swapv2);






printf("\n=========================================\n");
printf("\nThank you <3\n");

return 0;
}































