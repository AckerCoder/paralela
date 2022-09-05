#include <iostream>
#include <ctime>
#include <vector>
#define MAX 1000
using namespace std;

unsigned t0, t1;
double A[MAX][MAX], X[MAX], Y[MAX];

void init(){
    for (int i = 0; i < MAX; i++){
        X[i] = i;
        Y[i] = i;
        for (int j = 0; j < MAX; j++){
            A[i][j] = rand() % 100;
        }
      }
}

void row(){
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++){
            double lem = A[i][j];
            double p = X[j];
            Y[i] += lem * p;
          }
}

int main() {
    init();
    t0=clock();
    row();
    t1=clock();
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    cout << "Row time: " << time << endl;
}