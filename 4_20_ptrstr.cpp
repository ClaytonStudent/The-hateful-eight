//
//  4_20_ptrstr.cpp
//  Primer
//
//  Created by Shaohang on 2018/5/18.
//  Copyright © 2018年 Shaohang. All rights reserved.
//

/*
#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char animal[20] = "bear";
    const char *bird = "wren";
    char * ps;
    
    cout << animal <<" and " << bird << "\n";
    
    cout << "Enter a kind of animal: " ;
    cin >>animal;
    ps = animal;
    cout << ps ;
    cout << animal << " at " << (int *)animal<<endl;
    cout << ps << " at " << (int *)ps <<endl;
    
    ps = new char [strlen(animal)+1];
    strcpy(ps,animal);
    cout << "After using strcpy():" << endl;
    cout << animal << " at " << (int *)animal <<endl;
    cout << ps << " at " << (int *)ps <<endl;
    delete [] ps;
    
    return 0;
}
 */
