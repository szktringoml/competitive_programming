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
    int a,b,c,x,y;
    vector<int> arr;
    cin>>a>>b>>c>>x>>y;
    for(int i=0;i<=max(x,y);i++){
        int ab_cnt=i*2;
        int a_cnt = max(x-i,0),b_cnt = max(y-i,0);
        int value = (a*a_cnt)+(b*b_cnt)+(c*ab_cnt);
        arr.push_back(value);
        
    }
    cout<<*min_element(arr.begin(),arr.end())<<endl;

}