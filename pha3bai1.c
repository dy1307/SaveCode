#include <stdio.h>
#include <string.h>

// Khai báo struct DIENTHOAI
struct DIENTHOAI {
    char tenDienThoai[30]; /* Tên điện thoại */
    char hangSanXuat[20]; /* Hãng sản xuất điện thoại */
};

int main() {
    // Khai báo mảng chứa thông tin của 3 điện thoại
    struct DIENTHOAI dienThoaiArr[3];

    // Nhập thông tin của 3 điện thoại
    for (int i = 0; i < 3; i++) {
        printf("Nhap thong tin dien thoai thu %d:\n", i + 1);
        printf("Ten dien thoai: ");
        scanf("%s", dienThoaiArr[i].tenDienThoai);
        printf("Hang san xuat: ");
        scanf("%s", dienThoaiArr[i].hangSanXuat);
    }

    // In tất cả thông tin của các điện thoại do Samsung sản xuất
    printf("\nDanh sach dien thoai do Samsung san xuat:\n");
    for (int i = 0; i < 3; i++) {
        if (strcmp(dienThoaiArr[i].hangSanXuat, "Samsung") == 0) {
            printf("Ten: %s, Hang san xuat: %s\n", dienThoaiArr[i].tenDienThoai, dienThoaiArr[i].hangSanXuat);
        }
    }
    printf("tran duc duy");

    return 0;
}