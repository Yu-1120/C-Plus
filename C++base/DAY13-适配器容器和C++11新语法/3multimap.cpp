/*03-����ӳ���ʹ��*/
#include <iostream>
#include <map>

using namespace std;

int main()
{

    multimap<char,int> ci;
    typedef multimap<char,int>::iterator IT;

    ci.insert(make_pair('B',300));
    ci.insert(make_pair('A',100));
    ci.insert(make_pair('B',200));
    ci.insert(make_pair('C',500));
    ci.insert(pair<char,int>('B',400));

    //����
    for(IT it=ci.begin();it!=ci.end();it++){
        cout<<it->first<<":"<<it->second<<endl;
    }

    cout<<"---------------------------------"<<endl;
    //ƥ��B������ --- ��һ������B
    IT upper = ci.upper_bound('B');
    cout<<upper->first<<":"<<upper->second<<endl;

    cout<<"---------------------------------"<<endl;
    //ƥ��B������ --- ��һ����С��B
    IT lower = ci.lower_bound('B');
    cout<<lower->first<<":"<<lower->second<<endl;

    cout<<"---------------------------------"<<endl;
    //ƥ��B��������
    pair<IT,IT> res = ci.equal_range('B');
    cout<<"����:"<<res.first->first<<":"<<res.first->second<<endl;
    cout<<"����:"<<res.second->first<<":"<<res.second->second<<endl;

    return 0;
}
