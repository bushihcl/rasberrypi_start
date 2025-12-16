// 演示与用户交互
#include <stdio.h>
#include <string.h>
#define DENSITY 62.4  // 人体密度

int main()
{   
    float weight, volume;
    int size, letters;
    char name[40];

    printf("Hi! What's your first name?\n");
    // 在C语言中，字符串数据的最后一位一定是\0（紧贴字符）,标志着字符串的结束，所以字符串一定要多一个。
    // scanf比较弱，ta会在读取到一个空白字符的时候停止。
    scanf("%s", name);  // 注意，这里没有加指针符号&，这是因为name本身就是地址
    printf("%s, what's your weight in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof(name);
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("Alse, your first name has %d letters, \n", letters);
    printf("and we have %d bytes to store it. \n", size);

    return 0;
}