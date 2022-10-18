#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int c[n];
    stack<int> a;
    queue<int> b;
    for(int i = 0; i < n; i ++){
        cin >> c[i];
    }
    for(int i = n-1; i >=0; i--){
        a.push(c[i]);
    }
    string s;
    cin.ignore();
    getline(cin,s);
    for(int i = 0; i < s.size(); i ++){
        if(s[i]=='C'){
            if(a.size()>0){
                b.push(a.top());
                a.pop();
            }
        }
        else if (s[i] == 'H')
        {
           if(b.size()>0){
                a.push(b.front());
                b.pop();
            }
        }
    }
    while (a.size())
    {
        cout << a.top();
        if(a.size() > 1)
            cout << " ";
        a.pop();
    }
    return 0;
}