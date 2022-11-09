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
【输入样例】
5 7
【输出样例】
0.714285714
【输入样例2】
4 2
【输出样例2】
2.000000000
【输入样例3】
20 5
【输出样例3】
4.000000000
*/
