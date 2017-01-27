#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i;
	int a[n];
	int candies[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		candies[i]=1; //giving everyone a candy
	}
	long long int total_candies = n;
	for(i=1;i<n;i++)
	{
		if(a[i]>a[i-1])
		{
			total_candies = total_candies-candies[i];
			candies[i]=candies[i-1]+1;
			total_candies += candies[i];
		}
	}
	for(i=n-1;i>0;i--)
	{
		if(a[i-1]>a[i] && candies[i-1]<=candies[i])
		{	
			total_candies = total_candies-candies[i-1];
			candies[i-1]=candies[i]+1;
			total_candies += candies[i-1];
		}
	}
	cout<<total_candies<<endl;

}