#include <iostream>
using namespace std;
void  merge(int a[],int l,int m,int h)
{
	int i = l;
	int j = m+1;
	int c[h-l+1][2];
	int k=0;
	while(i<=m && j<=h)
		{
			if(a[2*i]<=a[2*j])
			{
				c[k][0] = a[i*2];
				c[k][1] = a[i*2+1];
				i++;
				k++;
			}
			else{
				c[k][0] = a[j*2];
				c[k][1] = a[j*2+1];
				j++;
				k++;
			}
		}
	if(i>m)
	{
		while(j<=h)
		{
			c[k][0] = a[j*2];
			c[k][1] = a[j*2+1];
			j++;
			k++;
		}
	}
	else if(j>h)
	{
		while(i<=m){
			c[k][0] = a[i*2];
			c[k][1] = a[i*2+1];
			i++;
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		a[2*l] = c[i][0];
		a[2*l+1]=c[i][1];
		l++;
	}
}

void sort(int a[],int l,int h)
{
	if(l<h)
	{
		int m;
		m = l+(h-l)/2;
		sort(a,l,m);
		sort(a,m+1,h);
		merge(a,l,m,h);
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n][2];
	int p,q;
	for(int i=0;i<n;i++)
	{
		cin>>p>>q;
		arr[i][1] = i;
		arr[i][0]=p+q;
	}

	int *p_arr = arr[0];
	sort(p_arr,0,n-1);
	for(int i=0;i<n;i++)
		cout<<*(p_arr+2*i+1)+1<<" ";
}