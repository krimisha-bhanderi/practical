#include<stdio.h>
main()
{
	int i,j,n;


	printf("enter the array size:");
	scanf("%d",&n);
		int a[n][n];
	printf("enter the array elements:");
	
	for(i=0;i<n;i++){
	
		for(j=0;j<n;j++){
	
		printf("enter a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
}
	}

    printf("the cube of all elements is:\n");
	for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				a[i][j]=a[i][j]*a[i][j]*a[i][j];
				 printf("%d\n",a[i][j]);
			}
		}
	}
