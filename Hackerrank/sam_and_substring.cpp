#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin>>str;
    int l = str.size();
    int i;
    long long int summ = 0;
    long long int f = 1;
    for(int i = l-1; i >= 0; i--) {
    summ = (summ + (str[i]-'0')*f*(i+1)) % 1000000007;
    f = (f*10+1) % 1000000007;
    }
    cout<<summ%1000000007;
    return 0;
}
