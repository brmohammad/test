#include <iostream>

using namespace std;

int main()
{

 

    int tmp;
    int a[6][3] = { 5, 5, 5,
                    0, 4, 8,
                    1, 0, 3,
                    1, 3, 5,
                    3, 2, 9,
                    4, 3, 2 };


    for(int i=0; i<5; i++)
        for(int j=1; j<5-i; j++)
            if(a[j][1] > a[j+1][1]){
                for(int z=0; z<3; z++){
                    tmp = a[j][2];
                    a[j][2] = a[j+1][2];
                    a[j+1][2] = tmp;

                    tmp = a[j][0];
                    a[j][0] = a[j+1][0];
                    a[j+1][0] = tmp;

                    tmp = a[j][1];
                    a[j][1] = a[j+1][1];
                    a[j+1][1] = tmp;
                }
            }

    for(int i=1; i<6; i++){
        tmp = a[i][0];
        a[i][0] = a[i][1];
        a[i][1] = tmp;
    }

    for(int i=0; i<6; i++){
        for(int j=0; j<3; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
    return 0;
}
