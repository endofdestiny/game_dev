//
//  CreateHorde.cpp
//  zombie_horde
//


#include <stdio.h>
#include "ZombieHorde.h"
#include "Zombie.hpp"


Zombie* createHorde(int numZombies, IntRect arena)
{


    Zombie* zombies = new Zombie[numZombies];
    
    int maxY = arena.height - 50;
    int minY = arena.top + 50;
    int maxX = arena.width - 50;
    int minX = arena.left + 50;

    
    for (int i = 0; i < numZombies; i++)
    {
        // Which side should the zombie spawn
        srand((int)time(0) * i);
        int side = (rand() % 4);
        float x, y;
        
      
        switch (side)
        {
            case 0:
                // left
                x = minX;
                y = (rand() % maxY) + minY;
                break;
            case 1:
                // right
                x = maxX;
                y = (rand() % maxY) + minY;
                break;
            case 2:
                // top
                x = (rand() % maxX) + minX;
                y = minY;
                break;
                
            case 3:
                // bottom
                x = (rand() % maxX) + minX;
                y = maxY;
                break;
        }
        
        // Bloater, crawler or runner
        srand((int)time(0) * i * 2);
        int type = (rand() % 3);
        
         
        
        //x = 25;
        //y = 30;
        //int type = 1;
        
        // Spawn the new zombie into the array
        zombies[i].spawn(x, y, type, i);
    }
    return zombies;
                

};









