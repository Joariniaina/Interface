#ifndef FOOTBALL_HPP
#define FOOTBALL_HPP

#include"../interface.hpp"
class Football:public Interface
{
    public:
        Football();
        void start() const ;
        void restart() const;
        void pause() const;
        void play() const;
        void quit() const;
        void menu() const; 
        ~Football() ; 
};
#endif