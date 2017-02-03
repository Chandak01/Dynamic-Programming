#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long profit=0; //initial profit
		int maxsofar=0;
		int cost[n];
		int i;
		for(i=0;i<n;i++)
			cin>>cost[i];
		for(i=n-1;i>=0;i--)
		{
			if(cost[i]>maxsofar)
				maxsofar=cost[i];
			profit+=maxsofar-cost[i];
		}
		cout<<profit<<endl;
	}
}