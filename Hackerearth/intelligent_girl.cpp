/*
Soumika has a string S and its starting index is 1. The string S consists of characters from 1−9.
 As she is very intelligent, she wants to test his brother Vinay Tendulkar. She asked her brother Vinay Tendulkar
 to count the number of even numbered characters ( i.e 2,4,6,8 ) for every index i (1≤i≤|S|). For an index i, the 
result should be calculated from i to the end of the string. As Vinay doesn't know about programming, he wants you to help him find the solution.

Input:
First line contains a string S.

Output:
Print |S| space-separated integers,the result of every index.

Constraints:1 ≤ |S| ≤ 10^4

SAMPLE INPUT 
574674546476
SAMPLE OUTPUT 
7 7 7 6 5 5 4 4 3 2 1 1


Time Limit:	1.0 sec(s) for each input file.
Memory Limit:	256 MB
Source Limit:	1024 KB
*/

#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	cin>>str;
	int l = str.size();
	int arr[l]; //array to store no of even numbers after i
	int i;
	for(i=l-1;i>=0;i--)
	{
		if(int(str[i])%2==0){
			if(i==l-1)
				arr[i]=1;
			else arr[i]=arr[i+1]+1;
		//	arr[i]=if(i==l-1)?1:arr[i+1]+1;
		}
		else{
			if(i==l-1)
				arr[i]=0;
			else arr[i]=arr[i+1];
		}
	}
	for(i=0;i<l;i++)
		cout<<arr[i]<<" ";
}
