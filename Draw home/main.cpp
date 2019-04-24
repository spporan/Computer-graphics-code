#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
//rooftop triangle
glColor3ub (0,255, 0);
glBegin(GL_TRIANGLES);
glVertex2d (100, 400);
glVertex2d (250, 500);
glVertex2d (400, 400);
glEnd();

//wall polygon
glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glVertex2d (100, 200);
glVertex2d (400, 200);
glVertex2d (400, 400);
glVertex2d (100, 400);
glEnd();

//door
glBegin(GL_POLYGON);
glColor3ub (0,0,255);
glVertex2d (200, 200);
glVertex2d (300, 200);
glVertex2d (300,350  );
glVertex2d (200, 350);
glEnd();

//window
glBegin(GL_POLYGON);
glColor3ub (255,0,0);
glVertex2d (120, 275);
glVertex2d (180, 275);
glVertex2d (180, 330);
glVertex2d (120, 330);
glEnd();

//windows
glBegin(GL_POLYGON);
glColor3ub (255,0,0);
glVertex2d (320, 275);
glVertex2d (380, 275);
glVertex2d (380, 330);
glVertex2d (320, 330);
glEnd();


glBegin(GL_POLYGON);
glColor3ub (215,149,149);
glVertex2d (100, 200);
glVertex2d (90, 150);
glVertex2d (410, 150);
glVertex2d (400, 200);
glEnd();

glBegin(GL_POLYGON);
glColor3ub (0,255,255);
glVertex2d (90, 150);
glVertex2d (90, 140);
glVertex2d (410, 140);
glVertex2d (410, 150);
glEnd();

glBegin(GL_POLYGON);
glColor3ub (134,128,128);
glVertex2d (0, 200);
glVertex2d (0, 140);
glVertex2d (90, 140);
glVertex2d (100, 200);
glEnd();

glBegin(GL_POLYGON);
glColor3ub (134,128,128);
glVertex2d (400, 200);
glVertex2d (410, 140);
glVertex2d (500, 140);
glVertex2d (500, 200);
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

