#ifndef MazeSolver_H_INCLUDED
#define MazeSolver_H_INCLUDED
#include "Prohledavac.h"


using namespace std;

class MazeSolver : Prohledavac
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
    bool _krok(Bludiste & map, int deep);
    bool _stepRight(Bludiste & map);
    Souradnice s;
    int direction;



};
#endif