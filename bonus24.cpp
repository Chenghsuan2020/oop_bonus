#include <iostream>
#include <cstring>

using namespace std; 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=3662
int main()
{
    int i,j,n;
    char s[1000];

    while(cin >> s)
    {
        n=strlen(s);
        for(i=0,j=n-1;j>i;i++,j--)
        {
            if(s[i]!=s[j])
            {
                break;
            }
        }
        if(i>=j)
        {
            cout << "yes\n";
            //printf("yes\n");
        }
        else
        {
            cout << "no\n";
            //printf("no\n");
        }
    }
}