#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t){
        int m,n,c = 0;;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        cin >> m;
        int b[m];
        for(int i = 0; i < m; i++){
            cin >> b[i];
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j ++){
                
            }
        }

        for(int i = 0; i < n; i++){
            int res = count(b,b+m,a[i]);
            if(res > 0)
                c++;
        }
        cout << c << endl;
        t--;
    }
    return 0;
}
