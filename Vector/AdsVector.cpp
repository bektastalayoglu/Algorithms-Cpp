#include "AdsVector.h"


    AdsVector::AdsVector(int capacity):
            data {new int[capacity]},
            count {0}
    {
    }

    // Add destructor to release dynamically allocated memory
    AdsVector::~AdsVector() {
        delete[] data;
    }

    void AdsVector::addLast(int el)
    {
        if (count == 0){
            data[0] = el;
        }else{
            data[count] = el;
        }
        count++;
    }

    void AdsVector::print()
    {
        for(int i = 0; i < count; i++){
            std::cout << data[i] << std::endl;
        }
    }


