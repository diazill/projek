
#include <windows.h>
#include <gl/GL.h>
#include <gl/glut.h>

void myInit(void) {
	gluOrtho2D(0.0, 800.0, 0.0, 600.0);
	glPointSize(5.0);
	glLineWidth(2.5);
}

void myDisplay(void)
{
	glClearColor(0.5, 1.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	//gambar jalan abu2
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex2i(1, 220);
	glVertex2i(798,220);
	glVertex2i(798,1);
	glVertex2i(1,1);
	glEnd();
	
	//gambar garis putih tengah jalan
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(70,130);
	glVertex2i(70, 90);
	glVertex2i(250, 90);
	glVertex2i(250, 130);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(290, 130);
	glVertex2i(290, 90);
	glVertex2i(470, 90);
	glVertex2i(470, 130);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(510, 130);
	glVertex2i(510, 90);
	glVertex2i(690, 90);
	glVertex2i(690, 130);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(730, 130);
	glVertex2i(730, 90);
	glVertex2i(910, 90);
	glVertex2i(910, 130);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(1, 130);
	glVertex2i(1, 90);
	glVertex2i(30, 90);
	glVertex2i(30, 130);
	glEnd();

	//bodi mobil
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.0, 1.0);
	glVertex2i(100, 160);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(100, 260);
	glColor3f(0.5, 0.0, 1.0);
	glVertex2i(220, 260);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(350, 350);
	glColor3f(0.5, 0.0, 1.0);
	glVertex2i(550, 350);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(600, 260);
	glColor3f(0.5, 0.0, 1.0);
	glVertex2i(700, 260);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(700, 160);
	glEnd();

	//membuat ban
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(130, 130);
	glVertex2i(130, 200);
	glVertex2i(200, 200);
	glVertex2i(200, 130);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(580, 130);
	glVertex2i(580, 200);
	glVertex2i(650, 200);
	glVertex2i(650, 130);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(150, 150);
	glVertex2i(150, 180);
	glVertex2i(180, 180);
	glVertex2i(180, 150);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(600, 150);
	glVertex2i(600, 180);
	glVertex2i(630, 180);
	glVertex2i(630, 150);
	glEnd();

	//membuat jendela dan pintu
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(260, 260);
	glVertex2i(360, 330);
	glVertex2i(420, 330);
	glVertex2i(420, 260);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(260, 260);
	glVertex2i(360, 330);
	glVertex2i(420, 330);
	glVertex2i(420, 260);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(260, 260);
	glVertex2i(260, 160);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(420, 260);
	glVertex2i(420, 160);
	glEnd();
	

	//buat sayap belakang
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(620, 260);
	glVertex2i(650, 260);
	glVertex2i(680, 300);
	glVertex2i(650, 300);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 1.0);
	glVertex2i(620, 300);
	glVertex2i(700, 300);
	glVertex2i(720, 330);
	glVertex2i(640, 330);
	glEnd();

	//membuat matahari
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(-5, 600);
	glVertex2i(-5, 500);
	glVertex2i(100, 500);
	glVertex2i(100, 600);	
	glEnd();

	glFlush();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("mobil racing");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
}