#include <iostream>
#include <iomanip>
using namespace std; 
 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30754
 
int main()
{
	int month = 0;
    
	while(cin >> month)
	{
		if(3<=month && month<=5)
		{
			cout << "Spring"<< endl;
			//printf("Spring\n");
		}
		
		else if(6<=month && month<=8)
		{
			cout << "Summer"<< endl;

			//printf("Summer\n");
		}
		
		else if(9<=month && month<=11)
		{
			cout << "Autumn"<< endl;

			//printf("Autumn\n");
		}
		
		else
		{
			cout << "Winter"<< endl;

			//printf("Winter\n");
		}
	}
    
}