#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,m;
    string cur = "A", next = "B";
    cin >> n >> m;
    for(int i = 2; i <= n; i++){
        string temp = next;
        next = cur + next;
        cur = temp;
    }
    cout << cur << endl << cur[m-1];
    return 0;
}