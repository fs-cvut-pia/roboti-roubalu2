#include "MazeSolver.h"
#include "Prohledavac.h"
#include "Bludiste.h"
#include <iostream>

using namespace std;


MazeSolver::MazeSolver()
{
    /*directions:
        0 - up
        1 - right
        2 - down
        3 - left
        */
    direction = 0;
}

bool MazeSolver::start(Bludiste & map)
{
return true;
}

bool MazeSolver::start(BludisteOdkryte & map)
{
return true;
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

void MazeSolver::_krok(Bludiste & map,int deep)
{
    Souradnice akt_poloha;
    switch(rand() % 5)
    {
        case 0:
            _stepRight(map);
            return;
        case 1:
            _stepLeft(map);
            return;
        case 2:
            _stepFront(map);
            return;
        case 3:
            _turnLeft();
            return;
        case 4:
            _turnRight();
            return;
    }/*
    if(_stepRight(map))
    {
        _turnRight();
    }
    else
    {
        if(_stepFront(map))
        {

        }
        else
        {
            _turnLeft();
        }
    }
    akt_poloha=map.poloha();
    cout<<"["<<akt_poloha.x<<","<<akt_poloha.y<<"]"<<endl;
    if(!map.cil())
        return true;
    else
        return false;
        */
        return;
}
void MazeSolver::_turnLeft()
{
    switch (direction)
        {
        case 0:
            direction = 3;
            return;
        case 1:
            direction = 0;
            return;
        case 2:
            direction = 1;
            return;
        case 3:
            direction = 2;
            return;

        default:
            break;
        }
        return;
}

void MazeSolver::_turnRight()
{
    switch (direction)
        {
        case 0:
            direction = 1;
            return;
        case 1:
            direction = 2;
            return;
        case 2:
            direction = 3;
            return;
        case 3:
            direction = 0;
            return;

        default:
            break;
        }
        return;
}

bool MazeSolver::_stepFront(Bludiste & map)
{
    switch (direction)
        {
        case 0:
            return map.nahoru();
            break;
        case 1:
            return map.vpravo();
            break;
        case 2:
            return map.dolu();
            break;
        case 3:
            return map.vlevo();
            break;

        default:
            break;
        }
        return false;
}

bool MazeSolver::_stepLeft(Bludiste & map)
{
    switch (direction)
        {
        case 0:
            return map.vlevo();
            break;
        case 1:
            return map.nahoru();
            break;
        case 2:
            return map.vpravo();
            break;
        case 3:
            return map.dolu();
            break;

        default:
            break;
        }
        return false;
}

bool MazeSolver::_stepRight(Bludiste & map)
{
    switch (direction)
        {
        case 0:
            return map.vpravo();
            break;
        case 1:
            return map.dolu();
            break;
        case 2:
            return map.vlevo();
            break;
        case 3:
            return map.nahoru();
            break;

        default:
            break;
        }
        return false;
}
