/*
                                                                                                                                           
                                                                                                                                       
 #######  ####### ########           ##   ##  ####### ########  #######  ######   ##   ##           #######  #######  #######  ####### 
                     ##              ### ###       ##    ##          ##    ##      #####                ###                ##       ## 
 #######  ####       ##              #######  #######    ##     #######    ##       ###               ###    ####     #######  ##   ## 
      ##  ##         ##              ## # ##  ##   ##    ##     ##  ##     ##      #####            ###      ##       ##  ##   ##   ## 
 #######  #######    ##              ##   ##  ##   ##    ##     ##   ##  ######   ##   ##           #######  #######  ##   ##  ####### 
                                                                                                                                       

*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n" 
#define MOD 1000000007

void solve(){
    ll n, m; cin>>n>>m;

    vector<vector<ll>> mat(n, vector<ll>(m));
    vector<vector<ll>> ans(n, vector<ll>(m, -1));

    for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>mat[i][j];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j] == 0){
                // mark all the rows as 0
                for(int k=0; k<n; k++) ans[k][j] = 0;

                // mark all the columns as 0
                for(int k=0; k<m; k++) ans[i][k] = 0;

                break;
            }
            else{
                ans[i][j] = (ans[i][j] == 0) ? 0 : mat[i][j];
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

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