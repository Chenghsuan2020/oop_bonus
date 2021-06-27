#include <iostream>
#include <iomanip>
using namespace std; 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6955
int main(int argc, char *argv[]) {
	int a = 0;
	int sum = 0;
	//scanf("%d",&a);
	cin >> a;
	for(int i=1;i<=a;i++)
	{	
		if(i!=a)
		{
			//printf("%d + ",i);
			cout << i << " + ";
		}
		else
		{
			//printf("%d = ",i);
			cout << i << " = ";

		}
		
		sum += i;
	}
	cout << sum <<endl;
	//printf("%d\n",sum);
}
//1 + 2 + 3 = 6