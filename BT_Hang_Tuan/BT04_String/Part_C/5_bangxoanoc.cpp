#include<bits/stdc++.h>
using namespace std;
void printSpiralMatrix(int x, int y) {
    vector<vector<int>> matrix(x, vector<int>(y)); // Khởi tạo ma trận x*d chứa giá trị 0

    int val = 1; // Giá trị ban đầu
    int topRow = 0, bottomRow = x - 1; // Indeks hàng trên cùng và hàng dưới cùng
    int leftCol = 0, rightCol = y - 1; // Indeks cột trái nhất và cột phải nhất

    while (topRow <= bottomRow && leftCol <= rightCol) {
        // In hàng đầu tiên từ cột trái sang cột phải
        for (int i = leftCol; i <= rightCol; ++i)
            matrix[topRow][i] = val++;

        // In cột phải nhất từ hàng trên cùng đến hàng dưới cùng
        for (int i = topRow + 1; i <= bottomRow; ++i)
            matrix[i][rightCol] = val++;

        // In hàng dưới cùng từ cột phải nhất đến cột trái nhất (nếu có)
        if (topRow < bottomRow) {
            for (int i = rightCol - 1; i >= leftCol; --i)
                matrix[bottomRow][i] = val++;
        }

        // In cột trái nhất từ hàng dưới cùng trở lên (nếu có)
        if (leftCol < rightCol) {
            for (int i = bottomRow - 1; i > topRow; --i)
                matrix[i][leftCol] = val++;
        }

        // Cập nhật các giá trị hàng và cột cho vòng lặp tiếp theo
        topRow++;
        bottomRow--;
        leftCol++;
        rightCol--;
    }

    // In ma trận xoắn ốc
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            cout << matrix[i][j];
            if (j < y - 1) cout << "\t";
        }
        cout << endl;
    }
}

int main() {
    int x, y;
    cin >> x >> y;
    printSpiralMatrix(x, y);

    return 0;
}
