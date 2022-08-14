/*11 - Lambda���ʽ*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//�ж������ĺ�������
class Get_mode {
public:
    Get_mode(int d = 1) : div(d) {}

    //����()����� --- �жϲ����Ƿ��ܱ�div����
    bool operator()(int x) {
        return x % div == 0;
    }

private:
    int div;
};

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> vi(arr, arr + 9);
    //---------------------
    cout << Get_mode(3)(arr[7]) << endl;

    //�����㷨����count_if���ڼ�����ϱ�׼(����)��Ԫ�ظ���
    //---------------------
    //count_if�Ĳ����� ��Χ + �����Ƿ���ϱ�׼����/��������
    cout << count_if(vi.begin(), vi.end(), Get_mode(3)) << endl;//����vi���ܱ�3������Ԫ�ظ���
    //ʹ��Lambdaʵ�ָ�������﷨����һ��
    cout << count_if(vi.begin(), vi.end(), [](int x)/*->bool*/{
        return x % 4 == 0;//��4������������
    }) << endl;
    //--------------------- ���ǵ�һ�ַ����Ƚϣ���࣬
    // �������lamba�﷨-�����ڵ�����ҲԽ��Խ�����ڼ��

    //ʹ��for_each�����ܱ�3������Ԫ�ظ���  ���Ҳ�������С
    int count = 0;
    for_each(vi.begin(), vi.end(), [&count](int x) {
        count += x % 3 == 0;
    });

    cout << "�ܱ�3�����ĸ���Ϊ:" << count << endl;

    return 0;
}
