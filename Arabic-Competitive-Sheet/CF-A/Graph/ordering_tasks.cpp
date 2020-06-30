#include <iostream>
#include <vector>

using std::vector;

vector <vector <int>> relations;
vector <int> visited;
vector <int> topologicalSort;

void dfs(int node);

int main() {
    int n, m;
    std::cin >> n >> m;

    while (n && m) {
        relations.clear();
        visited.clear();
        topologicalSort.clear();
        relations.resize(n+1);
        visited.resize(n+1);
        
        while(m--){
            int i, j;
            std::cin >> i >> j;
            relations[j].push_back(i);
        }

        for (int i = 1; i < relations.size(); i++) {
            if (!visited[i])
                dfs(i);
        }

        for (int i = 0; i < topologicalSort.size(); i++) {
            if (i != topologicalSort.size()-1) {
                std::cout << topologicalSort[i] << " ";
            } else {
                std::cout << topologicalSort[i];
            }
        }
        std::cout << '\n';
        
        std::cin >> n >> m;
    }
}

void dfs(int node) {
    visited[node] = 1;
    for (int child : relations[node]) {
        if (!visited[child])
            dfs(child);
    }

    topologicalSort.push_back(node);
}