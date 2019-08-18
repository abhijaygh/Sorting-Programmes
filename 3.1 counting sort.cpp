/*

function countingSort(array, k) is
  count ← new array of k zeros
  for i = 1 to length(array) do
    count[array[i]] ← count[array[i]] + 1
  for i = 2 to k do
    count[i] ← count[i] + count[i - 1]
  for i = length(array) downto 1 do
    output[count[array[i]]] ← array[i]
    count[array[i]] ← count[array[i]] - 1
  return output
  */


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *p=new int[n];
    int *u=new int[n];
    for(int i=0;i<n;i++)
    {
        p[i]=rand()%10;
    }
    cout<<"the sorted array ="<<endl;

    int *m=new int[n];
    for(int i=0;i<n;i++)
    {
        m[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        ++m[p[i]];
    }

    for(int i=1;i<n;i++)
    {
        m[i]+=m[i-1];
    }

    for(int i=0;i<n;i++)
    {
        u[m[p[i]]-1]=p[i];
        --m[p[i]];
    }

    for(int i=0;i<n;i++)
    {
        p[i]=u[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<endl;
    }
    return 0;
}
