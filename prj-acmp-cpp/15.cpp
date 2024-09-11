#include <iostream>

int main() {
  int n;
  int counter =  0;

  std::cin >> n;

  int matrix[n][n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      std::cin >> matrix[i][j];

      if (j > i && matrix[i][j] == 1) {
        counter++;
      }
    }
  }

  std::cout << counter;
  return 0;
}
