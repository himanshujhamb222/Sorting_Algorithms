#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int*a,int n,int*comp)
{
	int key,j,i;
	
	for(j=1;j<n;j++)
	{
		key=a[j];
		
		i=j-1;
		*comp=*comp+1;
		while(i>=0 && a[i]>key)
		{
			a[i+1]=a[i];
			i=i-1;
		}
		
		a[i+1]=key;
	}
}
int main()
{
	int n,i,comp=0;
	int*a;
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertion_sort(a,n,&comp);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n comp= %d\n",comp);
	
}
