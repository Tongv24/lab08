#include <stdio.h>
#include "calc.h"
int main(void) {
    int a = 12, b = 4;
    int ok;
    printf("B目录修改版：%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, sub(a, b));
    printf("%d * %d = %d\n", a, b, mul(a, b));
    int q = divide(a, b, &ok);
    if (ok) {
        printf("%d / %d = %d\n", a, b, q);
    }
    return 0;
}
