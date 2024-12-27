#include <iostream>

#define SIZE 5 // �迭 ũ�� ����

// �Լ� ����
int calculateSum(int arr[], int size);
double calculateAverage(int sum, int size);

int main() {
    int numbers[SIZE];
    int sum;
    double average;

    // ����ڷκ��� ���� �Է� �ޱ�
    std::cout << SIZE << "���� ���ڸ� �Է��ϼ���: " << std::endl;
    for (int i = 0; i < SIZE; i++) {
        std::cout << "���� " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    // �հ� ���
    sum = calculateSum(numbers, SIZE);

    // ��� ���
    average = calculateAverage(sum, SIZE);

    // ��� ���
    std::cout << "�հ�: " << sum << std::endl;
    std::cout << "���: " << average << std::endl;

    return 0;
}

// �հ� ��� �Լ�
int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// ��� ��� �Լ�
double calculateAverage(int sum, int size) {
    return static_cast<double>(sum) / size;
}