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

    // Tìm và in ra số lẻ đầu tiên trong mảng
    int found = 0;
    for (int i = 0; i < N; ++i) {
        if (arr[i] % 2 != 0) {
            printf("Số lẻ đầu tiên trong mảng là: %d\n", arr[i]);
            found = 1; // Đặt cờ để biết là đã tìm thấy số lẻ
            break;
        }
    }

    // Nếu không tìm thấy số lẻ
    if (!found) {
        printf("Không tìm thấy số lẻ trong mảng.\n");
    }

    return 0;
}