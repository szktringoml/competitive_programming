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
    int arr[2][n],P[n];
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        P[i]=i+1;
    }
    pair<int,int> a_b;
    int perm_num = 1;
    do{
        bool a_check = true;
        bool b_check = true;
        for(int i=0;i<n;i++){
            if(P[i] != arr[0][i]){
                a_check = false;
            }
            if(P[i] != arr[1][i]){
                b_check = false;
            }
        }
        if(a_check)a_b.first=perm_num;
        if(b_check)a_b.second=perm_num;
        perm_num++;
    }while(next_permutation(P,P+n));

    cout<<abs(a_b.first-a_b.second)<<endl;
}