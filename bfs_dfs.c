#include<stdio.h>
#define MAX 20
int adj[MAX][MAX]; 
int visited[MAX];
int n;/* number of vertices*/
void bfs(int start) {
int queue[MAX],front=0,rear=0;
int visitedlocal[MAX]={0};
visitedlocal[start]=1;
queue[rear++]=start;
printf("BFS travesal:");
while(front<rear){
int current = queue[front++];
printf("%d",current);
for(int i=0;i<n;i++){
if(adj[current][i]==1&&!visitedlocal[i]){
visitedlocal[i]=1;
queue[rear++]=i;
}
}
}
printf("\n");
}
void dfsUtil(int vertex){
visited[vertex]=1;
printf("%d",vertex);
for(int i=0;i<n;i++){
if(adj[vertex][i]==1 &&!visited[i])
dfsUtil(i);
}
}
void dfs(int start){
for(int i=0;i<n;i++)
visited[i]=0;
printf("DFS traversal:");
dfsUtil(start);
printf("\n");
}
int main() {
 int edges,u,v,start;
 printf("enter number of vertices:");
 scanf("%d",&n);
 printf("enter number of edges:");
 scanf("%d",&edges);
 printf("enter edges(u v),vertices numbered 0 to %d:\n",n-1);
 for(int i=0;i<edges;i++){
 scanf("%d %d",&u,&v);
 adj[u][v]=1;
 adj[v][u]=1;/*undirected graph*/
 }
 printf("enter starting vertex:");
 scanf("%d",&start);
 bfs(start);
 dfs(start);
 return 0;
 }
