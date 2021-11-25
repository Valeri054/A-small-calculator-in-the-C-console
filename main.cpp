#include <iostream>
#include <string>
int main()
{
    std::cout << "Console calcolator \n";
    std::cout << "--------------------\n";

    char op{};
    float numOne{};
    float numTow{};

    std::cout << "Enter num: ";
    std::cin >> numOne;

    std::cout << "Enter num: ";
    std::cin >> numTow;

    std::cout << "Enter operator +, -, *, /: ";
    std::cin >> op;

    switch(op){
        case '+':
            std::cout << numOne << " + " << numTow << " = " << numOne + numTow;
        break;

        case '-':
            std::cout << numOne << " - " << numTow << " = " << numOne - numTow;
        break;

        case '*':
            std::cout << numOne << " * " << numTow << " = " << numOne * numTow;
        break;

        case '/':
            std::cout << numOne << " / " << numTow << " = " << numOne / numTow;
        break;

        default:

        std::cout << "Wrong operator!!! \n" << "Do you want to go back to the beginning y- Yes n-No: ";
        std::string text{};
        std::cin >> text;


        if(text == "y"){

         return main();

        }
        if(text == "n"){
            std::cout << "Press Enter...";
            exit(0);

        }
        else{

            exit(0);

        };

    };

    return 0;
}
