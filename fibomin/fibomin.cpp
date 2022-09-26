#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    int cur = 0, next = 1;
    for(int i = 0; cur <= k; i++){
        int temp = cur + next;
        cur = next;
        next = temp;
    }
    cout << cur;
    return 0;
}