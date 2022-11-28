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
    int arr[8][2] = {{}};
    int P[n];
    vector<double> dists;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        arr[i][0] = x;
        arr[i][1] = y;
        P[i] = i;
    }

    do{
        double dist = 0;
        for(int i=0;i<n-1;i++){
            dist += sqrt( pow(arr[P[i]][0] - arr[P[i+1]][0],2) + pow(arr[P[i]][1]-arr[P[i+1]][1],2));
        }
        dists.push_back(dist);

    }while(next_permutation(P,P+n));

    double d_sum = 0;
    for(int i=0;i<dists.size();i++){
        d_sum+=dists[i];
    }
    cout<<fixed<<d_sum/dists.size()<<endl;
}