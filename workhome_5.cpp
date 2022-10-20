#include <iostream>
#include <string>
#include "workhome_5.h"

using namespace std;

Snack::Snack(string name, int price, long calories)
{
    this->name = name;
    this->price = price;
    this->calories = calories;
}
void Snack::setName(string value)
{
    name = value;
}
void Snack::setPrice(int value)
{
    price = value;
}

void Snack::setCalories(long value)
{
    calories = value;
}


SnackSlot::SnackSlot(int a)
{
    countFreespace = a;
}

void SnackSlot::addSnack(Snack* snack)
{
    countSnacks + 1;
    countFreespace - 1;
}

VendingMachine::VendingMachine(int slotCount)

{

    freeSlots = slotCount;
}

int VendingMachine::getEmptySlotsCount() const
{
    return freeSlots;
}

void VendingMachine::addSlot(SnackSlot *slot)
{

}
