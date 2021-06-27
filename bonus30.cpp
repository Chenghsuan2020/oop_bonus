#include <iostream>
#include <iomanip>
using namespace std; 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6943
int main()
{
    int i, j, n, sum = 0;
    int a[10]={0};
    int a_cnt =0;
    
    cin >> n;
    for(i = 2;i <= n; i++)
    {
        sum = 0;
        for(j = 1; j < i; j++)
            if( i%j == 0)     //如果j可以被i整除，則j為i的因子
                sum = sum + j;     //求各因子的和
        if(sum == i){     //若i等於各因子的和，則i為完美數
        a[a_cnt++] = i;
        }
    }
    for(int i=0;i<a_cnt;i++)
    {
        if(i==a_cnt-1)
        {
            cout << a[i] << endl;
            //printf("%d\n",a[i]);
        }
        else
        {
            cout << a[i] << " ";
            //printf("%d ",a[i]);
        }
    }
}