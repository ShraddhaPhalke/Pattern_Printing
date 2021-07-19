/* Program which accept input from user and display below pattern.
Input : 4 5
Output :  1 2 3 4 5 
	  1 2 3 4 5
	  1 2 3 4 5
	  1 2 3 4 5
*/

#include<stdio.h>
void Pattern(int,int);

int main()
{
	int irow = 0, icol=0;
	printf("Enter number of rows and columns\n");
	scanf("%d%d",&irow,&icol);
	
	Pattern(irow,icol);
	
	return 0;
}

void Pattern(int irow,int icol)
{

	int i = 1, j = 1;
	
	for(i = 1; i <= irow; i++)
	{
		for(j= 1; j <= icol; j++)
		{
			printf("%d ",j);
		}
		printf("\n");	
	
	}
}		
	
