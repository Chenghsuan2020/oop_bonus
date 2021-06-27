#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std; 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=1665
int main(int argc, char *argv[]) {
	
		char arr[1024] = {0};
		int bucket[10]={0};
		int max = 0;
		//scanf("%s",arr);
		cin >> arr;
		for(int i=0;i<strlen(arr);i++)
		{
			if(arr[i] == '0'){bucket[0]++;}
			if(arr[i] == '1'){bucket[1]++;}
			if(arr[i] == '2'){bucket[2]++;}
			if(arr[i] == '3'){bucket[3]++;}
			if(arr[i] == '4'){bucket[4]++;}
			if(arr[i] == '5'){bucket[5]++;}
			if(arr[i] == '6'){bucket[6]++;}
			if(arr[i] == '7'){bucket[7]++;}
			if(arr[i] == '8'){bucket[8]++;}
			if(arr[i] == '8'){bucket[9]++;}
		}
	for(int i=0;i<=9;i++)
	{
		if(max<bucket[i])
		{
			max =bucket[i];
		}
	}
	for(int i=0;i<=9;i++)
	{
		if(max == bucket[i])
		{
			//printf("Number is %d\n",i);
			cout << "Number is " << i << endl;
		}
			
	}
		
			
}
/*
6789766678677967866387976

Number is 6
*/