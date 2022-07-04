#include <stdio.h>

int main() {
    int intNumber = 42;    // int类型占用4个字节，32个bit位，能够表示 -2147483648 到 2147483647 之间的数字
    long longNumber = 42;  // long类型占用8个字节，64个bit位
    short shortNumber = 42;  // short类型占用2个字节，16个bit位
    printf("int类型: %d 占用4个字节，32个bit位，能够表示 -2147483648 到 2147483647 之间的数字\n",intNumber);
    printf("long类型: %d 占用8个字节，64个bit位\n",longNumber);
    printf("short类型: %d 占用2个字节，16个bit位\n", shortNumber);



    return 0;
}
