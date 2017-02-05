/* input format:
					first line contains n, length of array
					second line contains n comma separated values
 	output format :
 					max sum of contiguous elements
*/
#include <iostream>
using namespace std;

int max(int a,int b,int c)
{
	if(a<=b)
	{
		if(b<=c)
			return c;
		return b;
	}
	else{
		if(a<=c)
			return c;
		return a;
	}
}

int maxcrosssum(int a[],int l,int m,int h)
{
	int sum=a[m];
	int lsum = a[m];
	int i;
	for(i=m-1;i>=l;i--)
	{
		sum+=a[i];
		if(sum>=lsum)
			lsum=sum;
	}
	sum = a[m+1];
	int rsum = a[m+1];
	for(i=m+2;i<=h;i++)
	{
		sum+=a[i];
		if(sum>=rsum)
			rsum=sum;
	}
	return lsum+rsum;
}

int maxsubarray(int a[],int l,int h)
{
	if(l==h)
		return a[l];
	int m = l+(h-l)/2;
	return max(maxsubarray(a,l,m),maxsubarray(a,m+1,h),maxcrosssum(a,l,m,h));
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	int i;
	for(i=0;i<n;i++)
		cin>>a[i];
	int ans = maxsubarray(a,0,n-1);
	cout<<ans<<endl;
}