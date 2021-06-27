#include <iostream>
#include <iomanip>
using namespace std; 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=1283
int main(int argc, char *argv[]) {
    int x = 0;
    int y = 0;
    while(cin >> x >> y)
        {   
            if(x ==0||y==0)
            {
                cout <<"no answer\n";
                //printf("no answer\n");
            }
            else
            {
                for(int i=1;i<=y;i++)
                    {
                        for(int j=1;j<=x;j++)
                        {
                            cout << "*";
                            //printf("*");
                        }
                        cout << "\n";
                        //printf("\n");
                    }

            } 
        }
}/*
4 5

****
****
****
****
****
*/