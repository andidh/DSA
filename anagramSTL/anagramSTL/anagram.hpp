//
//  anagram.hpp
//  anagramSTL
//
//  Created by Dehelean Andrei on 4/27/16.
//  Copyright © 2016 Dehelean Andrei. All rights reserved.
//

#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <fstream>

using namespace std;

class Anagram {
    
    map<int,string> all;
    
public:
    Anagram() {} ;
    
    void run(){
        this->loadMap();
        this->anagramSTL();
    }

    void loadMap() {
        string file = "words.txt";
        char* c = &file[0];
        ifstream fin(c);
        if( !fin.is_open())
        {
            cout<<"Error at opening!"<<endl;
        }
        
        int key = 0;
        string word;
        while(fin>>word){
            all.insert(pair<int, string>(key, word));
            key++;
        }
        
        fin.close();
        
    }
    void anagramSTL() {
        string word, anagram, copy;
        cout<<"Give the word: "; cin>>word;
        
        anagram = word;
        sort(anagram.begin(), anagram.end());
        
        cout<<"Anagrams for "<<word<<": \n";
        
        map<int, string>::iterator it;
        for( it = all.begin(); it!= all.end(); it++){
            copy = it->second;
            sort(copy.begin(), copy.end());
            if(copy == anagram)
                cout<<it->second<<endl;
        }
    }
    
};