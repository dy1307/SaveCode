#include <stdio.h>

int main() {
    // Nhập vào số nguyên N từ bàn phím
    int N;
    printf("Nhập số nguyên N: ");
    scanf("%d", &N);

    // Khai báo mảng và nhập các phần tử
    int arr[N];
    printf("Nhập mảng gồm %d số nguyên:\n", N);
    for (int i = 0; i < N; ++i) {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // In ra mảng đã nhập
    printf("\nMảng đã nhập:\n");
    for (int i = 0; i < N; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Tính và in ra tổng các phần tử có chỉ số lẻ trong mảng
    int sum = 0;
    for (int i = 1; i < N; i += 2) {
        sum += arr[i];
    }

    printf("Tổng các phần tử có chỉ số lẻ trong mảng là: %d\n", sum);

    return 0;
}