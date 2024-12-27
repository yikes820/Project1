#include <iostream>

#define SIZE 5 // 배열 크기 정의

// 함수 선언
int calculateSum(int arr[], int size);
double calculateAverage(int sum, int size);

int main() {
    int numbers[SIZE];
    int sum;
    double average;

    // 사용자로부터 숫자 입력 받기
    std::cout << SIZE << "개의 숫자를 입력하세요: " << std::endl;
    for (int i = 0; i < SIZE; i++) {
        std::cout << "숫자 " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    // 합계 계산
    sum = calculateSum(numbers, SIZE);

    // 평균 계산
    average = calculateAverage(sum, SIZE);

    // 결과 출력
    std::cout << "합계: " << sum << std::endl;
    std::cout << "평균: " << average << std::endl;

    return 0;
}

// 합계 계산 함수
int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// 평균 계산 함수
double calculateAverage(int sum, int size) {
    return static_cast<double>(sum) / size;
}