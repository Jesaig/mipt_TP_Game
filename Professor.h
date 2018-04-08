#ifndef EXAM_PROFESSOR_H
#define EXAM_PROFESSOR_H

#include "Student.h"

class Professor
{
public:
    virtual int slack() = 0;

    Professor() = default;
    ~Professor() = default;

    virtual void attackStudent(Student& student) const = 0;
    virtual void info() const = 0;
};

#endif //EXAM_PROFESSOR_H
