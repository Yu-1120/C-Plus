/*07-���ӽ���*/
#include <iostream>
#include <fstream>

using namespace std;

//��ԭʼ�ļ���ÿһ���ַ���������������key֮��д��Ŀ���ļ�
void _xor(const char *srcpath, const char *destpath, unsigned char key) {
    char buf[100] = {};
    int res = 0;

    //����ԭ�ļ�
    ifstream ifs(srcpath, ios::in | ios::binary);
    if (!ifs.is_open()) {
        cout << "��ԭ�ļ�ʧ��!" << endl;
        exit(0);
    }

    //д��Ŀ���ļ�
    ofstream ofs(destpath, ios::out | ios::trunc | ios::binary);
    if (!ofs.is_open()) {
        cout << "��Ŀ���ļ�ʧ��!" << endl;
        ifs.close();
        exit(0);
    }

    //��---����---д
    while (1) {
        //��
        ifs.read(buf, sizeof(buf));
        res = ifs.gcount();
        cout << res << endl;
        if (res == 0)//������
            break;

        //����
        for (int i = 0; i < res; i++)
            buf[i] ^= key;

        //����
        ofs.write(buf, res);
    }

    ifs.close();
    ofs.close();
}


int main() {
    unsigned char key = 0;

    cout << "��������ܵ�key:";
    cin >> key;

    _xor("./a.txt", "./b.txt", key);

    cout << "��������ܵ�key:";
    cin >> key;

//    _xor("./b.txt","./c.txt",key);

    return 0;
}

