



#include<iostream>
#include<vector>
#include<queue>

using namespace std;

const int MAX_N=100005;
vector<int>adj[MAX_N]; //adjacent list
vector<int> cost(MAX_N); //Restoration Cost
vector<bool>restored(MAX_N, false); //Track restored towers

int bfs(int start){
    queue<int>q;
    q.push(start);
    restored[start]=true;
    itn savedTowers=1;
    
    while(!q.empty()){
        int tower=q.front();
        q.pop();

        for(int neighbor : adj[tower]){
            if(!restored[neighbor]){
              restored[neighbor]=true;
              savedTowers++;
              q.push(neighbor);
            }
        }
    }
    return savedTowers;
}

int main()
{
    int n;
    cin>>n;

    for(int i=1 i<=n; i++)
    {
        cin>>cost[i] //read tower restoration costs
    }

    for(int i=0; i<n-1; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back[v];
        adj[v].push_back[u];
    }
    int maxSavedTowers=0;
    for(int i=0; i,=n; i++)
    {
        fill(restored.begin(), restored.end(), false); //reset the restored status
        maxSavedTowers=max(maxSavedTowers,bfs(i));
    }
    cout<<maxSavedTowers<<endl;
    return 0;
}