#include<stdio.h>
#include<stdlib.h>

void swap(int*a,int*b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
	
void bubble_sort(int*a,int n,int*comp,int*swaps)
{
	int i,j;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			*comp=*comp+1;
			if(a[j]>a[j+1])
			{
				*swaps=*swaps+1;
				swap(&a[j],&a[j+1]);
			}
		}
	}
}
int main()
{
	int n,i,comp=0,swaps=0;
	int*a;
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble_sort(a,n,&comp,&swaps);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n comp=%d\n,swaps=%d\n",comp,swaps);
}
		

				
