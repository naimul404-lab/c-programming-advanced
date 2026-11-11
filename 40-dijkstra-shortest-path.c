#include <stdio.h>
#define N 5
#define INF 999999
int main(void) {
    int g[N][N]={{0,10,0,5,0},{10,0,1,2,0},{0,1,0,0,4},{5,2,0,0,2},{0,0,4,2,0}};
    int dist[N], used[N]={0};
    for(int i=0;i<N;i++) dist[i]=INF;
    dist[0]=0;
    for(int step=0;step<N;step++) {
        int u=-1;
        for(int i=0;i<N;i++) if(!used[i] && (u==-1 || dist[i]<dist[u])) u=i;
        if(u==-1 || dist[u]==INF) break;
        used[u]=1;
        for(int v=0;v<N;v++) if(g[u][v]>0 && !used[v] && dist[u]+g[u][v]<dist[v]) dist[v]=dist[u]+g[u][v];
    }
    for(int i=0;i<N;i++) printf("Distance 0 -> %d = %d\n",i,dist[i]);
    return 0;
}
