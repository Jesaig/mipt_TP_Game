//
// Created by aigul on 08.04.2018.
//

#ifndef EXAM_STUDENT_H
#define EXAM_STUDENT_H

class Student
{
public:
    int RS;
    int luckiness;
    int knowledge;
    int health;

    Student() = default;

    ~Student() = default;

    bool isDead(Student a);
};

#endif //EXAM_STUDENT_H
