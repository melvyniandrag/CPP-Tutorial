# CPP-Tutorial
A C++ Tutorial That Culminates in the Use of Many Libraries

This is some cplusplus code I wrote a long time ago when I was learning the language. Just scrolling through the repo, there are a few things that could be changed. 
1. In IntroToSTL/map.cpp, I would remove the "using namespace std;" and add the prefix "std::" to all the standard libary stuff ,i.e. replace "map" with "std::map".
2. IntroToClasses/hero.h needs header guards. At the top of the file it should say:


        #ifndef HERO_H
        #define HERO_H

and at the end of the file it should say:

    #endif
    
as shown here:

    https://youtu.be/RU5JUHAiR18?t=3m32s
  
3. In hero.h / hero.cpp add a new function for the hero, like:

        void Hero::setName( std::string newName )
        {
        name = newName;
        }

  and maybe a setHealth( int newHealth ) function too.
