// Name: Noemi Turner
// Filename: main.cpp
// Description: A simple program that converts binary numbers to decimal numbers and visa versa
// Project Start Date: 3/15/2023
// How to Run the Program in Bash Shell: ~Step 1: g++ main.cpp -o a.out 
//                         ~Step 2: ./a.out

#include <iostream>

void mainMenu();
int getChoice();
int convertToDecimal(int binary_num);

int main()
{
    /* Notes from: https://www.geeksforgeeks.org/how-to-convert-from-binary-to-decimal/
    To convert a binary number to decimal we need to perform a multiplication 
    operation on each digit of a binary number from right to left with powers 
    of 2 starting from 0 and add each result to get the decimal number of it. 
    */

    std::cout <<"Welcome to the Binary2Decimal app!" << std::endl;
    
    bool flag = true;

    // main program loop
    while(flag == true)
    {   
        mainMenu();
        int choice = getChoice();
        if(choice == 2)
        {
            // exit the program
            flag = false;
        }
        else
        {
            //TODO: implement function to get the binary number from the user
            int binary_num = 1; // this is a placeholder
            int decimal_num = convertToDecimal(binary_num);
            std::cout << "Convert the binary number (" << binary_num << ")base2 to a decimal" << std::endl;
            std::cout << "Result: (" << decimal_num << ")base10" << std::endl;
            flag = false;
        }
    }

    std::cout << "Thank you for using Binary2Decimal!" <<std::endl;

    return 0;
}

/********************************************************************
 * Function: mainMenu
 * Description: Displays the main menu for the program
*********************************************************************/
void mainMenu()
{
    std::cout << "******* Main Menu *********" << std::endl;
    std::cout << "1. Convert a Binary Number to a Decimal Number" << std::endl;
    std::cout << "2. Exit the program" << std::endl;
}

/********************************************************************
 * Function: getChoice
 * Description: gets the menu choice from the user and performs
 *              input validation
*********************************************************************/
int getChoice()
{
    //TODO: implement function
    return 1;
}

/********************************************************************
 * Function: convertToDecimal
 * Description: takes a binary number and converts in to a 
 *              decimal number
*********************************************************************/
int convertToDecimal(int binary_num)
{
    //TODO: implement function
    return 0;
}
