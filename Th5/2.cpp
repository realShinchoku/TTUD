#include <iostream>
using namespace std;
 
int right_angled(int n)
{
    int count = 0;
 
    for (int z = 1; z < n; z++) {
        for (int y = 1; y <= z; y++) {
            for (int x = 1; x <= y; x++) {
                if ((x * x) + (y * y) == (z * z)) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << right_angled(n/2);
    return 0;
}