/*
        Indice de Masa Corporal v. 2.0
        Creado 20/10/2015
        Autor: Hernán Octavio de la Vega
        contacto: h.o.delavega@gmail.com
                  +54 3804 773536
                  CP: 5300 La Rioja (Argentina)
*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<math.h>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
int main()
{
    ini: int a=0, b=0, entero=0, real=0;
    double peso, h, imc;
    char cap_h[20], cap_p[20];
    for(a=0;a<20;a++)
    {
        cap_h[a]=cap_p[a]='\0';
    }
    char logo[16][20]={"     *****   ", "     *****   ", "     *****   "," *************"," *************"," *************","     *****   ","     *****   ","     *****   ","              ","              ","*  *   *  *****","*  ** **  *   ","*  * * *  *   ","*  *   *  *   ","*  *   *  *****"};
    char cuadro[7][40]={"******************************","*                            *","*                            *","*                            *","*                            *","*                            *","******************************"};
    system("Color F9");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),252);
    for(a=0;a<=15;a++)
    {
        gotoxy(60, (a+4));
        cout<<logo[a];
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
    for(a=0;a<7;a++)
    {
        gotoxy(2,(9+a));
        cout<<cuadro[a];
    }
    gotoxy(2, 1);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),252);
    cout<<"INDICE DE MASA CORPORAL";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
    gotoxy(2, 3);
    cout<<"coloque '.' en lugar de ','";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),249);
    gotoxy(2, 5);
    cout<<"Ingrese Peso del paciente: ";
    cin>>peso;
    gotoxy(2, 7);
    cout<<"Ingrese Altura del paciente: ";
    cin>>h;
    imc=peso/pow(h, 2);
    gotoxy(4, 11);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
    cout<<"Masa Corporal: "<<imc;
    gotoxy(4, 13);
    if(imc<18.5)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
        cout<<"Bajo Peso ";
        if((imc<18.5)&&(imc>=17))
        {
            cout<<" (Delgadez leve)";
        }
        else if((imc>=16)&&(imc<17))
        {
            cout<<" (Delgadez moderada)";
        }
        else if(imc<16)
        {
            cout<<" (Delgadez severa)";
        }
    }
    else if((imc>=18.5)&&(imc<25))
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),243);
        cout<<"Peso Normal";
    }
    else if((imc>=25)&&(imc<30))
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
        cout<<"Sobrepeso  (Preobeso)";
    }
    else if(imc>=30)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),252);
        cout<<"Obesidad ";
        if((imc>=30)&&(imc<35))
        {
            cout<<" (Obesidad breve)";
        }
        else if((imc>=35)&&(imc<40))
        {
            cout<<" (Obesidad moderada)";
        }
        else if(imc>=40)
        {
            cout<<" (Obesidad morbida)";
        }
    }
    gotoxy(4, 20);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
    system("Pause");
    system("CLS");
    goto ini;
    return 0;
}
void gotoxy(int x, int y)
{
    COORD rep={x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), rep);
}
