
#include "vuelos.h"





/** \brief To indicate that all position in the array are empty,
* this function put the flag (isEmpty) in TRUE in all
* position of the array
* \param list Passenger* Pointer to array of passenger
* \param len int Array length
* \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
*
*/
int initPassengers(Passenger* list, int len)
{
    int retorno = 0;
    if( list != NULL && len > 0)
    {
        for(int i=0; i < len; i++)
        {
            list[i].isEmpty = 1; //notacion vec - pasar a punt
        }
        retorno = 1;
    }
    return retorno;
}

/** \brief add in a existing list of passengers the values received as parameters
* in the first empty position
* \param list passenger*
* \param len int
* \param id int
* \param name[] char
* \param lastName[] char
* \param price float
* \param typePassenger int
* \param flycode[] char
* \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok*/
int addPassenger(Passenger* list, int len, int id, char name[],char lastName[],float price,int typePassenger, char flycode[])
{
	int retorno = 0;

	Passenger aux;
	int index;

	printf("Ingrese el nombre:");
	fgets(name, 51, stdin);
	printf("Ingrese el apellido:");
	fgets(lastName, 51, stdin);
	printf("Ingrese el precio del vuelo:");
	scanf("%f", &price);
	printf("Ingrese el tipo de pasajero:");
	printf("1.Economico. \n2.Ejecutivo/negocios \n3.Primera Clase\n");
	scanf("%d", &typePassenger);
	printf("Ingrese el codigo de vuelo:");
	fgets(flycode, 10, stdin);

	buscarLibre(list, len, &index);
	if()

    return retorno;
}

/** \brief find a Passenger by Id en returns the index position in array.
*
* \param list Passenger*
* \param len int
* \param id int
* \return Return passenger index position or (-1) if [Invalid length or
NULL pointer received or passenger not found]
*
*/
int findPassengerById(Passenger* list, int len,int id)
{
    return 0;
}

/** \brief Remove a Passenger by Id (put isEmpty Flag in 1)
*
* \param list Passenger*
* \param len int
* \param id int
* \return int Return (-1) if Error [Invalid length or NULL pointer or if can't
find a passenger] - (0) if Ok
*
*/
int removePassenger(Passenger* list, int len, int id)
{
    return -1;
}

/** \brief Sort the elements in the array of passengers, the argument order
indicate UP or DOWN order
*
* \param list Passenger*
* \param len int
* \param order int [1] indicate UP - [0] indicate DOWN
* \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
*
*/
int sortPassengers(Passenger* list, int len, int order)
{
    return 0;
}

/** \brief print the content of passengers array
*
* \param list Passenger*
* \param length int
* \return int
*
*/
int printPassenger(Passenger* list, int length)
{

return 0;
}



int buscarLibre(Passenger vec[], int len, int* pIndex)
{

    int todoOk = 0;
    if( vec != NULL && pIndex != NULL && len > 0)
    {
        *pIndex = -1;
        for(int i=0; i < len; i++)
        {
            if(vec[i].isEmpty)
            {
                *pIndex = i;
                break;
            }
        }
        todoOk = 1;
    }
    return todoOk;
}




