/* Program which accept input from user and display below pattern.
Input : 7
Output : A b C d E f G h
*/

#include<stdio.h>
void Pattern(int);

int main()
{
	int ivalue = 0;
	printf("Enter number\n");
	scanf("%d",&ivalue);
	
	Pattern(ivalue);
	
	return 0;
}

void Pattern(int no)
{

	char ch = 'A';
	int i = 1;
	
	for(i = 1; i<= no; i++)
	{
		if(i%2 != 0)
		{
		   printf("%c ",ch);
		}
		else
		{
		    printf("%c ",ch+32);
		} 
		
		ch++;
	}
}		
	
