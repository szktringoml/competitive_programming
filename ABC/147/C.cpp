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
    int n;
    cin>>n;
    vector<int> honest[15];
    vector<int> liars[15];
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        for(int j=0;j<a;j++){
            int x,y;
            cin>>x>>y;
            if(y==0)liars[i].push_back(x-1);
            else honest[i].push_back(x-1);
        }
    }
    int ans=0;
    for(int i=0;i<(1<<n);i++){
        bool check = true;
        int num_of_p = 0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                num_of_p++;
                //矛盾がないか調べる
                for(int k=0;k<honest[j].size();k++)if(!(i&(1<<honest[j][k])))check = false;
                for(int k=0;k<liars[j].size();k++)if(i&(1<<liars[j][k]))check = false;
            }
        }
        if(check)ans = max(ans,num_of_p);
    }
    cout<<ans<<endl;
}