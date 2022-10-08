#include <iostream>
#include <vector>
using namespace std;

// tìm kiếm nhị phân, cài đặt kiểu đệ quy
int binary_search(int arr[], int l, int r, int x)
{
    if (r < l)
        return -1;
    int mid = l + (r - l) / 2;
    // tìm thấy ở giữa
    if (arr[mid] == x)
        return mid;
    // tìm ở nửa trước
    if (arr[mid] > x)
        return binary_search(arr, l, mid - 1, x);
    // tìm ở nửa sau
    return binary_search(arr, mid + 1, r, x);
}

// tìm kiếm nhị phân, cài đặt bằng vòng lặp
int binary_search2(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

// tìm kiếm nội suy: nhị phân thông minh hơn
int interpolation_search(int a[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (x - a[l]) * ((r - l) / (a[r] - a[l]));
        if (a[m] == x) return m;
        if (a[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main(){
    int n, x;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i ++)
        cin >> a[i];
    cin >> x;
    cout << "tìm kiếm nhị phân, cài đặt kiểu đệ quy: " << binary_search(a,0,n-1,x) << endl;
    cout << "tìm kiếm nhị phân, cài đặt bằng vòng lặp: " << binary_search2(a,0,n-1,x) << endl;
    cout << "tìm kiếm nội suy: nhị phân thông minh hơn: " << interpolation_search(a,0,n-1,x) << endl;
    return 0;
}