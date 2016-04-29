//
//  SortedSet.cpp
//  SortedSet
//
//  Created by Dehelean Andrei on 4/13/16.
//  Copyright © 2016 Dehelean Andrei. All rights reserved.
//

#include "SortedSet.hpp"


void SortedSet::print() {
    for( int i=0; i<set.getSize(); i++ )
        cout<<set[i]<<" ";
}