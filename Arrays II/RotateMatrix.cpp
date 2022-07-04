/*                                                                                                                     
                                                                                                                     
 #######  ####### ########  ####### ########  #######           ##   ##  ####### ########  #######  ######   ##   ## 
      ##       ##    ##          ##    ##                       ### ###       ##    ##          ##    ##      #####  
 #######  ##   ##    ##     #######    ##     ####              #######  #######    ##     #######    ##       ###   
 ##  ##   ##   ##    ##     ##   ##    ##     ##                ## # ##  ##   ##    ##     ##  ##     ##      #####  
 ##   ##  #######    ##     ##   ##    ##     #######           ##   ##  ##   ##    ##     ##   ##  ######   ##   ## 
                                                                                                                     
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n" 
#define MOD 1000000007

void solve(){
    ll n; cin>>n;

    vector<vector<ll>> matrix(n, vector<ll>(n));
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin>>matrix[i][j];

    for(int i=0; i<n; i++) for(int j=0; j<i; j++) swap(matrix[i][j], matrix[j][i]);

    reverse(matrix.begin(), matrix.end());
    
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) cout<<matrix[i][j]<<" ";
    cout<<endl;

    return;
}

int main(){
    fastIO
    ll t;
    cin>>t;
           
    while(t--){
        solve();
    }
              
    return 0;
}