#ifndef __MOVIES_HPP
#define __MOVIES_HPP
#include <iostream>

class Movies {
private:
    std::string title;
    int runtime; //Total length of the movie in minutes

public:
    //Getters
    int getRunTime() const { return runtime; }

    //Setters
    void setRunTime(int newRunTime) { runtime = newRunTime; }

    //Constructors
    Movies() : title(""), runtime(0) {}   //Default Constructor

    //Functions
    void Play();

};

#endif
