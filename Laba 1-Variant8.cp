
#include <iostream>
#include <math.h>
using namespace std;


int main(int argc, const char * argv[]) {
    double a,b,c,x,y,z,result;
    
    cout << "Введите x,y,z"<<endl;
    cin >> x>>y>>z;
    
    a = (exp(fabs(x-y))*pow(fabs(x-y),x+y));
    b = atan(x)+atan(z);
    c = pow(pow(x,6)+pow(log(y),2),1.0/3);
    result = a/b;
    result +=c;
    cout << "Результат: " << result << endl;
    

    return 0;
}
