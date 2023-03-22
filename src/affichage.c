#include "../include/affichage.h"

double xm = 0, ym = 0, z = 0, xc = 0, yc=50;

void Affichage(){


	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


	glMatrixMode(GL_PROJECTION);

		glLoadIdentity();

	glFrustum(-1,1,-0.5,0.5,0.5,9);

	gluLookAt(xm,ym,z,xc,yc,yc,50,0,0);


	glMatrixMode(GL_MODELVIEW);

	glLoadIdentity();




    glBegin(GL_QUADS);
    makeSol();
	makeCube();



	glEnd();

	glFlush();


}

void Animer(){





}
void * mouvementClavier(unsigned char key, int x, int y){

    switch(key){

        case 'z':
            z = z+0.1;
            // en avant
            break;
        case 'q':
            //xm = xm-0.1;
            ym = ym-0.1;
            // vers la gauche
            break;
        case 'd':
            //xm = xm+0.1;
            ym = ym+0.1;
            // vers la droite
            break;
        case 'x':
            z = z-0.1;
            // vers l'arriere
            break;
        case 'o':
            xc = xc-1;
            break;
        case 'p':
            xc = xc+1;
            break;
        case 'k':
            yc = yc-1;
            break;
        case 'l':
            yc = yc+1;
            break;

    }
    glutPostRedisplay();
}