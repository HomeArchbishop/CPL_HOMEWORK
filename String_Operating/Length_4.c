#include <stdio.h>

//ָ���ָ�룬���ַ�������
int my_len(char *str)
{
    char *start = str;
    while(*str)
    {
        str++;
    }
    return str-start;
}

int main()
{
    char s[] = "abds";
    int len = my_len(s);
    printf("%d\n", len);
    return 0;
}