#include <stdio.h> 
int main() 
{ 	int i,j,k;
char x;
scanf("%c",&x);
char c='A';

   for(i=0;i<x-64;i++)
   { c='A';
   			
		for(j=0;j<(x-64)-i;j++)
		{
			printf("%c ",c);
			c++;
		}
						
  	    
  	    
  	    if(i>0)
  	    {
		  for(j=0;j<(4*(i))-2;j++)
  	    printf(" ");
  		}	
		 	if(i!=0)
  	    		{
  	    			c=x-i;
			  	for(j=0;j<x-64-i;j++)
					{
						printf("%c ",c);
						c--;
					}
				}	
			else 
				{	c=x-1;
				for(k=0;k<x-65;k++)
				{
				printf("%c ",c);
				c--;
					}	
				}
				
		printf("\n");
	}
	
	for(i=x-65;i>0;i--)
   { c='A';
   			
		for(j=0;j<x-64-i;j++)
		{
			printf("%c ",c);
			c++;
		}
						
  	    
  	    
  	    if(i>0)
  	    {
		  for(j=0;j<(4*(i))-2;j++)
  	    printf(" ");
  		}	
		 	if(i!=0)
  	    		{
  	    			c=x-i;
			  	for(j=0;j<x-64-i;j++)
					{
						printf("%c ",c);
						c--;
					}
				}	
			else 
				{	c=x-1;
				for(k=0;k<x-65;k++)
				{
				printf("%c ",c);
				c--;
					}	
				}
		printf("\n");
	}
	c='A';
	for(i=0;i<x-64;i++)
	{
		printf("%c ",c);
		c++;
	}
	c=c-2;
	for(i=0;i<x-65;i++)
	{
		printf("%c ",c);
		c--;
	}
	
	
   return 0;
}
