//
//  main.cpp
//  Test
//
//  Created by pezy on 14/10/30.
//  Copyright (c) 2014 pezy. All rights reserved.
//

#include <iostream>
#include <vector>
using std::vector; using std::cout; using std::endl;

#define NDEBUG

void printVec(vector<int> &vec)
{
#ifdef NDEBUG
    cout << "vector size: " << vec.size() << endl;
#endif
    if (!vec.empty())
    {
        auto tmp = vec.back();
        cout << tmp << " \n";
        vec.pop_back();
        printVec(vec);
  
    }
}

int main()
{
    vector<int> vec{1,2,3,4,5,6,7,8,9};
    printVec(vec);
    cout << endl;
    
    return 0;
}
