#include <iostream>
using namespace std;

int main() {
    int x = -1;
    double pi{0.0};
    double parcela{4.0};
    int sinal{-1};
       
    cin >> x;

for (int i = 3; i < x; i+= 2)
{
    pi += parcela;
        if (sinal == -1)
        {
            parcela = -4.0/i;
        } else
        parcela = 4.0/i;
        
    sinal *= -1;
}
cout << "Numero da iteração: " << x << endl;
cout << "PI: " << pi << endl;


    
}