#include <iostream>
#include <iomanip>
using namespace std; 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2914

 
int main()
{
	float a=0;
    float b=0;
 
	while(cin >> a >> b)
	{   
		float c = ((a*b)/2);
		//printf("%0.1f",c);
		cout << fixed <<setprecision(1) << c <<endl ;
	}
}