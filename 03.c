#include <stdio.h>
#include <string.h>

char str[100] ;
int len ;

int main()
{
    memset(str, '\0', sizeof(str));
    scanf("%s" , str);

    len = strlen( str );

    printf("%d\n", len);
    printf("%s\n", str);
    return 0 ;
}

/* <string.h>
   1.字符串拷贝：strcpy(s2, s1) 把 s1串拷贝给 s2
   2.字符串长度：strlen(s1) 返回一个 int， 代表字符串的长度
   3.字符串比较：strcmp(s1, s2) 返回一个 bool，如果两个串相等则为1，不等则为0
*/