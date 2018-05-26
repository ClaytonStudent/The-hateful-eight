//
//  4_22_delete.cpp
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
char * getname();

int main()
{
    char * name;
    name = getname();
    cout << name << " at " << (int *)name <<endl;
    delete [] name;
    
    name = getname();
    cout << name << " at " << (int *)name <<endl;
    delete [] name;
    
    return 0;
}

char * getname()
{
    char temp[80];
    cout << "Enter last name: ";
    cin>>temp;
    char * pn = new char [strlen(temp)+1];
    strcpy(pn,temp);
    return pn;
}
 */
