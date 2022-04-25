//
//  maze.hpp
//  research
//
//  Created by Taguwa on 2022/04/18.
//

#ifndef maze_h
#define maze_h

#include <iostream>

using namespace std;

class Maze{
private:
    bool up;
    bool bottom;
    bool left;
    bool right;
    
    
public:
    
    void printMaze();
    
    //constract
    Maze();
};
    

void Maze::printMaze(){
    if(this->up)cout << " ●" << endl;
    if(this->left)cout << "●";
    cout << " ";
    if(this->right)cout << "●" << endl;
    if(this->bottom)cout << " ●" << endl;
}

Maze::Maze(){
    this->up = 1;
    this->bottom = 1;
    this->left = 1;
    this->right = 1;
}

#endif /* maze_h */
