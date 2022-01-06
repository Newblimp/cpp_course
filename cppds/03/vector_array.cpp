#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q, k, k_i;
    scanf("%d %d", &n, &q);
    vector<int> a[n];
    for (int i = 0; i < n; i ++)
    {
        scanf("%d", &k);
        for (int j = 0; j < k; j++)
        {
            scanf("%d", &k_i);
            a[i].push_back(k_i);
        }
    }
    int i, j;
    for (int p = 0; p < q; p++)
    {
        scanf("%d %d", &i, &j);
        cout << a[i][j];
    }
    return 0;
}