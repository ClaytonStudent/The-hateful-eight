//
//  7_Ubung.cpp
//  Primer
//
//  Created by Shaohang on 2018/5/24.
//  Copyright © 2018年 Shaohang. All rights reserved.
//
//************  1  计算调和平均数 *******************
/*
#include <stdio.h>
#include <iostream>
using namespace std;

double avg (double x, double y);

int main()
{
    int x,y;
    cout << "Enter 2 integers: ";
    while (cin>>x>>y) {
        if (x==0 || y ==0)
            break;
        cout << "The avg of " << x <<" and " << y << "is : "<< avg(x,y) << endl;
        cout << "Please enter 2 integers";
    }
    return 0;
}

double avg (double x, double y)
{
    double sum = 0;
    sum = 2.0 * x * y /(x+y);
    return sum;
};
 */
//************  2 高尔夫成绩  *******************
/*
#include <stdio.h>
#include <iostream>
using namespace std;


//double avg();

int input(double arr[], int limit);
void show(double const arr[], int limit);
double avg(double const arr[], int limire);


int main()
{
    
    int limit = 8;
    double score[limit];
    int result = input(score, limit);
    show(score, result);
    cout << "The average is " << avg(score, result) << endl;
    return 0;
}

int input(double arr[], int limit)
{
    double temp;
    cout << "Enter your first score:" ;
    cin >> temp;
    int i = 0;
    while (cin ) {
        arr[i] = temp;
        cout << "Another score:" ;
        i++;
        if (i>=limit) {
            break;
        }
        cin>>temp;
       
    }
    return i;
};


void show(double const str[], int limit)
{
    cout << "The values are: " << endl;
    for(int i = 0; i<limit ; i++)
        cout << str[i] << " " ;
    cout << "\n";
}

double avg(double const arr[], int limit)
{
    double sum = 0;
    for(int i = 0; i<limit ; i++)
        sum += arr[i];
    return sum/limit;
};
*/

//************  3 结构指针  *******************
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

//Declare the functions
box output(box * x);
box input(box x);
void show(box x);

int main()
{
    box weel,train;
    weel = output(&weel);
    train = input(train);
    show(weel);
    show(train);
    return 0;
}


box output(box * x)
{
    cout << "Enter maker, width, height and length";
    cin >> x -> maker;
    cin >> x -> width;
    cin >> x -> height;
    cin >> x -> length;
    x->volume = x->height * x->length * x->width;
    return *x;
}


box input(box x)
{
    cout << "Enter maker, width, height and length";
    cin >> x.maker;
    cin >> x.width;
    cin >> x.height;
    cin >> x.length;
    x.volume = x.height * x.length * x.width;
    return x;
}

void show(box x)
{
    cout << x.maker <<endl;
    cout << x.width <<endl;
    cout << x.length <<endl;
    cout << x.height <<endl;
    cout << x.volume <<endl;
}
 */

//************  4 彩票概率  *******************
/*
#include <stdio.h>
#include <iostream>
using namespace std;
double pro(double,double);
int main()
{
    double res = pro(47,5);
    double spe = pro(27,1);
    double R = res * spe;
    cout << R << endl;
    return 0;
}

double pro(double total,double select)
{
    double num = 1;
    for(select;select>0;total--,select--)
        num = num * total/select;
    return num;
}
 */

//************  5 递归阶乘  *******************
/*
#include <stdio.h>
#include <iostream>
using namespace std;

int fact(int n);
int main()
{
    cout << "Enter an integer: ";
    int n;
    while(cin >> n)
    {
        cout << fact(n) <<endl;
        cout <<"Enter an integer: " ;
    }
    return 0;
}
int fact(int n)
{
    if (n==0)
        return 1;
    int sum ;
    sum = n * fact(n-1);
    return sum;
}
*/

//************  7 Fill_Reverse_Show 未完成  *******************
/*
#include <stdio.h>
#include <iostream>
using namespace std;

double * arr_sum(double arr[], int limit); //declear function
void show_array(const double arr[],int n);
void revalue(double r,double arr[], int n);

int main()
{
    double score[8];
    int limit = 8;
    double * result = arr_sum(score, limit);
    //revalue(10, score, limit);
    show_array(score, limit);
    cout <<result<<endl;
    return 0;
}

double * arr_sum(double arr[],int limit)
{
    double temp;
    int i =0;
    for (i; i < limit; i++) {
        cout << "Enter value # " << (i+1) << " :";
        cin>>temp;
        if(! cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "BAd input. \n";
            break;
        }
        else if (temp <0)
            break;
        arr[i] = temp;
    }
    return &arr[i];
}

void show_array(const double arr[],int n)
{
    for (int i = 0;i<n;i++)
    {
        cout << arr[i] <<endl;
    }
}

void revalue(double r,double arr[],int n)
{
    for (int i = 0;i<n;i++)
    {
        arr[i] = r;
    }
}
*/



//************  8   *******************
/*
#include <iostream>
using namespace std;

const int SLEN = 30;
struct student{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[],int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[],int n);
int main()
{
    cout << "Enter class size:";
    int class_size;
    cin >> class_size;
    while (cin.get()!= '\n') {
        continue;
    }
    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu,class_size);
    for (int i =0; i<entered; i++) {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done \n";
    return 0;
}


int getinfo(student pa[],int n)
{
    cout << "Enter student Info: ";
    int i = 0;
    while (cin>>pa[i].fullname>>pa[i].hobby>>pa[i].ooplevel)
    {
        i++;
        if(i >=n)
            break;
    }
    return i;
}


void display1(student st)
{
    cout << st.fullname << st.hobby << st.ooplevel<<endl;
}

void display2(const student * ps)
{
    cout << ps -> fullname << ps->hobby << ps->ooplevel<<endl;
}
void display3(const student pa[],int n)
{
    for (int i = 0; i<n; i++)
        cout << pa[i].fullname << pa[i].hobby << pa[i].ooplevel<<endl;
    
}

*/

//************  9 指针函数   *******************
/*
#include <iostream>
#include <cmath>
using namespace std;

double add(double x,double y);
double pw(double x,double y);
double caculate(double x, double y ,double(*pf)(double,double));

int main()
{
    cout << "Enter 2 double values:";
    double x,y;
    while (cin>>x>>y) {
        double fin1 = caculate(x, y, add);
        double fin2 = caculate(x, y, pw);
        cout << fin1 << endl;
        cout << fin2 << endl;
        cout << "Enter 2 double values: ";
    }
    return 0;
}
double add(double x,double y)
{
    return x+y;
}
double pw(double x,double y)
{
    return pow(x, y);
}

double caculate(double x, double y ,double(*pf)(double,double))
{
    return (*pf)(x,y);
}
 */


