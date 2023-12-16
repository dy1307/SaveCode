#include <stdio.h>

int main() {
    // a) Nhập vào số nguyên n từ bàn phím
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    
    // b) In ra các số chia hết cho 3 và nhỏ hơn n ra màn hình
    printf("Cac so chia het cho 3 nho hon %d:\n", n);
    for (int i = 3; i < n; i += 3) {
        printf("%d ", i);
    }
    printf("\n");

    // c) Tính và in ra tổng các số chia hết cho 3 ra màn hình
    int sum = 0;
    for (int i = 3; i < n; i += 3) {
        sum += i;
    }
    printf("Tong ca so chia het cho 3 la: %d\n", sum);

    return 0;
}