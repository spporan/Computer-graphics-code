#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void drawCircle(float x,float y,float r,float red,float g,float b)
{

    float theta;
    glColor3ub (red,g, b);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2d(x+r*cos(theta),y+r*sin(theta));


    }

    glEnd();
}

void drawWindow(float x,float y)
{
    glColor3ub (161,201,235);
    glBegin(GL_POLYGON);
    glVertex2d(130+x,370+y);
    glVertex2d(160+x,370+ y);
    glVertex2d(160+x,300+y);
    glVertex2d(130+x,300+y);
    glEnd();
    glColor3ub (161,201,235);
    glBegin(GL_POLYGON);
    glVertex2d(165+x,370+y);
    glVertex2d(195+x,370+y);
    glVertex2d(195+x,300+y);
    glVertex2d(165+x,300+y);
    glEnd();

    //border 1
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex2d(160+x,375+y);
    glVertex2d(165+x,375+y);
    glVertex2d(165+x,295+y);
    glVertex2d(160+x,295+y);
    glEnd();

    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex2d(165+x,375+y);
    glVertex2d(165+x,370+y);
    glVertex2d(200+x,370+y);
    glVertex2d(200+x,375+y);
    glEnd();

    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex2d(195+x,370+y);
    glVertex2d(200+x,370+y);
    glVertex2d(200+x,295+y);
    glVertex2d(195+x,295+y);
    glEnd();

    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex2d(195+x,295+y);
    glVertex2d(195+x,300+y);
    glVertex2d(165+x,300+y);
    glVertex2d(165+x,295+y);
    glEnd();

    //border 2
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex2d(160+x,375+y);
    glVertex2d(160+x,370+y);
    glVertex2d(125+x,370+y);
    glVertex2d(125+x,375+y);
    glEnd();

    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex2d(130+x,370+y);
    glVertex2d(125+x,370+y);
    glVertex2d(125+x,295+y);
    glVertex2d(130+x,295+y);
    glEnd();
    glColor3ub (255,255,255);
    glBegin(GL_POLYGON);
    glVertex2d(130+x,295+y);
    glVertex2d(130+x,300+y);
    glVertex2d(160+x,300+y);
    glVertex2d(160+x,295+y);
    glEnd();


}

void drawTree(float x,float y)
{

    drawCircle(60+x,450+y,60,100,110,28);
    drawCircle(40+x,450+y,40,114,130,36);
    drawCircle(20+x,450+y,20,170,193,54);
    glColor3ub (71,36,4);
    glBegin(GL_POLYGON);
    glVertex2d(55+x,400+y);
    glVertex2d(65+x,400+y);
    glVertex2d(65+x,250);
    glVertex2d(55+x,250);
    glEnd();


}

void drawHome(float x,float y)
{
    //rooftop1
    glColor3ub (103,63, 20);
    glBegin(GL_POLYGON);
    glVertex2d(100+x,350+y);
    glVertex2d(90+x,360+y);
    glVertex2d(200+x,470+y);
    glVertex2d(200+x,450+y);
    glEnd();

    //rooftop1
    glColor3ub (103,63, 20);
    glBegin(GL_POLYGON);
    glVertex2d(300+x,350+y);
    glVertex2d(310+x,360+y);
    glVertex2d(200+x,470+y);
    glVertex2d(200+x,450+y);
    glEnd();

    //rooftop
    glColor3ub (250,207,162);
    glBegin(GL_TRIANGLES);
    glVertex2d(105+x,355+y);
    glVertex2d(295+x,355+y);
    glVertex2d(200+x,450+y);
    glEnd();
    //wall
    glColor3ub (250,207,162);
    glBegin(GL_POLYGON);
    glVertex2d(105+x,355+y);
    glVertex2d(105+x,150+y);
    glVertex2d(295+x,150+y);
    glVertex2d(295+x,355+y);
    glEnd();


    glColor3ub (232,191,150);
    glBegin(GL_POLYGON);
    glVertex2d(100+x,150+y);
    glVertex2d(100+x,100+y);
    glVertex2d(300+x,100+y);
    glVertex2d(300+x,150+y);
    glEnd();

    drawWindow(0+x,-10+y);
    drawWindow(80+x,-10+y);
    drawWindow(0+x,-120+y);
//door
    glColor3ub (71,36,4);
    glBegin(GL_POLYGON);
    glVertex2d(220+x,150+y);
    glVertex2d(270+x,150+y);
    glVertex2d(270+x,250+y);
    glVertex2d(220+x,250+y);
    glEnd();
    drawCircle(235+x,200+y,10,81,102, 8);

}

void drawWave(float x,float y){
 glColor3ub (40,118, 140);
    glBegin(GL_POLYGON);
    glVertex2d(5+x,150+y);
    glVertex2d(5+x,145+y);
    glVertex2d(55+x,145+y);
    glVertex2d(55+x,150+y);
    glEnd();
}
void display(void)
{

    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */
    glClear (GL_COLOR_BUFFER_BIT);
//Vertical below star


    glColor3ub (180,220, 211);
    glBegin(GL_POLYGON);
    glVertex2d(0,700);
    glVertex2d(0,400);
    glVertex2d(800,400);
    glVertex2d(800,700);
    glEnd();

     drawCircle(630,630,30,250,241,126);
    //hill 1
    glColor3ub (153,153, 153);
    glBegin(GL_POLYGON);
    glVertex2d(0,400);
    glVertex2d(300,400);
    glVertex2d(100,600);
    glEnd();

//hill 2
    glColor3ub (153,153, 153);
    glBegin(GL_POLYGON);
    glVertex2d(200,400);
    glVertex2d(600,400);
    glVertex2d(400,650);
    glEnd();

    //hill 3
    glColor3ub (153,153, 153);
    glBegin(GL_POLYGON);
    glVertex2d(500,400);
    glVertex2d(900,400);
    glVertex2d(650,650);
    glEnd();
//cloud1
    drawCircle(690,600,40,255,255,255);
    drawCircle(725,600,45,255,255,255);
    drawCircle(775,600,30,255,255,255);
    /* clear all pixels */
    //cloud2
    drawCircle(370,570,30,255,255,255);
    drawCircle(420,580,45,255,255,255);
    drawCircle(490,600,50,255,255,255);
//cloud3
    drawCircle(150,600,20,255,255,255);
    drawCircle(160,610,10,255,255,255);
    drawCircle(200,620,30,255,255,255);
    drawCircle(240,630,40,255,255,255);
//cloud4
    drawCircle(20,600,20,255,255,255);
    drawCircle(50,610,30,255,255,255);
    drawCircle(80,620,30,255,255,255);
    drawCircle(120,600,30,255,255,255);





    //green grass
    glColor3ub (81,102, 8);
    glBegin(GL_POLYGON);
    glVertex2d(0,400);
    glVertex2d(0,200);
    glVertex2d(800,200);
    glVertex2d(800,400);
    glEnd();
    drawCircle(50,400,50,81,102, 8);
    drawHome(0,160);
    drawTree(0,0);
    drawTree(290,60);
    drawHome(350,130);
    drawTree(350,40);
    drawTree(620,40);
    drawTree(700,-40);
    drawTree(300,-80);

    //pond side
    glColor3ub (249,210, 140);
    glBegin(GL_POLYGON);
    glVertex2d(0,200);
    glVertex2d(0,180);
    glVertex2d(800,180);
    glVertex2d(800,200);
    glEnd();
//pond side
    glColor3ub (168,224, 222);
    glBegin(GL_POLYGON);
    glVertex2d(0,180);
    glVertex2d(0,160);
    glVertex2d(800,160);
    glVertex2d(800,180);
    glEnd();

    //pond
     glColor3ub (37,163, 201);
    glBegin(GL_POLYGON);
    glVertex2d(0,160);
    glVertex2d(0,0);
    glVertex2d(800,0);
    glVertex2d(800,160);
    glEnd();

    drawWave(0,0);
    drawWave(50,-20);
    drawWave(100,-30);
    drawWave(200,-20);
    drawWave(300,-40);
    drawWave(350,-20);
    drawWave(400,-20);
    drawWave(450,-30);
    drawWave(500,-20);
    drawWave(550,-40);
    drawWave(560,-20);
    drawWave(650,-20);
    drawWave(750,-30);
    drawWave(700,-20);
    drawWave(850,-40);
    drawWave(800,-20);

    drawWave(0,-50);
    drawWave(50,-60);
    drawWave(100,-70);
    drawWave(200,-60);
    drawWave(300,-40);
    drawWave(350,-80);
    drawWave(400,-50);
    drawWave(450,-70);
    drawWave(500,-40);
    drawWave(550,-60);
    drawWave(560,-80);
    drawWave(650,-30);
    drawWave(750,-70);
    drawWave(700,-80);
    drawWave(850,-70);
    drawWave(800,-50);

    glFlush ();
}


void init (void)
{
    /* select clearing (background) color */
    glClearColor (0.0, 0.0, 0.0, 0.0);

    glClear(GL_COLOR_BUFFER_BIT);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 800, 0, 700);
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
    glutInitWindowSize (800, 700);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("hello");
    init ();
    //drawCircle(250,250,30);
    glutDisplayFunc(display);
    // glutIdleFunc(drawCircle);

    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}


