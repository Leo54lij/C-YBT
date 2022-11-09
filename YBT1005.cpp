#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int x,a,y,b;
	float v;
	cin>>x>>a>>y>>b;
	v=(float)(b*y-a*x)/(b-a);
	cout<<fixed<<setprecision(2)<<v<<endl;
	return 0;
 } 
