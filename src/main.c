#include <stdio.h>
#include <stdlib.h>
#include "GL/gl.h"
#include "GL/glut.h"
#include "../include/affichage.h"
#include "../include/perso.h"





int main(int argc, char ** argv){


	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);

	glutInitWindowSize(800, 600);

	glutInitWindowPosition(50,50);

	glutCreateWindow("Une fenetre OpenGL");

	glEnable(GL_DEPTH_TEST);

	glutDisplayFunc(Affichage);

    glutKeyboardFunc((void (*)(unsigned char, int, int)) mouvementClavier);

	glutIdleFunc(Animer);

	glutMainLoop();

	return 0;


}

