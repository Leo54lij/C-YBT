// YBT1010.cpp
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a,b;
	long double c;
	cin>>a>>b;
	c=(long double)a/b;
	cout<<fixed<<setprecision(9)<<c<<endl;
	return 0;
 }
/*
������������
5 7
�����������
0.714285714
����������2��
4 2
���������2��
2.000000000
����������3��
20 5
���������3��
4.000000000
*/
