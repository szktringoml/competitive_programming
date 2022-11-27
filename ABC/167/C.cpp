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
    int x;
    cin>>n>>m>>x;
    vector<vector <int> > comp(n,vector<int>(0));
    vector<int> values;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        values.push_back(c);
        for(int j=0;j<m;j++){
            int a;
            cin>>a;
            comp[i].push_back(a);
        }
    }
    int ans=10000000;
    int comp_achieve_x = 0;
    for(int i=0;i<(1<<n);i++){
        int amount=0;
        bool comp_check = true;
        int calc_comp[12]={};
        //cout<<"================"<<i<<"================="<<endl;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                amount+=values[j];
                for(int k=0;k<m;k++){
                    calc_comp[k]+=comp[j][k];
                    //cout<<"comp["<<j<<"]["<<k<<"]="<<comp[j][k]<<"を足したら、calc_comp["<<k<<"]="<<calc_comp[k]<<endl;
                }
            }
        }
        for(int j=0;j<m;j++){
            if(calc_comp[j] < x){
                comp_check = false;
            }
        }
        if(comp_check){
            ans = min(amount,ans);
            comp_achieve_x += 1;
        }
    }
    if(comp_achieve_x == 0){
        cout<<-1<<endl;
    }else{
        cout<<ans<<endl;
    }
    
 
 
}