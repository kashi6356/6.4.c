#include<stdio.h>

main()
{
	int a,b,c,d,e;
	printf(" enter a");
	scanf("%d",&a);
	printf(" enter b");
	scanf("%d",&b);
	printf(" enter c");
	scanf("%d",&c);
	printf(" enter d");
	scanf("%d",&d);
	printf(" enter e");
	scanf("%d",&e);
	//a,b,c,d,e
	if(a>b)
	{
	 if (a>c)
	 { 
	    if(a>d)
	    {
	       if (a>e)
		   {
		   	printf( " a is max");
			   }
			   else
			   {
			   	printf(" e is max");
				   }	
		}
		else
		{
		 if (d>e)
		 {
		 	printf(" d is max");
			 }
			 else
			 {
			 	printf("e is max");
				 }	
			
			 	
			
			
		
				
			
		}
	 	
		 }
		 else
		 {
		 	
			 }	
	}
	else
	{
		if(b>c)
		{
		  if(b>d)
		  {
		  	if(b>e)
		  	{
		  		printf("b is max");
			  }
			  else
			  {
			  	printf(" e is max");
			  }
			  }
			  else{
			  	if(d>e)
			  	{
			  		printf( " d is max");
				  }
				  else
				  {
				  	printf(" e is max");
				  }
				  
			  	
			  }	
		}
		else
		{
			
		}
	}
}
