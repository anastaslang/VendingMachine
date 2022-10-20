#include <iostream>
#include <string>
#include "workhome_5.h"

using namespace std;
int main(){
  Snack *bounty = new Snack("Bounty", 45, 474);
  Snack *snickers = new Snack("Snickers", 55, 490);
  SnackSlot *slot = new SnackSlot(10/*количество батончиков, которые помещаются в слот*/);
  slot->addSnack(bounty); //Добавляем батончик в слот
  slot->addSnack(snickers);
  VendingMachine* machine = new VendingMachine(20);
  machine->addSlot(slot); // Помещаем слот обратно в аппарат

  cout << machine->getEmptySlotsCount(); // Должно выводить количество пустых слотов для снеков
  delete machine;
  delete slot;
  delete snickers;
  delete bounty;
}
