#include <iostream>
#include <cstdio>

int main(){
    int i = 0;
    //double * dp = &i;     //非法
    //int *ip = i;  //非法
    int *p = &i;  //非法
    return 0;
}