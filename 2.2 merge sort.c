#include<bits/stdc++.h>
void merge_sort(int a[],int low,int high)
{
    if(low<high)
    {
        mid=ceil((low+high)/2);
        merge_sort(a,low,mid-1);
    }
}
