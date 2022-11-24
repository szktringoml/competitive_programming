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
    bool p=false;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((4*i) + (7*j) == n){
                p=true;
            }
        }
    }
    if(p)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}