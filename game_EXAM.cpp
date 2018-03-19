#include <iostream>

using std::cin;
using std::cout;

class Student
{
public:
	int RS;
	int luckiness;
	int knowledge;
	int health;

	Student()
	{
		int RS = 0;
		int luckiness = 0;
		int knowledge = 0;
		int health = 0;
	}

	~Student() = default;

	bool isDead(Student a)
	{
		return health > 0;
	}
};

class Professor
{
public:
	int slack;

	Professor() = default;
	~Professor() = default;

	virtual void attackStudent(Student& student) const = 0;
	static void info() {}
};

class Lukashov : public Professor
{
private:
	Lukashov()
	{
		slack = 64;
	}

	static Lukashov* instance;

public:
	void attackStudent(Student& student) const
	{
		student.health -= 15;
	}

	static Lukashov* get()
	{
		if (instance == nullptr)
		{
			instance = new Lukashov;
		}
		return instance;
	}
	
	static void info()
	{
		cout << "ФИО: Лукашов Алексей Леонидович\n";
		//что-то еще из викимипта
	}
};

Lukashov* Lukashov::instance = nullptr;

class Lunina : public Professor
{
private:
	Lunina()
	{
		slack = 58;
	}

	static Lunina* instance;

public:
	void attackStudent(Student& student) const
	{
		student.health -= 25;
	}

	static Lunina* get()
	{
		if (instance == nullptr)
		{
			instance = new Lunina;
		}
		return instance;
	}

	static void info()
	{
		cout << "ФИО: Лунина Мария Александровна\n";
		//что-то еще из викимипта
	}
};

Lunina* Lunina::instance = nullptr;

class Ivanova : public Professor
{
private:
	Ivanova()
	{
		slack = 40;
	}

	static Ivanova* instance;

public:
	void attackStudent(Student& student) const
	{
		student.health -= 40;
	}

	static Ivanova* get()
	{
		if (instance == nullptr)
		{
			instance = new Ivanova;
		}
		return instance;
	}

	static void info()
	{
		cout << "ФИО: Иванова Светлана Владимировна\n";
		//что-то еще из викимипта
	}
};

Ivanova* Ivanova::instance = nullptr;

class Bogdanov : public Professor
{
private:
	Bogdanov()
	{
		slack = 48;
	}

	static Bogdanov* instance;

public:
	void attackStudent(Student& student) const
	{
		student.health -= 40;
	}

	static Bogdanov* get()
	{
		if (instance == nullptr)
		{
			instance = new Bogdanov;
		}
		return instance;
	}

	static void info()
	{
		cout << "ФИО: Богданов Илья Игоревич\n";
		//что-то еще из викимипта
	}
};

Bogdanov* Bogdanov::instance = nullptr;

class Arutyunov : public Professor
{
private:
	Arutyunov()
	{
		slack = 69;
	}

	static Arutyunov* instance;

public:
	void attackStudent(Student& student) const
	{
		student.health -= 25;
	}

	static Arutyunov* get()
	{
		if (instance == nullptr)
		{
			instance = new Arutyunov;
		}
		return instance;
	}

	static void info()
	{
		cout << "ФИО: Арутюнов Андроник Арамович\n";
		//что-то еще из викимипта
	}
};

Arutyunov* Arutyunov::instance = nullptr;

class Zhdanovskiy : public Professor
{
private:
	Zhdanovskiy()
	{
		slack = 64;
	}

	static Zhdanovskiy* instance;

public:
	void attackStudent(Student& student) const
	{
		student.health -= 15;
	}

	static Zhdanovskiy* get()
	{
		if (instance == nullptr)
		{
			instance = new Zhdanovskiy;
		}
		return instance;
	}

	static void info()
	{
		cout << "ФИО: Ждановский Илья Юрьевич\n";
		//что-то еще из викимипта
	}
};

Zhdanovskiy* Zhdanovskiy::instance = nullptr;

class Dasha : public Professor
{
private:
	Dasha()
	{
		slack = 85;
	}

	static Dasha* instance;

public:
	void attackStudent(Student& student) const
	{
		student.health -= 15;
	}

	static Dasha* get()
	{
		if (instance == nullptr)
		{
			instance = new Dasha;
		}
		return instance;
	}

	static void info()
	{
		cout << "ФИО: Овчинникова Дарья Максимовна\n";
		//что-то еще из викимипта
	}
};

Dasha* Dasha::instance = nullptr;

class Ilinskiy : public Professor
{
private:
	Ilinskiy()
	{
		slack = 75;
	}

	static Ilinskiy* instance;

public:
	void attackStudent(Student& student) const
	{
		student.health -= 25;
	}

	static Ilinskiy* get()
	{
		if (instance == nullptr)
		{
			instance = new Ilinskiy;
		}
		return instance;
	}

	static void info()
	{
		cout << "ФИО: Ильинский Дмитрий Геннадьевич\n";
		//что-то еще из викимипта
	}
};

Ilinskiy* Ilinskiy::instance = nullptr;

class Glibichuk : public Professor
{
private:
	Glibichuk()
	{
		slack = 50;
	}

	static Glibichuk* instance;

public:
	void attackStudent(Student& student) const
	{
		student.health -= 40;
	}

	static Glibichuk* get()
	{
		if (instance == nullptr)
		{
			instance = new Glibichuk;
		}
		return instance;
	}

	static void info()
	{
		cout << "ФИО: Глибичук\n";
		//что-то еще из викимипта
	}
};

Glibichuk* Glibichuk::instance = nullptr;

class Factory
{
public:
	virtual Professor* getEasyProfessor() const = 0;
	virtual Professor* getMiddleProfessor() const = 0;
	virtual Professor* getHardProfessor() const = 0;
};

class MathanFactory : public Factory
{
	Professor* getEasyProfessor()
	{
		return Lukashov::get();
	}

	Professor* getMiddleProfessor()
	{
		return Lunina::get();
	}

	Professor* getHardProfessor()
	{
		return Ivanova::get();
	}
};

class AlgeomFactory : Factory
{
	Professor* getEasyProfessor()
	{
		return Zhdanovskiy::get();
	}

	Professor* getMiddleProfessor()
	{
		return Arutyunov::get();
	}

	Professor* getHardProfessor()
	{
		return Bogdanov::get();
	}
};

class DMathFactory : public Factory
{
	Professor* getEasyProfessor()
	{
		return Dasha::get();
	}

	Professor* getMiddleProfessor()
	{
		return Ilinskiy::get();
	}

	Professor* getHardProfessor()
	{
		return Glibichuk::get();
	}
};



int main()
{
	setlocale(LC_ALL, "Russian");
	
	return 0;
}
