//
//
//  Primer
//
//  Created by Shaohang on 2018/5/19.
//  Copyright © 2018年 Shaohang. All rights reserved.
//

/*
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <ctime>
using namespace std;

const int Size = 16;//在 main 函数之外，外部数据

int main()
{
    
    
     5_4_formore.cpp
    double factorials[Size];
    factorials[0] = factorials[1] = 1.0;
    for (int i=2;i<Size;i++)
        factorials[i] = i *factorials[i-1];
    for(int i = 0;i<Size;i++)
        cout << i<<"!= " << factorials[i] <<endl;
     */
    
    //*************** 5_5 bigstep.cpp ****************
    /*cout << "Enter by: ";
    int by;
    cin>> by;
    for (int i = 0;i<100;i = i+by)
        cout << i <<endl;
    */
    //*************** 5_6 forstr1.cpp ****************
    /*
    cout << "Enter an word: ";
    string word;
    cin>>word;
    for(int i = word.size()-1; i>=0;i--)
    {
        cout << word[i];
    }
    cout << "\n Bye! \n";
     
    */
    //*************** 5_7 plus_one.cpp ****************
    //前缀比后缀版本效率高
    /*
    int a = 20;
    int b = 20;
    int y = ++a;
    int x = b++;
    cout << a <<endl;
    cout << b <<endl;
    cout << y <<endl;
    cout << x <<endl;
    
    int a[5] = {1,2,3,4,5};
    int *p = a;
    cout << p<< endl;
    cout << *p<< endl;
    p++;
    cout << p<< endl;
    cout << *p<< endl;
    *p++ = 3
    cout << "*++p = "<<*++p <<endl;
    cout << "*p++ = "<<*p++<< endl; // ++优先级更高，对指针递增，然后*对原来的地址解除引用。
    
    cout << p<< endl;
    cout << *p<< endl;
    
     ******************* 5_9.forstr2.cpp *****************
    cout << "Enter a string : ";
    string word;
    cin >> word;
    
    char temp;
    int i,j;
    for (j = 0,i = word.size()-1;j<i;i--,j++)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << word << endl;
  
    ******************* 5_12.comstr1.cpp *****************
    //strcmp(,)判断两个字符串想不相同
    string word = "?ate";
    for (char ch = 'a'; word != "mate"; ch++)
    {
        cout << word<<endl;
        word[0] = ch;
    }
    cout << "The final word is : " << word << endl;
   
    ****************** 5_ 13 while 循环  *****************
    char name[20];
    cout << "Name: ";
    cin >> name;
    int i =0;
    while (name[i] != '\0') {
        cout << name[i] <<" : " <<  int(name[i]) <<endl;
        i++;
    };
     
    ****************** 5_ 13 waiting.cpp ctime延时  *****************
    cout << "Enter time :";
    float sec;
    cin>>sec;
    clock_t delay = sec * CLOCKS_PER_SEC;
    cout << "Strarting";
    clock_t start = clock();
    
    while (clock()-start < delay) {
        
    }
    cout << "done!" <<endl;
    ****************** 5_ 15 do while  *****************
    int n;
    do {
        cout << "Enter number : ";
        cin>>n;
    } while (n!=7);
    cout << "7 is my number " <<endl;
   
    ****************** 5_ 16 textin1  *****************
     
    char ch;
    int count = 0;
    cout << "Enter char: ";
    cin.get(ch);
    while (ch != '#') {
        cout << ch ;
        count ++;
        cin.get(ch);        // cin将忽略空格和换行符.可以用cin.get()替换
    }
    cout << count <<endl;
     
  
    
    ****************** 5_ 16 textin1  *****************
    
    
    
    
    
    
      return 0;
    
}
*/





