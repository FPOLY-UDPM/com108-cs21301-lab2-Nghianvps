/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

 // BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH CỘNG / TRỪ 2 SỐ 
// Input: Nhập vào từ bàn phím 2 số  
// Output: Hiển thị ra màn hình tổng, hiệu 2 số 

#include <stdio.h>

int main(){
    // Khai báo biến
    int so1, so2;
    int tong, hieu;
    // Nhập dữ liệu
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);

    // Xử lý, tính toán
    tong = so1 + so2;
    hieu = so1 - so2;
    // Hiển thị kết quả
    printf("Tong hai so la: %d\n", tong);
    printf("Hieu hai so la: %d\n", hieu);
    
    return 0;
}