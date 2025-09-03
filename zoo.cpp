#include <iostream>
#include "Animal.h"
#include "AnimalsInZoo.h"

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Magma Turtle", 1738);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal3.display();
   animal1->display();

   AnimalsInZoo zooEnclosure(*animal1);
   zooEnclosure.display();
   
   delete animal1;
   return 0;
}