#ifndef MOTO_HPP
#define MOTO_HPP

#include"../vehicule.hpp"
class Moto: public Vehicule
{
    public:
        void conduire();
        Moto();
        ~Moto();
};
#endif