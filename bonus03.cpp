#include <iostream>
#include <iomanip>
using namespace std; 
 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6855

 
int main()
{
	float a=0;
    float b=0;
    float h=0;
	while(cin >> a >> b >> h)
	{   
		//printf("Trapezoid area:%0.1f\n",((a+b)*h)/2);
		cout << "Trapezoid area:" << fixed <<setprecision(1) << ((a+b)*h)/2 <<endl ;
	}
}