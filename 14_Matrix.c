/* Perform 2D matrix array */

#include<stdio.h>

main()
{
	int m1[3][3]i,j;
	
	//Read Matrix1
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n\n\t Input array element m1[%d][%d] : ",i, j);
			scanf("%d",&m1[i][j]);		
		}
	}
	
	/
	//Print Matrix1
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",m1[i][j]);	
		}
		printf("\n");
	}
	
}
