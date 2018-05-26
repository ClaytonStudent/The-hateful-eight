//
//  8_Ubung.cpp
//  Primer
//
//  Created by Shaohang on 2018/5/26.
//  Copyright © 2018年 Shaohang. All rights reserved.
//


//练习题
// 8_3
/*
#include <stdio.h>
#include <iostream>
using namespace std;


template <class T>
void test(T a);
int main()
{
    int x = 3;
    double y = 4;
    string z = "PUBG";
    test(x);
    test(y);
    test(z);
    
    return 0;
}

template <class T>
void test(T a)
{
    cout << a <<endl;
}
*/

// 8_4
/*
#include <stdio.h>
#include <iostream>
using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void show(box *n);
int main()
{
    box B = {"Doto2",1,2,3};
    show(&B);
    cout << B.volume <<endl;
}

void show(box *n)
{
    
    cout << n->maker << endl;
    n->volume = n->height * n->length * n->width;
    cout << n->volume << endl;
}
 */

// 8_5




