/************************************************************/
/*   Author: Rene Morales                                   */
/*   Creation Date: March 29, 2019                          */
/*   Due Date:April 4, 2019                                 */
/*   Course:CSC135 030                                      */
/*   Professor Name: Dr. Manakkadu                          */
/*   Assignment:#4                                          */
/*   Filename: bookSale.cpp                                 */
/*   Purpose:This program need to calculate the total       */
/*   amount of money for book sales at an online store      */
/************************************************************/
#include <iostream>
#include <iomanip> // set precision

using namespace std;

int main(){

    int numOfBook, i;
    double price, shipping, tax, subtotal = 0, discount = 0, saletax, totalAmount;
    char shippingMethod;

    cout << setw(35) << "************************" << endl;
    cout << setw(33) << "Book Sale Calculator" << endl;
    cout << setw(35) << "************************" << endl;

    // prompt the user to enter the number of book in sale
    cout << "Enter the number of books in the sale: ";
    cin >> numOfBook;

    // prompt the user to enter the price of each book and then add it to an existing total
    for( i = 0; i < numOfBook; i++)
    {
        cout << "Enter price: ";
        cin >> price;

        subtotal += price;
    }

    // Prompt the user to enter the shipping method
    cout << "Enter shipping method [S]Standard shipping [E]Expedited shipping: ";
    cin >> shippingMethod;

    switch (shippingMethod)
    {
        case 'S':
            shipping = 4.99;
            break;
        case 'E':
            shipping = 12.99;
        default:
            cout << " Error! Ivalid entry" << endl;
            break;
    }

    // to provide the right discount to the user
    if(subtotal < 50){

        discount = 0;
    }
    else if(subtotal >= 50 && subtotal <= 100){

        discount = subtotal * 0.10;
    }
    else{

        discount = subtotal * 0.15;
    }
    // calculating the saletax
    saletax = subtotal * 0.05;

    //calculating the total amount
    totalAmount = subtotal + saletax - discount + shipping;


    //  display The result to the user
    cout << fixed << setprecision(2) << endl;

    cout << "Subtotal: $" << subtotal << endl;
    cout << "Sale tax: $" << saletax << endl;
    cout << "Discount: $" << discount << endl;
    cout << "Shipping: $" << shipping << endl;
    cout << "Total: $" << totalAmount << endl;

    return 0;
}



