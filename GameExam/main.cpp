#include <iostream>

#include "Factories.h"
#include "Factory.h"
#include "Professor.h"
#include "Professors.h"
#include "Student.h"

enum class Hardness
{
    Easy = 0, Middle, Hard
};

Professor* getProfessor(const Factory& factory, Hardness hardness) {
    switch (hardness) {
        case Hardness::Easy:
            return factory.getEasyProfessor();
        case Hardness::Middle:
            return factory.getMiddleProfessor();
        case Hardness::Hard:
            return factory.getHardProfessor();
    }
}

int main() {
    MathanFactory factory;
    getProfessor(factory, Hardness::Easy)->info();
    getProfessor(factory, Hardness::Middle)->info();
    getProfessor(factory, Hardness::Hard)->info();

    return 0;
}