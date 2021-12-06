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

	int a = 2, b = 1;

	while (a + b <= n)
	{
		b = a + b;
		a *= 6;
	}

	cout << b;
}
