#include <iostream>
#include <iomanip>
using namespace std; 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=1832

int main()
{
	int a=0;
	
	double n,j,sum = 1;
	cin >> a ;
	//double *arr = calloc(a,sizeof(double));
	double *arr = new double[a];
	int arr_cnt = 0;
	while(cin >> n){
	
	for(j=n;j>0;j--){
	   sum *= j;
	}
	arr[arr_cnt++] = sum;
	
	//printf("%0.0lf\n",sum);
	sum = 1 ;
	}
	
	for(int i=0;i<arr_cnt;i++)
	{
		//printf("%0.0lf\n",arr[i]);
		cout << fixed <<setprecision(0) << arr[i] << endl;
	}
	return 0;
}
