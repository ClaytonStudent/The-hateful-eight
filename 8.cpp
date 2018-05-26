//
//  8.cpp
//  Primer
//
//  Created by Shaohang on 2018/5/25.
//  Copyright © 2018年 Shaohang. All rights reserved.
//
// ***************** 8_1 内联函数 *******************
/*
#include <stdio.h>
#include <iostream>
using namespace std;

inline double square(double x) {return x * x;}
int main()
{
    double a,b;
    double c = 13.0;
    
    a = square(5);
    b = square(4.5+7.5);
    cout << a << endl;
    cout << b << endl;
    cout << square(c) << endl;
    return 0;
}
*/
// ***************** 8_2 引用变量 *******************
/*
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int a = 100;
    int & b = a;
 
    int c = 50;
    b = c;
    
    cout << a << b << c << endl;
    b +=1;
    cout << a << b << c << endl;
    cout << &a << &b << &c <<endl;
    return 0;
}

*/

// ***************** 8_4 按值传递 VS 按引用传递 *******************
/*
#include <stdio.h>
#include <iostream>
using namespace std;

void swapr(int &a, int &b); //引用
void swapp(int *p, int * q); //指针
void swapv(int a, int b); //按值传递

int main()
{
    int wallet1 = 300;
    int wallet2 = 500;
    swapr(wallet1,wallet2);
    cout << wallet1 << wallet2 <<endl;
    
    wallet1 = 300;
    wallet2 = 500;
    swapp(&wallet1,&wallet2);
    cout << wallet1 << wallet2 <<endl;
    
    wallet1 = 300;
    wallet2 = 500;
    swapv(wallet1,wallet2);
    cout << wallet1 << wallet2 <<endl;
    
    return 0;
}

void swapr(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapp(int *p, int * q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
    
}

void swapv(int a, int b)
{
    int temp;
    temp =a ;
    a = b;
    b = temp;
}
*/
// ***************** 8_5  *******************
/*
#include <iostream>
#include <cmath>
using namespace std;
double cube2(double y);
double cube(double &y);

int main()
{
    double x = 3;
    cout << cube2(x)<<endl;
    cout << x << endl;
    cout << cube(x)<<endl;
    cout << x << endl;
    
    return 0;
}

double cube(double  &y)
{
    y = pow(y, 3);
    return y;
}

double cube2(double y)
{
    y = pow(y, 3);
    return y;
}

*/
// ***************** 8_6 引用用于结构 *******************
/*
#include <iostream>
using namespace std;
struct sysop
{
    char name[26];
    char quote[64];
    int used;
};
const sysop & use(sysop & sysopref);

int main()
{
    sysop looper = {
        "Rock Fortan Looper",
        "T'm a goto kind of guy",
        0
    };
    use(looper);
    cout << "Looper:" << looper.used << " uses \n";
    sysop copycat;
    copycat = use(looper);
    cout << "Looper:" << looper.used << " uses \n";
    cout << "Copycat:" << copycat.used << " uses \n";
    cout << "Use(looper): " << use(looper).used << " uses \n";
    return 0;
}
const sysop & use(sysop & sysopref)
{
    cout << sysopref.name <<"sys: \n";
    cout << sysopref.quote << endl;
    sysopref.used++;
    return sysopref;
}

*/
// ***************** 8_7 引用用于类 *******************
/*
#include <iostream>
#include <string>
using namespace std;
string version1 ( string & s1,const string & s2);

//string version2 ( string & s1,const string & s2);
const string & version2(string & s1,const string & s2);

int main()
{
    string input;
    string result;
    cout << "Enter a string: ";
    getline(cin,input);
    cout << "Your string as entered: " << input << endl;
    result = version1(input, "***");
    cout << "Your string enhanced: " << result << endl;
    cout << "Your original string: " << input << endl;
    
    result = version2(input, "###");
    cout << "Your string enhanced: " << result << endl;
    cout << "Your original string: " << input << endl;
    
    return 0;
}

string version1 ( string & s1,const string & s2)
{
    string temp;
    temp = s2 + s1 + s2;
    return temp;
}

const string & version2(string & s1,const string & s2)
{
    s1 = s2+s1+s2;
    return s1;
}
*/

// ***************** 8_9 焦距 *******************
/*
#include <iostream>
using namespace std;
const int ArSize = 10;
char * left (const char * str, int n = 1);
int main()
{
    char sample[ArSize];
    cout << "Enter an string: ";
    cin.get(sample,ArSize);
    char * ps = left(sample,1);
    cout << ps << endl;
    delete [] ps;
    ps = left(sample);
    cout << ps << endl;
    delete [] ps;
    return 0;
}
char * left(const char * str, int n)
{
    if(n<0)
        n = 0;
    char * p = new char[n];
    int i;
    for (i=0; i<n; i++) {
        p[i] = str[i];
    }
    while (i<= n) {
        p[i++] = '\0';
    }
    return p;
    
}

*/
// ***************** 8_10 邮编 *******************
/*
#include <iostream>
using namespace std;

const int Maxsize = 10;
char * left (const char * arr,int n = 1);
unsigned int left (unsigned int number, unsigned n);

int main()
{
    cout << "Enter the name: ";
    char name[Maxsize];
    cin.get(name,Maxsize);
    
    cout << "Enter the number: ";
    int number;
    cin>>number;
    char * pt;
    
    for(int i = 1; i<Maxsize;i++)
    {
        pt = left(name,i);
        cout << pt<< endl;
        delete [] pt;
        cout << left(number,i) <<endl;
    }
        
    
    return 0;
}


char * left (const char * arr,int n)
{
    char * pt = new char[n];
    int i;
    for(i = 0; i < n; i++)
        pt[i] = arr[i];
    while (i<= n) {
        pt[i++] = '\0';
    }
    return pt;
}

unsigned int left (unsigned int num, unsigned ct)
{
    unsigned digits = 1;
    unsigned int n = num;
    
    if(ct == 0 || num == 0)
        return 0;
    while (n/=10)
        digits ++;
    if(digits > ct)
    {
        ct = digits -ct;
        while (ct--)
            num/= 10;
        return num;
    }
    else
        return num;
}
*/
// ***************** 8_11 函数模板  *******************
/*
#include <iostream>
using namespace std;
template <class Any>
void S(Any &a, Any &b) {
    Any temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    double c = 25;
    double d = 35;
    cout << a <<" " << b <<endl;
    S(a, b);
    cout << a <<" " << b <<endl;
    
    cout << c <<" " << d <<endl;
    S(c, d);
    cout << c <<" " << d <<endl;
    
    
    return 0;
}
*/
// ***************** 8_12 函数模板  *******************
/*
#include <iostream>
using namespace std;

template <class Any>
void Swap(Any &a,Any &b);

template <class Any>
void Swap(Any a[],Any b[],int n);

void Show(int a[]);
const int Lim = 4;
int main()
{
    int i = 10, j = 20;
    cout << i << " " << j <<endl;
    Swap(i, j);
    cout << i << " " << j <<endl;
    int d1[Lim] = {1,2,3,4};
    int d2[Lim] = {4,5,6,7};
    Show(d1);
    Show(d2);
    Swap(d1, d2,Lim);
    Show(d1);
    Show(d2);
    
}

template <class Any>
void Swap(Any &a, Any &b) {
    Any temp;
    temp = a;
    a = b;
    b = temp;
}

template <class Any>
void Swap(Any a[],Any b[],int n)
{
    Any temp;
    for (int i = 0; i<n; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void Show(int a[])
{
    cout << a[0] << " " << a[1] <<endl;
    cout << a[2] << " " << a[3] <<endl;
}

*/





