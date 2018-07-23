/*
ID: nathan.18
TASK: sort3
LANG: C++
*/

#include <iostream>
#include <string>
#include <utility>
#include <sstream>
#include <algorithm>
#include <stack>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <bitset>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <fstream>

using namespace std;

#define INF 1000000000
#define LL_INF 4500000000000000000
#define LSOne(S) (S & (-S))
#define EPS 1e-9
#define A first
#define B second
#define mp make_pair
#define PI acos(-1.0)
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int main() {
    freopen("sort3.in", "r", stdin);
    freopen("sort3.out", "w", stdout);

    int n; cin >> n;
    int num[n], sorted[n]; for (int i = 0; i < n; i++) { cin >> num[i]; sorted[i] = num[i]; }
    sort(sorted, sorted + n);
    int i12 = 0, i13 = 0, i21 = 0, i23 = 0, i31 = 0, i32 = 0;
    for (int i = 0; i < n; i++) {
        if (num[i] == 1 && sorted[i] == 2) i12++;
        if (num[i] == 1 && sorted[i] == 3) i13++;
        if (num[i] == 2 && sorted[i] == 1) i21++;
        if (num[i] == 2 && sorted[i] == 3) i23++;
        if (num[i] == 3 && sorted[i] == 1) i31++;
        if (num[i] == 3 && sorted[i] == 2) i32++;
    }
    cout << min(i12, i21) + min(i13, i31) + min(i23, i32) + 2*(max(i12, i21)-min(i12, i21)) << endl;
    return 0;
}
