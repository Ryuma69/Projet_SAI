#ifndef AFFICHAGE_H
#define AFFICHAGE_H
#include "GL/gl.h"
#include "GL/glut.h"
#include <stdio.h>
#include <stdlib.h>

#define HEIGHT 800

#define WIDTH 600
#include "map.h"



void Affichage();
void Animer();
void * mouvementClavier(unsigned char key, int x, int y);

#endif