long long sumRowMajor() {
    long long s = 0;
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            s += A[i][j];
    return s;
}

long long sumColMajor() {
    long long s = 0;
    for (int j = 0; j < C; j++)
        for (int i = 0; i < R; i++)
            s += A[i][j];
    return s;
}

    auto t1 = high_resolution_clock::now(); [cite: 6]
    auto s1 = sumRowMajor(); [cite: 6]
    auto t2 = high_resolution_clock::now(); [cite: 6]

    auto t3 = high_resolution_clock::now(); [cite: 6]
    auto s2 = sumColMajor(); [cite: 6]
    auto t4 = high_resolution_clock::now(); [cite: 6]

    cout << "Row-major: " 
         << duration_cast<microseconds>(t2 - t1).count() 
         << endl; [cite: 6]

    cout << "Col-major: " 
         << duration_cast<microseconds>(t4 - t3).count() 
         << endl; [cite: 6]

    return 0;
}
