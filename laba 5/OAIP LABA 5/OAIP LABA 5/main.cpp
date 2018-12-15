//
//  main.cpp
//  OAIP LABA 5
//
//  Created by Артём Новицкий on 10/16/18.
//  Copyright © 2018 Артём Новицкий. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    //////////////////////////////////////////////////////////
    cout << "Введите N : ";
    int n;
    cin >> n;
    cout << endl;
    cout << "Введите M : ";
    int m;
    cin >> m;
    int **matrix;
  
    matrix = new int*[n];
    
    
    ////////////////////////////////////////////////////////////
    for(int i=0; i<n; i++){
        matrix[i] = new int[m];}
    
    cout << "Введите матрицу "<< n << "X"<<m<< ": ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j<m ; j++){
          
            cin >> matrix[i][j];
                                // ввод данных
        }
    }
    //////////////////////////////////////////////////////////////
      for(int j = 0; j<m ; j++){
          int result= 1;
    for(int i = 0; i < n; i++){
        result *= matrix[i][j];
        }
          cout << "Result" << j<< ": "<< result<<endl;
    }
   
    ///////////////////////////////////////////////////////////////
  
    ///////////////////////////////////////////////////////////////
  
    ///////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////
    for(int i=0; i<n; i++){
        delete [ ]matrix[i];}
    delete [ ]matrix;
    matrix=NULL;
}
