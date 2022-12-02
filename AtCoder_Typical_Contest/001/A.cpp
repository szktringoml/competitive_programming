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

#define ll long long
using namespace std;

int H,W;
vector<string> field;

const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};

void dfs(bool seen[510][510],int h, int w){
    seen[h][w] = true;

    for(int dir=0;dir<4;dir++){
        int nh = h + dx[dir];
        int nw = w + dy[dir];

        if(nh<0 || nw < 0 || nh>=H || nw>=W)continue;
        if(field[nh][nw] == '#')continue;

        if(seen[nh][nw])continue;
        
        dfs(seen,nh,nw);
    }
}


int main(){
    bool seen[510][510];
    
    cin>>H>>W;
    field.resize(H);
    for(int i=0;i<H;i++){
        cin>>field[i];
    }
    int sh,sw,gh,gw;
    for(int h=0;h<H;h++){
        for(int w=0;w<W;w++){
            if(field[h][w]=='s')sh = h, sw = w;
            if(field[h][w]=='g')gh = h, gw = w;
        }
    }
    memset(seen,0,sizeof(seen));
    dfs(seen,sh,sw);

    if(seen[gh][gw])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}