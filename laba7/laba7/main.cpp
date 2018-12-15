//
//  main.cpp
//  laba7
//
//  Created by Artyom Novickii on 20/11/2018.
//  Copyright © 2018 Artyom Novickii. All rights reserved.
//

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

//11.11.2001
//0123456789

int convert_data(int day, int month, int year){
    return year*365+month*30+day;
}
int main() {
    //////
    //////
    struct Books{
        int registation_number;
        char athor[30];
        char name[30];
        
        int day,month,year;
      
        char publish_by[30];
        int pages;
        
        int date_converted;
    };
    //puts(books[3].athor);
    //puts(books[4].athor);
     char s;
    int amount;
    amount = 3;
    cout << "Amount of books : " <<amount<< endl;;
    
   // char need_date[11];
    
   int need_date_converted;
    int need_date_day, need_date_month, need_date_year;
  //  cin >>need_date;
   // int len = 0;
    Books books[amount];
    Books booksSorted[amount];
    for (int i = 0; i< amount; i++) {
        cout<<  "Book num " << i+1 << " : "<<endl<<endl;
        cout << "Registration number – ";
        cin >> books[i].registation_number;
        cout << "Name – ";
        cin >>books[i].name;
        cout << "Athor – ";
        cin >> books[i].athor;
        cout << "Publish by – ";
        cin >>books[i].publish_by;
        cout << "Amount of pages – ";
        cin >>  books[i].pages;
        cout << "Date of publishing – ";
        //  cin >>  books[i].date;
        cin >> books[i].day >> s >> books[i].month >> s >> books[i].year;
         books[i].date_converted = convert_data(books[i].day, books[i].month,books[i].year);
       cin.sync();
    }
      cout << "Need date: "<< endl;
      cin >> need_date_day >> s >> need_date_month >> s >> need_date_year;
    
   need_date_converted = convert_data(need_date_day,need_date_month,need_date_year);
    ////////////////////////////////////////////////////////////
    cout << "Sorting by date..."<<endl;
    int countOfSortedBooksByDate= 0 ;
    for (int i = 0; i< amount; i++) {
        
        if(books[i].date_converted > need_date_converted){
            booksSorted[countOfSortedBooksByDate] = books[i];
            countOfSortedBooksByDate++;
            cout << "Book num "<< i << ": "<<endl;
            cout << booksSorted[i].registation_number<<endl;;
            puts(booksSorted[i].athor);
            puts(booksSorted[i].name);
            cout << booksSorted[i].day<<"." <<booksSorted[i].month << "." <<booksSorted[i].year<<endl;
            puts(booksSorted[i].publish_by);
            cout << booksSorted[i].pages<< endl;;
            }
        }
    ////////////////////////////////////////////////
    for ( int i = 0; i < countOfSortedBooksByDate; i++) {
        for ( int j = 0; j < countOfSortedBooksByDate; j++) {
            if (booksSorted[i].athor[0] < booksSorted[j].athor[0]) {
                Books tmp;
                
                   tmp = booksSorted[i];
                
                
                    booksSorted[i]= booksSorted[j];
              
                     booksSorted[j]= tmp;
            }
        }
    }
    cout<<endl;
 //////////////////////////////////////////////
    for ( int i = 0; i < countOfSortedBooksByDate; i++) {
        cout << "Book num "<< i << ": "<<endl;
        cout << booksSorted[i].registation_number<<endl;;
        puts(booksSorted[i].athor);
        puts(booksSorted[i].name);
        cout << booksSorted[i].day<<"." <<booksSorted[i].month << "." <<booksSorted[i].year<<endl;
        puts(booksSorted[i].publish_by);
        cout << booksSorted[i].pages<< endl;;
        
        
    
    }
 //////////////////////////////////////////////
    
    
    
    
    
    
    
    
   
    
    
  
    

    
    
    
    
    
    
    
}
