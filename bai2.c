/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

 // BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN 
// Input: Nhập vào từ bàn phím chiều dài và chiều rộng 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình chữ nhật

#include <stdio.h>

int main(){
    // Khai báo biến
    float chieuDai, chieuRong;
    float chuVi, dienTich;

    // Nhập dữ liệu
    printf("Nhap chieu dai: ");
    scanf("%f", &chieuDai);

    printf("Nhap chieu rong: ");
    scanf("%f", &chieuRong);

    // Tính toán
    chuVi = (chieuDai + chieuRong) * 2;
    dienTich = chieuDai * chieuRong;

    // Xuất kết quả
    printf("Chu vi hinh chu nhat: %.2f\n", chuVi);
    printf("Dien tich hinh chu nhat: %.2f\n", dienTich);

    return 0;
}