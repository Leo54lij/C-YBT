#include <iostream>
#include <iomanip>
using namespace std;
int main()//����һ������ֵΪ������������ 
{
    int A,B;
    cin>>A>>B;
    cout<<fixed<<setprecision(3)<<(float)B/A*100<<"%"<<endl;
    return 0;
} 

/*
������������
10433 60
�����������
0.575%
����������2��
322 35
���������2��
10.870%
����������3��
2 4
���������3��
200.000%
*/
