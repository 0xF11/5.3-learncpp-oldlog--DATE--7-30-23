# 5.3-learncpp-oldlog--DATE--7-30-23


too lazy to go back and copy paste question


question asks user to determine if the number is evenly divisible without leaving a remaindur

original iteration of the code was as follows (before rewritten) properly








#include <iostream>

double userinput() {

    double input;
    std::cin >> input;

    return input;
}


double operatemath(double num1, char oper, double num2) {

    std::cin >> oper;
    double sum = num1 + num2;
    double subres = num1 - num2;
    double divres = num1 / num2;
    double multres = num1 * num2;


    if (oper == '+') {

        std::cout << num1 << "+" << num2 << "=" << sum;

        return sum;
    }
    else if (oper == '-') {

        std::cout << num1 << "-" << num2 << "=" << subres;

        return subres;
    }
    else if (oper == '*') {

        std::cout << num1 << "*" << num2 << "=" << multres;
    }
    else if (oper == '/')
    {
        std::cout << num1 << "/" << num2 << "=" << divres;
    }

}


int main() {
    std::cout << "Please enter your first double (decimalpoint) number! \n";
    double x = userinput();
    std::cout << "\nCool! You entered " << x << " Now enter your second double number! \n";
    double y = userinput();
    std::cout << "Awesome! You've selected the numbers " << x << " And " << y << " Now enter an operator\n(*,/,+,-)\n";
    char op{};

    operatemath(x, op, y);

    std::cout << "\nIf you would like to use this program again, Please reopen it!\n";
    while (true) {
        std::getchar();

    }
}
