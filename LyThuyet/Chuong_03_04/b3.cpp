#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



int main(){
    int n, count = 0;
    cin >> n;
    int a[n];
    for(int i =0; i < n; i++)
        cin >> a[i];
    sort(a,a+n);
    int min = a[1]- a[0];
    for(int i = 1; i < n; i++)
        if(a[i+1] -a[i] < min)
            min = a[i+1] -a[i];
    
	for(int i = 1; i < n; i++)
        if(a[i+1] - a[i] == min)
            cout << "(" << a[i] << "," << a[i+1] << ") ";
    return 0;
}
