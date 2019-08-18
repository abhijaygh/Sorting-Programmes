#include<bits/stdc++.h>
using namespace std;


void min_heapify(int a[],int i,int n)
{
    int l=2*i + 1;
    int r=2*i + 2;
    int smallest=i;
    if(l<n && (a[l]<a[i]))
        smallest=l;
    if(r<n && a[r]<a[smallest])
        smallest=r;
    if(smallest!=i)
    {
        swap(a[i], a[smallest]);
        min_heapify(a,smallest,n);
    }
}
int main()
{
    int a[5]={0};
    int i=5;
    int n=5;
    min_heapify(a,i,n);
}
