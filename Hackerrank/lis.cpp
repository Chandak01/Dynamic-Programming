//http://www.geeksforgeeks.org/longest-monotonically-increasing-subsequence-size-n-log-n/


#include <iostream>
using namespace std;

int binarysearch(int b[],int l,int r,int key)
{
	while(l<r)
	{
		int m = l+(r-l)/2;
		if(key<=b[m])
			r=m;
		else
			l=m+1;
	}
	return r;
}

int lis(int a[],int n)
{
	if(n==0)
		return 0;
	int b[n];
	int length=1;
	b[0]=a[0];
	int i;
	for(i=1;i<n;i++)
	{
		if(a[i]<b[0])
			b[0]=a[i];
		else if(a[i]>b[length-1])
			b[length++]=a[i];
		else
		{
			b[binarysearch(b,0,length-1,a[i])]=a[i];
		}
	}
	return length;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	int i;
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<lis(a,n)<<endl;
}