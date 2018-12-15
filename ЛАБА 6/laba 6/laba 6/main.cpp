//
//  main.cpp
//  laba 6
//
//  Created by Artyom Novickii on 30/10/2018.
//  Copyright © 2018 Artyom Novickii. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int i = 0;
   
    char st[100], sl[100];
  
    
    gets(st);
    strcat(st, "\0");
     int j = 0;
    int jfirst = i;
    int jlast = i;
    while ( !(st[i] == '\0' )){
            if (st[i] == '.' && st[i-1] >= '0'  && st[i-1] <= '9' && st[i+1] >= '0'  && st[i+1] <= '9') {
               
                jfirst = i-1;
                jlast = i+1;
                
                while ((st[jfirst] >= '0' && st[jfirst] <='9')) {
                    jfirst--; }
                jfirst++;
                while ((st[jlast] >= '0' && st[jlast] <= '9')) {
                    jlast++; }
                jlast--;
                
                
                
                if (st[jlast+1] == 'e'){
                    
                    if ( st[jlast+2] >='0' && (st[jlast+2] <='9')){
                        jlast +=2;
                        while ((st[jlast] >= '0' && st[jlast] <= '9')) {
                            jlast++; }
                        jlast--;
                        
                        
                        for (int i = jfirst; i<=jlast; i++){
                            
                            sl[j] = st[i];
                            j++;
                           
                        }
                        i++;
                    }
                        
                        if ( st[jlast+2] == '-' ){
                            jlast +=3;
                            while ((st[jlast] >= '0' && st[jlast] <= '9')) {
                                jlast++; }
                            jlast--;
                            
                            
                            for (int i = jfirst; i<=jlast; i++){
                                
                                sl[j] = st[i];
                                j++;
                               
                            }
                            i++;
                        }else i++;
                        
                    
                    } else i++;
                    
                    sl[j] = ' ';
                    j++;

        }
        else{
            i++;
       // char *strstr(st1, st2);
}
        
    }
    puts(sl);
}
