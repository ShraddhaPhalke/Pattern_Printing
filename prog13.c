/* Program which accept input from user and display below pattern.
Input : 4 4
Output :  
           1 1 1 1
           2 * * 2
           3 * * 3
           4 4 4 4
*/

#include<stdio.h>

void Pattern(int, int);

int main()
{

	int value1=0, value2=0;
	
	printf("Enter how many rows and columns\n");
	scanf("%d%d",&value1,&value2);
	
	Pattern(value1,value2);
	
	return 0;
}

void Pattern(int row ,int col)
{
	int i = 0, j = 0;
	
	for(i = 1; i <= row; i++)
	{
		for(j= 1; j <=	col; j++)
		{
			if(i==1 || i== row || j==1 || j==col)
			{
			  printf("%d ",i);
			 }
			 else
			 {
			   printf("* ");
			  }
		}   
		printf("\n");
	}
}


		
