#include <stdio.h>
#include <stdlib.h>

int doichohaiso(int *controcuaA, int *controcuaB){
    printf("Gia tri cua x duoc truyen vao la %d\n", *controcuaA);
    printf("Gia tri cua y duoc truyen vao la %d\n", *controcuaB);
    int tmp = *controcuaA;
    *controcuaA =  *controcuaB;
    *controcuaB = tmp;
    printf("\n");
    printf("Gia tri cua x sau khi doi cho la %d\n",  *controcuaA);
    printf("Gia tri cua y sau khi doi cho la %d\n",  *controcuaB);

}

int main() {
    int a, b;
    printf("Vui lòng nhập số a:");
    scanf("%d", &a);
    printf("Vui lòng nhập số b:");
    scanf("%d", &b);

    if (a > b) {
       doichohaiso(&a, &b);
    }


    printf("Kết quả cuối cùng:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}