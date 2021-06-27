#include <iostream>
#include <iomanip>
using namespace std; 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=1669
int main(int argc, char *argv[]) {
	float a = 0;
	float b = 0;
	float c = 0;
	
	while(cin >> a >> b >> c)
	{	
		float max = 0;
		float temp_one = 0;
		float temp_two = 0;
		
		if(c>a&&c>b)
		{
			max = c;
			temp_one = a;
			temp_two = b;
		}
		
		if(a>b&&a>c)
		{
			max = a;
			temp_one = b;
			temp_two = c;
		}
		
		if(b>a&&b>c)
		{
			max = b;
			temp_one = c;
			temp_two = a;
		}
		
		if(temp_one+ temp_two > max)
		{
			cout << "Bigger than the third side\n";
			//printf("Bigger than the third side\n");
		}
		else
		{
			cout << "Less than the third side\n";
			//printf("Less than the third side\n");
		}
		
					


	}
}
