#include <stdio.h>

// дð������ĺ���(��С����ð������)
void Bubble_sort(int arr[], int size)
{
    int i, j, tem;
    for (i = 0; i < size - 1; i++) // size-1��ԭ���ǲ��ø��Լ��Ƚ�
    {
        int count = 0;
        for (j = 0; j < size - 1 - i; j++) // size-1-i��ԭ����ÿһ�˶�����һ�����Ƚ�
        {
            if (arr[j] > arr[j + 1])
            {
                tem = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tem;
                count = 1;
            }
        }
        if (count == 0)
            break;
    }
}

int main()
{
    int arr[10];
    printf("������ʮ����\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("���������Ϊ��");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");

    printf("���������Ϊ��");
    Bubble_sort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}