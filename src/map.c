#include "../include/map.h"

void makeSol(){
    glVertex3f(-0.5f, -10.5f, -10.5f);

    glVertex3f(-0.5f, -10.5f,  10.5f);

    glVertex3f(-0.5f,  10.5f,  10.5f);

    glVertex3f(-0.5f,  10.5f, -10.5f);


}
void makeCube(){
    glColor3f(1.0f, 1.0f, 1.0f);





    glVertex3f(-0.5f, -0.5f,  0.5f);

    glVertex3f( 0.5f, -0.5f,  0.5f);

    glVertex3f( 0.5f,  0.5f,  0.5f);

    glVertex3f(-0.5f,  0.5f,  0.5f);



    glColor3f(1.0f, 0.0f, 0.0f);


    glVertex3f( 0.5f, -0.5f, -0.5f);

    glVertex3f(-0.5f, -0.5f, -0.5f);

    glVertex3f(-0.5f,  0.5f, -0.5f);

    glVertex3f( 0.5f,  0.5f, -0.5f);



    glColor3f(0.0f, 1.0f, 0.0f);


    glVertex3f( 0.5f, -0.5f,  0.5f);

    glVertex3f( 0.5f, -0.5f, -0.5f);

    glVertex3f( 0.5f,  0.5f, -0.5f);

    glVertex3f( 0.5f,  0.5f,  0.5f);



    glColor3f(0.0f, 0.0f, 1.0f);


    glVertex3f(-0.5f, -0.5f, -0.5f);

    glVertex3f(-0.5f, -0.5f,  0.5f);

    glVertex3f(-0.5f,  0.5f,  0.5f);

    glVertex3f(-0.5f,  0.5f, -0.5f);



    glColor3f(1.0f, 1.0f, 1.0f);






    glVertex3f(-0.5f,  0.5f,  0.5f);

    glVertex3f( 0.5f,  0.5f,  0.5f);

    glVertex3f( 0.5f,  0.5f, -0.5f);

    glVertex3f(-0.5f,  0.5f, -0.5f);



    glColor3f(1.0f, 1.0f, 0.0f);



    glVertex3f(-0.5f, -0.5f, -0.5f);

    glVertex3f( 0.5f, -0.5f, -0.5f);

    glVertex3f( 0.5f, -0.5f,  0.5f);

    glVertex3f(-0.5f, -0.5f,  0.5f);
}