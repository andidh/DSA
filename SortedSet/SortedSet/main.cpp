//
//  main.cpp
//  SortedSet
//
//  Created by Dehelean Andrei on 4/13/16.
//  Copyright © 2016 Dehelean Andrei. All rights reserved.
//

#include <iostream>
#include "SortedSet.hpp"



int main() {
    
    SortedSet s;

    s.addElement(21);
    s.addElement(10);
    s.addElement(2);
    s.addElement(100);
    s.addElement(900);
    s.addElement(4);
    s.print();
    
    cout<<endl;
    cout<<"After deleting"<<endl;
    s.removeElement(100);
    s.print();
    
    cout<<endl;
    
    s.addElement(100);
    s.print();
    
    cout<<endl;
    cout<<"-------------"<<endl;
    cout<<s.getElemOnPos(2);
    cout<<endl;
    
    cout<<"Clearing"<<endl;
    s.clear();
    s.print();
    cout<<"Done cleaning"<<endl;
    return 0;
}
