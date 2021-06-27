#include <iostream>
#include <iomanip>
using namespace std; 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=2667
int main(int argc, char *argv[]) {
	int x = 0;
	int y = 0;
	while(cin >> x >> y)
	{
		for(int i=1;i<=x;i++)
		{
			for(int j=1;j<=y;j++)
			{
				cout << i <<" x "<< j << " = " << i*j << endl;
				//printf("%d x %d = %d\n",i,j,i*j);
			}
		}
	}
}
/*
2 2

135790

97531
*/