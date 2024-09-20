

#include <iostream>

using namespace std;


using namespace std;

class Drob {
private:
    int numerator;  
    int denominator; 

public:
  
    Drob(int num = 1, int den = 1) {
        if (den == 0) {
         
            denominator = 1;
        }
        else {
            numerator = num;
            denominator = den;
        }
    }
    void display() const {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    srand(time(0)); 

   
    Drob fraction1(3, 4);              
    Drob fraction2(rand() % 10 + 1); 

    cout << "Drob 1. Random: "; //команды fractional подсмотрел в интернете т.к. ошибка вылазила при компиляции
    fraction1.display();

    cout << "Drob 2. Random ";
    fraction2.display();

    return 0;
}
