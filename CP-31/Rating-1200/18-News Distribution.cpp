#include <bits/stdc++.h>
using namespace std;

vector<int> parent, sz;

int find_set(int v) {
    if (v == parent[v]) return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (sz[a] < sz[b]) swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    parent.resize(n);
    sz.resize(n, 1);

    for (int i = 0; i < n; i++)
        parent[i] = i;

    while (m--) {
        int k;
        cin >> k;
        if (k > 0) {
            int first;
            cin >> first;
            first--;
            for (int i = 1; i < k; i++) {
                int x;
                cin >> x;
                x--;
                union_sets(first, x);
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << sz[find_set(i)] << " ";

    return 0;
}
