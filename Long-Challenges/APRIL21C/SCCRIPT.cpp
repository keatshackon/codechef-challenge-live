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

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ll q, x, y, z, i, j, k, l, m, t, r, d, n, a, b, c;

    cin >> t;
    while (t--) {

        string s;

        cin >> l >> n;
        cin >> s;
        ll cnt = 0;
        ll in = 0;
        int f = 0;
        for ( i = 0; i < s.length(); i++) {
            if (s[i] == '*') {
                in++;
            } else {
                in = 0;
            }

            if (in >= n) {
                f = 1;
                break;
            }

        }
        if (f == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }

    return 0;
}

