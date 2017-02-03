#include <iostream>
using namespace std;

long long int no_of_step_to_zero(int value,int min)
{
	long long int count= (value-min)/5 + ((value-min)%5)/2 + (((value-min)%5))%2;
	return count;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int i;
		int min = 1000000;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<min)
				min=a[i];
		}
       // cout<<" "<<min<<endl;
		long long int count = 0;	
		long long int mincount = 19000000;
		int j;
		if(min>5)
		{
			for(int j=0;j<=4;j++)
			{	count=0;
				for(i=0;i<n;i++)
					count+=no_of_step_to_zero(a[i],min-j);
				if(count<mincount)
					mincount=count;
			}	
		}
		else
		{
			for(int j=0;j<=min;j++)
			{
				count=0;
				for(i=0;i<n;i++)
					count+=no_of_step_to_zero(a[i],min-j);
				//cout<<" "<<count<<endl;
				if(count<mincount)
					mincount=count;
				//cout<<"  "<<mincount<<endl;
			}
		}
		
		cout<<mincount<<endl;
	}
		
}