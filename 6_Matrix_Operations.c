/* WAP to make addition, Subtraction and multiplication of two matrix 
using 2-D Array. */

#include<stdio.h>

main()
{
	int m1[2][2],m2[2][2], m3[2][2],i,j,k;
	
	//Read Matrix1
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n\n\t Input array element m1[%d][%d] : ",i, j);
			scanf("%d",&m1[i][j]);		
		}
	}
	
	//Read Matrix2
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n\n\t Input array element m2[%d][%d] : ",i, j);
			scanf("%d",&m2[i][j]);		
		}
	}
	
	//Print Matrix1
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d",m1[i][j]);	
		}
		printf("\n");
	}
	
	//Print Matrix2
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d",m2[i][j]);	
		}
		printf("\n");
	}
	
	//Addition of two matrices
	printf("\n\n\t ................After Addition ....................\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d",m1[i][j]+m2[i][j]);
		}
		printf("\n\n");
	}
	
	//Subtraction of two matrices
	printf("\n\n\t ................After Subtraction ....................\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d",m1[i][j]-m2[i][j]);
		}
		printf("\n\n");
	}
	
	//Subtraction of two matrices
	printf("\n\n\t ................After Multiplication ....................\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			m3[i][j]=0;
			for(k=0;k<j;k++)
			{
				m3[i][j]+=m1[i][k]*m2[k][j];
			}
		}
		
	}
	
	//Print Matrix2
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d",m3[i][j]);	
		}
		printf("\n");
	}
	
	
	
	
	
}
