#include <iostream>
#include "Vector/AdsVector.cpp"

int main(int argc, char *argv[])
{
    AdsVector vect(5);

    vect.addLast(1);
    vect.addLast(2);
    vect.addLast(3);
    vect.addLast(4);
    vect.addLast(5);

    vect.print();

    return 0;
}
