#include <iostream>
#include <iomanip>
using namespace std; 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6915

int main()
{
	
	double n,j,sum = 1;
	while(cin >> n){
	
	for(j=n;j>0;j--){
	   sum *= j;
	}
	
	//printf("%0.0lf\n",sum);
	cout <<  fixed <<setprecision(0) << sum <<endl ;

	sum = 1 ;
	}
	
	return 0;
}
