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
