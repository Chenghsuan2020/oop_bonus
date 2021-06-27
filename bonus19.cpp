#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std; 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=3048
int main(int argc, char *argv[]) {
	char a[1024]={0};
	while(cin >> a)
	{	
		for(int i=0;i<strlen(a);i++)
		{
			if(a[i] == '1')
			{
				//printf("1");
				cout << "1";
			}
		}
		
		for(int i=0;i<strlen(a);i++)
		{
			if(a[i] == '0')
			{
				
				//printf("0");
				cout << "0";
			}
		}	
		//printf("\n");
		cout << "\n";
	}
}
/*
11001101
01010101010100
00000
111111000000
000011111

11111000
11111100000000
00000
111111000000
111110000
*/