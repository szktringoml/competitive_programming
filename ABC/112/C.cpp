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
    int arr[100][3];
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    for(int cx=0;cx<=100;cx++){
        for(int cy=0;cy<=100;cy++){
            bool check = true;
            int H=1;
            for(int i=0;i<n;i++)if(arr[i][2])H=arr[i][2]+abs(arr[i][0]-cx)+abs(arr[i][1]-cy);
            
            for(int k=0;k<n;k++){
                if(max(H-abs(arr[k][0]-cx)-abs(arr[k][1]-cy),0)!=arr[k][2]){
                    check = false;
                }
                
            }
            if(check)cout<<cx<<" "<<cy<<" "<<H<<endl;
        }
    }
}