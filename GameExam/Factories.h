#ifndef EXAM_FACTORIES_H
#define EXAM_FACTORIES_H

#include "Factory.h"

class MathanFactory : public Factory
{
public:
    Professor* getEasyProfessor() const;
    Professor* getMiddleProfessor() const;
    Professor* getHardProfessor() const;
};

class AlgeomFactory : Factory
{
public:
    Professor* getEasyProfessor() const;
    Professor* getMiddleProfessor() const;
    Professor* getHardProfessor() const;
};

class DMathFactory : public Factory
{
public:
    Professor* getEasyProfessor() const;
    Professor* getMiddleProfessor() const;
    Professor* getHardProfessor() const;
};

#endif //EXAM_FACTORIES_H
