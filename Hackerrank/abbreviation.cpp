//pass 1: Make sure all sequence of upper case letters in string s1 occur in the right order in string s2
//pass 2: Make sure all sequence of letters in string s2 occur in the right order in string s1


#include <iostream>
#include <string.h>
using namespace std;

int ainb(const string& a,const string& b)
{
	int l1 = a.size();
	int l2 = b.size();
	int i,j;
	i=0;
	j=0;
	//cout<<"l1 l2 "<<l1<<" "<<l2<<endl;
	int notfound = 1;
	while(i<l1 && j<l2){
		//cout<<"i j "<<i<<j<<endl;
		notfound = 1;
		if((int(a[i])>=65) && (int(a[i])<=90))
		{
			if(j>=l2){
		//		cout<<"this "<<endl;
				return 0;
			}
			while(notfound==1 && j<l2)
			{
				if(a[i] == b[j]){
				    notfound = 0;
					i++;
					j++;
			//		cout<<"j1 "<<j<<endl;
				}

				else{ j++;}
		//		cout<<"j2 "<<j<<endl;}
			}
		}
		else{ i++;}
	}
	for(int k=i;k<l1;k++)
	{
		if(((int(a[k])>=65) && (int(a[k])<=90))&&(j>=l2))
			return 0;

	}
	return 1;
}

int capitalize(int k)
{
	return k - 32;
}

int bina(const string& a,const string& b)
{
	int l1 = a.size();
	int l2 = b.size();
	int i,j;
	i=0;
	j=0;
	int notfound = 1;
	while(i<l1 && j<l2)
	{
		if((a[i]==b[j]) || (int(b[j])==capitalize(int(a[i]))))
		{
			//cout<<" c "<<capitalize(int(a[i]))<<" "<<int(b[j])<<endl;
			i++;
			j++;
		}
		else i++;
	if(i>=l1 && j<l2)
		return 0;
	}
	return 1;
}


int main()
{
	int q;
	cin>>q;
	//cout<<" q "<<q;
	while(q--){
		string s1,s2;

		cin>>s1;
		cin>>s2;
		cout<<"ainb "<<ainb(s1,s2)<<endl;
		if(ainb(s1,s2) && bina(s1,s2)){
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
	}
}