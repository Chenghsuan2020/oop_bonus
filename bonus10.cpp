#include <iostream>
#include <iomanip>
using namespace std; 
 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2921
int main()
{
	int i=0;
	int a=1;
	int j=0;
	
	
	while(cin >> i)
	{   
		if(i>31)
		{
			
			cout << "Value of more than 31" << endl;
		}

		else if(i==0)
		{
			//printf("1\n");
			cout << "1"<< endl;
		}

		else
		{
			for( j=0;j<i;j++)
			{
				a = a * 2;
			}
			
			//printf("%0.0lf\n",a);
			cout << a <<endl;
			a = 1;
		}
	}
	
}