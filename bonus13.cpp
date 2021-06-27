#include <iostream>
#include <iomanip>
using namespace std; 

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30749

int main()
{
		int x=0;
		int y=0;
		       
		while(cin >> x >> y)
		{
				if(x*x+y*y<=10000)
				{
					cout << "inside" << endl;
				}
				else
				{
					cout << "outside" << endl;

				}
		}
		    
}
