#include <stdio.h>
#include <string.h>
int main()
{
    // ��һ
    char str1[20] = "Hello";
    char str2[] = " World";
    char str3[] = "!";
    strcat(str1, str2);
    printf("������Ӻ���ַ�����%s\n", str1);
    strcat(str1, str3);
    printf("������Ӻ���ַ�����%s\n", str1);

    // ����
    char a[10] = "abc";
    char b[4] = "1234";
    int n = strlen(a);
    for (int i = 0; i < 4; i++)
    {
        a[n + i] = b[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}