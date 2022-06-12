/*                                                                                                                          
                                                                                                                                                
 ###  ##  #######  ##   ## ########           #######  #######  #######  ##   ##  ##   ## ########  ####### ########  ######   #######  ###  ## 
 #### ##            #####     ##                   ##                ##  ### ###  ##   ##    ##          ##    ##       ##          ##  #### ## 
 ## ####  ####       ###      ##              #######  ####     #######  #######  ##   ##    ##     #######    ##       ##     ##   ##  ## #### 
 ##  ###  ##        #####     ##              ##       ##       ##  ##   ## # ##  ##   ##    ##     ##   ##    ##       ##     ##   ##  ##  ### 
 ##   ##  #######  ##   ##    ##              ##       #######  ##   ##  ##   ##  #######    ##     ##   ##    ##     ######   #######  ##   ## 
                                                                                                                                                
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n" 
#define MOD 1000000007

// Optimal Appraoch:
void optimal(){
    ll n; cin>>n;

    vector<ll> V(n);
    for(ll i=0;i<n;i++) cin>>V[i];

    ll i = n - 2, j = n - 1;
    while(i >= 0 && V[i] >= V[i+1]) i--;

    if(i>=0){
        while(V[j] <= V[i]) j--;
        swap(V[i], V[j]);
    }

    reverse(V.begin() + i + 1, V.end());

    for(ll i=0;i<n;i++) cout<<V[i]<<" ";
    cout<<endl;
    
    return;
}


// Brute Force Appraoch
void allPermutations(vector<ll> &arr, vector<vector<ll>> &ans, vector<ll> &permus, vector<ll> &freq){
    if(permus.size() == arr.size()){
        ans.push_back(permus);
        return;
    }

    for(int i=0; i<arr.size(); i++){
        if(!freq[i]){
            permus.push_back(arr[i]);
            freq[i] = 1;

            allPermutations(arr, ans, permus, freq);

            permus.pop_back();
            freq[i] = 0;
        }
    }

    return;
}

void solve(){
    ll n; cin>>n;

    vector<ll> V(n);
    for(int i=0; i<n; i++) cin>>V[i];

    vector<vector<ll>> ans;
    vector<ll> permus;
    vector<ll> freq(n, 0);

    allPermutations(V, ans, permus, freq);

    vector<ll> res(ans.size());
    for(int i=0; i<ans.size(); i++){

        if(ans[i] == V){
            res = (i + 1 == ans.size()) ? ans[0] : ans[i+1];
        }
    }
    
    for(int i=0; i<res.size(); i++) cout<<res[i]<<" ";
    cout<<endl;

    return;
}

int main(){
    fastIO
    ll t;
    cin>>t;
           
    while(t--){
        // brute force appraoch
        solve();
        optimal();
    }
              
    return 0;
}