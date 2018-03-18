#include <iostream>
#include <cstdio>

int main(){
    //int i, *const cp; //非法
    //int *p1, *const p2; //非法
    //const int ic, &r = ic;  //非法
    //const int * const p3;   //非法
    const int * p;


    const int ic = 3;
    const int p4 = 4;
    const int * const p3 = &p4;
    ic = *p3;
    return 0;
}