//
//  4_Ubung.cpp
//  Primer
//
//  Created by Shaohang on 2018/5/18.
//  Copyright © 2018年 Shaohang. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;
/*
 1. actor = char[30]
 2. int a[5] = {1,3,5,7,9}
 3. int even = a[0] + a[4];
 4. float b[2] = {1.0,2.0}; float[2]
 5. char a[] = "cheeseburger";

 7. fish a = {"a",56,74.9}
 8. enum Response {No,Yes,Maybe}
 9. double ted = 1;
 double * p = &ted;

//10
int main()
{
    float treacle[] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0};
    float *p = treacle;
    cout << p[0] <<endl;
    cout << p[9] <<endl;
    cout << *p <<endl;
    cout << *(p+9) <<endl;
    return 0;
    
}

//4.1
int main(){
    char a[20],b[10],c;
    int d;
    cout << "Whar's your first name:";
    cin.ignore();
    cin.getline(a,20);
    cout << "Whar's your last name:";
    cin>>b;
    cout << "What letter grade do you have:";
    cin>>c;
    cout << "Whar is your age?" ;
    cin>>d;
    cout <<"Name: " <<b <<", " << a<<endl;
    cout << "Grade: " << c;
    cout << "Age: " <<d;
    return 0;
}

//4.2
int main()
{
    string name;
    string food;
    cout << "Name: ";
    getline(cin,name);
    cout << "Food: ";
    getline(cin,food);
    cout << "Your name :" << name << endl;
    cout << "Your food: " << food <<endl;
    return 0;
}
 


//13
int main()
{
    string first;
    string last;
    cout << "First name" ;
    cin >> first;
    cout << "Last name" ;
    cin >> last;
    cout << first << ", " << last<<endl;
    return 0;
}
 

//4_6
struct CandyBar{
    string brand;
    float weitght;
    int calorie;
};
int main()
{
    CandyBar snack[3] = {{"A",4.5,5},{"B",2.01,2},{"C",3.0,3}};
    cout << snack[0].brand<<endl;
    cout << snack[1].weitght<<endl;
    cout << snack[2].calorie<<endl;
    
    return 0;
}
*/

//4_7
/*
struct Pizza{
    string name;
    float weight;
    int dia;
};

int main()
{
    Pizza * p = new Pizza[3];
    p[0].name = "A";
    
    
    cout << "Enter the name: ";
    getline(cin,p[0].name);
    getline(cin,p[1].name);
    getline(cin,p[2].name);
    
    cout << "Enter the weight: ";
    cin>>p[0].weight;
    cin>>p[1].weight;
    cin>>p[2].weight;
    
    cout << "Enter the dia: ";
    cin>>p[0].dia;
    cin>>p[1].dia;
    cin>>p[2].dia;
    
    cout << p[0].name << p[1].name << p[2].name<<endl;
    cout << p[0].weight << p[1].weight << p[2].weight<<endl;
    cout << p[0].dia << p[1].dia << p[2].dia<<endl;
    
    delete [] p;
    return 0;
}*/

