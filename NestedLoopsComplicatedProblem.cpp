#include <stdio.h> 
int main() 
{ 	int i,j,k;
char c='A';

   for(i=0;i<7;i++)
   { c='A';
   			
		for(j=0;j<7-i;j++)
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
  	    			c=71-i;
			  	for(j=0;j<7-i;j++)
					{
						printf("%c ",c);
						c--;
					}
				}	
			else 
				{	c=70;
				for(k=0;k<6;k++)
				{
				printf("%c ",c);
				c--;
					}	
				}
		printf("\n");
	}
	
	
	
	for(i=6;i>0;i--)
   { c='A';
   			
		for(j=0;j<7-i;j++)
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
  	    			c=71-i;
			  	for(j=0;j<7-i;j++)
					{
						printf("%c ",c);
						c--;
					}
				}	
			else 
				{	c=70;
				for(k=0;k<6;k++)
				{
				printf("%c ",c);
				c--;
					}	
				}
		printf("\n");
	}
	c='A';
	for(i=0;i<7;i++)
	{
		printf("%c ",c);
		c++;
	}
	c=c-2;
	for(i=0;i<6;i++)
	{
		printf("%c ",c);
		c--;
	}
	
   return 0;
}
