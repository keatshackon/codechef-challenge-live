/*                  #####################################
                    #           Nickname:Mr.Keats       #
                    #           User:keats92            #
                    #####################################
*/
#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define ll              long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define ps(x,y)         fixed<<setprecision(y)<<x
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ll q, x, y, z, i, j, k, l, m, t, r, n;

    double a, b, c, d;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c >> d;
        double temp  =  (a * b * c * d);

        double te = 100 / temp;

        cout << te << "\n";

        ll tt = round(te * 100);

        cout << tt << "\n";

        double   ans = tt * 0.01;

        cout << ans << "\n";

        if (ans < 9.58) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
