#include<stdio.h>
void main()
{
   /*Programmer Name:Muhammad Saad
   Reg.No:20MDELE163          ||*/
   printf("Programmer Name:Muhammad Saad\nReg.No:20MDELE163\n\n");
   int N,fact,i=1;          //Declare N and fact and assign i=1
   printf("please enter a number for factorial calculation:");
   scanf("%d",&N);         //Read N
   fact = N;
   while(i<N)             //Using while loop
   {
   	fact = fact*i;       //Factorial formula
   	i++;                  //Increamentation of integer i
	}                   //End of while loop
    printf("The factorial of %d is = %d",N,fact); //Display the calculated value of factorial
}                       //End of main
