#ifndef STRATEGIE_HPP
#define STRATEGIE_HPP

#include"../interface.hpp"
class Strategie:public Interface
{
    public:
        Strategie();
        void start() const ;
        void restart() const;
        void pause() const;
        void play() const;
        void quit() const;
        void menu() const; 
        ~Strategie() ; 
};
#endif