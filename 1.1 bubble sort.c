#include<time.h>
#include<stdio.h>
#include<malloc.h>
int main()
{
    clock_t start,end;
    long long int n=130000;
    long long int i,j;
    long long int *p;
    p=(long long int*)malloc(n*sizeof(long long int));
    for(i=0;i<n;i++)
    {
        p[i]=rand();
    }
    start=clock();
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(p[j]>p[j+1])
            {
                int temp;
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
    end=clock();
    float t=(end-start)/CLOCKS_PER_SEC;
    for(i=0;i<n;i++)
        printf("%d\n",p[i]);
    free(p);
    printf("\nt= %f",t);
    return 0;
}
