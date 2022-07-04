#include <stdio.h>
#include "first.h"

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
    printf("数据类型\n");
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
    printf("char类型：%c 占用1个字节(-128，127),可以表示ASCII字符集，一个数字对应一个字符\n",character);


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


    /*
     * 变量
     * 变量的命名有以下规则：
     * 1.不能重复使用其他变量使用过的名字
     * 只能包含英文字母或者是下划线、数字，并且严格区分大小写。比如a和A不算同一个变量
     * 虽然可以包含数字，但不能以数字开头
     * 不能是关键字
     * 建议：多个词可以使用驼峰命名法或者是下划线连接
     */
    printf("\n");
    printf("\n");

    printf("* 变量\n"
           "* 变量的命名有以下规则：\n"
           "1.不能重复使用其他变量使用过的名字\n"
           "2.只能包含英文字母或者是下划线、数字，并且严格区分大小写。比如a和A不算同一个变量\n"
           "3.虽然可以包含数字，但不能以数字开头\n"
           "4.不能是关键字\n"
           "5.建议：多个词可以使用驼峰命名法或者是下划线连接\n");
    printf("\n");
    printf("\n");
    /*
     * 格式控制符(占位符)                                   说明
     * %c                                           输出一个单一的字符
     * %hd %d %ld                           以十进制、有符号的形式输出short int long类型的整数
     * %hu %u %lu                           以十进制、无符号的形式输出short int long类型的整数
     * %ho %o %lo                           以八进制、不带前缀、无符号的形式输出short int long类型的整数
     * %#ho %#o %#lo                        以八进制、带前缀、无符号的形式输出short int long类型的整数
     * %hx %x %lx %hX %X %lX                以十六进制、不带前缀、无符号的形式输出short int long类型的整数。如果x小写则输出的十六进制字母也小写
     * %#hx %#x %#lx %#hX %#X %#lX          以十六进制、带前缀、无符号的形式输出short int long类型的整数。如果x小写则输出的十六进制字母也小写
     * %f %lf                               以十进制的形式输出float double类型的小数
     * %e %le %E %lE                        以指数的形式输出float double类型的小数。如果e小写则结果中的e也是小写
     * %g %lg %G %lG                        以十进制和指数中较短的形式输出float double类型的小数，并且小数部分的最后不会添加多余的0.如果g小写，那么当以指数形式输出时e也小写
     * %s                                          输出一个字符串
     */
    starbar();  // 函数调用，打印40个星号
    return 0;
}



