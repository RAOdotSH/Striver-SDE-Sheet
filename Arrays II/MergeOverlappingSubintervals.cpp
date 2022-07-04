/*
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
 ##   ##  #######  #######  #######  #######           #######  ##   ##  #######  #######  ##       #######  #######  #######  ######   ###  ##  #######           #######  ##   ##  #######  ######   ###  ## ########  #######  #######  ##   ##  #######  ##       ####### 
 ### ###                ##                                  ##  ##   ##                ##  ##            ##       ##       ##    ##     #### ##                             ##   ##       ##    ##     #### ##    ##                   ##  ##   ##       ##  ##               
 #######  ####     #######  ##   ##  ####              ##   ##  ##   ##  ####     #######  ##       #######  #######  #######    ##     ## ####  ##   ##           #######  ##   ##  ######     ##     ## ####    ##     ####     #######  ##   ##  #######  ##       ####### 
 ## # ##  ##       ##  ##   ##    #  ##                ##   ##   ## ##   ##       ##  ##   ##   ##  ##   ##  ##       ##         ##     ##  ###  ##    #                ##  ##   ##  ##   ##    ##     ##  ###    ##     ##       ##  ##    ## ##   ##   ##  ##   ##       ## 
 ##   ##  #######  ##   ##  #######  #######           #######    ###    #######  ##   ##  #######  ##   ##  ##       ##       ######   ##   ##  #######           #######  #######  #######  ######   ##   ##    ##     #######  ##   ##    ###    ##   ##  #######  ####### 
                                                                                                                                                                                                                                                                              
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n" 
#define MOD 1000000007

void solve(){
    ll n; cin>>n;

    vector<vector<ll>> intervals(n, vector<ll>(2));
    for(int i=0; i<n; i++) cin>>intervals[i][0]>>intervals[i][1];
    
    if(n == 1){
        cout<<intervals[0][0]<<" "<<intervals[0][1]<<endl;
        return;
    }

    vector<vector<ll>> M;
    
    sort(intervals.begin(), intervals.end());
    vector<ll> temp = intervals[0];

    for(int i=0; i<n; i++){
        if(temp[1] >= intervals[i][0]){
            temp[1] = max(temp[1], intervals[i][1]);
        }
        else{
            M.push_back(temp);
            temp = intervals[i];
        }

        if(i == n-1 && temp[1] == intervals[i][1]) M.push_back(temp);
        else if(i == n-1){
            if(temp[1] < intervals[i][1]) M.push_back(temp);
            else M.push_back(intervals[i]);
        }
    }

    for(int i=0; i<M.size(); i++) cout<<M[i][0]<<" "<<M[i][1]<<endl;
    
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