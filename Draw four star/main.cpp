#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
//Vertical below star
glColor3ub (0,0, 255);
glBegin(GL_POLYGON);
glVertex2d (225, 100);
glVertex2d (275,100);
glVertex2d (275, 150);
glVertex2d (225, 150);
glEnd();
glColor3ub (0,0, 255);
glBegin(GL_TRIANGLES);
glVertex2d (225, 100);
glVertex2d (250,0);
glVertex2d (275, 100);
glEnd();
glColor3ub (0,0, 255);
glBegin(GL_TRIANGLES);
glVertex2d (275, 100);
glVertex2d (375,125);
glVertex2d (275, 150);
glEnd();
glColor3ub (0,0, 255);
glBegin(GL_TRIANGLES);
glVertex2d (275, 150);
glVertex2d (250,250);
glVertex2d (225, 150);
glEnd();
glColor3ub (0,0, 255);
glBegin(GL_TRIANGLES);
glVertex2d (225, 150);
glVertex2d (225,100);
glVertex2d (125, 125);
glEnd();




//vertical upper star
glColor3ub (0,255, 0);
glBegin(GL_POLYGON);
glVertex2d (225, 350);
glVertex2d (275,350);
glVertex2d (275, 400);
glVertex2d (225, 400);
glEnd();
glColor3ub (0,255, 0);
glBegin(GL_TRIANGLES);
glVertex2d (225, 350);
glVertex2d (250,250);
glVertex2d (275, 350);
glEnd();
glColor3ub (0,255, 0);
glBegin(GL_TRIANGLES);
glVertex2d (275, 350);
glVertex2d (375,375);
glVertex2d (275, 400);
glEnd();
glColor3ub (0,255, 0);
glBegin(GL_TRIANGLES);
glVertex2d (275, 400);
glVertex2d (250,500);
glVertex2d (225, 400);
glEnd();
glColor3ub (0,255, 0);
glBegin(GL_TRIANGLES);
glVertex2d (225, 400);
glVertex2d (125,375);
glVertex2d (225, 350);
glEnd();




//horizontal left star
glColor3ub (255,0, 0);
glBegin(GL_POLYGON);
glVertex2d (100, 225);
glVertex2d (150,225);
glVertex2d (150, 275);
glVertex2d (100, 275);
glEnd();

glColor3ub (255,0, 0);
glBegin(GL_TRIANGLES);
glVertex2d (100, 225);
glVertex2d (125,125);
glVertex2d (150, 225);
glEnd();
glColor3ub (255,0, 0);
glBegin(GL_TRIANGLES);
glVertex2d (150, 225);
glVertex2d (250,250);
glVertex2d (150, 275);
glEnd();
glColor3ub (255,0, 0);
glBegin(GL_TRIANGLES);
glVertex2d (150, 275);
glVertex2d (125,375);
glVertex2d (100, 275);
glEnd();
glColor3ub (255,0, 0);
glBegin(GL_TRIANGLES);
glVertex2d (100, 275);
glVertex2d (0,250);
glVertex2d (100, 225);
glEnd();




//horizontal right star
glColor3ub (255,255, 255);
glBegin(GL_POLYGON);
glVertex2d (350, 225);
glVertex2d (400,225);
glVertex2d (400, 275);
glVertex2d (350, 275);
glEnd();

glColor3ub (255,255, 255);
glBegin(GL_TRIANGLES);
glVertex2d (350, 225);
glVertex2d (375,125);
glVertex2d (400, 225);
glEnd();
glColor3ub (255,255, 255);
glBegin(GL_TRIANGLES);
glVertex2d (400, 225);
glVertex2d (500, 250);
glVertex2d (400,275);
glEnd();
glColor3ub (255,255, 255);
glBegin(GL_TRIANGLES);
glVertex2d (400,275);
glVertex2d (375, 375);
glVertex2d (350,275);
glEnd();
glColor3ub (255,255, 255);
glBegin(GL_TRIANGLES);
glVertex2d (350,275);
glVertex2d (250,250);
glVertex2d (350, 225);
glEnd();





/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0, 500, 0, 500);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("hello");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}


