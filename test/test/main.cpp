//
//  main.cpp
//  test
//
//  Created by Dehelean Andrei on 4/20/16.
//  Copyright © 2016 Dehelean Andrei. All rights reserved.
//

#include <iostream>
using namespace std;

int func(int val){
    if(val==1) return 2;
    return func(val-1)*(val+1);
}


int main(int argc, const char * argv[]) {
    
    int x=7;
    x ^= 2;
    
    cout<< x;
    
    return 0;
}
