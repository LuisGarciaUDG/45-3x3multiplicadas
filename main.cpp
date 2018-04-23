/*
Programa_45
Llenar dos tablas A y B de 3 x 3 por renglones.

multiplicar las dos tablas A y B por renglones y el resultado
depositarlo en una tabla C por columnas.

Imprimir las tablas A, B, C por columnas

Estructura for y arreglos bidimencionales
Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 14 de abril de 2015
*/

#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main()
{
    int matrixA [3] [3], matrixB [3] [3], matrixC [3] [3], j, i;

system ("treasure.mp3");
system ("color f0");

for (i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
    matrixA [i] [j]=0;
    matrixB [i] [j]=0;
    matrixC [i] [j]=0;
    }
}

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout<<"introduce los valores de la matriz A fila: "<<i<<" columna: "<<j<<"  ";
            cin>>matrixA[i][j];
       }
    }

    cout<<"\n\n---------------------------------------------\n";

      for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout<<"introduce los valores de la matriz B fila: "<<i<<" columna: "<<j<<"  ";
            cin>>matrixB[i][j];
       }
    }

cout<<"\n---------------------------------------------";

cout<<"\nCreando matriz A "<<"\n\n";
    Sleep(500);
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
        Sleep(500);
        cout<<" "<<matrixA [i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n";

cout<<"\n---------------------------------------------";

cout<<"\nCreando matriz B "<<"\n\n";

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
        Sleep(500);
        cout<<" "<<matrixB [i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n";

for (i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
    matrixC [i] [j] = matrixB [i] [j]* matrixA [i] [j];
    }
}

cout<<"\n---------------------------------------------";

cout<<"\nCreando matriz C "<<"\n\n";

    for (i=0;i<6;i++)
        {
            cout<<"\t.";
            Sleep(500);
        }

        cout<<"\n\n";

    for (i=0; i<3; i++)
    {
        Sleep (500);
        for (j=0; j<3; j++)
        {
        Sleep (500);
        cout<<" "<<matrixC [j][i];
        }
    cout<<"\n";
    }
cout<<"\n\n";

system ("pause");
return 0;
}

