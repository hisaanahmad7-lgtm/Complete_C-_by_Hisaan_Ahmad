#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

class simplecalc{

    public:
    int num1;
    int num2;

    void getCalcValue(void){
        cout<<"Enter two numbers you wanna perform oprations :";
        cin>>num1>>num2;
    }

    void setCalcValue(void){
        cout<<num1<< " + "<<num2<<" = "<< num1 + num2<<endl;
        cout<<num1<< " - "<<num2<<" = "<< num1 - num2<<endl;
        cout<<num1<< " * "<<num2<<" = "<< num1 * num2<<endl;
        cout<<num1<< " / "<<num2<<" = "<< num1 / num2<<endl;
    }

};

class alajabric_formullae{
    public:
    int alphas;

    void getAljebra(void){
        cout<<"Enter the number: ";
        cin>>alphas;
    }

    void setAljebra(void){
        cout<<"value of sinθ is :"<<sin(alphas)<<endl;
        cout<<"value of cosθ is :"<<cos(alphas)<<endl;
        cout<<"value of tanθ is :"<<tan(alphas)<<endl;
        // cout<<"value of secθ is :"<<sec(alpha);
    }
};
class ComplexCalc {
public:
    int real1, imag1;
    int real2, imag2;

    void getComplexValue(void) {
        cout << "Enter real and imaginary part for First Complex Number: ";
        cin >> real1 >> imag1;
        cout << "Enter real and imaginary part for Second Complex Number: ";
        cin >> real2 >> imag2;
    }

    void addComplex(void) {
        int sumReal = real1 + real2;
        int sumImag = imag1 + imag2;
        cout << "Sum: " << sumReal << " + " << sumImag << "i" << endl;
    }

    void subtractComplex(void) {
        int diffReal = real1 - real2;
        int diffImag = imag1 - imag2;
        cout << "Difference: " << diffReal << " + " << diffImag << "i" << endl;
    }
};
int main() {

    simplecalc s1;
    s1.getCalcValue();
    s1.setCalcValue();
    


    alajabric_formullae a1;
    a1.getAljebra();
    a1.setAljebra();

    ComplexCalc c1;
    c1.getComplexValue();
    c1.addComplex();
    c1.subtractComplex();
    return 0;
}