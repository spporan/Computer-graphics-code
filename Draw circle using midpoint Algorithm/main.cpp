#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>

int x_centre,y_centre,r;

void display(void)
{



    /* clear all pixels */
    glClear (GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */
    glColor3ub (255, 255, 0);
    glBegin(GL_POINTS);





    int x = r, y = 0;

    printf("(%d, %d) ", x + x_centre, y + y_centre);
    glVertex2d( x + x_centre,y + y_centre);

    if (r > 0)
    {
        printf("(%d, %d) ", x + x_centre, -y + y_centre);
        glVertex2d( x + x_centre, -y + y_centre);
        printf("(%d, %d) ", y + x_centre, x + y_centre);
        glVertex2d(  y + x_centre, x + y_centre);
        printf("(%d, %d)\n", -y + x_centre, x + y_centre);
        glVertex2d( -y + x_centre, x + y_centre);
    }


    int P = 1 - r;
    while (x > y)
    {
        y++;


        if (P <= 0)
            P = P + 2*y + 1;

        else
        {
            x--;
            P = P + 2*y - 2*x + 1;
        }


        if (x < y)
            break;


        printf("(%d, %d) ", x + x_centre, y + y_centre);
        glVertex2d( x + x_centre, y + y_centre);
        printf("(%d, %d) ", -x + x_centre, y + y_centre);
        glVertex2d(  -x + x_centre, y + y_centre);
        printf("(%d, %d) ", x + x_centre, -y + y_centre);
        glVertex2d(x + x_centre, -y + y_centre);
        printf("(%d, %d)\n", -x + x_centre, -y + y_centre);
        glVertex2d( -x + x_centre, -y + y_centre);


        if (x != y)
        {
            printf("(%d, %d) ", y + x_centre, x + y_centre);
            glVertex2d(  y + x_centre, x + y_centre);
            printf("(%d, %d) ", -y + x_centre, x + y_centre);
            glVertex2d(-y + x_centre, x + y_centre);
            printf("(%d, %d) ", y + x_centre, -x + y_centre);
            glVertex2d(  y + x_centre, -x + y_centre);
            printf("(%d, %d)\n", -y + x_centre, -x + y_centre);
            glVertex2d(  -y + x_centre, -x + y_centre);
        }
    }



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

void midPointCircleDraw(int x_centre, int y_centre, int r)
{

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

    printf( "Enter mid point:X,Y\n");
    scanf("%d %d", &x_centre, &y_centre);
    printf( "Enter Radius r:\n");
    scanf("%d", &r);
    //midPointCircleDraw(x,y,r);
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

