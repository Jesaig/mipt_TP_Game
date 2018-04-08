#include "Professors.h"

const int Lukashov::slack_ = 64;
Lukashov* Lukashov::instance = nullptr;
int Lukashov::slack()
{
    return slack_;
}

void Lukashov::attackStudent(Student& student) const
{
    student.health -= 15;
}

Lukashov* Lukashov::get()
{
    if (instance == nullptr)
    {
        instance = new Lukashov;
    }
    return instance;
}

void Lukashov::info() const
{
    cout << "ФИО: Лукашов Алексей Леонидович\n";
    //что-то еще из викимипта
}

const int Lunina::slack_ = 58;

Lunina::slack() {
    return slack_;
}

void Lunina::attackStudent(Student& student) const
{
    student.health -= 25;
}

Lunina* Lunina::get()
{
    if (instance == nullptr)
    {
        instance = new Lunina;
    }
    return instance;
}

void Lunina::info() const
{
    cout << "ФИО: Лунина Мария Александровна\n";
    //что-то еще из викимипта
}

Lunina* Lunina::instance = nullptr;

const int Ivanova::slack_ = 40;

int Ivanova::slack()
{
    return slack_;
}

void Ivanova::attackStudent(Student& student) const
{
    student.health -= 40;
}

Ivanova* Ivanova::get()
{
    if (instance == nullptr)
    {
        instance = new Ivanova;
    }
    return instance;
}

void Ivanova::info() const
{
    cout << "ФИО: Иванова Светлана Владимировна\n";
    //что-то еще из викимипта
}

Ivanova* Ivanova::instance = nullptr;

const int Bogdanov::slack_ = 48;

int Bogdanov::slack()
{
    return slack_;
}

void Bogdanov::attackStudent(Student& student) const
{
    student.health -= 40;
}

Bogdanov* Bogdanov::get()
{
    if (instance == nullptr)
    {
        instance = new Bogdanov();
    }
    return instance;
}

void Bogdanov::info() const
{
    cout << "ФИО: Богданов Илья Игоревич\n";
    //что-то еще из викимипта
}

Bogdanov* Bogdanov::instance = nullptr;

const int Arutyunov::slack_ = 69;

int Arutyunov::slack()
{
    return slack_;
}

void Arutyunov::attackStudent(Student& student) const
{
    student.health -= 25;
}

Arutyunov* Arutyunov::get()
{
    if (instance == nullptr)
    {
        instance = new Arutyunov;
    }
    return instance;
}

void Arutyunov::info() const
{
    cout << "ФИО: Арутюнов Андроник Арамович\n";
    //что-то еще из викимипта
}

Arutyunov* Arutyunov::instance = nullptr;

const int Zhdanovskiy::slack_ = 64;

int Zhdanovskiy::slack()
{
    return slack_;
}

void Zhdanovskiy::attackStudent(Student& student) const
{
    student.health -= 15;
}

Zhdanovskiy* Zhdanovskiy::get()
{
    if (instance == nullptr)
    {
        instance = new Zhdanovskiy;
    }
    return instance;
}

void Zhdanovskiy::info() const
{
    cout << "ФИО: Ждановский Илья Юрьевич\n";
    //что-то еще из викимипта
}

Zhdanovskiy* Zhdanovskiy::instance = nullptr;

const int Dasha::slack_ = 85;

int Dasha::slack()
{
    return slack_;
}

void Dasha::attackStudent(Student& student) const
{
    student.health -= 15;
}

Dasha* Dasha::get()
{
    if (instance == nullptr)
    {
        instance = new Dasha;
    }
    return instance;
}

void Dasha::info() const
{
    cout << "ФИО: Овчинникова Дарья Максимовна\n";
    //что-то еще из викимипта
}

Dasha* Dasha::instance = nullptr;

const int Ilinskiy::slack_ = 75;

int Ilinskiy::slack()
{
    return slack_;
}

void Ilinskiy::attackStudent(Student& student) const
{
    student.health -= 25;
}

Ilinskiy* Ilinskiy::get()
{
    if (instance == nullptr)
    {
        instance = new Ilinskiy;
    }
    return instance;
}

void Ilinskiy::info() const
{
    cout << "ФИО: Ильинский Дмитрий Геннадьевич\n";
    //что-то еще из викимипта
}

Ilinskiy* Ilinskiy::instance = nullptr;

const int Glibichuk::slack_ = 50;

int Glibichuk::slack()
{
    return slack_;
}

void Glibichuk::attackStudent(Student& student) const
{
    student.health -= 40;
}

Glibichuk* Glibichuk::get()
{
    if (instance == nullptr)
    {
        instance = new Glibichuk;
    }
    return instance;
}

void Glibichuk::info() const
{
    cout << "ФИО: Глибичук\n";
    //что-то еще из викимипта
}

Glibichuk* Glibichuk::instance = nullptr;