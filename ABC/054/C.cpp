#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cstdlib> 
#include <iomanip>
#include <string>
#include <numeric>
#include <stdio.h>
#include <math.h>
#include <map>
#include <stack>
#include <queue>
#include <set>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector <bool> > d(n, vector<bool>(n,false));
    vector<int> p(n);
    for(int i=0;i<n;i++){
        p[i] = i;
    }
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--;b--;
        d[a][b] = true;
        d[b][a] = true;
    }
    long long int ans = 0;
    do{
        bool check = true;
        for(int i=0;i<n-1;i++){
            if(!d[p[i]][p[i+1]]){
                check = false;
            }
        }
        if(check)ans++;
    }while(next_permutation(p.begin(),p.end()) && p[0] == 0);
    cout<<ans<<endl;
}