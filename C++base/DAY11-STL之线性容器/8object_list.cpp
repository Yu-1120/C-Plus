/*07-�б�洢�����ʹ��*/
#include <iostream>
#include <list>

using namespace std;

class Product {
public:
    Product(double p = 0.0, size_t c = 0) : price(p), count(c) {}

    //֧�ְ�ֵɾ�� ���� ȥ�أ�����==�����
    bool operator==(const Product &p) {
        return this->price - p.price >= -1e-15 && this->price - p.price <= 1e-15;
    }

    //֧��Ĭ�����򣬺ϲ�,�ṩ<����
    bool operator<(const Product &p) {
        //��������
        return this->price < p.price;
    }

    friend ostream &operator<<(ostream &os, const Product &p) {
        return os << p.price << "X" << p.count;
    }

    //�Ƚ�����Ԫ
    friend bool comp(const Product &p1, const Product &p2);

    friend class Compare;

private:
    double price;
    size_t count;
};

//�ṩ�����Ƚ���
bool comp(const Product &p1, const Product &p2) {
    //�������Ӵ�С
    return p1.count > p2.count;
}

//�ṩ��������Ƚ���
class Compare {
public:
    bool operator()(const Product &p1, const Product &p2) {
        //���ܼ۴�С����
        return p1.price * p1.count < p2.price * p2.count;
    }
};

int main() {
    list<Product> lp;
    lp.push_back(Product(12.5, 10));
    lp.push_back(Product(3.2, 40));
    lp.push_back(Product(55.7, 31));
    lp.push_back(Product(113.3, 98));
    lp.push_back(Product(0.6, 6));

    cout << "list�������:";
    for (list<Product>::iterator itt = lp.begin(); itt != lp.end(); itt++) {
        cout << *itt << " ";
    }
    cout << endl;

    //lp.remove(Product(3.2));
    lp.sort();
    //lp.sort(comp);
//    lp.sort(Compare());

    cout << "list�����:";
    for (list<Product>::iterator itt = lp.begin(); itt != lp.end(); itt++) {
        cout << *itt << " ";
    }
    cout << endl;

    return 0;
}
