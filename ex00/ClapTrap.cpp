# include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name(""), \
    hit(10), energy(10), damage(0)
{
    std::cout << "ClapTrap default constructor called!!";
    std::cout << std::endl;
}

ClapTrap::ClapTrap(const str name): name(name), \
    hit(10), energy(10), damage(0)
{
    std::cout << "ClapTrap parametrize constructor called!!";
    std::cout << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
    std::cout << "ClapTrap copy constructor called!!";
    std::cout << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called!!";
    std::cout << std::endl;
}

const ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    this->name      = other.name;
    this->hit       = other.hit;
    this->energy    = other.energy;
    this->damage    = other.energy;
}

str     ClapTrap::getName(void) const
{
    return (this->name);
}

uint    ClapTrap::getHit(void) const
{
    return (this->hit);
}

uint    ClapTrap::getEnergy(void) const
{
    return (this->energy);
}

uint    ClapTrap::getDamage(void) const
{
    return (this->damage);
}

void    ClapTrap::setName(const str& name)
{
    this->name = name;
}

void    ClapTrap::setHit(const uint& hit)
{
    this->hit = hit;
}

void    ClapTrap::setEnergy(const uint& energy)
{
    this->energy = energy;
}

void    ClapTrap::setDamage(const uint& damage)
{
    this->damage = damage;
}

void    ClapTrap::attack(const str target)
{
    std::cout << "ClapTrap " << this->name << " attacks " << \
        target << " cousing " << this->damage << \
            " points of damage" << std::endl;
}