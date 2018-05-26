//
//  7.cpp
//  Primer
//
//  Created by Shaohang on 2018/5/21.
//  Copyright © 2018年 Shaohang. All rights reserved.
//



//******************* 7_2 ****************************
/*
#include <stdio.h>
#include <iostream>
using namespace std;

void simple();

int main()
{
    cout << "Try the function:"<<endl;
    simple();
    return 0;
}

void simple()
{
    cout << "You can you up!" <<endl;
}
*/
//******************* 7_3 towarg.cpp ****************************
/*
#include <stdio.h>
#include <iostream>
using namespace std;
void n_chars(char ch,int times);
int main()
{
    int times;
    char ch;
    
    cout << "Enter a character:";
    cin>>ch;
    while (ch != 'q') {
        cout << "Enter an integer:";
        cin >> times;
        n_chars(ch, times);
        cout << "\nEnter another interger or q to quit";
        cin >> ch;
    }
    cout << "The value jof times is " << times << endl;
    cout << "Bye!"<<endl;
    return 0;
}


void n_chars(char ch, int times)
{
    while (times -- > 0) {
        cout << ch;
    }
}
 */

//******************* 7_4 Lotto ****************************
/*
#include <stdio.h>
#include <iostream>
using namespace std;
double pro(double,double);
int main()
{
    cout << "Please enter your totoal number and your select number:";
    double total,select;
    while (cin>>total>>select && select <= total) {
        cout << "The number is :";
        double res = pro(total,select);
        cout << res << endl;
        }
    
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
//******************* 7_5 arrfun1 ****************************
/*

#include <stdio.h>
#include <iostream>
using namespace std;
int arr_sum(int arr[],int n);
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    int total = arr_sum(arr,n);
    cout << total <<endl;
    return 0;
}
int arr_sum(int arr[],int n)
{
    int sum=0;
    for (int i = 0; i<n; i++) {
        sum+=arr[i];
    }
    return sum;
}
 */

//******************* 7——7 fill array ****************************
/*


#include <stdio.h>
#include <iostream>
using namespace std;

int arr_sum(double arr[], int limit); //declear function
void show_array(const double arr[],int n);
void revalue(double r,double arr[], int n);

int main()
{
    double score[8];
    int limit = 8;
    int result = arr_sum(score, limit);
    revalue(10, score, limit);
    show_array(score, limit);
    cout <<"The final value is :" << score[6]<<endl;
    return 0;
}

int arr_sum(double arr[],int limit)
{
    double temp;
    int i;
    for (int i = 0; i<limit; i++) {
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
    return i;
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

//******************* 7_8 arrfun4 ****************************
/*
#include <iostream>
#include <stdio.h>
using namespace std;
int sum_arr(const int * begin,const int * end);
int main()
{
    const int Arsize = 8;
    int cookies[Arsize] = {1,2,3,4,5,6,7,8};
    cout << sum_arr(cookies, cookies + 8) <<endl;
    cout << sum_arr(cookies, cookies + 3) << endl;
    cout << sum_arr(cookies+4, cookies + 8) <<endl;
    return 0;
    
}
int sum_arr(const int * begin,const int * end)
{
    const int * pt;
    int total = 0;
    for (pt = begin; pt != end; pt++)
        total = total + *pt;
    return total;
    
}
 */


//******************* 7_11 travel.cpp ****************************
/*
#include <iostream>
using namespace std;
struct travel_time
{
    int hours;
    int mins;
};
const int Mins_per_hr = 60;

travel_time sum(travel_time t1,travel_time t2);
void show_time(travel_time t);

int main()
{
    travel_time t1 = {5,45};
    travel_time t2 = {4,55};
    travel_time t3 = {4,32};
    travel_time total = sum(t1,t2);
    travel_time total1 = sum(t3,total);
    show_time(total1);
    return 0;
}

travel_time sum(travel_time t1,travel_time t2)
{
    travel_time total;
    
    total.hours = t1.hours + t2.hours + (t1.mins + t2.mins)/ 60;
    total.mins = (t1.mins + t2.mins) % 60;
    return  total;
}

void show_time(travel_time t)
{
    cout << t.hours << " : " << t.mins <<endl;
}
*/

//******************* 7_12 atrctfun.cpp ****************************
/*

#include <iostream>
#include <cmath>
using namespace std;

struct rect
{
    double x;
    double y;
};
struct polar
{
    double distance;
    double angle;
};


void show_polar (const polar * pda);
void rect_to_polar(const rect * pxy, polar * pda);

int main()
{
    rect rplace;
    polar pplace;
    cout << "Enter x and y: " ;
    while(cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Next two numbers : ";
    }
    return 0;
}


void show_polar (const polar * pda)
{
    cout << "Distance = " <<pda -> distance <<endl;
    cout << "Angle = " << pda -> angle * 57.29577951 << endl;
}

void rect_to_polar(const rect * pxy, polar * pda)
{
    pda -> distance = sqrt(pxy -> x  * pxy -> x + pxy -> y * pxy-> y);
    pda -> angle = atan2(pxy -> y, pxy -> x);
}
*/

//******************* 7_14 topfive.cpp ****************************
/*
#include <iostream>
#include <cmath>
using namespace std;

const int SIZE = 5;
void display(const string sa[],int n);

int main()
{
    string list[SIZE];
    cout << "Enter your " << SIZE << " favorite astronomical sights: \n";
    for (int i = 0; i< SIZE ; i++) {
        cout << i+1 << " : ";
        getline(cin,list[i]);
    }
    cout << "Yout list: \n" ;
    display(list, SIZE);
    
    return 0;
}

void display(const string sa[],int n)
{
    for (int i=0; i < n; i++) {
        cout << sa[i] << endl;
    }
}
*/
//******************* 7_15 recur.cpp ****************************
/*
#include <iostream>
#include <cmath>
using namespace std;

void countdown(int n);

int main()
{
    countdown(4);
    return 0;
}

void countdown(int n)
{
    cout << "Counting down " << n <<endl;
    if(n>0)
        countdown(n-1);
    cout << n << " :HUAQ "<<endl;
}
 */

//******************* 7_16 ruler.cpp ****************************
/*
#include <iostream>
#include <cmath>
using namespace std;

const int Len = 66;
const int Divs = 6;
void subdivide(char ar[],int low, int high, int level);

int main()
{
    char ruler[Len];
    int i;
    for (i = 1; i<Len -2; i++)
        ruler[i] = ' ';
    ruler[Len -1] = '\0';
    int max = Len -2;
    int min = 0;
    ruler[min] = ruler[max] = '|';
    cout << ruler << endl;
    for (int i = 1; i<= Divs; i++)
    {
        subdivide(ruler, min, max, i);
        cout << ruler << endl;
        for (int j = 1; i<Len -2; j++)
            ruler[j] = ' ';
    }
    return 0;
}

void subdivide(char ar[],int low, int high, int level)
{
    if(level == 0)
        return;
    int mid = (low + high) / 2;
    ar[mid] = '|';
    subdivide(ar, low, mid, level-1);
    subdivide(ar, mid, high, level-1);
}
*/

//******************* 7_17 fun_ptr.cpp 函数指针****************************
/*
#include <iostream>
using namespace std;
double betsy(int);
double pam(int);

void estimate(int lines, double (*pf) (int));

int main()
{
    int lines;
    cout << "Enter the lines of your code: ";
    cin >> lines;
    estimate(lines, betsy);
    estimate(lines, pam);
    return 0;
}

double betsy(int lines)
{
    return lines * 3;
};
double pam(int lines)
{
    return lines * 2;
};

void estimate(int lines, double (*pf) (int))
{
    cout << (*pf)(lines) << endl;
}
*/




//******************* 复习题 8 替换字符****************************
/*
#include <iostream>
using namespace std;

int replace (char * str, char c1, char c2);

int main()
{
    char st[] = "aaabbbcccddd";
    char c1 = 'c';
    char c2 = 'd';
    int c = replace(st,c1,c2);
    cout << c << endl;
    cout << st << endl;
    return 0;
}

int replace (char * str, char c1, char c2)
{
    int count = 0;
    while (*str)
    {
        if (*str == c1)
        {
            *str = c2;
            count ++;
        }
        str ++;
    }
    return count;
};
 */


