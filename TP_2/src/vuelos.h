#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef VUELOS_H_
#define VUELOS_H_

typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float price;
    char flyCode[10];
    int typePassenger;
    int statusFlight;
    int isEmpty;

}Passenger;

int initPassengers(Passenger* list, int len);
int addPassenger(Passenger* list, int len, int id, char name[],char lastName[],float price,int typePassenger, char flycode[]);
int findPassengerById(Passenger* list, int len,int id);
int removePassenger(Passenger* list, int len, int id);
int sortPassengers(Passenger* list, int len, int order);
int printPassenger(Passenger* list, int length);
int buscarLibre(Passenger vec[], int len, int* pIndex);

#endif /* VUELOS_H_ */
