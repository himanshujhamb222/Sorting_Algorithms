#include<stdio.h>
#include<stdlib.h>
void swap(int*a,int*b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void selection_sort(int*a,int n,int*comp,int*swaps)
{
	int i,min,j;
	
	for(i=0;i<n-1;i++)
	{
		min=i;
		
		for(j=i;j<n;j++)
		{
			*comp=*comp+1;
			
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		*swaps=*swaps+1;
	    swap(&a[i],&a[min]);
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
	selection_sort(a,n,&comp,&swaps);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("comp=%d\n",comp);
	printf("swaps=%d\n",swaps);
}
