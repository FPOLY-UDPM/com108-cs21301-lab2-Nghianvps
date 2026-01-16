/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

// BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN 
// Input: Nhập vào bán kính của đường tròn 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình tròn

#include <stdio.h>

#define PI 3.14

int main(){
    // Khai báo biến
    float banKinh;
    float chuVi, dienTich;

    // Nhập bán kính
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &banKinh);

    // Tính chu vi và diện tích
    chuVi = 2 * PI * banKinh;
    dienTich = PI * banKinh * banKinh;

    // Xuất kết quả
    printf("Chu vi hinh tron: %.2f\n", chuVi);
    printf("Dien tich hinh tron: %.2f\n", dienTich);

    return 0;
}