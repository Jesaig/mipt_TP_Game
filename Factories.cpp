#include "Factories.h"

Professor* MathanFactory::getEasyProfessor() const
{
    return Lukashov::get();
}

Professor* MathanFactory::getMiddleProfessor() const
{
    return Lunina::get();
}

Professor* MathanFactory::getHardProfessor() const
{
    return Ivanova::get();
}

Professor* AlgeomFactory::getEasyProfessor() const
{
    return Zhdanovskiy::get();
}

Professor* AlgeomFactory::getMiddleProfessor() const
{
    return Arutyunov::get();
}

Professor* AlgeomFactory::getHardProfessor() const
{
    return Bogdanov::get();
}

Professor* DMathFactory::getEasyProfessor() const
{
    return Dasha::get();
}

Professor* DMathFactory::getMiddleProfessor() const
{
    return Ilinskiy::get();
}

Professor* DMathFactory::getHardProfessor() const
{
    return Glibichuk::get();
}