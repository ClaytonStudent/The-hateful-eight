//
//  5_ubung.cpp
//  Primer
//
//  Created by Shaohang on 2018/5/19.
//  Copyright © 2018年 Shaohang. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
/*
int main()
{
    
    //Ubung1
    cout << "Enter 2 integers: " <<endl;
    int low,high;
    cin>> low >> high;
    cout << (low + high) * (high - low +1) /2 <<endl;
    
     
    //Ubung2
    cout << "Enter an integer: ";
    int n;
    cin >>n;
    while (n!=0) {
        cout << (n+1)*n/2 << endl;
        cin >> n;
    };
     
     //Ubung3
     
    int D = 100;
    float C = 100;
    for (int i =1;i<1000;i++)
    {
        D = D * 1.1 *i;
        C = C * pow(1.05,i);
        if (C >D)
        {     cout << i <<endl;
              return 0;
        }
    }
    
    //Ubung4
     
    string month[] = {"1","2","3","4","5","6","7","8","9","10","11","12"};
    int amount[12];
    int sum = 0;
    for (int i = 0;i<12;i++)
    {
        cout << "Enter the sales amount of "<< month[i] << " : ";
        cin >> amount[i];
        sum += amount[i];
    }
    cout << sum <<endl;
    return 0;

    int count[3][12];
    int sum = 0;
    string month[3][12] = {
        {"1","2","3","4","5","6","7","8","9","10","11","12"},
        {"1","2","3","4","5","6","7","8","9","10","11","12"},
        {"1","2","3","4","5","6","7","8","9","10","11","12"}
    };
    for (int i = 0; i<3;i++)
    {
        for(int j=0;j<12;j++)
        {
            cout << "Enter the "<<  i+1 << " year and " << j+1 <<" month: ";
            cin>>count[i][j];
            sum += count[i][j];
        }
    }
 }
    cout << sum <<endl;
 
    
    

    //Ubung6
    
    
struct car{
    string store;
    int year;
};

int main()
{
    cout << "Enter the number of cars: ";
    int number;
    cin >> number;
    
    car *p = new car[number];
    for (int i = 0;i<number;i++)
    {
        cout << "Car #" << i+1<<endl;
        cout << "Enter the namke: " ;
        cin.get();
        getline(cin,p[i].store);
        cout << "Enter the year: ";
        cin >> p[i].year;
    }
    cout << "Here are the collection: "<<endl;
    for (int i = 0; i<number;i++)
    {
        cout << p[i].store << "  " << p[i].year<<endl;
    }
    delete [] p;
    
    
    
    
    return 0;
}
 
int main()
{
    cout << "Enter row number: " <<endl;
    int number;
    cin >> number;
    int j = number -1;
    for(int i = 1;i<number+1; i++,j--)
    {
        //string i(10,'A');
        string q(j,'.');
        string p(i,'*');
        cout << q << p <<endl;
    }
}




// 6_13 Fish
int main()
{
    int Max = 5;
    double fish[Max];
    double total = 0;
    double avg = 0;
    
    for (int i = 0; i<Max; i++) {
        cout << "Enter number of fish in day " << i+1 << " :";
        while(!(cin>>fish[i])){
            cin.clear();
            while (!(cin.get() != '\n')) {
                continue;
            }
            cout << "Not a number !!!!!" <<endl;
            cout << "Enter number of fish in day " << i+1 << " :";
        }
         total += fish[i];
    }
    avg = total / Max;
   
    cout << total << "   " << avg<< endl;
    return 0;
    }


*/
