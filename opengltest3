#include <iostream>
#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>

using namespace std;

GLsizei winWidth = 400, winHeight = 300;

void init(void)
{
	/* selecionar cor de fundo (azul) */
	glClearColor(0.0,0.0,1.0,1.0);

	glMatrixMode(GL_PROJECTION); //Projeção 2D

	glOrtho(0.0,200.0,0.0,150.0,-1.0,1.0); //Definindo os limites da Porta de visão
}

void plotPoint(GLint x,GLint y)
{
	glBegin(GL_POINTS);
		glVertex2i(x,y);
	glEnd();
}

void mousePtPlot(GLint button,GLint action,GLint xMouse,GLint yMouse)
{
	if(button == GLUT_LEFT_BUTTON && action == GLUT_DOWN)
	{
		int x1=xMouse;
		int y1=winHeight - yMouse;
		plotPoint(x1,y1);
		cout<<"x1 da funçao"<<x1<<endl;
		cout<<"y1 da funçao"<<y1<<endl;
	}
	glFlush();
}

void displayFcn(void)
{
	glClear(GL_COLOR_BUFFER_BIT); //Limpa o Viewpoint
	glColor3f(1.0,0.0,0.0); //Pontos em vermelho
	glPointSize(10.0); //Tamanho do ponto
	glFlush();
}

void winReshapeFcn(GLint newWidth,GLint newHeight)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0,GLdouble(newWidth),0.0,GLdouble(newHeight),-1.0,1.0);

	winWidth = newWidth;
	winHeight = newHeight;

	glFlush();
}

int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(winWidth,winHeight);
	glutCreateWindow("Pontos usando mouse");
	init();
	glutDisplayFunc(displayFcn);
	glutReshapeFunc(winReshapeFcn);
	glutMouseFunc(mousePtPlot);
	glutMainLoop();
	return 0;
}
