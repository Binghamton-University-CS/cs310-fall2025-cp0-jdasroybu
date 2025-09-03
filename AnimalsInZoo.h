#pragma once
#include "Animal.h"

class AnimalsInZoo {
   public:
      AnimalsInZoo(Animal a);
      AnimalsInZoo();
      void display();

   private:
      int numAnimals;
      Animal animal;
};