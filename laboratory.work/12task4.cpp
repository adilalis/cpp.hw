int sumDepth2(const vector<int>& h) {
    int s = 0;
    for (int i = 0; i < (int)h.size(); i++) {
        int depth = (int)(log2(i + 1));
        if (depth == 2) s += h[i];
    }
    return s;
}

int main() {
    vector<int> heap = {42, 17, 35, 8, 23, 30, 15, 5, 11, 19, 7, 28};

    make_heap(heap.begin(), heap.end());

    cout << "Куча: ";
    for (int x : heap) cout << x << " ";
    cout << endl;

    cout << "Сумма глубины 2: " << sumDepth2(heap) << endl;
}
