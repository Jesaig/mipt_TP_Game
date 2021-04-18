#ifndef EXAM_PROFESSORS_H
#define EXAM_PROFESSORS_H

#include "Professor.h"
#include <iostream>

using std::cout;

class Lukashov : public Professor
{
private:
    Lukashov() = default;

    const static int slack_;
    static Lukashov* instance;

public:
    int slack();

    void attackStudent(Student& student) const;

    static Lukashov* get();

    void info() const;
};


class Lunina : public Professor
{
private:
    Lunina() = default;

    const static int slack_;
    static Lunina* instance;

public:
    int slack();

    void attackStudent(Student& student) const;

    static Lunina* get();

    void info() const;
};

class Ivanova : public Professor
{
private:
	Ivanova() = default;

    const static int slack_;
	static Ivanova* instance;

public:
    int slack();

	void attackStudent(Student& student) const;

	static Ivanova* get();

	void info() const;
};

class Bogdanov : public Professor
{
private:
	Bogdanov() = default;

    const static int slack_;
	static Bogdanov* instance;

public:
    int slack();

	void attackStudent(Student& student) const;

	static Bogdanov* get();

	void info() const;
};

class Arutyunov : public Professor
{
private:
	Arutyunov() = default;

	const static int slack_;
	static Arutyunov* instance;

public:
    int slack();

	void attackStudent(Student& student) const;

	static Arutyunov* get();

	void info() const;
};

class Zhdanovskiy : public Professor
{
private:
	Zhdanovskiy() = default;

	const static int slack_;
	static Zhdanovskiy* instance;

public:
    int slack();

	void attackStudent(Student& student) const;

	static Zhdanovskiy* get();

	void info() const;
};

class Dasha : public Professor
{
private:
	Dasha() = default;

	const static int slack_;
	static Dasha* instance;

public:
    int slack();

	void attackStudent(Student& student) const;

	static Dasha* get();

	void info() const;
};

class Ilinskiy : public Professor
{
private:
	Ilinskiy() = default;

    const static int slack_;
	static Ilinskiy* instance;

public:
    int slack();

	void attackStudent(Student& student) const;

	static Ilinskiy* get();

	void info() const;
};

class Glibichuk : public Professor
{
private:
	Glibichuk() = default;

    const static int slack_;
	static Glibichuk* instance;

public:
    int slack();

	void attackStudent(Student& student) const;

	static Glibichuk* get();

	void info() const;
};

#endif //EXAM_PROFESSORS_H
