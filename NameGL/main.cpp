#include <stdlib.h>
#include <glut.h>
#include <iostream>

using namespace std;

GLsizei windowWidth = 1024, windowHeight = 435;

void initGL()
{
	glClearColor(0.431, 0.462, 0.866, 1.0f); // RGBA Window Color
	//gluOrtho2D(0, windowWidth, windowHeight, 0);
}
/***************************************************

1			GRAPH DISPLAY
y											1
^
|
|
|
|0
|
|
|
|__________________________________________> x
-1					0						1


***************************************************/

void displayFunc()
{
	glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

	// New Point left side
	glPointSize(44.0);
	glBegin(GL_POINTS);
	glColor3f(0.717, 0.960, 1); // RGB Point Color
	int vertex = 28.5;
	for (int a = 0; a <= 8; a++) {
		glVertex2f(25.5, vertex);
		vertex = vertex + 47; // to get increment value manually in C++
	}
	glEnd();
	cout << "Increment Value = " << vertex << endl;
	// New Point right side
	glPointSize(44.0);
	glBegin(GL_POINTS);
	glColor3f(0.717, 0.960, 1); // RGB Point Color
	int vertex2 = 29;
	for (int a = 0; a <= 8; a++) {
		glVertex2f(998, vertex2);
		vertex2 = vertex2 + 47; // to get increment value manually in C++
	}
	glEnd();
	cout << "Increment Value = " << vertex << endl;

	glFlush(); // Render Now
}
/* Handler for window re-size event. Called back when the window first appears and
whenever the window is re-sized with its new width and height */
void reshape(GLsizei width, GLsizei height) {

	windowWidth = width;
	windowHeight = height;
	if (height == (height / 2)) height = windowHeight;
	GLfloat aspect = (GLfloat)width / (GLfloat)height;
	// Set the viewport to cover the new window
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION); 
	glLoadIdentity();
	if (width >= height) {
		gluOrtho2D(0 * aspect, GLdouble(width), GLdouble(height), 0);
	}
	else
	{
		gluOrtho2D(0, GLdouble(width), GLdouble(height) / aspect, 0);
	}
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	displayFunc();

	cout << "aspect" << aspect << endl;
}

/*
SEQUENCE MAIN GL:

1) Initialize GLUT First								-> glutInit(&argc , argv)
2) Set the window size									-> glutInitWindowSize(x , y)
3) Set the Initial Starting Window on your screen		-> glutInitWindowPosition(x , y)
4) Create Window with Title								-> glutCreateWindow("String here")
5) Make Display function to repaint the window			-> glutDisplayFunc(yourFunctionName)
6) Make reshape if have animation						-> glutReshapeFunc(yourFunctionName)
7) Looping to create GL (Running Processor)				-> glutMainLoop()

reference : http://www3.ntu.edu.sg/home/ehchua/programming/opengl/cg_introduction.html#zz-1.1
*/

int main(int argc, char** argv)
{
	glutInit(&argc, argv); // Initialize GLUT
	glutInitWindowSize(windowWidth, windowHeight); // Set the window's initial width & height
	glutInitWindowPosition(100, 100); // Position the window's initial top-left corner
	glutCreateWindow("My Name"); // Create a window with the given title
	glutDisplayFunc(displayFunc); // Register display callback handler for window re-paint
	glutReshapeFunc(reshape);
	initGL();
	cout << "Window Width : " << windowWidth << " , Window Height : " << windowHeight << endl;
	cout << "Window Height in half : " << windowHeight /  float (1000) << endl;
	cout << "Window Height in calculations : " << float (1 - (390 / float(windowHeight))) << endl;
	cout << "Calculate : " << float ( 1 - ((600 / 2) / float (640 / 2))) << endl;
	cout << "Calculate : " << float ( 1 - ((600 / 2) / float (640 / 2))) << endl;
	glutMainLoop(); // Enter the event-processing loop
	return 0;
}