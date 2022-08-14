//
// Created by 11868 on 2022/8/13.
//
#include<stdio.h>


#include <stdio.h>
#include <stdlib.h>

#define decode(p, r, i, n, t, f) r##f##r##i##t##p
#define puts decode(m,s,t,o,e,y)

int main() {
    double ID[] = {1.3553894309652565e+224, 1.0805197184392210e-081,
                   7.2746636873724370e+199, 6.9524391087699090e-308};
    //return puts((char*)ID);//放开注释运行很危险 不要放开运行很危险
    getchar();
    return 0;
}