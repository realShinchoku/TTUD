#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void thap(int n, int trai, int giua,int phai){
	if(n == 1){
		cout << "chuyen " << trai << " -> " << phai << endl;
		return;
	}
	thap(n-1,trai, phai, giua);
	thap(1,trai,giua,phai);
	thap(n-1,giua,trai,phai);
}

int main()
{
    int n;
	cin >> n;
	thap(n,1,2,3);
}
