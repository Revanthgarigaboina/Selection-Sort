#include<stdio.h>
main()
{
int n;
printf("please enter the value of n");
scanf("%d",&n);
int i,j,k,a[n];
printf("please enter the numbers");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			k=a[i];
			a[i]=a[j];
			a[j]=k;
		}
	}
}
printf("elements in sorted order are");
for(i=0;i<n;i++)
{
	printf("%d",a[i]);
	printf("\n");
}
}

