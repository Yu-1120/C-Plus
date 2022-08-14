/*02-ӳ��ʵ��ͶƱ*/
#include <iostream>
#include <map>

using namespace std;

class Cand
{
public:
    Cand(string name = "") : name(name), votes(0) {}

    //ͶƱ
    void vote()
    {
        this->votes++;
    }
    int get_votes() const
    {
        return this->votes;
    }

    string get_name() const
    {
        return this->name;
    }

    friend ostream &operator<<(ostream &os, const Cand &c)
    {
        return os << c.name << ":" << c.votes;
    }

private:
    string name;
    int votes;
};

int main()
{
    map<char, Cand> cc;
    typedef map<char, Cand>::iterator IT;
    //-----------------
    cc.insert(pair<char, Cand>('A', Cand("��ɮ")));
    cc.insert(make_pair('B', Cand("�����")));
    cc['C'] = Cand("��˽�");
    cc['D'] = string("ɳ����");
    cc['E'] = Cand("������");
    //-----------------
    //ͶƱ
    for (int i = 0; i < 20; i++) //����Ͷ20Ʊ
    {
        for (IT it = cc.begin(); it != cc.end(); it++)
        {
            cout << it->first << "-" << it->second << endl;
        }

        char key;
        cout << "��ͶƱ:";
        cin >> key;

        IT it = cc.find(key);
        if (it == cc.end())
        {
            cout << "��ЧƱ" << endl;
            continue;
        }

        //Ʊ��+1
        it->second.vote();
    }
    cout << "---------------------------------------------" << endl;
    //���ѡ�ٽ��
    IT win = cc.begin(); //Ĭ�ϵ�һ��Ȼ���ֵ
    for (IT it = cc.begin(); it != cc.end(); it++)
    {
        cout << it->first << "-" << it->second << endl;
        //��¼Ʊ��������
        if (it->second.get_votes() > win->second.get_votes())
            win = it;
    }

    cout << "��ϲ" << win->second.get_name() << "��ѡΪ�����������ϯ�����ˣ�" << endl;

    return 0;
}
