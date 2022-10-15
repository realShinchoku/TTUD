#include <iostream>
#include <vector>
using namespace std;

vector<int> a,b;

int count(int m, int n){
    if(m < 0 || n < 0)
        return 0;
    if(a[m] == b[n])
        return count(m-1,n-1) + a[m];
    return(max(count(m,n-1),count(m-1,n)));
}

int main(){
    int m,n;
    cout << "Nhap m = "; cin >> m; a.resize(m);
    for(int i = 0; i < m; i ++){
        cout << "a[" << i+1<<"] = "; cin >> a[i];
    }
    cout << "Nhap n = "; cin >> n; b.resize(n);
    for(int i = 0; i < n; i ++){
        cout << "b[" << i+1<<"] = "; cin >> b[i];
    }
    cout << "Day con co tong lon nhat = " << count(m-1,n-1);
}
