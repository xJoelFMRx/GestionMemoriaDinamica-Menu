#pragma once
#include "iostream"

using namespace System;
using namespace std;

void Mostrar_Menu()
{
    cout << "\tMENU\n";
    cout << "1. LISTA ELEMENTOS\n";
    cout << "2. AGREGAR AL FINAL\n";
    cout << "3. ELIMINAR EN POSICION\n";
    cout << "4. AGREGAR AL INICIO\n";
    cout << "5. MODIFICAR EN POSICION\n";
    cout << "6. INSERTAR EN POSICION\n";
    cout << "7. ORDENAR DE MAYOR A MENOR\n";
    cout << "9. SALIR\n";
}

int* Agregar_al_final(int* arreglo, int nuevo, int& N)
{
    //1. Crear un arreglo temporal del mismo tipo y de tamaño N+1
    int* temporal = new int[N + 1];
    //2. Copia el arreglo original al temporal 
    for (int i = 0; i < N; i++)
    {
        temporal[i] = arreglo[i];
    }
    //3. Agrega el nuevo elemento al arreglo temporal
    temporal[N] = nuevo;
    //4. Actualiza el tamaño del arreglo
    N += 1;
    return temporal;//FFFF459
}

void Listar_Elementos(int* arreglo, int N)
{
    if (arreglo != nullptr)
    {
        for (int i = 0; i < N; i++)
        {
            cout << endl << "\t " << arreglo[i];
        }
    }
    else
    {
        cout << endl << "El arreglo no fue creado...";
    }
}

int* Agregar_al_inicio(int* arreglo, int nuevo, int& N)
{
    //1. Crear un arreglo temporal del mismo tipo y de tamaño N+1
    int* temporal = new int[N + 1];
    //2. Copia el arreglo original al temporal 
    for (int i = 0; i < N; i++)
    {
        temporal[i + 1] = arreglo[i];
    }
    //3. Agrega el nuevo elemento al arreglo temporal
    temporal[0] = nuevo;
    //4. Actualiza el tamaño del arreglo
    N += 1;
    return temporal;//FFFF459
}

int* Eliminar_en_posicion(int* arreglo, int pos, int& N)
{
    if (pos < 0 || pos >= N) {
        cout << "Posicion invalida.\n";
        return arreglo;
    }
    int* temporal = new int[N - 1];
    for (int i = 0, j = 0; i < N; i++) {
        if (i != pos) {
            temporal[j++] = arreglo[i];
        }
    }
    N -= 1;
    return temporal;
}

int* Modificar_Posicion(int* arreglo, int pos, int nuevo, int& N)
{
    if (pos < 0 || pos >= N) {
        cout << "Posicion invalida.\n";
        return arreglo;
    }
    int* temporal = new int[N];
    for (int i = 0; i < N; i++) {
        if (pos == i) temporal[i] = nuevo;
        else temporal[i] = arreglo[i];
    }
    return temporal;
}

int* Insertar_en_posicion(int* arreglo, int pos, int nuevo, int& N)
{
    if (pos < 0 || pos > N) {
        cout << "Posicion invalida.\n";
        return arreglo;
    }
    // Crear un arreglo temporal del mismo tipo y de tamaño N+1
    int* temporal = new int[N + 1];
    // Copiar los elementos del arreglo original hasta la posición deseada
    for (int i = 0; i < pos; i++) {
        temporal[i] = arreglo[i];
    }
    // Insertar el nuevo elemento en la posición deseada
    temporal[pos] = nuevo;
    // Copiar los elementos restantes del arreglo original después de la posición deseada
    for (int i = pos; i < N; i++) {
        temporal[i + 1] = arreglo[i];
    }
    // Actualizar el tamaño del arreglo
    N += 1;
    return temporal;
}

void Ordenar_de_mayor_a_menor(int* arreglo, int N)
{
    if (arreglo != nullptr)
    {
        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                if (arreglo[i] < arreglo[j]) {
                    int temp = arreglo[i];
                    arreglo[i] = arreglo[j];
                    arreglo[j] = temp;
                }
            }
        }
        cout << endl << "El listado fue ordenado!!!";
    }
    else
    {
        cout << endl << "El arreglo no fue creado...";
    }
}