#include <bits/stdc++.h>
using namespace std;
#define cy cout << "YES\n";
#define cn cout << "NO\n";
#define ll long long int
#define pb push_back
// #define all(a) (a).begin(), (a).end()
// #define sz(a) (ll) a.size()
// #define FIO                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define ss 1e6 + 10
// #define arra                    \
//     for (int i = 0; i < n; i++) \
//         cout << arr[i] << " ";  \
//     cout << endl;
// #define vec                            \
//     for (int i = 0; i < v.size(); i++) \
//         cout << v[i] << " ";           \
//     cout << endl;
// vector<bool> isprime(300000 + 2, true);
// vector<ll> prime(300000 + 2, 0);

// void seive()
// {
//     isprime[0] = false;
//     isprime[1] = false;
//     for(int i=2; i*i<=300002; i++)
//     {
//         if(isprime[i]==true)
//         {
//             for(int j=i*i; j<= 300000; j+=i)
//             {
//                 isprime[j] = false;
//             }
//         }
//     }
// }
// int GCD(int a, int b)
// {
//     while(b)
//     {
//         a = a%b;
//         swap(a,b);
//     }
//     return a;
// }

// void solve()
// {
//     ll n, m, k, x;
//     cin >> n;
//     ll arr[n + 5], brr[m + 5];
//     vector<ll> v;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         v.pb(x);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        // solve();
        ll n, m, k, x;
        cin >> n;
        ll arr[n + 5], brr[m + 5];
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((i + j) % 2 == 0)
                {
                    cout << "##";
                }
                else
                {
                    cout << "..";
                }
            }
            cout<<endl;
            for (int j = 0; j < n; j++)
            {
                if ((i + j) % 2 == 0)
                {
                    cout << "##";
                }
                else
                {
                    cout << "..";
                }
            }
            cout<<endl;
            
        }
        
    }
    return 0;
}
