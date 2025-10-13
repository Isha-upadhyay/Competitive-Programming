#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second

typedef pair<int, int> pi;

typedef long long int ll;
const ll M = 100000;
vector<vector<int>> adj;
int n;
int root;
vector<int> vis;
vector<int> indeg;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> name;
        map<string, int> ind;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string S;
            cin >> S;
            name.push_back(S);
            ind[S] = i;
        }
        int m;
        cin >> m;
        adj.assign(n, vector<int>());
        indeg.assign(n, 0);
        for (int i = 0; i < m; i++)
        {
            string u, v;
            cin >> u >> v;
            int x = ind[u];
            int y = ind[v];
            adj[x].push_back(y);
            indeg[y]++;
        }
        multiset<int> st;
        for (int i = 0; i < n; i++)
            if (indeg[i] == 0)
                st.insert(i);
        vector<int> ans;
        while (st.size() > 0)
        {
            auto it = st.begin();
            int nd = *it;
            ans.push_back(nd);
            st.erase(it);
            for (auto g : adj[nd])
            {
                indeg[g]--;
                if (indeg[g] == 0)
                {
                    st.insert(g);
                }
            }
        }
        for (auto itr : ans)
        {
            cout << name[itr] << " ";
        }
        cout << "\n";
    }
}
#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second

typedef pair<int, int> pi;

typedef long long int ll;
const ll M = 100000;
vector<vector<int>> adj;
int n;
int root;
vector<int> vis;
vector<int> indeg;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> name;
        map<string, int> ind;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string S;
            cin >> S;
            name.push_back(S);
            ind[S] = i;
        }
        int m;
        cin >> m;
        adj.assign(n, vector<int>());
        indeg.assign(n, 0);
        for (int i = 0; i < m; i++)
        {
            string u, v;
            cin >> u >> v;
            int x = ind[u];
            int y = ind[v];
            adj[x].push_back(y);
            indeg[y]++;
        }
        multiset<int> st;
        for (int i = 0; i < n; i++)
            if (indeg[i] == 0)
                st.insert(i);
        vector<int> ans;
        while (st.size() > 0)
        {
            auto it = st.begin();
            int nd = *it;
            ans.push_back(nd);
            st.erase(it);
            for (auto g : adj[nd])
            {
                indeg[g]--;
                if (indeg[g] == 0)
                {
                    st.insert(g);
                }
            }
        }
        for (auto itr : ans)
        {
            cout << name[itr] << " ";
        }
        cout << "\n";
    }
}
