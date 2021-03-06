// https://cses.fi/problemset/task/1621
// Distinct Numbers
// File Creation Date: 30-Nov-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<ll> vll;
typedef set<int> si;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define INF (1<<29)
#define MOD (1000000007)
#define FOR(i, a, b) for (int i=a; i<=b; i++)
#define FORn(i, a, b) for (int i=a; i>=b; i--)
#define all(v) v.begin(), v.end()
#define allR(v) v.rbegin(), v.rend()
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    FIO;

    int n;cin>>n;
    si a;
    FOR(i, 0, n-1){
        int tmp;
        cin>>tmp;
        a.insert(tmp);
    }
    cout<<a.size()<<"\n";

    return 0;
}