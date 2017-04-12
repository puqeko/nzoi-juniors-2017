#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
	int v; cin >> v;
    int start, dest; cin >> start >> dest;
    vector<vector<int> > adj(v);
    int a, b;

    while (cin >> a >> b)
        adj[a].push_back(b);

    for (auto l : adj)
        sort(l.begin(), l.end());
    
    //for (auto l : adj) {
    //    for (auto i : l) {
    //        cout << i << ' ';
    //    }
    //    cout << endl;
    //}
    
    queue<int> q;
    vector<bool> visited(v);
    vector<int> parent(v, -1), dist(v, INT_MAX);
    q.push(start);
    dist[start] = 0;
    while (!q.empty()) {
        int cur = q.front(); q.pop();
        if (visited[cur])
            continue;
        visited[cur] = true;
        
        for (auto n : adj[cur]) {
            if (dist[cur] + 1 < dist[n]) { 
                q.push(n);
                parent[n] = cur;
                dist[n] = dist[cur] + 1;
            }
        }
    }

    int c = dest;
    vector<int> path = {c};
    while (c != -1 && c != start) {
        c = parent[c];
        path.push_back(c);
    }
    
    for (auto i = --path.end(); i >= path.begin(); i--)
        cout << *i << ' ';
    cout << '\n';
}
