/*07 - ��ģ���ȫ���ػ�*/
#include <iostream>
#include <cstring>

using namespace std;

//��ģ�������
template<typename T>
class Data {
public:
    Data(T a) : dt(a) {}

    ~Data() {}

    T get_dt() {
        return this->dt;
    }

    void set_dt(T a) {
        this->dt = a;
    }

    void show() {
        cout << "T:" << this->dt << endl;
    }

private:
    T dt;
};

//ȫ���ػ� ----- char *
template<>
class Data<char *> {
public:
    Data(char *a) {
        this->dt = new char[strlen(a) + 1];
        strcpy(this->dt, a);
    }

    ~Data() {
        delete[] this->dt;
    }

    char *get_dt() {
        return this->dt;
    }

    void set_dt(char *a) {
        if (strlen(this->dt) < strlen(a)) {
            delete[] this->dt;
            this->dt = new char[strlen(a) + 1];
        }

        strcpy(this->dt, a);
    }

    void show() {
        cout << "char *:" << this->dt << endl;
    }

private:
    char *dt;
};

int main() {
    //��ģ���ʹ��
    Data<int> di(10);
    di.show();

    Data<double> dd(10.5);
    dd.show();

    Data<string> ds("hello");
    ds.show();
    //ȫ���ػ�
    Data<char *> dcp("welcome");
    dcp.show();

    return 0;
}
