#include <iostream>
#include <vector>
using namespace std;


void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
 
 
int partition (vector<int> &a, int low, int high)
{
    int pivot = a[high];    // pivot
    int left = low;
    int right = high - 1;
    while(true){
        while(left <= right && a[left] < pivot) left++;
        while(right >= left && a[right] > pivot) right--;
        if (left >= right) break;
        swap(a[left], a[right]);
        left++;
        right--;
    }
    swap(a[left], a[high]);
    return left;
}
 
void quickSort(vector<int> &a, int low, int high)
{
    if (low < high)
    {
        int pi = partition(a, low, high);
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}

int main(){
    int n, k;
    cin >> n;
    vector<int> a(n);
    for(int i =0; i < n; i++)
        cin >> a[i];
    cin >> k;
    quickSort(a,0,n-1);
    cout << a[k-1];
}

// Thuật toán sắp xesp lại dãy và lấy ra phần tử thứ k của dãy
// O(n*log(n))