#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second

typedef pair<int, int> pi;
double log3, log7, log11;

typedef long long int ll;
const ll M = 100000;
ll fast_pow(ll b, ll e)
{
    ll ans = 1;
    while (e > 0)
    {
        if (e & 1)
            ans = (ans * b) % M;
        b = (b * b) % M;
        e >>= 1;
    }
    return ans;
}
struct node
{
    int n3, n7, n11;
    node(ll a = 0, ll b = 0, ll c = 0) : n3(a), n7(b), n11(c) {}
    bool operator<(const node &b) const
    {
        return n3 * log3 + n7 * log7 + n11 * log11 < b.n3 * log3 + b.n7 * log7 + b.n11 * log11;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    log3 = log(3);
    log7 = log(7);
    log11 = log(11);
    vector<int> money;
    money.push_back(0);
    set<node> st;
    st.insert(node(1, 0, 0));
    st.insert(node(0, 1, 0));
    st.insert(node(0, 0, 1));
    ll cnt = 1;
    ll op[] = {3, 7, 11};
    int N = 100000;
    while (st.size() > 0)
    {
        auto cur = st.begin();
        auto val = *cur;
        st.erase(cur);
        money.push_back((fast_pow(3, val.n3) * fast_pow(7, val.n7)) % M * fast_pow(11, val.n11) % M);
        cnt++;

        (money[cnt - 1] += money[cnt - 2]) %= M;
        if (cnt == N + 1)
            break;
        for (auto itr : op)
        {
            if (itr == 3)
            {
                st.insert(node(val.n3 + 1, val.n7, val.n11));
            }
            else if (itr == 7)
            {
                st.insert(node(val.n3, val.n7 + 1, val.n11));
            }
            else
            {
                st.insert(node(val.n3, val.n7, val.n11 + 1));
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        int a, b;
        cin >> n;
        cin >> a >> b;

        cout << money[n] << "\n";
        ll val = (money[b] - money[a]) % M;
        if (val < 0)
            val += M;
        cout << val << "\n";
    }
}
