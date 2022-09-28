#include <stdio.h>
void main()
{
	int n,i,p,j,e,k,l,f,count=0;
	int a[10];
	printf("enter no.of eleeme");
	scanf("%d",&n);
	printf("enter ele");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(j=0;j<n;j++)
	{
		printf("%d",a[j]);
	}
	printf("\n");
	f=a[0];
	for(p=0;p<n;p++)
	{
		if (a[p]==f)
		{
		count+=1;
		}
	}
	printf("%d-%d",f,count);
	printf("\n");
	for(k=1;k<n;k++)
	{
		e=a[k];
		count=0;
		if (a[k]!=f)
		{	count=0;
			printf("%d-",a[k]);
			for(l=k;l<n;l++)
			{
				if (a[l]==e)
				{
				count+=1;
				a[l]=f;
				}
			
			}	
			
		}
		if (count!=0)
		{	printf("%d",count);
			printf("\n");
		}
	}	
	
	
	
}
