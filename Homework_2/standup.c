#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[100005] = {0};
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    int num = 0;      // num��ʾ��������ţ����
    int count = a[0]; // count��ʾԭ�༶���Ѿ�վ����������
    for (int i = 1; i <= n; i++)
    {
        if ((a[i] != 0) && (num + count < i))
        {
            num += (i - count - num);
        }
        count += a[i];
    }
    printf("%d\n", num);
    return 0;
}