#include <stdio.h>
#define N 5
void dfs(int g[N][N], int visited[N], int v) {
    visited[v]=1; printf("%d ",v);
    for(int i=0;i<N;i++) if(g[v][i] && !visited[i]) dfs(g,visited,i);
}
int main(void) {
    int g[N][N]={{0,1,1,0,0},{1,0,0,1,0},{1,0,0,1,1},{0,1,1,0,1},{0,0,1,1,0}};
    int visited[N]={0};
    printf("DFS: "); dfs(g,visited,0); putchar('\n');
    return 0;
}
