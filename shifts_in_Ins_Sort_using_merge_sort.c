#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
unsigned long long int inver;
void Merge(int*a,int p,int q,int r)
{
        int n1=q-p+1;
        int n2=r-q;
        int i,j,k;
        int*L=(int*)malloc(sizeof(int)*(n1+1));
        int*R=(int*)malloc(sizeof(int)*(n2+1));
        L[n1]=10000001;
        R[n2]=10000001;
        for(i=0;i<n1;i++)
            {
                L[i]=a[p+i];
            
            }
        for(i=0;i<n2;i++)
            {
                   R[i]=a[q+i+1];
            }
    i=0;
    j=0;
        for(k=p;k<=r;k++)
            {
                if(L[i]<=R[j])
                    {
                        a[k]=L[i];
                        i=i+1;
                     }
                else
                    {
                        a[k]=R[j];
                        j=j+1;
                        inver=inver+n1-i;
                    }
            }
         
}
void Merge_sort(int*a,int p,int r)
    {
        if(p<r)
      {
        int q=(p+r)/2;
        Merge_sort(a,p,q);
        Merge_sort(a,q+1,r);
        Merge(a,p,q,r);
      }
    }
int main() 
{
    int queries,n;
    int*a;
    scanf("%d",&queries);
    for(int i=0;i<queries;i++)
        {
            inver=0;
            scanf("%d",&n);
            a=(int*)malloc(sizeof(int)*n);
            for(int j=0;j<n;j++)
                {
                    scanf("%d",&a[j]);
                }
            Merge_sort(a,0,n-1);
            
            printf("%llu\n",inver);
        }
}