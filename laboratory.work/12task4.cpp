#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int sumDepth2(const vector<int>& h) {
    int s = 0;
    for (int i = 0; i < (int)h.size(); i++) {
        int depth = (int)log2(i + 1);
        if (depth == 2) {
            s += h[i];
        }
    }
    return s;
}

int main() {
    vector<int> heap = {42, 17, 35, 8, 23, 30, 15, 5, 11, 19, 7, 28};

    // строим max-heap
    make_heap(heap.begin(), heap.end());

    cout << "Куча (массив): ";
    for (int x : heap)
        cout << x << " ";
    cout << endl;

    cout << "Корень (максимум): " << heap[0] << endl;

    cout << "Сумма узлов на глубине 2: " << sumDepth2(heap) << endl;

    return 0;
}
