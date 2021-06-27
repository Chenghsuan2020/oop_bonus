#include <iostream>
#include <iomanip>
using namespace std; 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6882
 
int main()
{
	double a=0;
    double a_total=0;
    
	while(cin >> a)
	{   
	a_total = (a*9/5) + 32 ;
	a_total = a_total * 10;
	//printf("%lf\n",a_total);
	a_total = (int)(a_total+0.5);
	//printf("%lf\n",a_total);
	a_total = a_total / 10;
	cout <<  fixed << setprecision(1) << a_total << endl ;
		//printf("%0.1lf\n",a_total);
	}
    
}

//F = 9/5 * C + 32