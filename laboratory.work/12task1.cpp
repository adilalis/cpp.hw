#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
const int R = 1000, C = 1000;
int A[R][C];
const int D3 = 100, R3 = 100, C3 = 100;
int B[D3][R3][C3];
void fill2D() {
    int val = 1;
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            A[i][j] = val++;
}
void fill3D() {
    int val = 1;
    for (int d = 0; d < D3; d++)
        for (int r = 0; r < R3; r++)
            for (int c = 0; c < C3; c++)
                B[d][r][c] = val++;
}
int main() {
    auto t1 = high_resolution_clock::now();
    fill2D();
    auto t2 = high_resolution_clock::now();
    cout << "Первые 5 элементов: ";
    for (int j = 0; j < 5; j++)
        cout << A[0][j] << " ";
    cout << endl;

    cout << "Последние 5 элементов: ";
    for (int j = C - 5; j < C; j++)
        cout << A[R - 1][j] << " ";
    cout << endl;

    auto t3 = high_resolution_clock::now();
    fill3D();
    auto t4 = high_resolution_clock::now();

    cout << "B[0][0][0] = " << B[0][0][0] << endl;
    cout << "B[0][0][4] = " << B[0][0][4] << endl;
    cout << "B[99][99][99] = " << B[99][99][99] << endl;
    return 0;
}
