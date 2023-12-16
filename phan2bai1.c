#include <stdio.h>

int main() {
    // Nhazvào số nguyên N từ bàn phím
    int N;
    printf("Nhap số nguyên N: ");
    scanf("%d", &N);

    // Khai báo mảng và Nhazcác phần tử
    int arr[N];
    printf("Nhap mảng gồm %d số nguyên:\n", N);
    for (int i = 0; i < N; ++i) {
        printf("Nhazphần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // In ra mảng đã Nhap
    printf("\nMảng đã Nhap:\n");
    for (int i = 0; i < N; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Nhazvào số nguyên x để đếm số lần xuất hiện
    int x;
    printf("\nNhap số nguyên x: ");
    scanf("%d", &x);

    // Đếm số lần xuất hiện của x trong mảng
    int count = 0;
    for (int i = 0; i < N; ++i) {
        if (arr[i] == x) {
            count++;
        }
    }

    // In kết quả
    printf("Số lần xuất hiện của %d trong mảng là: %d\n", x, count);

    return 0;
}