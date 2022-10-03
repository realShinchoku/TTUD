#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> sub;int len = 0, s = 0, e;
    sub[0] = a[0];
    for(int i = 1; i < n; i++){
        if(a[i-1] <= a[i])
            len++;
        else{
            len = 0;
            s = i;
        }
        if(len > sub.size())
            sub = vector<int>(a+ s,a+ i);
    }
    for(int i = 0; i < sub.size(); i++)
        cout << sub[i];
}