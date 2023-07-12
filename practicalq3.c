#include<stdio.h>
main()
{
	FILE *p;
	int m,n;
	int i;
	
	
	p=fopen("leapyears.txt","w");
	
	if(p==NULL)
	{
		printf("file is not created...\n");
	}
	else{
		printf("file created....\n");
		p=fopen("leapyears","w");
		
	printf("enter the starting year:");
	scanf("%d",&m);
	printf("enter the ending  year:");
	scanf("%d",&n);
	
	fprintf("leap year from %d from %d is",m,n);
	
	for(i=m;i<=n;i++)
	{
		if(i%4==0 || i%100==0 && i%400==0){
	    	fprintf("%d \n",i);
		}
	}
	}
	
	
	

	
	
}
