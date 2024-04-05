#include <iostream>
#include <vector>
using namespace std;

void DFS(int v, int depth);
static vector<vector<int>> arr;
static vector<bool> visited;
static bool arrive;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    arr.resize(n);
    visited = vector<bool>(n, false);
    arrive = false;

    for (int i = 0; i < m; i++) {
        int s, e;
        cin >> s >> e;
        arr[s].push_back(e);
        arr[e].push_back(s);
    }

    for (int i = 0; i < n; i++) {
        DFS(i, 1);
        if (arrive) {
            break;
        }
    }

    cout << (arrive ? 1 : 0) << "\n";
    return 0;
}

void DFS(int v, int depth) {
    if (depth == 5) {
        arrive = true;
        return;
    }

    visited[v] = true;
    for (int i : arr[v]) {
        if (!visited[i]) {
            DFS(i, depth + 1);
        }
    }
    visited[v] = false;
}