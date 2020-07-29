#include <cstdlib>
#include "genMino.h"
#define NUM_MINO 4
#define MINO_S 0
#define MINO_I 1
#define MINO_J 2
#define MINO_L 3
Mino * genMino()
{
    int mino_type;
    Mino * ptr;

    mino_type = random() % NUM_MINO;

    switch(mino_type) {
        case MINO_S:
            ptr = new Mino_S;
            break;
        case MINO_I:
            ptr = new Mino_I;
            break;
        case MINO_J:
            ptr = new Mino_J;
            break;
        case MINO_L:
            ptr = new Mino_L;
            break;
    }
    return ptr;
}
