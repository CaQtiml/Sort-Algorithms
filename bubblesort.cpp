#include "stdio.h"
#include "iostream"
#include "algorithm"
#include "stdlib.h"
using namespace std;
int a[100];
template<typename T>
void bubblesort(T a[] , T n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1]) swap(a[j],a[j+1]);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    bubblesort(a,n);
    for(int i=0;i<n;i++)
    {
        cout << a[i] << "\n";
    }
}
