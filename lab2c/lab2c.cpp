#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Buyer
{
    char FirstName[57], SecondName[25], LastName[30], Gender[8], Nationality[55], Country[60], Region[60], District[60], City[60], Street[60];
    int Age, Height, Weight, Postcode, House, Flat;
    double CreditCard, BankAccount, Date;
};

Buyer* AddStruct(Buyer* Obj, const int amount);
void setData(Buyer* Obj, const int amount);
void showData(const Buyer* Obj, const int amount);

int main()
{
    Buyer* Buyers = 0;
    int buyersAmount = 0;
    int YesOrNot = 0;
    do
    {
        Buyers = AddStruct(Buyers, buyersAmount);
        setData(Buyers, buyersAmount);
        buyersAmount++;
        cout << "Continue? (1 - yes, 0 - no): ";
        cin >> YesOrNot;
        cin.get();
    } while (YesOrNot != 0);
    {
        showData(Buyers, buyersAmount);
        delete[] Buyers;
        return 0;
    }
}

Buyer* AddStruct(Buyer* Obj, const int amount)
{
    if (amount == 0)
    {
        Obj = new Buyer[amount + 1];
    }
    else
    {
        Buyer* tempObj = new Buyer[amount + 1];
        for (int i = 0; i < amount; i++)
        {
            tempObj[i] = Obj[i];
        }
        delete[] Obj;
        Obj = tempObj;
    }
    return Obj;
}

void setData(Buyer* Obj, const int amount)
{
    cout << "FirstName: ";
    cin.getline(Obj[amount].FirstName, 57);
    cout << "SecondName: ";
    cin.getline(Obj[amount].SecondName, 25);
    cout << "LastName: ";
    cin.getline(Obj[amount].LastName, 30);
    cout << "Gender: ";
    cin.getline(Obj[amount].Gender, 8);
    cout << "Nationality: ";
    cin.getline(Obj[amount].Nationality, 55);
    cout << "Country: ";
    cin.getline(Obj[amount].Country, 60);
    cout << "Region: ";
    cin.getline(Obj[amount].Region, 60);
    cout << "District: ";
    cin.getline(Obj[amount].District, 60);
    cout << "City: ";
    cin.getline(Obj[amount].City, 60);
    cout << "Street: ";
    cin.getline(Obj[amount].Street, 60);
    cout << "Postcode: ";
    cin >> Obj[amount].Postcode;
    cout << "House: ";
    cin >> Obj[amount].House;
    cout << "Flat: ";
    cin >> Obj[amount].Flat;
    cout << "Age: ";
    cin >> Obj[amount].Age;
    cin.get();
    cout << "Height: ";
    cin >> Obj[amount].Height;
    cin.get();
    cout << "Weight: ";
    cin >> Obj[amount].Weight;
    cin.get();
    cout << "CreditCardNumber: ";
    cin >> Obj[amount].CreditCard;
    cin.get();
    cout << "BankAccountNumber: ";
    cin >> Obj[amount].BankAccount;
    cin.get();
    cout << endl;
}

void showData(const Buyer* Obj, const int amount)
{
    cout << "============================================================================================================================================================================================================================" << endl;
    for (int i = 0; i < amount; i++)
    {
        cout << i + 1 << "  " << Obj[i].FirstName << '\t' << Obj[i].SecondName << '\t' << Obj[i].LastName << '\t' << Obj[i].Gender << '\t' << Obj[i].Nationality << '\t' << Obj[i].Country << '\t' << Obj[i].Region << '\t' << Obj[i].District << '\t' << Obj[i].City << '\t' << Obj[i].Street << '\t' << Obj[i].Postcode << '\t' << Obj[i].House << '\t' << Obj[i].Flat << '\t' << Obj[i].Age << '\t' << Obj[i].Height << '\t' << Obj[i].Weight << '\t' << Obj[i].CreditCard << '\t' << Obj[i].BankAccount << endl;
    }
}