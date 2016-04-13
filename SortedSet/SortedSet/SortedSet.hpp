//
//  SortedSet.hpp
//  SortedSet
//
//  Created by Dehelean Andrei on 4/13/16.
//  Copyright © 2016 Dehelean Andrei. All rights reserved.
//

#pragma once
#include<iostream>
#include <vector>

using namespace std;


typedef int TE;
class SortedSet {
    
    vector<TE> set;
    
public:
    
    bool isEmpty() {
        if( set.size() == 0)
            return true;
        return false;
    }
    
    long getLength() {
        return set.size();
    }
    
    int findElement (TE& el){
        
        for(int i = 0; i< this->getLength(); i++){
            if ( set[i] == el)
                return i;
        }
        
        return -1;
    }
    
    
    void addElement(TE el) {
        
        if(this->findElement(el) != -1)
            return;
        
        
        if( this->isEmpty()){
            set.push_back(el);
            return;
        }
         
        
        long pos = 0;
        
        while(set[pos] < el && pos < set.size() )
            pos++;

        set.push_back(0);
        for( long i = set.size(); i >= pos; i--)
            set[i+1] = set[i];
        set[pos] = el;
    }
    
    void removeElement(TE el){
        long pos = this->findElement(el);
        set.erase(set.begin() + pos);
    }
    
    void clear() {
        this->set.clear();
    }
    
    TE getElemOnPos(int pos){
        return this->set[pos];
    }
    void print();
};

