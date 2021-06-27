#include <iostream>
#include <iomanip>
using namespace std; 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=1437

int main()
{
	
	double n,j,sum = 1;
	while(cin >> n){
	
	for(j=n;j>0;j--){
	   sum *= j;
	}
	cout << fixed <<setprecision(0) << sum <<endl ;
	//printf("%0.0lf\n",sum);
	sum = 1 ;
	}
	
	return 0;
}
