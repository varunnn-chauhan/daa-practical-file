#include<bits/stdc++.h>

using namespace std;

int a[20][20],q[20],visited[20],n,i,j,f=-1,r=-1;
    void bfs(int v){
    for(i=0;i<n;i++){
        if(a[v][i]!=0 && visited[i]==0){
            r=r+1;q[r]=i;visited[i]=1;
            cout<<i;
        }
    }
    f=f+1;
    if(f<=r)
        bfs(q[f]);
}
int main(){
    int v;
    cout<<"Enter the no. of vertices: ";
    cin>>n;
    for(i=0;i<n;i++)
        visited[i]=0;
        cout<<"\nEnter graph data in matrix form:\n "; 
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            cin>>a[i][j];
    }
    cout<<"Enter the starting vertex: "; 
    cin>>v;
    f=r=0;q[r]=v;
    cout<<"\n BFS traversal is: \n";
    visited[v]=1;
    cout<<v;
    bfs(v);
    if(r!=n-1)
    cout<<"\n BFS is not possible ";
    return 0;
}