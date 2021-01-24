#include<bits/stdc++.h>
using namespace std;

typedef long long ll ;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 
	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif*/

    ll n;
    cin>>n;
    ll x[n];
    ll count=0;
    ll dif;
    for (ll i = 0; i < n; i++)
    {
        cin>>x[i];
        }
    for (ll i = 1; i < n; i++)
    {
        if(x[i] < x[i-1]){    
            dif = 0;
            dif = x[i-1] - x[i];
            x[i] = dif + x[i];
            count = count + dif;   
        }
        }

        cout<< count <<"\t";
    

    return 0;
}