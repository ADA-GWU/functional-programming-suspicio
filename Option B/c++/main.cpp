#include <bits/stdc++.h>
#define forn(i,n) for(int i = 0; i < n; i++)
#define ford(i,n) for(long long i = n - 1; i > -1; i--)
#define forl(i,l,r) for(long long i = l; i <= r; i++)
#define forst(it, a, ll) for(set < ll > :: iterator it = a.begin(); it != a.end(); it++)
#define forld(i,l,r) for(long long i = l; i >= r; i--)
#define FAST_READ ios_base::sync_with_stdio(false);
#define in freopen("input.txt", "r", stdin);
#define out freopen("output.txt", "w", stdout);
#define MAXN 200010
#define INF 100000000000000000ll
#define MOD 1000000007
#define pi 3.14159265358973238462643383
#define EPS 0.00000001
#define f first
#define s second
#define pb push_back
#define mp(i, j) make_pair(i, j)
#define COUT(n, a) fixed << setprecision(a) << n

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef string str;
typedef pair < ll, ll > pr;

using namespace std;

int main(void)
{
    FAST_READ

    int n;

    cin >> n;

    vector < int > vis(n, 0);

    int cnt = n, now, md = 0;

    while (cnt != 1)
    {
        now = 0;
        if (md == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (!vis[i])
                {
                    now++;
                    if (now % 2 == 0)
                    {
                        vis[i] = 1;
                        cnt--;
                    }
                }
            }
        }
        else if (md == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (!vis[i])
                {
                    now++;
                    if (now % 2 == 1)
                    {
                        vis[i] = 1;
                        cnt--;
                    }
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (!vis[i])
                {
                    now++;
                    if (now % 3 == 0)
                    {
                        vis[i] = 1;
                        cnt--;
                    }
                }
            }
        }
        md++;
        md %= 3;
    }

    for (int i = 0; i < n; i++)
        if (vis[i] == 0)
            cout << i + 1 << endl;
}
