int main() {
    fill2D();

    auto t1 = high_resolution_clock::now();
    long long s1 = sumRowMajor();
    auto t2 = high_resolution_clock::now();

    auto t3 = high_resolution_clock::now();
    long long s2 = sumColMajor();
    auto t4 = high_resolution_clock::now();

    cout << "Row sum: " << s1 << endl;
    cout << "Col sum: " << s2 << endl;

    cout << "Row time: " << duration_cast<microseconds>(t2 - t1).count() << endl;
    cout << "Col time: " << duration_cast<microseconds>(t4 - t3).count() << endl;
}
