#include <stdio.h>

int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int x, y;

    printf("Nhập số x: ");
    scanf("%d", &x);
    printf("Nhập số y: ");
    scanf("%d", &y);

    int tong = tinhTong(x, y);
    printf("Tổng của hai số là: %d\n", tong);

    return 0;
}