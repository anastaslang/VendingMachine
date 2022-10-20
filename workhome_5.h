#pragma once
#include <iostream>
#include <string>

class Snack
{
public:
    Snack(std::string name, int price, long calories);

    void setName(std::string);
    void setPrice(int);
    void setCalories(long);


private:
    std::string name;
    int price;
    long calories;

};




class SnackSlot
{
public:
    SnackSlot(int a);
    void addSnack(Snack* snack);
private:
    int countSnacks;
    int countFreespace;
};

 class VendingMachine
{
public:
    VendingMachine(int slotCount);
    int getEmptySlotsCount() const;
    void addSlot(SnackSlot *slot);


private:

    int freeSlots;
};

