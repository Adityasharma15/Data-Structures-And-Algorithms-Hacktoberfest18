#include<stdio.h>
#include<conio.h>

int main()
{
       int sparseMatrix[50][50];
       int r,c;
    printf("Enter row and columns: ");
    scanf("%d %d",&r,&c);

    printf("\nEnter Matrix : \n");
    for (int a=0; a<r; a++)
    {
	for (int b=0; b<c; b++)
	   { scanf(" %d", &sparseMatrix[a][b]);}
    }

    printf("\nGiven Matrix is : \n");
      for (int x=0; x<r; x++)
    {
	for (int y=0; y<c; y++)
	    printf("%d ", sparseMatrix[x][y]);

	printf("\n");
    }

    int size = 0;
    for (int i = 0; i < r; i++)
     {	for (int j = 0; j < c; j++)
	  {  if (sparseMatrix[i][j] != 0)
		size++;
	  }
     }

    int Matrix[3][50];


    int k = 0;
    for (int p = 0; p < r; p++)
      {	for (int q = 0; q < c; q++)
	 {   if (sparseMatrix[p][q] != 0)
	    {
		Matrix[0][k] = p;
		Matrix[1][k] = q;
		Matrix[2][k] = sparseMatrix[p][q];
		k++;
	    }
	 }
      }

    printf("\nSparse Matrix: \n");

    for (int m=0; m<3; m++)
    {
	for (int n=0; n<size; n++)
	    printf("%d ", Matrix[m][n]);

	printf("\n");
    }

    return 0;
}
