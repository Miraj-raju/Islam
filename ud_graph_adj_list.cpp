#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> adj_list[10];
    int n,e,x,y,w,i,j;
    freopen("inp_list.new.txt","r", stdin);

    scanf("%d %d",&n,&e);

    //GRAPH INPUT
    for(i=0;i<e;i++){
        scanf("%d %d",&x,&y);
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }

    //GRAPH TRAVERSE
    for(i=0;i<n;i++){
            printf("%d => ",i);
        for(j=0;j<adj_list[i].size();j++){
            printf("%d ",adj_list[i][j]);
        }
        printf("\n");
    }

    return 0;
}
