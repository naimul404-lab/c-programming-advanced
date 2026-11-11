#include <stdio.h>
#define N 5
int main(void) {
    int g[N][N]={{0,1,1,0,0},{1,0,0,1,0},{1,0,0,1,1},{0,1,1,0,1},{0,0,1,1,0}};
    int visited[N]={0}, q[ N ], front=0,rear=0,start=0;
    visited[start]=1; q[rear++]=start;
    printf("BFS: ");
    while(front<rear) {
        int v=q[front++]; printf("%d ",v);
        for(int i=0;i<N;i++) if(g[v][i] && !visited[i]) { visited[i]=1; q[rear++]=i; }
    }
    putchar('\n'); return 0;
}
