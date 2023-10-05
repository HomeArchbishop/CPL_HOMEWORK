#include <stdio.h>

// ���ֲ��ң��ֳ��۰����
/*
���ֲ��Ҳ��裺
1��������Ԫ�����а���С��������
2��ȡ�м�Ԫ�ؽ��бȽ�
3�����ݴ�/С������/�Ҽ������в���
4���ظ�����2�Ͳ���3��ֱ���ҵ�Ŀ��Ԫ�ػ�Ŀ��Ԫ�ز�����
*/

// ���ֲ��ҵĵݹ����ʵ��
// �ݹ�ʵ��ʹ�ú�������ջ�������м�����������ջ���������
int Binary_search1(int arr[], int low, int high, int key)
{
    int mid;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            return Binary_search1(arr, mid + 1, high, key);
        }
        else
        {
            return Binary_search1(arr, low, mid - 1, key);
        }
    }
    return -1;
}

// ���ֲ��ҵķǵݹ����ʵ��
// �ǵݹ�ʵ�ֵĴ�����ԱȽϸ��ӣ������Ա���ջ���������
int Binary_search2(int arr[], int low, int high, int key)
{
    int mid;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}