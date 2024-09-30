#include <iostream>
#include <vector>

std::vector<std::vector<int>> vec;
std::vector<bool> mark;
bool flag = false;

void dfs(int u, int p) {
	if (mark[u]) {
		flag = true;
		return;
	}
	mark[u] = true;
	for (int i = 0; i < vec[u].size(); i++) {
		if (vec[u][i] == 1 && i!=p) {
			dfs(i, u);
		}
	}
}

int main() {
	//	Решена не мной :D

	int n, m, a, b;
	std::cin >> n >> m;
	vec.resize(n, std::vector<int>(n, 0));
	mark.resize(n, false);
	for (int i = 0; i < m; i++) {
		std::cin >> a >> b;
		a--;
		b--;
		vec[a][b] = 1;
	}
	dfs(0, -1);
	if (flag) {
		std::cout << "YES";
	} else {
		std::cout << "NO";
	}
	return 0;
}
