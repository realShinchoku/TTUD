#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



int main(){
    int n, k, count = 0;
    cin >> k;
    cin >> n;
    int a[n];
    for(int i =0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[j] - a[i] == k)
                count++;
        }
    }
	cout << count;
}
