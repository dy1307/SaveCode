#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);
    int a, b, c;
    printf("Nhap vao 3 so nguyen a, b, c cho phuong trinh ax^2 + bx + c = 0:\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    double delta = b * b - 4 * a * c;
    double x1, x2;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co hai nghiem phan biet: x1 = %.2f va x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Phuong trinh co nghiem kep: x = %.2f\n", x1);
    } else {
        printf("Phuong trinh khong co nghiem thuc.\n");
    }

    if (a + b > c && a + c > b && b + c > a) {
        printf("Ba so a, b, c la do dai 3 canh cua tam giac.\n");
    } else {
        printf("Ba so a,b,c khong la do dai cua 3 canh tam giac.\n");
    }

    return 0;
}