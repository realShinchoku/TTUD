#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    int count = 0;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(a,a+n);
    int D = (a[n-1] - a[0])/4;
    for(int d = 1; d <= D; d++){
		for(int i = 0; i < n-4; i++){
    		int k = 1;
    		int cur = a[i];
			for(int j = i + 1; j < n; j++){
				if(a[j] - cur == d){
    				k++;
					cur = a[j];
				}
				if(k == 5){
					count++;
					break;
				}
				
			}
		}
	}
	cout << count;
}
