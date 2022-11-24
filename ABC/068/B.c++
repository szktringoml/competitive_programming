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
    int n,ans=1,cnt_b=0;
    cin>>n;
    for(int i=2;i<=n;i++){
        int v,cnt=0;
        v=i;
        while(v%2==0){
            cnt +=1;
            v=v/2;
        }
        if(cnt>cnt_b){
            cnt_b = cnt;
            ans = i;
        }
    }
    cout<<ans<<endl;
}