#include <iostream>
#include <math.h>
#include <cstdint>
#include <stack>
using namespace std;

struct Power{

    int m_a;
    int m_b;

 public:
    void setInt(int a, int b){
        m_a = a;
        m_b = b;
    }
   void calculate(){
        cout << pow(m_a,m_b) << endl;
    }
};
struct RGBA{
    std::uint8_t m_red = 0;
    std::uint8_t m_green = 0;
    std::uint8_t m_blue = 0;
    std::uint8_t m_alpha = 255;


public:
    RGBA(int red, int green, int blue, int alpha)
        : m_red(red), m_green(green), m_blue(blue), m_alpha(alpha)
    {

    }
    void print(){
        cout << m_red << endl << m_green << endl << m_blue<< endl << m_alpha << endl;
    }
};
struct stack{

};

int main(){

    Power var;
    int a = 2;
    int b = 3;
   var.setInt(a, b);
   var.calculate();


   RGBA light (8, 16, 32, 64);
   light.print();  // в строке вывода не отображаются значения!





    return 0;
}
