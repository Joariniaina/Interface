#ifndef COMBAT_HPP
#define COMBAT_HPP

#include"../interface.hpp"
class Combat:public Interface
{
    public:
        Combat();
        void start() const ;
        void restart() const;
        void pause() const;
        void play() const;
        void quit() const;
        void menu() const;
        ~Combat() ; 
};
#endif