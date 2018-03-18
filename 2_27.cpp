#include <iostream>
#include <cstdio>

int main(){
    //int i = -1, &r = 0;   //非法
    
    int i = -1;
    const int i2 = i, &r = i;   //合法
    
    //int *const p2 = &i2;        //非法

    //const int i = -1, &r = 0;     //合法

    const int * const p3 = &i2;    //合法

    const int *p1 = &i2;            //合法

    //const int & const r2;           //非法
    return 0;
}