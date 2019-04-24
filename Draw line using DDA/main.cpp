#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
float m,y,x,dy,dx,x1,x2,y1,y2,xk,yk;

void display(void)
{



/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3ub (255, 255, 0);
glBegin(GL_POINTS);

  //printf("value of m %.2f \n\n\n\n\n", m);

    if (m<=1)
    {
        if(x1<x2)
        {
            xk=x1;
            yk=y1;

            for(xk=x1; xk<= x2; xk++)
            {
                //printf("x_a:%.1f y_a:%.1f\n",xk,round(yk));
                glVertex2d(xk,yk);

                yk=yk+m;
                //printf("value of yk+1= %.2f\n\n\n",yk,round(yk));
            }
        }
        else if(x1>x2)
        {
            x2=x1-1;
            xk=x1;
            yk=y1;
            for(xk=x1; xk<= x2; xk++)
            {
                //printf("x_a:%.1f y_a:%.1f\n",xk,round(yk));
                glVertex2d(xk,yk);

                yk=yk-m;
                //printf("value of yk+1= %.2f\n\n\n",yk,round(yk));
            }
        }
    }
    else if (m>1)
    {
        if (x1<x2)
        {
            xk=x1;
            yk=y1;

            for(yk=y1; yk<= y2; yk++)
            {
               // printf("x_a:%.1f y_a:%.1f\n",round(xk),round(yk));
                glVertex2d(xk,yk);

                xk=xk+(1/m);
                //printf("value of xk+1= %.2f\n",xk,round(xk));
            }
        }
        else if (x1>x2)
        {
            xk=x1;
            yk=y1;
            y2=y1-1;

            for(yk=y1; yk<= y2; yk++)
            {
                //printf("x_a:%.1f y_a:%.1f\n",round(xk),round(yk));
                glVertex2d(xk,yk);

                xk=xk-(1/m);
                //printf("value of xk+1= %.2f\n",xk,round(xk));
            }
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
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{

 printf("enter  value of : x1 \n");
    scanf("%f",&x1);
    printf("enter  value of : y1 \n");
    scanf("%f",&y1);
    printf("enter  value of : x2 \n");
    scanf("%f",&x2);
    printf("enter  value of : y2 \n");
    scanf("%f",&y2);
    printf("value of x1 %.2f \n", x1);
    printf("value of y1 %.2f \n", y1);
    printf("value of x2 %.2f \n", x2);
    printf("value of y2 %.2f \n", y2);
    dy=(y2-y1);
    printf("value of dy %.2f \n", dy);
    dx=(x2-x1);
    printf("value of dx %.2f \n", dx);
    m=(dy/dx);
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

