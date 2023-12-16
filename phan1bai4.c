#include <stdio.h>

int main() {
    // Khai báo biến
    int n, i, sumOdd = 0;

    // Nhập số nguyên từ bàn phím
    printf("Nhap vao mot so nguyen n: ");
    scanf("%d", &n);

    // Kiểm tra số âm hay số dương
    if (n > 0) {
        printf("%d la so duong.\n", n);
    } else if (n < 0) {
        printf("%d là so am.\n", n);
    } else {
        printf("Ban da nhap so khong 0.\n");
    }

    // Tính tổng các số lẻ nhỏ hơn n
    for (i = 1; i < n; i += 2) {
        sumOdd += i;
    }

    // In ra tổng các số lẻ nhỏ hơn n
    printf("Tong cac so le nho hon %d là: %d\n", n, sumOdd);

    return 0;
}