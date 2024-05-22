#ifndef INTERFACE_HPP
#define INTERFACE_HPP
class Interface
{
    public:
        virtual void start() const = 0;
        virtual void restart() const = 0;
        virtual void pause() const = 0;
        virtual void play() const = 0;
        virtual void quit() const = 0;
        virtual void menu() const =0; 
};
#endif