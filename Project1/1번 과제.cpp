#include <iostream>
#include <vector>
using namespace std;

// Function to sort in ascending order
void sortAscending(vector<int>& arr) {
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        for (size_t j = 0; j < arr.size() - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function to sort in descending order
void sortDescending(vector<int>& arr) {
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        for (size_t j = 0; j < arr.size() - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> numbers;
    int n;

    cout << "입력할 숫자의 갯수를 선택하세요: ";
    cin >> n;

    cout << "숫자를 입력하세요: ";
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    int choice;
    cout << "1을 엔터하면 오름차순 2를 엔터하면 내림차순입니다: ";
    cin >> choice;

    if (choice == 1) {
        sortAscending(numbers);
        cout << "오름차순으로 정렬: ";
    }
    else if (choice == 2) {
        sortDescending(numbers);
        cout << "내림차순으로 정렬: ";
    }
    else {
        cout << "잘못 입력하였습니다!" << endl;
        return 1;
    }

    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
