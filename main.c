#include <stdio.h>

int main() {
    /*
     * 数据类型
     * int
     * long
     * short
     * float
     * double
     * char
     */
    int intNumber = 42;    // int类型占用4个字节，32个bit位，能够表示 -2147483648 到 2147483647 之间的数字
    long longNumber = 42;  // long类型占用8个字节，64个bit位
    short shortNumber = 42;  // short类型占用2个字节，16个bit位
    printf("int类型: %d 占用4个字节，32个bit位，能够表示 -2147483648 到 2147483647 之间的数字\n",intNumber);
    printf("long类型: %d 占用8个字节，64个bit位\n",longNumber);
    printf("short类型: %d 占用2个字节，16个bit位\n", shortNumber);
    float floatNumber = 42.0;   // float类型：单精度浮点数，占用4个字节，32个bit位
    double doubleNumber = 42.0; // double类型：双精度浮点数，占用8个字节，64个bit位
    printf("float类型：%f 单精度浮点数，占用4个字节，32个bit位\n", floatNumber);
    printf("double类型：%f 双精度浮点数，占用8个字节，64个bit位\n", doubleNumber);
    char character = 'A';   //char类型：占用1个字节(-128，127),可以表示ASCII字符集，一个数字对应一个字符
    printf("%d\n",character);
    /*
     * 转义字符  含义                  ASCII码值
     * \a       响铃                     007
     * \b       退格                     008
     * \f       换页                     012
     * \n       换行                     010
     * \r       回车                     013
     * \t       水平制表                  009
     * \v       垂直制表                  011
     * \\       反斜杠                   092
     * \?       问号字符                  063
     * /'       单引号字符                039
     * /"       双引号字符                034
     * \0       空字符                   000
     * \ddd     任意字符               三位八进制
     * \xhh     任意字符               二位十六进制
     */


    return 0;
}
