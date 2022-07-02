/*                                                                                                                                                                                                                         
                                                                                                                                                                                                                                 
 #######  #######  ####### ########           #######  ###  ##           #######  #######  #######  #######  ##   ##           #######  #######           #######  #######            ###     #######           #######  ####### 
               ##       ##    ##                   ##  #### ##                ##       ##       ##       ##  ##   ##                ##                    ##  ###                      ##                            ##          
 #######  ##   ##  #######    ##              #######  ## ####           #######  #######  #######  #######  #######           ##   ##  ####              ## # ##  #######             ##     #######           #######  ####### 
      ##  ##   ##  ##  ##     ##              ##   ##  ##  ###           ##   ##  ##  ##   ##  ##   ##   ##       ##           ##   ##  ##                ###  ##       ##             ##          ##           ##            ## 
 #######  #######  ##   ##    ##              ##   ##  ##   ##           ##   ##  ##   ##  ##   ##  ##   ##  #######           #######  ##                #######  #######           ######   #######           #######  ####### 
                                                                                                                                                                                                                                 
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n" 
#define MOD 1000000007

void solve(){
    ll n; cin>>n;

    vector<ll> V(n);
    for(int i=0; i<n; i++) cin>>V[i];

    ll zeros = 0, ones = 0, twos = 0;
    for(int i=0; i<n; i++){
        zeros += V[i] == 0;
        ones += V[i] == 1;
        twos += V[i] == 2;
    }

    cout<<zeros<<" "<<ones<<" "<<twos<<endl;

    ll index = 0;
    while(index < zeros && index < n) V[index++] = 0;

    index = 0;
    while(index < ones && (index + zeros) < n) V[zeros + index++] = 1;

    index = 0;
    while(index < twos && (index + zeros + ones) < n) V[zeros + ones + index++] = 2;

    for(int i=0; i<n; i++) cout<<V[i]<<" ";
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