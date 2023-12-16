#include <stdio.h>

int main() {
    // Nhập vào số nguyên n từ bàn phím
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    // Tính tổng S1 = 1 - 2 + 3 - 4 + ... + n
    int sumS1 = 0;
    int sign = 1; // Biến dấu để thay đổi giá trị của từng số

    for (int i = 1; i <= n; ++i) {
        sumS1 += sign * i;
        sign = -sign; // Đảo dấu cho lần lặp tiếp theo
    }

    // Tính tổng S2 = 1 + 1/2 + 1/3 + ... + 1/n
    float sumS2 = 0.0;

    for (float i = 1; i <= n; ++i) {
        sumS2 += 1 / i;
    }

    // In kết quả
    printf("Tong S1 = 1 - 2 + 3 - 4 + ... + %d la: %d\n", n, sumS1);
    printf("Tong S2 = 1 + 1/2 + 1/3 + ... + 1/%d la: %.2f\n", n, sumS2);

    return 0;
}