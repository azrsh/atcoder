#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <set>
#include <tuple>
#include <cassert>
#include <cmath>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

#define read_int(X) \
    ll X;           \
    scanf("%lld\n", &X);

#define read_two_int(X, Y) \
    ll X, Y;               \
    scanf("%lld %lld\n", &X, &Y);

#define read_three_int(X, Y, Z) \
    ll X, Y, Z;                 \
    scanf("%lld %lld %lld\n", &X, &Y, &Z);

#define read_four_int(X, Y, Z, W) \
    ll X, Y, Z, W;                \
    scanf("%lld %lld %lld %lld\n", &X, &Y, &Z, &W);

int main()
{
    ll N;
    scanf("%lld", &N);

    vector<ll> A = vector<ll>(N);
    for (ll i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }

    ll ans = 0;
    for (ll l = 0; l < N; l++)
    {
        ll x = A[l];
        for (ll r = l; r < N; r++)
        {
            x = min(x, A[r]);
            ans = max(x * (r - l + 1), ans);
        }
    }

    printf("%lld\n", ans);
}
