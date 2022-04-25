#include <iostream>
#include <fstream>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <sstream>
//#include <opencv2/opencv.hpp>

#include <string.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <math.h>
#include <random>
#include <regex>

#include "Maze.hpp"

#define MOD 1000000007
#define rng(i, a, b) for(int i = int(a); i < int(b); i++)
#define rep(i, b) rng(i, 0, b)
#define rlg(i, a, b) for(int i = int(a); i <= int(b); i++)
#define rlp(i, b) rlg(i, 0, b)
#define pb push_back
#define eb emplace_back
#define bg begin()
#define ed end()

using namespace std;

void print(vector<vector<int>> a){
    for(int i = 0 ; i < 11 ; i++){
        for(int j = 0 ; j < 11 ; j++){
            if(a[i][j] == 9){
                cout << "■ ";
            }else if(a[i][j] == 2){
                cout << "S ";
            }
            else if(a[i][j] == 3){
                cout << "G ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}
int main(void)
{
    vector<vector<int>> maze
     = {{9,9,9,9,9,9,9,9,9,9,9},
        {9,2,9,9,9,9,9,9,9,9,9},
        {9,0,9,9,9,9,9,9,9,9,9},
        {9,0,9,9,9,9,9,9,9,9,9},
        {9,0,9,9,9,9,9,9,9,3,9},
        {9,0,9,9,9,9,9,9,9,0,9},
        {9,0,9,9,9,9,9,9,9,0,9},
        {9,0,9,9,9,9,9,9,9,0,9},
        {9,0,9,0,0,0,0,0,0,0,9},
        {9,0,0,0,9,9,9,9,9,9,9},
        {9,9,9,9,9,9,9,9,9,9,9}};
    
    print(maze);
}
