
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;
int main(){
    /////////////////////////
    int k;
    cout << "Введите кол-во элементов массива: ";
    cin >> k;                                  //ввод размерноти массива
    int firstArray[k];
    int secondArray[k];
    //////////////////////////////
    cout << "Введите " << k << " элементов массива: ";
    for(int i = 0 ; i < k ; i++){
        cin >> firstArray[i] ;             //ввод элементов массива
        
    }
    
    int j = -1;
    
    
    ///////////////////////
        
        for(int i = 0; i<k ; i++){
            if(firstArray[i] < 0){
                j++;                                 // сортировка отрицательных влево с учётом порядка
                secondArray[j] = firstArray[i];
                
                }
            }
    

    //////////////////
    
    for(int i = 0; i<k ; i++){
        if(firstArray[i] > 0){
            j++;                                 // сортировка положительных вправо с учётом порядка
            secondArray[j] = firstArray[i];
            
        }
    }
    
    //////////////
    cout << "Исходный массив: ";
    
    for(int i = 0; i<k ; i++){
        cout << firstArray[i] <<" ";
    }                                                                    //вывод
    
    cout << endl;
    
    cout << "Преобразованный массив: ";
    
    for(int i = 0; i<k ; i++){
        cout << secondArray[i] <<" ";
    }
    /////////////
    
    
    
    
    
}

