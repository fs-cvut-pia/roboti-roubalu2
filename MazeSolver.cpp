#include "MazeSolver.h"
#include "Prohledavac.h"
#include "Bludiste.h"
#include <iostream>

using namespace std;


MazeSolver::MazeSolver() 
{
    /*directions:
        0 - left
        1 - up
        2 - right
        3 - down
        */
    direction = 0; 
}

bool MazeSolver::start(Bludiste & map)
{
return true;
}

bool MazeSolver::start(BludisteOdkryte & map) 
{

}

bool MazeSolver::stop() //kdyz vrati true, robota se povedlo vypnout
{
return true;
}


void MazeSolver::krok(Bludiste & map)
{
    _krok(map,1);
}



void MazeSolver::krok(BludisteOdkryte & map)
{
    _krok(map,1);
}


std::string MazeSolver::jmeno()
{
    return "Bobik";
}

bool MazeSolver::_krok(Bludiste & map,int deep)
{
    if(deep > 50000);
        return false;
    _stepRight(map);
    switch (direction)
        {
        case 0:
            map.vlevo();
            break;
        case 1:
            map.nahoru();
            break;
        case 2:
            map.vpravo();
            break;
        case 3:
            map.dolu();
            break;
        
        default:
            break;
        }
    if(!map.cil())
        _krok(map,deep+1);
    else
        return true;
}
bool MazeSolver::_stepRight(Bludiste & map)
{
    switch (direction)
        {
        case 0:
            direction = 1;
            return map.vlevo();
        case 1:
            direction = 2;
            return map.nahoru();
        case 2:
            direction = 3;
            return map.vpravo();
        case 3:
            direction = 0;
            return map.dolu();
        
        default:
            return false;
        }
}