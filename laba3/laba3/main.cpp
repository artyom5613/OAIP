
#include <iostream>
using namespace std;
int main() {
   
    
    int a[4];
    int b[4];
    cout << " Введите "<<4<<" элементов:  " << endl;
    
    
    for(int e  = 0; e<4; e++)
    {
        cin>>a[e];
    }
    for(int e  = 0; e<4; e++)
    {
         cout << a[e] << "   ";
    }
    
    
    for (int j = 0; j <4; j++){
        for (int i = 0; i<4; i++){
            if (a[i] < 0) {
                
                
                if (b[j] != 0){
                  
                 
                    
                }else{ b[j] = a[i];
                  
                }
                
                
                
            }
            
            for (int j = 3; j>=0; j--){
                for (int i = 3; j>=4; i--){
                    if (a[i] > 0) {
                        
                        
                        if (b[j] != 0){
                            
                            
                            
                        }else{ b[j] = a[i];
                            
                        }
                        
                        
                        
                    }
                    
                    
                   
            
                    for (int j = 0; j <4; j++){
                        cout << b[j]<< " " ;
                        
                        
                    }
            
            
            
            
        }
        
    }
    
    
    
    
    
    
    
}




    }}
