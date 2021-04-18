#ifndef EXAM_FACTORY_H
#define EXAM_FACTORY_H

#include "Professors.h"

class Factory
{
public:
    virtual Professor* getEasyProfessor() const = 0;
    virtual Professor* getMiddleProfessor() const = 0;
    virtual Professor* getHardProfessor() const = 0;
};

#endif //EXAM_FACTORY_H
