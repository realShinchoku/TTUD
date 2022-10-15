#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

// ma trận kề
bool g[100][100];
// đánh dấu đã duyệt chưa, ban đầu đặt bằng false hết
bool v[100];
void dfs(int s)
{
    // đánh dấu đỉnh s đã được xử lý
    v[s] = true;
    // xử lý đỉnh s
    dosmt(s);
    // duyệt các đỉnh con
    for (int i = 1; i <= n; i++)
        if (g[s][i] && !v[i])
            dfs(i);
}

bool g[100][100]; // ma trận kề
bool v[100];      // đánh dấu đã duyệt chưa
queue<int> q;     // lưu lại các đỉnh đã thăm
void bfs(int s)
{
    v[s] = true;
    q.push(s);
    while (!q.empty())
    {
        // lấy một đỉnh ra khỏi queue
        int s = q.front();
        q.pop();
        // xử lý đỉnh s
        dosmt(s);
        // đẩy các đỉnh kề vào queue
        for (int i = 1; i <= n; i++)
            if (g[s][i] && !v[i])
            {
                v[i] = true;
                q.push(i);
            }
    }
}