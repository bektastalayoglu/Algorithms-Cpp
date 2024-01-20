#pragma once

class AdsVector {

    public:
        AdsVector(int capacity);

        // Add destructor to release dynamically allocated memory
        ~AdsVector();

        void addLast(int el);

        void addFirst(int el);

        void removeFirst();

        void removeLast();

        void set(int index, int el);

        void get(int index);

        void print();

    private:
        int* data;
        int count;


};
