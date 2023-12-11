#ifndef __TELEPHONE_H
#define __TELEPHONE_H

#define     LENGTH      128

typedef struct{
    char code[LENGTH];
    char exchange[LENGTH];
    char station[LENGTH];
}phone_number;

typedef struct{
    int year;
    char month;
    char date;
    char hour;
    char minute;
    char second;
    phone_number    *called;
    phone_number    *calling;
    phone_number    *paied;
}LongCall;






#endif  /* __TELEPHONE_H */