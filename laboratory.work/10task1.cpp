#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;


int leftBound(vector<int>& arr, int target) {
    int l = 0, r = arr.size() - 1, res = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] >= target) {
            if (arr[mid] == target) res = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return res;
}


int rightBound(vector<int>& arr, int target) {
    int l = 0, r = arr.size() - 1, res = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] <= target) {
            if (arr[mid] == target) res = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return res;
}

int main() {
    srand(42);
    vector<int> arr(100);

   
    for (int i = 0; i < 100; i++) {
        arr[i] = rand() % 10;
    }

    
    sort(arr.begin(), arr.end());

    
    int target;
    cout << "Введите число (0-9): ";
    cin >> target;

    clock_t start = clock();

    int left = leftBound(arr, target);
    int right = rightBound(arr, target);

    int count = (left == -1) ? 0 : (right - left + 1);

    clock_t end = clock();

  
    cout << "Количество: " << count << endl;
    cout << "Время: " << (double)(end - start) / CLOCKS_PER_SEC << " сек" << endl;

    return 0;
}
