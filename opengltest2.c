#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>

using namespace std;

void init(void)
{
	/* selecionar cor de fundo (preto) */
	glClearColor(0.0,0.0,0.0,0.0);

	glMatrixMode(GL_PROJECTION); //Projeção 2D

	glOrtho(0.0,500.0,0.0,400.0,-1.0,1.0); //Definindo os limites da Porta de visão
}

void display(void)
{
	/* Limpar todos os pixels */
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0,1.0,.0);
	glBegin(GL_POLYGON);
		glVertex3f(249.0f,250.0f,-1.0f);
		glVertex3f(251.0f,250.0f,-1.0f);
		glVertex3f(249.0f,100.0f,-1.0f);
		glVertex3f(251.0f,100.0f,-1.0f);
	glEnd();

	/* Desenhar um polígono branco */
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_TRIANGLES);
		glVertex2f(250.0f,250.0f);
		glVertex2f(230.0f,200.0f);
		glVertex2f(270.0f,200.0f);
	glEnd();

	/* Desenhar um polígono vermelho */
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_TRIANGLES);
		glVertex2f(250.0f,250.0f);
		glVertex2f(270.0f,200.0f);
		glVertex2f(270.0f,300.0f);
	glEnd();

	glColor3f(1.0,1.0,0.0);
	glBegin(GL_TRIANGLES);
		glVertex2f(250.0f,250.0f);
		glVertex2f(270.0f,300.0f);
		glVertex2f(230.0f,300.0f);
	glEnd();

	glColor3f(1.0,0.0,1.0);
	glBegin(GL_TRIANGLES);
		glVertex2f(250.0f,250.0f);
		glVertex2f(230.0f,300.0f);
		glVertex2f(230.0f,200.0f);
	glEnd();

	glFlush();
}
int main(int argc,char** argv){
	glutInit(&argc,argv);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500,400);
	glutInitWindowPosition(200,200);
	glutCreateWindow("Flor de Abril");

	init();

	glutDisplayFunc(display);

	glutMainLoop();

	/* C ANSI requer que main retorne um inteiro */
	return 0;
}