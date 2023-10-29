#pragma once
#include <Actualizable.hpp>
#include <curses.h>

class Controlador : public Actualizable
{
private:
    Dibujo *d1;
    Dibujo *d2;
public:
         Controlador(Dibujo *dibujo1, Dibujo *dibujo2, bool &ejec) : d1(dibujo1), d2(dibujo2), ejecucion(ejec){}
    ~Controlador();
    void Actualizar()
    {
         if(getch() == 'q')
         {
             ejecucion = false;
         }
         if(getch() == 'd'){
             d1.AvanzarX(1);
         }
         if(getch() == 'a'){
             d1.RetrocederX(1);
         }
         if(getch() == KEY_RIGHT){
             d2.AvanzarX(1);
         }
         if(getch() == KEY_LEFT){
             d2.RetrocederX(1);
         }
    }
};
