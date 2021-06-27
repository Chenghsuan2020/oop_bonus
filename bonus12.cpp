#include <iostream>
#include <iomanip>
using namespace std; 

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/new_submit2.php?a=2923

int main()
{
	int a=0;
       
	while(cin >> a)
	{   
		int b = (a - (a%10))/10;
		cout << "NT10=" << b << endl;
		
		//printf("NT10=%d\n",b);
		int c = (a - (b*10) - ((a - b*10)%5))/5;
		//printf("NT5=%d\n",c);
		cout << "NT5=" << c << endl;

		//printf("NT1=%d\n",a-10*b-5*c);
		cout << "NT1=" << a-10*b-5*c << endl;

		
	}
    
}
