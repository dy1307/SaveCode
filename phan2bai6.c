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

    // Tính và in ra tổng nghịch đảo của các phần tử trong mảng
    float tongNghichDao = 0;
    for (int i = 0; i < N; i++) {
        tongNghichDao += 1.0 / arr[i];
    }

    printf("\nTong nghich dao cua cac phan tu trong mang: %.2f\n", tongNghichDao);

    return 0;
}