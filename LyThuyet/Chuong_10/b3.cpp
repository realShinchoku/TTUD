#include <iostream>
using namespace std;


int check(int a[], int n,int x){
    int cout = 0;
    for(int i =0; i < n; i++)
        if(a[i] == a[x])
            cout++;
    if(cout >= n/2)
        return a[x];
    if(n == x)
        return NULL;
    return check(a,n,x+1);
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cout << check(a,n,0);
    return 0;
}