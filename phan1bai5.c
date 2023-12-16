#include <stdio.h>

int main() {
    // Nhập vào số nguyên n từ bàn phím
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    // In ra các ước số của 100 và nhỏ hơn n
    printf("Cacc uoc so cua 100 va nho hon %d la: ", n);
    for (int i = 1; i <= 100; ++i) {
        if (100 % i == 0 && i < n) {
            printf("%d ", i);
        }
    }
    printf("\n");

    // Tính trung bình cộng các số lẻ nhỏ hơn n
    int count = 0;
    int sum = 0;
    for (int i = 1; i < n; i += 2) {
        sum += i;
        count++;
    }

    if (count > 0) {
        float average = (float)sum / count;
        printf("Trung  binh cong cac so le nho hon %d la: %.2f\n", n, average);
    } else {
        printf("Khong co so le nao nho hon %d\n", n);
    }

    return 0;
}