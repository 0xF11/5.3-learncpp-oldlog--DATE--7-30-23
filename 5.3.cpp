#include <iostream>


double userinput() {
    double input;
    std::cin >> input;


    return input;
}

char op() {
    char ope;
    std::cin >> ope;
    
    return ope;

}

void opmat(double x, char opr, double y) {
    
    if (opr == '+')
    {
        std::cout << x + y << std::endl << std::endl;
    }

    else if (opr == '-')
    {
        std::cout << x - y << std::endl << std::endl;
    }

    else if (opr == '*')
    {
        std::cout << x * y << std::endl << std::endl;
    }

    else if (opr == '/')
    {
        std::cout << x / y << std::endl << std::endl;
    }



}


int main() {

    std::cout << "Hello! Please enter your first double (decimal number) \n";

    double num1{ userinput() };
    
    std::cout << "Hello! Please enter your second double. \n";
    
    double num2{ userinput() };
    
    double result = num1 * num2;

    std::cout << "Cool! You've selected " << num1 << " and " << num2 << " to do something with eachother. \n";
    
    std::cout << "What would you like them to do with eachother? (EXAMPLE : " << num1 << " * " << num2 << " = " << result << ") \n";
    
    std::cout << "--------------------------------------------------------------------------------------";
    
    std::cout << "\n\nYou can use * to multiply, / to divide, - to subtract, and + to add. \n";
    char oper{ op() };

    opmat(num1, oper, num2);

    // constant use
    std::cout << "\n\n -=================================================================-\n\n";
    std::cout << "You can now repeat this process as many times as you like. \n";

    while (true) {
        double constuse1{ userinput() };
        double constuse2{ userinput()};
        char opconst{ op() };



        opmat(constuse1, opconst, constuse2);


    }

}
