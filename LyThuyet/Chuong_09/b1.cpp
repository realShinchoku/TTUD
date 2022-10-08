#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Task
{
    int id;
    int d;
    int p;
};

bool structCompare(Task t1, Task t2)
{
    if (t1.p == t2.p)
    {
        if (t1.d == t2.d)
            return t1.id > t2.id;
        return t1.d > t2.d;
    }
    return t1.p > t2.p;
}

int main()
{
    int n;
    cin >> n;
    Task task[n]; 
    vector<int> done(n,-1);
    for (int i = 0; i < n; i++)
        cin >> task[i].id;
    for (int i = 0; i < n; i++)
        cin >> task[i].d;
    for (int i = 0; i < n; i++)
        cin >> task[i].p;
    sort(task, task+n,structCompare);
    for(int i = 0; i < n; i ++){
        int j = task[i].d;
        while (done[j] != -1 && j > 0)
            j--;
        
        if(j > 0){
            done[j] = task[i].id;
            cout << task[i].id <<  ' ';
        }
    }

    return 0;
}