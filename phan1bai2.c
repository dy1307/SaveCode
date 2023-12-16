#include <stdio.h>

int main() {
    // a) Nhập vào số nguyên n từ bàn phím, in số vừa nhập ra màn hình
    int n;
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);
    
    printf("So ban vua nhap: %d\n", n);

    // b) Tính tổng từ 1 đến n và in ra màn hình
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    printf("Tong tu 1 den %d la: %d\n", n, sum);

    // c) Tính và in ra tổng các số Lẻ nhỏ hơn n
    int oddSum = 0;
    for (int i = 1; i < n; i += 2) {
        oddSum += i;
    }
    printf("Tong cac so le nho hon %d la: %d\n", n, oddSum);

    return 0;
}