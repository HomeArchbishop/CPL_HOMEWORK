#include <stdio.h>

int my_len(char *str) // ����char���͵�ָ��str
{
    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}

int main()
{
    char s[10];
    scanf("%s", s);
    int len = my_len(s);
    printf("%d\n", len);
    return 0;
}