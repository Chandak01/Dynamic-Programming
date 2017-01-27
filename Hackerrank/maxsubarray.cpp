#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+1];
		int s[n+1];
		int i;
		s[0]=0;
		unsigned long long int maxsum=0;
		unsigned long long int noncontmaxsum=0;
		int allnegative = 1;
		int maxneg=-10001;
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
			if(a[i]>=0){
				allnegative=0;
				noncontmaxsum+=a[i];
			}
			if(a[i]<0 && allnegative==1)
			{
				if(a[i]>maxneg)
					maxneg = a[i];
			}
			//if(allnegative==0){
			s[i] = s[i-1]+a[i];
			if(s[i]<0)
				s[i]=0;
			if(maxsum<s[i])
				maxsum=s[i];
		//}
	}
	if(allnegative==0)
		cout<<maxsum<<" "<<noncontmaxsum<<endl;
	else cout<<maxneg<<" "<<maxneg<<endl;
	}
}