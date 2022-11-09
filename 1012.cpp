#include <iostream>
#include <iomanip>
using namespace std;
int main()//定义一个返回值为整数的主函数 
{
	double x,a,b,c,d,fx;
	cin>>x>>a>>b>>c>>d;
	fx=a*x*x*x+b*x*x+c*x+d;
	cout<<fixed<<setprecision(7)<<fx<<endl;
	return 0;
 } 
