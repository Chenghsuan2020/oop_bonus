#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std; 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6955
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
		
		if(temp_one+ temp_two <= max)
		{
			//printf("Not Triangle\n");
			cout << "Not Triangle\n";
		}
		
		else if(pow(temp_one,2)+ pow(temp_two,2) == pow(max,2))
		{
			//printf("Right Triangle\n");
			cout << "Right Triangle\n";
		}
		else if(pow(temp_one,2)+ pow(temp_two,2) < pow(max,2))
		{
			//printf("Obtuse Triangle\n");
			cout << "Obtuse Triangle\n";
		}
		else if(pow(temp_one,2)+ pow(temp_two,2) > pow(max,2))
		{
			//printf("Acute Triangle\n");
			cout << "Acute Triangle\n";

		}
		
	}
}
