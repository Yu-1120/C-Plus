#ifndef SEARCH_H
#define SEARCH_H

//��ģ������
template <typename T>
class Searcher{
public:
    int operator()(T *arr,int from,int to,T dt);
};

#include "search.cpp"

#endif // SEARCH_H
