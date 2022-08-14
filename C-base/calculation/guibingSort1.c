#include<stdio.h>
#include<stdlib.h>

void Merge(int arr[], int tmp[], int start, int mid, int end)//�ϲ�С�鲢����
{
    int i = start;//i��ʶ//��С��ĵ�һ��Ԫ��λ��
    int j = mid + 1;//j��ʶ//��С��ĵ�һ��Ԫ��λ��
    int k = start;//tmp��ǰС���ŵ���ʼλ��
    while (i < mid + 1 && j < end + 1)//��С��Խ�����С��Խ������˳�
    {
        if (arr[i] <= arr[j]) {
            tmp[k++] = arr[i++];
        } else {
            tmp[k++] = arr[j++];
        }
    }

    while (j < end + 1)//����ұ�С��û��Խ��
    {
        tmp[k++] = arr[j++];
    }

    while (i < mid + 1)//������С��û��Խ��
    {
        tmp[k++] = arr[i++];
    }//ŶŶ���ǲ����ˣ�������ŵ��µ��Ǹ���ʱ������ȥ��

    for (i = start; i <= end; i++) {
        arr[i] = tmp[i];
    }//���ˣ�ԭ���������Ѿ��������
}

void MergeS(int arr[], int tmp[], int start, int end)//����С�飬����û��end.
{
    if (start < end) {
        int mid = (start + end) / 2;
        Merge(arr, tmp, start, mid, end);//���ھ�ȫ���ź�
        MergeS(arr, tmp, start, mid);
        MergeS(arr, tmp, mid + 1, end);//���ҵݹ����
    }
}//���ǵݹ������

void MergeSort(int arr[], int len) {
    int *tmp = (int *) malloc(sizeof(int) * len);//����һ����������������ʱ����
    MergeS(arr, tmp, 0, len - 1);//Ƕ�׵���
    free(tmp);
}

int main() {
    int arr[] = {12, 3, 21, 32, 1, 34, 12, 35, 34};//������
    //int s,arr[100];
    //scanf("%d",&s);
    //for(int i=0;i<s;i++)
    //{
    //   scanf("%d ",&arr[i]);
    //}
    int len = sizeof(arr) / sizeof(arr[0]);
    MergeSort(arr, len);
    for (int i = 0; i < len; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    return 0;
}

