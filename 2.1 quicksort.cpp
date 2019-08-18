#include<iostream>
using namespace std;

partition(int a[],int low,int high)
{
    int pivot=a[low];
    int left=low+1;
    int right=high;
    while(left<=right)
    {
        while(left<=high && a[left]<=pivot)
        {
            left=left+1;
        }
        while(a[right]>pivot)
        {
            right-=1;
        }
        if(left<right)
            swap(a[left],a[right]);
    }
    swap(a[right],a[low]);
    return right;
}
void quick(int a[],int low,int high)
{
    int loc;
    if(low<high)
    {
        loc=partition(a,low,high);
        quick(a,low,loc-1);
        quick(a,loc+1,high);
    }
}
int main()
{
    int n;
    cout<<"enter the size of array = ";
    cin>>n;
    int *a=new int[n];
    quick(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
    return 0;
}
