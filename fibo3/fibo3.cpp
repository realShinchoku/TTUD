#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    vector<long long> fibo;
    fibo.push_back(0);fibo.push_back(1);fibo.push_back(2);
    for (int i = 3; i <= n; i+=3){
        int k = i*0.6666666666666666666666666666666666667;
        fibo.push_back(fibo[k]);
        fibo.push_back(fibo[k] + fibo[k+1]);
        fibo.push_back(fibo[k] + fibo[k+1] + fibo[k+2]);
    }
    cout << "f("<<n<<") = " << fibo[n] << endl;
    return 0;
}