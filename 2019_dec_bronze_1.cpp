//i havent done the formal usaco input and output stuff yet 
//http://www.usaco.org/index.php?page=viewproblem2&cpid=963


#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main(void) {
    int data[10][20] = {
        {4, 1, 2, 3},
        {4, 1, 3, 2},
        {4, 2, 1, 3}
    };
    int K = 3;
    int N = 4;
    int count = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 1; j < N; j++) {
            int cow1 = data[0][i];
            int cow2 = data[0][j];
            int pairs = 0;
            for (int x = 0; x < K; x++) {
                int cowIndex1;
                int cowIndex2;
                for (int y = 0; y < N; y++) {
                    if (data[x][y] == cow1) {
                        cowIndex1 = y;
                    }
                    if (data[x][y] == cow2) {
                        cowIndex2 = y;
                    }
                }
                if (cowIndex1 < cowIndex2) {
                    pairs++;
                }
            }
            if (pairs == K) {
                count++;
            }
        }
    }

    cout << count;
}

