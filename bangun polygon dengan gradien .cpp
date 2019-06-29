#include <windows.h>
#include <gl/Gl.h>
#include <gl/glut.h>
#include <math.h>

 void myInit(void)
 {
    glClearColor(0.0,0.0,0.0,0.0);
    glColor3f(0.0f, 0.0f, 0.f);
 	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
    glLineWidth(2.0f);
	gluOrtho2D(0.0, 800.0, 0.0, 600.0);
}
void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glRotatef(30.0, 0, 0, 1);
	float
	Ax=320,
	Ay=160,
    Bx=400,
	By=350,
    Cx=550,
	Cy=140,
	Dx=480,
	Dy=320,

	Px=300,Py=200,
	Qx=600,Qy=200,
	Rx=600,Ry=300,
	Sx=300,Sy=300,
	
	m1 = (By-Ay)/(Bx-Ax), 
    m2 = (Qy-Py)/(Qx-Px),
    c1 = Ay -(m1*Ax),
    c2 = Py -(m2*Px),
    x1 = (c2-c1)/(m1-m2),
	y1= m1*x1+c1,
	x2=0,x3=0,x4=0,y2=0,y3=0,y4=0;

	m1 = (Dy-Cy)/(Dx-Cx);
    m2 = (Qy-Py)/(Qx-Px);
    c1 = Cy -(m1*Cx);
    c2 = Py -(m2*Px);
    x2 = (c2-c1)/(m1-m2);
	y2= m1*x2+c1;

	m1 = (By-Ay)/(Bx-Ax);
    m2 = (Sy-Ry)/(Sx-Rx);
    c1 = Ay -(m1*Ax);
    c2 = Ry -(m2*Rx);
    x3 = (c2-c1)/(m1-m2);
	y3= m1*x3+c1;

	m1 = (Dy-Cy)/(Dx-Cx);
    m2 = (Sy-Ry)/(Sx-Rx);
    c1 = Cy -(m1*Cx);
    c2 = Ry -(m2*Rx);
    x4 = (c2-c1)/(m1-m2);
	y4= m1*x4+c1;

	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,1.0);
	glVertex2f(Px,Py);
	glVertex2f(x1,y1);
	glVertex2f(x3,y3);
	glVertex2f(Sx,Sy);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(x1,y1);
	glVertex2f(x2,y2);
	glVertex2f(x4,y4);
	glVertex2f(x3,y3);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(Qx,Qy);
	glVertex2f(x2,y2);
	glVertex2f(x4,y4);
	glVertex2f(Rx,Ry);
	glEnd();


	glBegin(GL_LINES);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(Ax,Ay);
	glVertex2f(Bx,By);
	glVertex2f(Cx,Cy);
	glVertex2f(Dx,Dy);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(Px,Py);
	glVertex2f(Qx,Qy);
	glVertex2f(Rx,Ry);
	glVertex2f(Sx,Sy);
    glEnd();
    glFlush();		                 	
}

INT main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800,600); 
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Display");
	glutDisplayFunc(myDisplay);
	myInit();             
	glutMainLoop();
	return 0;
}