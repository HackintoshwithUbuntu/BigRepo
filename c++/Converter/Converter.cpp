// Converter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#define _USE_MATH_DEFINES
float pi = 3.14159265359;

float circum(float radius)
{
    float answer = 2 * pi * radius;
    return answer;
}

int main()
{
    //Choosing the mode
    std::string mode;
    std::cout << "Hi there!\nWelcome to The Calculator\n\n";
    std::cout << "Select a mode: \n\n Converter (a) \n\n or \n\n Circle (b) \n";
    std::getline(std::cin, mode);

    //Converter (mode a)
    if (mode == "a" || mode == "A")
    {
        std::string cm;
        float cmfloat = 0;
        std::cout << "\nEnter a Centimetre value to have it converted\n";
        std::getline(std::cin, cm);

        std::stringstream(cm) >> cmfloat;
        float inches = cmfloat / 2.54;
        float yards = inches / 36;

        std::cout << "\n"
                  << cmfloat << " Centimetres\n\n";
        std::cout << cmfloat << " Centimetres in Inches is:\n"
                  << inches << " Inches \n\n";
        std::cout << cmfloat << " Centimetres in Yards is:\n"
                  << yards << " Yards \n";
    }
    //Circle Mode (mode b)
    else if (mode == "b" || mode == "B")
    {
        std::cout << "\n\nChoose Circle Mode: \n\nArea (a) \n\nor \n\nCircumferance (c) \n\nor \n\nArc (r)\n";
        std::string cmode;
        std::getline(std::cin, cmode);
        std::string radius;
        std::cout << "\nRadius of circle?\n";

        //Doin stuff with the radius
        std::getline(std::cin, radius);
        float rad;
        std::stringstream(radius) >> rad;

        //Area
        if (cmode == "a" || cmode == "A")
        {
            float area = pow(rad, 2) * pi;
            std::cout << "The area of your circle is: " << area << "units\n";
        }
        //Circumferance
        else if (cmode == "c" || cmode == "C")
        {
            std::cout << "The circumferance of your circle is: " << circum(rad) << "units\n";
        }
        //Arc
        else if (cmode == "r" || cmode == "R")
        {
            std::cout << "How many degrees wide is the arc?\n";
            std::string arcrad;
            std::getline(std::cin, arcrad);
            float arcradfloat;
            std::stringstream(arcrad) >> arcradfloat;

            std::cout << "Include inner radius (Y/N) \n";
            std::string innerRadInclude;
            std::getline(std::cin, innerRadInclude);
            if (innerRadInclude == "y" || innerRadInclude == "Y")
            {
                std::cout << "The arc is " << (circum(rad) * arcradfloat / 360) + 2 * rad << " units long\n";
            }
            else
            {
                std::cout << "The arc is " << circum(rad) * arcradfloat / 360 << " units long\n";
            }
        }
        //Error Message
        else
        {
            //Error Message
            std::cout << "\nError reading your answer, please try again\nError reading your answer, please try again\nError reading your answer, please try again\n\n";
            main();
            return 0;
        }
    }
    //Error Message
    else
    {
        //Error Message
        std::cout << "\nError reading your answer, please try again\nError reading your answer, please try again\nError reading your answer, please try again\n\n";
        main();
        return 0;
    }

    system("pause");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
