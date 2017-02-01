#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int total=0;
        if(n<=3)
        {
            cout<<0<<endl;
            continue;
        }
		long long int d[n];
		d[0]=1;
		d[1]=1;
		d[2]=1;
		d[3]=2;
		for(int i=4;i<n;i++)
		{
			d[i]=d[i-1]+d[i-4];
		}
		total = d[n-1];
		long long int p;
		int visited[total+1]={0};
		for(long long int i=2;i<=total;i++)
		{	if(visited[i]==0){
				for(long long int j=2*i;j<=total;j=j+i){
					visited[j]=1;
                }
			}
		}
        long long int prime=0;
        for(long long int i=2;i<=total;i++)
        {
        	if(visited[i]==0){
        		prime++;
        	}
        }
        if(total<=1){
			prime=0;
        }
		cout<<prime<<endl;
	}
}
