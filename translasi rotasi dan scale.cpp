
#include <windows.h>
#include <gl/GL.h>
#include <gl/glut.h>
#include <math.h>

void myInit(void){
	gluOrtho2D(0.0, 800.0, 0.0, 600.0);
	glLineWidth(25.0);
}

void myDisplay(void)
{
glClearColor (0.0,0.0,0.0,0.0);
glClear (GL_COLOR_BUFFER_BIT);
glPushMatrix();
	glTranslated(110,25,0);
	glBegin(GL_LINE_LOOP);
	glColor3f (1.0, 1.0, 1.0);
		glVertex2i(250,200);
		glVertex2i(250,350);
		glVertex2i(350,350);
		glVertex2i(350,200);
	glEnd ();
	glPopMatrix();

glPushMatrix();
glScalef(0.5f,0.5f,0.0f);
glTranslated(50,340,0);
glBegin(GL_LINE_LOOP);
glColor3f (1.0, 1.0, 0.0);
glVertex2i(250,200);
glVertex2i(250,350);
glVertex2i(350,350);
glVertex2i(350,200);
glEnd ();
glPopMatrix();

glPushMatrix();
glScalef(0.5f,0.5f,0.0f);
glTranslated(1000,340,0);
glBegin(GL_LINE_LOOP);
glColor3f (1.0, 0.0, 1.0);
glVertex2i(250,200);
glVertex2i(250,350);
glVertex2i(350,350);
glVertex2i(350,200);
glEnd ();
glPopMatrix();

glPushMatrix();
glRotatef(90.0f, 0.0f, 0.0f, 1.0f);
glScalef(0.5f,0.5f,0.0f);
glTranslated(-100,-1100,0);
glBegin(GL_LINE_LOOP);
glColor3f (0.0, 1.0, 1.0);
glVertex2i(250,200);
glVertex2i(250,350);
glVertex2i(350,350);
glVertex2i(350,200);
glEnd ();
glPopMatrix();

glPushMatrix();
glRotatef(90.0f, 0.0f, 0.0f, 1.0f);
glScalef(0.5f,0.5f,0.0f);
glTranslated(700,-1100,0);
glBegin(GL_LINE_LOOP);
glColor3f (0.0, 0.0, 1.0);
glVertex2i(250,200);
glVertex2i(250,350);
glVertex2i(350,350);
glVertex2i(350,200);
glEnd ();
glPopMatrix();

glFlush();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800,600);
	glutInitWindowPosition(100,100);
	glutCreateWindow("angka");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
}