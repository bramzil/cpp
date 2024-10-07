#ifndef CLAPtRAP_HPP
# define CLAPtRAP_HPP

typedef std::string str;

# include <string>
# include <iostream>

class ClapTrap
{
    private:
        str     name;
        uint    hit;
        uint    energy;
        uint    damage;   
    public:
        ClapTrap();
        ClapTrap(const str name);
        ClapTrap(const ClapTrap& other);
        ~ClapTrap();
        const ClapTrap& operator=(const ClapTrap& other);

        str     getName(void) const;
        uint    getHit(void) const;
        uint    getEnergy(void) const;
        uint    getDamage(void) const;

        void    setName(const str& name);
        void    setHit(const uint& hit);
        void    setEnergy(const uint& energy);
        void    setDamage(const uint& damage);

        void    attack(const str target);
        void    takeDamage(uint amount);
        void    beReapaired(uint amount);
};

#endif