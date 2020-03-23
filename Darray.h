#ifndef Darray_h
#define Darray_h

#include "Arduino.h"

class dynmarray{

    private:
        struct ARR{
            int value;
            int key;
            struct ARR *next;
            struct ARR *prev;
        };

    public:
        int  Get(int key);
        int* Get();
        void Put(int key,int value);
        void Put(int value);
        int size(); 
        void Del();
        void Del(int key);



};

#endif