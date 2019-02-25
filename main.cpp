#include <iostream>

using namespace std;

int main()
{


//       +-----------------+           +---------+                     +---------+
//       |0   0   0   0   8|           |5   5   5|                     |5	5	5|
//       |3   0   0   5   0|   ===>    |0   4   8|                     |0	1	3|
//       |0   0   0   0   0| Compress  |1   0   3|     ====>           |2	3	9|
//       |0   0   9   0   0|           |1   3   5|     Taranahade      |3	1	5|
//       |0   0   0   2   0|           |3   2   9|                     |3	4	2|
//       +-----------------+ 5x5       |4   3   2|                     |4	0	8|
//                                     +---------+ 6x3                 +---------+ 6x3

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
