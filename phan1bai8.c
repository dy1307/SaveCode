#include <stdio.h>

int main() {
    // Nhập vào số nguyên n, m từ bàn phím
    int n, m;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    printf("Nhao so nguyen m: ");
    scanf("%d", &m);

    // In ra màn hình 2 số vừa nhập
    printf("So nguyen n: %d\n", n);
    printf("So nguyen m: %d\n", m);

    // Vẽ hình chữ nhật bằng dấu *
    printf("\nHinh chu nhat %dx%d:\n", m, n);
    for (int i = 1; i <= m; ++i) {
         for (int j = 1; j <= n; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    // Tính và in ra tổng S = 1^2 + 2^2 + 3^2 + ... + n^2
    long long sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += (long long)i * i;
    }

    printf("\nTong S = 1^2 + 2^2 + 3^2 + ... + %d^2 la: %lld\n", n, sum);

    return 0;
}