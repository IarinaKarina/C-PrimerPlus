/*10. Design a function calculate() that takes two type double values and a pointer to
a function that takes two double arguments and returns a double.The
calculate() function should also be type double, and it should return the value
that the pointed-to function calculates, using the double arguments to
calculate(). For example, suppose you have this definition for the add()
function:
double add(double x, double y)
{
return x + y;
}

Then, the function call in the following would cause calculate() to pass the values
2.5 and 10.4 to the add() function and then return the add() return value
(12.9):
double q = calculate(2.5, 10.4, add);

Use these functions and at least one additional function in the add() mold in a
program.The program should use a loop that allows the user to enter pairs of numbers.
For each pair, use calculate() to invoke add() and at least one other function.
If you are feeling adventurous, try creating an array of pointers to add()-style
functions and use a loop to successively apply calculate() to a series of functions
by using these pointers. Hint: Here�s how to declare such an array of three pointers:

double (*pf[3])(double, double);

You can initialize such an array by using the usual array initialization syntax and
function names as addresses.
*/

#include <iostream>
using std::cout;
using std::cin;

double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double calculate(double x, double y, double (*pf)(double, double));

int main() {
    double x,y;
    
    double (*pm[3])(double, double)={add,subtract,multiply};
    cout<<"Enter x and y: ";
    while ((cin>>x && cin>>y)) {
        cin.clear();
        while(cin.get()!='\n')
            continue;
        for(int i=0;i<3;i++) {
            cout<<"func #"<<i+1<<" = "<<calculate(x,y,pm[i])<<std::endl;
        }
        cout<<"Enter new x and y: ";
    }

    cout<<"Done\n";
    return 0;
}


double add(double x,double y) {
    return x + y;
}

double subtract(double x,double y) {
    return x - y;
}

double multiply(double x,double y) {
    return x * y;
}

double calculate(double x,double y,double (*pf)(double,double)) {
    return pf(x,y);
}