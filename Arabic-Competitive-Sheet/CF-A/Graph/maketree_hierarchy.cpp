#include <iostream>
#include <vector>

using std::vector;

vector<int> topologicalSort;
vector<int> visited;
vector<vector<int>> graph;

void dfs(int node);

int main() {
    int n, k;
    std::cin >> n >> k;
    graph.resize(n + 1);
    visited.resize(n + 1);

    for (int i = 0; i < k; i++) {
        int w;
        std::cin >> w;
        while (w--) {
            int a;
            std::cin >> a;
            graph[i + 1].push_back(a);
        }
    }

    for (int i = 1; i < graph.size(); i++) {
        if (!visited[i]) {
            dfs(i);
        }
    }

    vector<int> boss(n + 1);
    int nextBoss = 0;
    for (int i = topologicalSort.size() - 1; i != -1; i--) {
        boss[topologicalSort[i]] = nextBoss;
        nextBoss = topologicalSort[i];
    }

    for (int i = 1; i < boss.size(); i++) {
        std::cout << boss[i] << '\n';
    }
}

void dfs(int node) {
    visited[node] = 1;
    for (int child : graph[node]) {
        if (!visited[child]) {
            dfs(child);
        }
    }

    topologicalSort.push_back(node);
}