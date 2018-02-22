#include <iostream>
int main()
{
	int currVal = 0, val = 0;
    if (std::cin >> currVal){
        int cnt = 1;
        while(std::cin >> val){
            if(val == currVal)
                ++cnt;
            else{
                std::cout << currVal << " occurs " << cnt << " times " << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs " << cnt << " times " << std::endl;
    }
    return 0;
}

/* 
    1、如果输入所有值都是相等的,输入回车之后没有输出，输入文件结束符之后输出结果；
    2、如果输入的所有值都不相等，输入回车之后输出最后一个值前面的所有值，输入文件结束符之后输出最后一个值。
    文件结束符结束的是while循环，输出最后一个不同的值，否则一直循环计数，程序会一直执行。
 */
