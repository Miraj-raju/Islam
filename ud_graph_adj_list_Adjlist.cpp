#include<stdio.h>
#include<iostream>
#include<vector>#include<queue>
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
    }    int l[8],p[8],v[8];    for(i=0;i<n;i++){        l[i]=0;        p[i]=0;        v[i]=0;    }    int s=0,a,ad;    queue<int> q;    l[s]=0;    p[s]=-1;    v[s]=1;    q.push(s);    while(!q.empty()){        a=q.front();        //printf("%d\t",a);        q.pop();    for(i=0;i<adj_list[a].size();i++){        ad=adj_list[a][i];        if(v[ad]==0){            p[ad]=a;            l[ad]=l[a]+1;            v[ad]=1;            q.push(ad);        }    }    v[a]=2;
    }    for(i=0;i<n;i++)        printf("node %d,Level %d,Parent %d\n",i,l[i],p[i]);
    return 0;
}
