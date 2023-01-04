 /*Matrix multiplication using dynamic memory allocation*/
#include <stdio.h>
#include<stdlib.h>
/* Main Function */
int main()
{
int **ptr1, **ptr2, **ptr3;
int row1, col1, row2, col2;
int i, j, k;

printf("\n nr rows for the first matrix : ");
scanf("%d", &row1);
printf("\n nr columns for the first matrix : ");
scanf("%d", &col1);
printf("\n nr rows for the second matrix : ");
scanf("%d", &row2);
printf("\n nr columns for the second matrix : ");
scanf("%d", &col2);
if(col1 != row2)
{
	printf("\nCannot multiply ");
	return(0);
}
ptr1 = (int **) malloc(sizeof(int *) * row1);
ptr2 = (int **) malloc(sizeof(int *) * row2);

for(i=0; i<row1; i++)
 	ptr1[i] = (int *)malloc(sizeof(int) * col1);
for(i=0; i<row2; i++)
 	ptr2[i] = (int *)malloc(sizeof(int) * col2);
for(i=0; i<row1; i++)
 	ptr3[i] = (int *)malloc(sizeof(int) * col2);

printf("\n elements of first matrix :\n");
for(i=0; i< row1; i++)
{
	for(j=0; j< col1; j++)
	{
		printf("\tA[%d][%d] = ",i, j);
		scanf("%d", &ptr1[i][j]);
	}
}

printf("\n elements of second matrix :\n");
for(i=0; i< row2; i++)
{
	for(j=0; j< col2; j++)
	{
		printf("\tB[%d][%d] = ",i, j);
		scanf("%d", &ptr2[i][j]);
	}
}

for(i=0; i < row1; i++)
{
	for(j=0; j < col1; j++)
	{
		ptr3[i][j] = 0;
 		for(k=0; k<col2; k++)
		ptr3[i][j] = ptr3[i][j] + ptr1[i][k] * ptr2[k][j];
	}
}

printf("\n\matrix :");
for(i=0; i< row1; i++)
{
	printf("\n\t\t\t");
	for(j=0; j < col2; j++)
	printf("%d\t", ptr3[i][j]);
}
return 0;
}
