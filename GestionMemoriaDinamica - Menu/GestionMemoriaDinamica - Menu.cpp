#include "pch.h"
#include "MisFunciones.h"

int main()
{
    int opc = 0;
    int nuevo;
    int pos;
    int* arreglo = new int;
    arreglo = nullptr;
    int N = 0;//Tamaño arreglo
    do
    {
        Mostrar_Menu();
        cout << endl << "Elija una opcion: "; cin >> opc;
        system("cls");
        switch (opc)
        {
        case 1:
            system("cls");
            //Listar elementos del arreglo
            Listar_Elementos(arreglo, N);
            cout << endl << endl << "presione una tecla para continuar";
            system("pause>0");
            break;
        case 2:
            system("cls");
            //Agregar un elemento al final
            cout << "Ingrese el nuevo elemento: "; cin >> nuevo;
            arreglo = Agregar_al_final(arreglo, nuevo, N);
            cout << endl << endl << "presione una tecla para continuar";
            system("pause>0");
            break;
        case 3:
            system("cls");
            //Eliminar en posicion
            cout << "Ingrese la posicion a eliminar: "; cin >> pos;
            arreglo = Eliminar_en_posicion(arreglo, pos, N);
            cout << endl << endl << "presione una tecla para continuar";
            system("pause>0");
            break;
        case 4:
            system("cls");
            //Agregar un elemento al inicio
            cout << "Ingrese el nuevo elemento: "; cin >> nuevo;
            arreglo = Agregar_al_inicio(arreglo, nuevo, N);
            cout << endl << endl << "presione una tecla para continuar";
            system("pause>0");
            break;
        case 5:
            system("cls");
            //Modificar un elemento por otro en una posicion 
            cout << "Ingrese la posicion a modificar: "; cin >> pos;
            cout << "Ingrese el numero a cambiar: "; cin >> nuevo;
            arreglo = Modificar_Posicion(arreglo, pos, nuevo, N);
            cout << endl << endl << "presione una tecla para continuar";
            system("pause>0");
            break;
        case 6:
            system("cls");
            //Insertar en posicion un numero y lo demas colocar despues(es diferente a lo de inicio y final)
            cout << "Ingrese la posicion para insertar: "; cin >> pos;
            cout << "Ingrese el numero a insertar: "; cin >> nuevo;
            arreglo = Insertar_en_posicion(arreglo, pos, nuevo, N);
            cout << endl << endl << "presione una tecla para continuar";
            system("pause>0");
            break;
        case 7:
            system("cls");
            //Ordenar de mayor a menor
            Ordenar_de_mayor_a_menor(arreglo, N);
            cout << endl << endl << "presione una tecla para continuar";
            system("pause>0");
            break;
        case 9:
            break;
        }
        system("cls");
    } while (opc != 9);

    return 0;
}
