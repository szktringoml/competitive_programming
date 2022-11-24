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
    int n,m,ans = 0;
    cin>>n>>m;
    int arr[5][2]={};
    for(int i=0;i<m;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<1000;i++){
        string s;
        s = to_string(i);
        if(s.length()!=n) continue;
        bool check = true;
        for(int j=0;j<m;j++){
            if(arr[j][1] == (s[arr[j][0]-1])-'0'){
                // cout<<"==============="<<endl;
                // cout<<arr[j][1]<<"=="<<(s[arr[j][0]-1]-'0')<<endl;
                // cout<<i<<endl;
            }else{
                check=false;
            }
        }
        if(check){
            cout<<i<<endl;
            ans=1;
            break;
        }
    }
    if(ans==0)cout<<-1<<endl;
}