#include <stdio.h>
#include <string.h>

// Khai báo struct TIVI
struct TIVI {
    char tenTivi[30];  /* Tên tivi */
    int hangSanXuat;   /* Hãng sản xuất tivi */
};

int main() {
    // a) Khai báo struct TIVI với thông tin mô tả như trên
    struct TIVI tiviArr[3];

    // b) Nhập thông tin của 3 tivi
    for (int i = 0; i < 3; i++) {
        printf("Nhap thong tin tivi thu %d:\n", i + 1);
        printf("Ten tivi: ");
        scanf("%s", tiviArr[i].tenTivi);
        printf("Hang san xuat (1: LG, 2: Samsung, 3: Sony, ...): ");
        scanf("%d", &tiviArr[i].hangSanXuat);
    }

    // c) In tất cả thông tin của loại tivi của hãng LG
    printf("\nDanh sach tivi cua hang LG:\n");
    for (int i = 0; i < 3; i++) {
        if (tiviArr[i].hangSanXuat == 1) { // Hãng LG có mã là 1
            printf("Ten: %s, Hang san xuat: %d (LG)\n", tiviArr[i].tenTivi, tiviArr[i].hangSanXuat);
        }
    }

    return 0;
}