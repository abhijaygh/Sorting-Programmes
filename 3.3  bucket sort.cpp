#include <bits/stdc++.h>
using namespace std;

void bucketSort(float A[], int n)
{
    vector<float> b[n];
    for (int i=0; i<n; i++)
    {
       int bi = n*A[i];
       b[bi].push_back(A[i]);
    }

    for (int i=0; i<n; i++)
       sort(b[i].begin(), b[i].end());

    int pos=0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < b[i].size(); j++)
          A[pos++] = b[i][j];
}

int main()
{
    float A[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
    int n = sizeof(A)/sizeof(A[0]);
    bucketSort(A, n);

    cout << "Sorted Array is \n";
    for (int i=0; i<n; i++)
       cout << A[i] << " ";
    return 0;
}
