#include <iostream>

using namespace std;

const int maxn = 21;
int n, S, cnt, cnt_best, sum, t[maxn], mark[maxn], mark_best[maxn], t_max[maxn];

void enter()
{
    cin.tie(0);
    cout.tie(0);
    cin >> n >> S;
    for (int i = 1; i <= n; ++i)
        cin >> t[i];
}

void create_data()
{
    // cnt_best là số tờ tiền sử dụng trong phương án tốt nhất.
    // Ban đầu chưa có phương án nào, gán cnt_best = n + 1.
    cnt_best = n + 1;

    // t_max[i] lưu giá trị của tờ tiền lớn nhất từ i tới n.
    t_max[n] = t[n];
    for (int i = n - 1; i >= 0; --i)
        t_max[i] = max(t_max[i + 1], t[i]);
}

// Nếu tìm được một phương án tốt hơn thì cập nhật lại kết quả.
void update_best_solution()
{
    if (sum == S && cnt < cnt_best)
    {
        cnt_best = cnt;

        for (int i = 1; i <= n; ++i)
            mark_best[i] = mark[i];
    }
}

// In kết quả.
void printf_result()
{
    // Không tìm được cách trả tiền, in ra -1.
    if (cnt_best == n + 1)
        cout << -1;
    else // Tìm được thì in ra cách trả đó.
    {
        cout << cnt_best << endl;

        for (int i = 1; i <= n; ++i)
            if (mark_best[i])
                cout << t[i] << ' ';
    }
}

void branch_and_bound(int i)
{
    // Nếu nghiệm mở rộng của nhánh này không tốt hơn thì return.
    if (t_max[i + 1] != 0)
        if (cnt + (S - sum) / t_max[i + 1] >= cnt_best)
            return;

    for (int j = 0; j <= 1; ++j)
    {
        // Ghi nhận thành phần thứ i.
        sum = sum + t[i] * j;
        mark[i] = j;
        cnt += j;

        if (i == n)
            update_best_solution();
        else if (sum <= S)
            branch_and_bound(i + 1);

        // Loại bỏ thành phần thứ i.
        sum -= t[i] * j;
        cnt -= j;
    }
}

int main()
{
    enter();
    create_data();
    branch_and_bound(1);
    printf_result();
    return 0;
}
