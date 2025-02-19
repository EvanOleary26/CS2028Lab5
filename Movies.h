#ifndef __MOVIES_HPP
#define __MOVIES_HPP

#include "../CS2028Lab4/Shows.h"
#include <iostream>

class Movies {
    private:
        int runtime; //Total length of the movie in minutes

    public:
        //Getters
        int getRunTime(){ return runtime; }

        //Setters
        void setRunTime(int newRunTime){ runtime = newRunTime; }

        //Constructors
        Movies() : runtime(0) {}   //Default Constructor

        Movies(std::string title, std::string desc, int newRunTime) : runtime(newRunTime) {}

        //Functions
        void Play();

};



#endif