#include "../include/affichage.h"
#include "GL/gl.h"
#include "GL/glut.h"

void affichage()
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glutSwapBuffers();
}