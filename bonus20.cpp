#include <iostream>
#include <iomanip>
using namespace std; 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=2664
int main(int argc, char *argv[]) {
	int x = 0;
	int y = 0;
	int X = 0;
	int Y = 0;
	while(cin >> x >> y >> X >> Y)
	{	
		cout << (Y-y)/(X-x)<< endl;
		//printf("%d\n",(Y-y)/(X-x));
	}
}
/*
1 1

2 2

1
*/