#include <iostream>
#include <vector>
using namespace std;

vector<int> quick_sort(vector<int> arr) {
    if (arr.size() <= 1) {
        return arr;
    }

    int pivot = arr[0];

    vector<int> smaller;
    vector<int> larger;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < pivot) {
            smaller.push_back(arr[i]);
        } else {
            larger.push_back(arr[i]);
        }
    }

    vector<int> result = quick_sort(smaller);

    result.push_back(pivot);

    vector<int> sorted_larger = quick_sort(larger);
    result.insert(result.end(), sorted_larger.begin(), sorted_larger.end());

    return result;
}

int main() {
    vector<int> arr = {1, 2, 3, 12, 4, 5, 6, 7, 8, 9, 10};

    cout << "Original List: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> sorted_arr = quick_sort(arr);

    cout << "Sorted List: ";
    for (int num : sorted_arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
