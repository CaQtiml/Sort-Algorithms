#include "stdio.h"
#include "iostream"
#include "algorithm"
#include "stdlib.h"
using namespace std;
int main()
{
	int n;
	cin >> n;
	int *A = (int*)calloc(n,sizeof(int)); //declare array //malloclab.cpp
	for(int i=0;i<n;i++) cin >> A[i];
	for(int i=1;i<=n-1;i++)
	{
		int value = A[i];
		int flag = i;
		while(flag>0 and A[flag-1]>value)
		{
			A[flag]=A[flag-1];
			flag-=1;
		}
		A[flag]=value;
	}
	for(int i=0;i<n;i++) cout << *(A+i) << "\n";
	free(A);
}