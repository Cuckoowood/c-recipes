// Description here: XXX
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#include <iostream>
#include <algorithm>
#include <vector>

int Rand5()
{
    return rand() % 5;
}

int Rand3()
{
    int x = 0;
    do {
        x = Rand5();
    } while(x >= 3);

    return x;
}

int Rand7()
{
    int x = 0;
    do {
        x = Rand5() * 5 + Rand5();
    } while (x >= 21);

    return x % 7;
}

int RandomX(int size) {
    while(1) {
        int m = rand() % size;
        int n = rand() % size;
        if (m + n < size) {
            return n + m;
        }
    }
}

/*
 * ===  FUNCTION  =========================================================
 *         Name:  main
 *  Description:  program entry routine.
 * ========================================================================
 */
int main(int argc, const char *argv[])
{
    srand(time(NULL));

//    for (int i = 0; i < 10000; i++) {
//        std::cout << Rand3() << std::endl;
//    }

    for (int i = 0; i < 10000; i++) {
        std::cout << RandomX(10) << std::endl;
    }

    return EXIT_SUCCESS;
}  /* ----------  end of function main  ---------- */
