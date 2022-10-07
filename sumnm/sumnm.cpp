
#include <iostream>
#include <vector>
using namespace std;

int N,m;

void printVector(vector<int> &arr)
{
    if (arr.size() == m)
    {
        cout << N << " = ";
        for (int i = 0; i < arr.size()-1; i++)
        {
            cout << arr[i] << "+";
        }
        cout << arr[arr.size()-1] << endl;
    }
}

void findWays(vector<int> &arr, int i, int n)
{

    if (n == 0)
        printVector(arr);

    for (int j = i; j <=n; j++)
    {

        arr.push_back(j);

        findWays(arr, i, n - j);

        arr.pop_back();
    }
}

int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    N=n;
    cout << "Nhap m = ";
    cin >> m;
    vector<int> arr;

    findWays(arr, 1, n);
    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}
