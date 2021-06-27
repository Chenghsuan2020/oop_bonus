#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std; 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=469
int main()
{
    int n = 0 ;
    int j=0;
    int k=0;
    int i=0;
    cin >> n ;
    char str[128]={0};
    char strs[128][128];
    for(int i=0;i<128;i++)
    {
        memset(strs[i],0,128);
    }
    int strs_cnt = 0;
    for(i=0;i<n;i++)
    {
        cin >> str;
        for(j=strlen(str)-1,k=0;j>=0;j--,k++){
            strs[strs_cnt][k] = str[j];

        }     
        strs_cnt++;
        memset(str,0,128);

    }    
    for(i=0;i<n;i++)
    {
        cout << strs[i] << endl;
        //printf("%s\n",strs[i]);
    }
}
