#include <stdio.h>

// Hàm kiểm tra số nguyên tố
int isPrime(int num) {
    if (num < 2) {
        return 0; // Không phải số nguyên tố
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0; // Không phải số nguyên tố
        }
    }
    return 1; // Là số nguyên tố
}

int main() {
    // Nhập vào số nguyên n từ bàn phím
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    // Đếm và tính tổng các số nguyên tố nhỏ hơn n
    int count = 0;
    int sum = 0;

    for (int i = 2; i < n; ++i) {
        if (isPrime(i)) {
            count++;
            sum += i;
        }
    }

    // In kết quả
    printf("So cac so nguyen to nho hon %d la: %d\n", n, count);
    printf("tong cac so nguyen to nho hon %d la: %d\n", n, sum);

    return 0;
}