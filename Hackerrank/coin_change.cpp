#include <iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[m+1];
	long long int ways[n+1][m+1]; //ways[i][j] will store no of ways to change i amount by using first j coins
	for(int i=1;i<=m;i++)
		cin>>a[i];
	//initializing
	for(int i=1;i<=m;i++)
		//when amount to be chaged is also 0 then there will always be 1 way
		ways[0][i]=1;
	for(int i=1;i<=n;i++)
		//when no coins used =0 then there will be no ways 
		ways[i][0]=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			ways[i][j] = ways[i][j-1];
			if(i>=a[j])
			{
				ways[i][j]=ways[i][j]+ways[i-a[j]][j];
			}
		}
	}
	cout<<ways[n][m]<<endl;
}