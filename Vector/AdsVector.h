#pragma once

class AdsVector {

    public:
        AdsVector(int capacity);

        AdsVector();

        // Add destructor to release dynamically allocated memory
        ~AdsVector();

        void addLast(int el);

        void addFirst(int el);

        void removeFirst();

        void removeLast();

        int getFirst();

        int getLast();


        void set(int index, int el);

        int get(int index);

        int size();

        bool contains(int el);

        void extendCapacity();

        bool isEmpty();

        void print();

    private:
        int* data;
        int count;
        static const int DEFAULT_CAPACITY = 10;
        int m_capacity = 0;


};
