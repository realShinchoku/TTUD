#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Obj
{
    int id;
    int w;
    int v;
};

int sumOfW(Obj o[],int n){
    int s = 0;
    for(int i = 0; i < n; i++)
        s+= o[i].w;
    return s;
}

int sumOfV(Obj o[],int n){
    int s = 0;
    for(int i = 0; i < n; i++)
        s+= o[i].v;
    return s;
}

bool structCompare(Obj o1, Obj o2)
{
    if (o1.v == o2.v)
    {
        if (o1.w == o2.w)
            return o1.id > o2.id;
        return o1.w > o2.w;
    }
    return o1.v > o2.v;
}

int main()
{
    int n,w;
    cin >> w >> n;
    Obj Obj[n]; 
    vector<int> list(n,-1);
    for (int i = 0; i < n; i++)
        cin >> Obj[i].id;
    for (int i = 0; i < n; i++)
        cin >> Obj[i].w;
    for (int i = 0; i < n; i++)
        cin >> Obj[i].v;
    sort(Obj, Obj+n,structCompare);

    for(int i = 0; i < n; i ++){
        
    }

    return 0;
}