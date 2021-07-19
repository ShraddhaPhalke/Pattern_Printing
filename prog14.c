/* Program which accept input from user and display below pattern.
Input : 4 4
Output :  
          1
          2 3
          4 5 6
          7 8 9 10         
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
	int i = 0, j = 0, k = 1;
	
	for(i = row; i >= 1; i--)
	{
		for(j= col; j >=1; j--)
		{
			if(i <= j)
			{
			  printf("%d ",k);
			  k++;
			 }
			 else
			 {
			   printf(" ");
			  }
			
		}   
		printf("\n");
	}
}


		
