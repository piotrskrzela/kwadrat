#pragma once

#include <iostream>
#include <GL/glew.h>
#include <GL/freeglut.h>

GLuint VAO;
GLuint VBO;

class Punkt
{
private:
int wysokoscOkna;
int szerokoscOkna;
int polozenieOknaX;
int polozenieOknaY;

public:
Punkt(void);
Punkt(int wysokoscPunktu, int szerkooscPunktu, int polozeniePunktuX, int polozenieOPunktuY);
~Punkt(void);
void stworzenieOkna(int argc, char** argv);
static void wyswietl();

void inicjalizacjaGlew();
void stworzenieVAO();
void stworzenieVBO();

};