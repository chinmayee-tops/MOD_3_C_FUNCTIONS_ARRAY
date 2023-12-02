//WAP to perform Palindrome number using for loop and function.

#include<stdio.h>

main()
{
	int n,r,sum=0,temp;    
	printf("\n\n\t Input a number : ");    
	scanf("%d",&n);
	    
	temp=n;    
	
	for(;n>0;n=n/10) 
	{    
		r=n%10;    
		sum=(sum*10)+r;    
	}    

	if(temp==sum)    
		printf("\n\n\t Palindrome number.. "); 
		   
	else    
		printf("\n\n\t Not palindrome...");   
}
