[13.33, 10 / 1 / 2024] Rasty: #include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int median(vector<int> data) {
    size_t size = data.size();
    sort(data.begin(), data.end());

    if (size % 2 == 0) {
        return (data[size / 2 - 1] + data[size / 2]) / 2;
    }
    else {
        return data[size / 2];
    }
}

int main() {
    int data[] = { 87, 45, 50, 25, 32, 10, 75, 90, 58, 8 };
    int size = sizeof(data) / sizeof(data[0]);

    vector<int> dataVector(data, data + size);

    sort(dataVector.begin(), dataVector.end(), greater<int>());

    cout << "Deret setelah di sorting dari besar ke kecil: ";
    for (int i = 0; i < size; i++) {
        cout << dataVector[i] << " ";
    }
    cout << endl;

    cout << "nilai Median: " << median(dataVector) << endl;

    return 0;
}