#include <iostream>
#include <vector>

int main() {
  int n = 0;
  std::cin >> n;

  int matrix[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      std::cin >> matrix[i][j];
    }
  }

  int result = 10000;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      for (int k = 0; k < n; ++k) {
        if (matrix[i][j] && matrix[j][k] && matrix[k][i]) {
          result = std::min(result, (matrix[i][j] + matrix[j][k] + matrix[k][i]));
        }
      }
    }
  }

  std::cout << result;
  return 0;
}


//5
// 0    20   10     30   40
// 20   0    30     1    2
// 10   30   0      40   1000
// 30   1    40     0    21
// 40   2    1000   21   0