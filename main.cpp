//
//  main.cpp
//  10
//
//  Created by Артём Новицкий on 23/01/2019.
//  Copyright © 2019 Артём Новицкий. All rights reserved.
//

#include <iostream>

int main() {
    char string[30];
    char sasDetection[30];
    int j = 0;
    gets(string);
    int cursor=0;
    while (string[cursor]!='\0') {
        if (string[cursor]=='s' && string[cursor+1]=='a' && string[cursor+2]=='s' ) {
            int iFirst = cursor;
            int iLast = cursor+2;
            
            while ( (string[iFirst] >= 'a' && string[iFirst] <= 'z')  ) {
                iFirst--;
            }
            iFirst++;
            while ( (string[iLast] >= 'a' && string[iLast] <= 'z')  ) {
                iLast++;
            }
            iLast--;
            
            for (int i = iFirst; i<=iLast; i++){
                
                sasDetection[j] = string[i];
                j++;
                
            }
            sasDetection[j] = ' ';
            j++;
            
            
            cursor++;
        }
        cursor++;
    }
    puts(sasDetection);
    
    
}
