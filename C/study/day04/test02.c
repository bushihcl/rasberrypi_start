// 编写一个程序，要求提示输入一个ASCII码值（如：66），然后打印出输入的字符。
#include <stdio.h>

int main()
{
    int ascii_value;

    printf("请输入一个ASCII码值，然后我会告诉你这个ASCII码对应的是哪个字符。\n");
    scanf("%d", &ascii_value);
    printf("你刚刚输入的值是%d，它代表的ASCII字符是%c。\n", ascii_value, (char)ascii_value);

    return 0;
}




