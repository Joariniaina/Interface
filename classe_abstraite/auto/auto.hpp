#ifndef AUTO_HPP
#define AUTO_HPP

#include"../vehicule.hpp"
class Auto:public Vehicule
{
    public:
        Auto();
        void conduire();
        ~Auto();
};
#endif