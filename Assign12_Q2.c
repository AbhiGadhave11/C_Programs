//2. Accept number of rows and number of columns from 
//user and display below pattern.


//Input : iRow = 4 iCol = 4
//Output :
//A B C D
//a b c d
//A B C D
//a b c d

//Program Layout :

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
  int i=0,j=0;
     char ch = '\0',cd = '\0';
     for(i=1;i<=iRow;i++)
     {
     	ch ='A';
     	cd = 'a';
     	for(j=1;j<=iCol;j++)
     	{
            if((i%2) != 0)
            {
            printf("%c ",ch);
            ch++;
            }
            else
            {
            	printf("%c ",cd);
            	cd++;
            }
     	}
     	printf("\n");
     }
}
int main()
{
int iValue1 = 0, iValue2 = 0;
printf("Enter number of rows and columns");
scanf("%d %d",&iValue1, &iValue2);
Pattern(iValue1, iValue2);
return 0;
}