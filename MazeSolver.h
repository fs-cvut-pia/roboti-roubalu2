#ifndef MazeSolver_H_INCLUDED
#define MazeSolver_H_INCLUDED
#include "Prohledavac.h"


using namespace std;

class MazeSolver : public Prohledavac
{
public:
    MazeSolver();

    bool start(Bludiste & map);
    bool start(BludisteOdkryte & map);
    bool stop();
    void krok(Bludiste & map);
    void krok(BludisteOdkryte & map);
    std::string jmeno();

private:
    void _krok(Bludiste & map, int deep);
    bool _stepRight(Bludiste & map);
    bool _stepLeft(Bludiste & map);
    bool _stepFront(Bludiste & map);
    void _turnRight();
    void _turnLeft();
    Souradnice s;
    int direction;



};
#endif
