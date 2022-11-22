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
    int n,k;
    cin>>n>>k;
    queue<int> que={};
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        que.push(q);
    }
    for(int i=0;i<k;i++){
        que.pop();
        que.push(0);
    }
    for(int i=0;i<n;i++){
        cout<<que.front()<<" ";
        que.pop();
    }
}