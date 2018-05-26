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

// 8_5_1 返回物体质量，默认提及为1（默认参数）
/*
#include <stdio.h>
#include <iostream>
using namespace std;

double mass(double density, double volume = 1);

int main()
{
    double Dota2 = mass(3.0);
    double CS = mass(3.0,4.0);
    cout << Dota2 <<"  " << CS <<endl;
    return 0;
}

double mass(double density, double volume)
{
    return density*volume;
}
 */
// 8_6 返回两个值中较大的函数模板（函数模板）
/*
#include <stdio.h>
#include <iostream>
using namespace std;
template <typename T>
T test(T a, T b);

int main()
{
    int rainbow = 5;
    int six = 6;
    double siege = 8;
    double perfect = 7;
    int res1 = test(rainbow, six);
    double res2 = test(siege, perfect);
    cout << res1 << endl;
    cout << res2 << endl;
    return 0;
}


template <typename T>
T test(T a, T b)
{
    if(a>=b)
        return a;
    else
        return b;
}
*/

// 8_7
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

box test(box &a ,box &b);
int main()
{
    box Team = {"Doto2",1,2,3};
    box Fortress = {"Team Fortress",2,4,5};
    box ARK = test(Team,Fortress);
    cout << ARK.maker <<endl;
    cout << ARK.volume <<endl;
    
}


box test(box &a, box &b)
{
    a.volume = a.height * a.length * a.width;
    b.volume = b.height * b.length * b.width;
    if(a.volume>=b.volume)
        return a;
    else
        return b;
}

*/

// 编程练习
//  8_1:
/*
#include <stdio.h>
#include <iostream>
using namespace std;

int num = 0;
void PAYDAY(char * pt, int i = 0);

int main()
{
    char FM2018[20] = "Football Manager";
    PAYDAY(FM2018);
    PAYDAY(FM2018);
    PAYDAY(FM2018);
    PAYDAY(FM2018,3);
    
    return 0;
}

void PAYDAY(char * pt, int i)
{
    //char * p = new char;
    cout << pt << endl;
    num++;
    if(i!=0)
        cout << num <<endl;
}
*/
// 8_2:
/*
#include <stdio.h>
#include <iostream>
using namespace std;

struct CandyBar
{
    char name[20];
    float weight;
    int calorie;
};

void SetBar(CandyBar & A,char const *pt = "Miller", float const weight = 2.85, int calorie = 350);

int main()
{
    CandyBar candy;
    CandyBar bar;
    char name[20] = "Counter-Strike";
    float weight = 4.0;
    int calorie = 5;
    SetBar(candy, name, weight, calorie);
    SetBar(bar);
    return 0;
    
}

void SetBar(CandyBar & A,char const pt[], float const weight, int calorie)
{
    for (int i = 0; i<20; i++,pt++) {
        A.name[i] = *pt;
    }
    
    //char * p = pt;
    A.weight = weight;
    A.calorie = calorie;
    cout << A.name << endl;
    cout << A.weight << endl;
    cout << A.calorie << endl;
    
}
*/
// 8_3
/*
#include <stdio.h>
#include <iostream>
#include <cctype>
#include <string>
using namespace std;
string UP (string & str);
int main()
{
    cout << "Enter a string (q to quit): ";
    string Pate;
    getline(cin,Pate);
    while(Pate!= "q")
    {
        Pate = UP(Pate);
        cout << Pate << endl;
        cout << "Enter a string (q to quit): ";
        getline(cin,Pate);
    }
    return 0;
}
string UP (string & str)
{
    for (int i = 0; i<str.size(); i++) {
        str[i] = toupper(str[i]);
    }
    return str;
}

 */
// 8_4 未完成
/*
#include <iostream>
#include <cstring>
using namespace std;

struct stringy
{
    char * str;
    int ct;
};
//set(),show(),show() prototype
void set(stringy &a, char * pt);
void show(stringy a, int b = 2);
void show(char * pt, int b = 1);
int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be. ";
    set(beany,testing);
    show(beany);
    show(beany,2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing,3);
    //show("Done");
    return 0;
}


void set(stringy &a, char * pt)
{
    //char * p = new char;
    for (int i = 0; i< strlen(pt); i++) {
        a.str[i] = pt[i];
    }
    
}
void show(stringy a, int b)
{
    for(int i = 0;i<b;i++)
        cout << a.str << " and " << a.ct << endl;
}

void show(char * pt, int b)
{
    for (int i = 0; i<b; i++) {
        cout << pt << endl;
    }
}
*/

// 8_5 T 函数模板
#include <iostream>
using namespace std;

template <typename T>
T max5(T *pt);
int main()
{
    int test1[5] = {1,2,3,4,5};
    double test2[5] = {1.0,2.0,3.0,4.0,5.0};
    
    int a = max5(test1);
    double b = max5(test2);
    cout << a << b << endl;
    
    return 0;
}

template <typename T>
T max5(T  *pt)
{
    T Maxium = 0;
    for (int i = 0; i < 5; i++) {
        if (Maxium < *(pt+i)) {
            Maxium = *(pt+i);
        }
    }
    //delete pt;
    return Maxium;
}

