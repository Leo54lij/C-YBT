#include <iostream>
#include <iomanip>
using namespace std;
int main()//定义一个返回值为整数的主函数 
{
    int A,B;
    cin>>A>>B;
    cout<<fixed<<setprecision(3)<<(float)B/A*100<<"%"<<endl;
    return 0;
} 

/*
【输入样例】
10433 60
【输出样例】
0.575%
【输入样例2】
322 35
【输出样例2】
10.870%
【输入样例3】
2 4
【输出样例3】
200.000%
*/
