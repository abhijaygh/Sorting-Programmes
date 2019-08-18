/*C PROGRAM FOR SELECTION SORT*/

#include<bits/stdc++.h>

using namespace std;
int main()
{
    clock_t start,end;
    long long int n;
    cin>>n;
    long long int i,j,pos,temp;
    long long int *p;
    p=(long long int*)malloc(n*sizeof(long long int));
    for(i=0;i<n;i++)
    {
        p[i]=rand();
    }
    start=clock();
    for (i=0;i<(n-1);i++)
    {
        pos=i;
        for (j=i+1;j<n;j++)
        {
          if(*(p+pos)>*(p+j))
            pos=j;
        }
        temp=*(p+i);
        *(p+i)=*(p+pos);
        *(p+pos)=temp;
    }
    end=clock();
    for(i=0;i<n;i++)
    {
        cout<<p[i];
        cout<<endl;
    }
    double t=((double)(end-start))/CLOCKS_PER_SEC;
    printf("%lf",t);
}
//http://www.shodor.org/interactivate/activities/SimplePlot/
