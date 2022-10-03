#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    string s = str;
    reverse(str.begin(), str.end());
    s+=str;
    long long m;
    cin >> m;
    long long a[m];
    for(long long i = 0; i < m; i++)
        cin >> a[i];
    long long l = s.length();
    for(long long i = 0; i < m; i++)
        cout << s[a[i]%l] << endl;
    return 0;
}