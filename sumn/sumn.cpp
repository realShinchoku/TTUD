
#include <iostream>
#include <vector>
using namespace std;

int N;

void printVector(vector<int> &arr)
{
    if (arr.size() > 0)
    {
        cout << N << " = ";
        for (int i = 0; i < arr.size()-1; i++)
        {
            cout << arr[i] << "+";
        }
        cout << arr[arr.size()-1] << endl;
    }
}

void findWays(vector<int> &arr, int n)
{
    if (n == 0)
        printVector(arr);

    for (int j = n; j > 0; j--)
    {    
        
        arr.push_back(j);
        
        if(arr.size() < 2)
            findWays(arr, n - j);

        else if(arr[arr.size()-2] >= arr[arr.size()-1])
            findWays(arr, n - j);
        
        arr.pop_back();
        
    }
}

int main()
{

    int n;
    cout << "Nhap n = ";
    cin >> n;
    N=n;
    vector<int> arr;
    findWays(arr, n);
    return 0;
}
