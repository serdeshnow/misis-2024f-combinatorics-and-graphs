#include <iostream>

int main() {
  int n = 0;
  std::cin >> n;

  int matrix[n][n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      std::cin >> matrix[i][j];
    }
  }

  int* colors = new int[n]{0};

  for (int i = 0; i < n; i++) {
      std::cin >> colors[i];
  }

  int bad_brides = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j > i) {

        int current_hill_color = colors[i];
        int available_hill_color = colors[j];
        if (current_hill_color != available_hill_color && matrix[i][j] != 0) {
          bad_brides++;
        }

      }
    }
  }

  std::cout << bad_brides;

  delete[] colors;
  return 0;
}
