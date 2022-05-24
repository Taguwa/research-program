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
    for(int i = 0 ; i < a.size() ; i++){
        for(int j = 0 ; j < a.at(0).size() ; j++){
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


void Q_Learning_Platform(int epsode , vector<vector<int>> map){
    cout << "Q soltution running.. | epsode : " << epsode << endl;
    //epsode回探索
    for(int i = 0 ; i < epsode ; i++ ){
        
    }
    /*self.q_values[self.previous_state][self.previous_action]
    = q + (self.alpha * (reward + (self.gamma * max_q) - q))
    */
    cout << " result : " << endl;
}

int main(void)
{
    vector<vector<int>> maze =
    {{9,9,9,9,9,9,9,9,9,9,9,9,9,9,9},
     {9,2,9,0,0,0,0,0,0,0,0,0,9,0,9},
     {9,0,9,9,9,9,9,9,9,9,9,0,9,0,9},
     {9,0,0,0,0,0,0,0,0,0,0,0,0,0,9},
     {9,0,9,9,9,9,0,9,9,9,9,9,9,9,9},
     {9,0,0,0,0,9,0,9,0,0,0,0,0,0,9},
     {9,9,0,9,0,9,0,9,9,9,0,9,0,9,9},
     {9,9,0,9,0,9,0,0,0,0,0,9,0,0,9},
     {9,9,0,9,0,9,9,9,9,9,0,9,9,9,9},
     {9,9,0,9,0,9,0,0,0,0,0,0,0,0,9},
     {9,9,0,9,0,0,0,9,9,9,9,9,9,0,9},
     {9,0,0,9,9,0,9,9,0,0,0,0,0,0,9},
     {9,9,9,9,9,0,9,9,0,9,9,9,9,9,9},
     {9,0,0,0,0,0,0,9,0,0,0,0,0,3,9},
     {9,9,9,9,9,9,9,9,9,9,9,9,9,9,9}};
    
    Q_Learning_Platform(10, maze);
    print(maze);
}
