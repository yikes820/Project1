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

    cout << "�Է��� ������ ������ �����ϼ���: ";
    cin >> n;

    cout << "���ڸ� �Է��ϼ���: ";
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    int choice;
    cout << "1�� �����ϸ� �������� 2�� �����ϸ� ���������Դϴ�: ";
    cin >> choice;

    if (choice == 1) {
        sortAscending(numbers);
        cout << "������������ ����: ";
    }
    else if (choice == 2) {
        sortDescending(numbers);
        cout << "������������ ����: ";
    }
    else {
        cout << "�߸� �Է��Ͽ����ϴ�!" << endl;
        return 1;
    }

    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
