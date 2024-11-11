#include<GL/glut.h>
#include<stdlib.h>
#include<time.h>
//estad3eet el library


void display() {
	glClearColor(1, 1, 1, 0);
	//Color of window (r,g,b,opacity)

	glClear(GL_COLOR_BUFFER_BIT);
	//Da ma5zn el alwan, 3ayza ams7 el ma5zn da 3a4an yzhr el loon bta3y el 7atah

	glColor3f(1, 0, 0);
	//F stands for float, da loon el rasma elly harsmha 

	/*glEnable(GL_POINT_SMOOTH); */
	//Make point circle

	/*glPointSize(10);*/
	//Point size

	/*glBegin(GL_POINTS);*/
	//Kda ba2olo 4akl el rsma haykoon eh ... Points 3a4an harsm points

	/*srand(time(NULL));
	int x = (rand() % 200)+1;
	int y = (rand() % 200) + 1;*/


	/*glVertex2f(100, 100);
	glVertex2f(130, 130);*/
	/*glVertex2f(x, y);*/ //Random place 
	//X , Y coordinates
	//glEnd();

	/*glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2f(10, 10);
	glVertex2f(100, 100);
	glVertex2f(100, 100);
	glVertex2f(100, 10);
	glVertex2f(10, 10);
	glVertex2f(100, 10);
	glEnd();*/

	/*glLineWidth(5); 
	glBegin(GL_LINE_STRIP);
	glVertex2f(10, 10);
	glVertex2f(100, 100);
	glVertex2f(100, 10);
	glVertex2f(10, 10);
	glEnd();*/

	/*glLineWidth(5);
	glBegin(GL_LINE_LOOP);
	glVertex2f(10, 10);
	glVertex2f(100, 100);
	glVertex2f(100, 10);
	glEnd();*/

	//Making square
	glLineWidth(5);
	glBegin(GL_LINE_LOOP); 
	glVertex2f(10, 10);
	glVertex2f(60, 10);
	glVertex2f(60, 60);
	glVertex2f(10, 60);
	glEnd();
	 


	glFlush();
	//3a4an yzhr el rasma 3ala el window
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	//Some information about the window that will appear
	glutInitWindowPosition(0, 0);
	//el window elly hatzhr hatzhr foo2 5ales

	glutInitWindowSize(600, 600);
	//Size el window 600x600

	glutCreateWindow("Points");
	//Window title

	gluOrtho2D(0, 200, 0, 200);
	//min x 0 max x 200 and same for y 

	glutDisplayFunc(display); //call function

	glutMainLoop();
	//3a4an asbt el window elly hatzhr 3ala el screen
}
