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
    vector<vector<int> > s(m,vector<int>(0));
    int p[10]={};
    for(int i=0;i<m;i++){
        int k;
        cin>>k;
        for(int j=0;j<k;j++){
            int si;
            cin>>si;
            s[i].push_back(si-1);
        }
    }
    for(int i=0;i<m;i++){
        cin>>p[i];
    }
    int ans = 0;
    for(int i=0;i<(1<<n);i++){
        bool check = true;
        for(int j=0;j<m;j++){
            int s_on=0;
            for(int k=0;k<s[j].size();k++){
                int mask = (1<<(s[j][k]));
                if(i&mask)s_on++;
            }
            if(s_on%2 != p[j]){
                check = false;
                break;
            }
        }
        if(check)ans++;
    }
    cout<<ans<<endl;
}