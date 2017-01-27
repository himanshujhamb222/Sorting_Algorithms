#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int*a,int*b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
    }
int part(int*a,int p,int r,int n)
{
     int x=a[r];
     int i=p-1;
     int j,k;
     for(j=p;j<=r-1;j++)
         {
             if(a[j]<=x)
                 {
                    i=i+1;
                    swap(&a[i],&a[j]);
                 }
         }
      swap(&a[i+1],&a[r]);
   
    
    
      return i+1;
      
    
}
void quicksort(int*a,int p,int r,int n)
    {  
       
        if((r-p)>=1)
       {   int k;
           int q=part(a,p,r,n);
             for(k=0;k<n;k++)
          {
                printf("%d ",a[k]);
          } 
           printf("\n");
           quicksort(a,p,q-1,n);
           quicksort(a,q+1,r,n);
        }
    }

int main() 
{
     int n,i;
     int*a;
    scanf("%d",&n);
    a=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    
    quicksort(a,0,n-1,n);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
