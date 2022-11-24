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
    int n,d,arr[10][10]={},cnt=0;
    cin>>n>>d;
    for(int i=0;i<n;i++){
        for(int j=0;j<d;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            double dist=0;
            for(int k=0;k<d;k++){
                int z;
                //cout<<"set"<<arr[i][k]<<","<<arr[j][k]<<endl;
                z = pow(arr[i][k]-arr[j][k],2);
                //cout<<"pow="<<z<<endl;
                dist += z;
            }
            dist = sqrt(dist);
            //cout<<"i_num="<<i<<"  j_num="<<j<<"  dist="<<dist<<endl;
            if(dist == int(dist))cnt+= 1;
        }
    }
    cout<<cnt<<endl;
}