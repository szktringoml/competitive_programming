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
int f(int a,int b){
    string sa=to_string(a),sb=to_string(b);
    return max(sa.length(),sb.length());
}
int main(){
    long long n;
    vector<int> arr;
    cin>>n;
    for(int a=1;a<=1000000;a++){
        long long b = n/a;
        if(n==a*b){
            //cout<<"a="<<a<<" b="<<b<<endl;
            arr.push_back(f(a,b));
            //cout<<f(a,b)<<endl;
        }
    }
    cout<<*min_element(arr.begin(),arr.end())<<endl;
}