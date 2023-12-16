#include <stdio.h>
#include <string.h>

// Khai báo struct THISINH
struct THISINH {
    char HoTen[30];   /* Họ tên */
    float TongDiem;   /* Tổng điểm */
};

int main() {
    // a) Khai báo struct THISINH với thông tin mô tả như trên
    struct THISINH thisinhArr[3];

    // b) Nhập thông tin của 3 thí sinh
    for (int i = 0; i < 3; i++) {
        printf("Nhap thong tin thi sinh thu %d:\n", i + 1);
        printf("Ho ten: ");
        scanf("%s", thisinhArr[i].HoTen);
        printf("Tong diem: ");
        scanf("%f", &thisinhArr[i].TongDiem);
    }

    // c) In tất cả thông tin của các thí sinh có điểm lớn hơn 24
    printf("\nDanh sach thí sinh co diem lon hon 24:\n");
    for (int i = 0; i < 3; i++) {
        if (thisinhArr[i].TongDiem > 24) {
            printf("Ho ten: %s, Tong diem: %.2f\n", thisinhArr[i].HoTen, thisinhArr[i].TongDiem);
        }
    }

    return 0;
}