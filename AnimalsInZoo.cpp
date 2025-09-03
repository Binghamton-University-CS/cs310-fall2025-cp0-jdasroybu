#include "AnimalsInZoo.h"
#include <iostream>

AnimalsInZoo::AnimalsInZoo(Animal a) : numAnimals(1), animal(a) {}

AnimalsInZoo::AnimalsInZoo() : numAnimals(0) {}

void AnimalsInZoo::display() {
   std::cout << "Number of animals: " << numAnimals << std::endl;
   if (numAnimals > 0) {
      animal.display();
   }
}