#include<stdio.h>

void main()
{
	/*Programmer Name:Muhammad Saad
	  Reg.No:20MDELE163          || */
  	 
	printf("***Programmer Name:Muhammad Saad***\n***Reg.No:20MDELE163***\n\n"); 
	printf("*******Out put of For Loop program*******\n");
	
	int i, j;
	i = 15;
	while(i>0)
	{
		printf("%d = ",i);
		j =i-1;
		while(j>0)
		{
			printf("#");
			j = j-1;
		}
		printf("\n");
		i = i-1;
	}

	
}                                           //End of Main

