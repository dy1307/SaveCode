#include <stdio.h>

int main() {
    int N;

    // Nhập số phần tử của mảng từ bàn phím
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &N);

    // Khai báo mảng có N phần tử
    int arr[N];

    // Nhập các phần tử của mảng từ bàn phím
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < N; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // In ra mảng đã nhập
    printf("Mang da nhap:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    // Tính và in ra giá trị trung bình cộng của mảng
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }

    float average = (float)sum / N;
    printf("\nGia tri trung binh cua mang: %.2f\n", average);

    return 0;
}