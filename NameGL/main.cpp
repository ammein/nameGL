#include <stdlib.h>
#include <glut.h>
#include <iostream>

using namespace std;

GLsizei windowWidth = 500, windowHeight = 500;

void initGL()
{
	glClearColor(0.431, 0.462, 0.866, 1.0f); // RGBA Window Color
	gluOrtho2D(0, windowWidth, windowHeight, 0);
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
	// Time to draw
	glPointSize(20.0); // Point Size Color
	glBegin(GL_POINTS);
	glColor3f(0.584f, 0, 0.921f); // RGB Point Color
	glVertex2d(float(44/float (windowWidth / 2)), float(151 / float(windowHeight / 2))); // Value -1 -> 1 positioning x
	glEnd();
	glPointSize(20.0); // Point Size Color
	glBegin(GL_POINTS);
	glColor3f(0.584f, 0.607f, 0.921f); // RGB Point Color
	glVertex2d(float (24.5 /float (windowWidth / 2)),float (69.5/ float(windowHeight / 2))); // Value -1 -> 1 positioning x
	glEnd();
	glPointSize(20.0); // Point Size Color 
	glBegin(GL_POINTS);
	glColor3f(0.584f, 0.607f, 0.921f); // RGB Point Color
	glVertex2d(float (179.343 /float (windowWidth / 2)),float (118/ float(windowHeight / 2))); // Value -1 -> 1 positioning x
	glEnd();
	glPointSize(20.0); // Point Size Color
	glBegin(GL_POINTS);
	glColor3f(0.584f, 0.607f, 0.921f); // RGB Point Color
	glVertex2d(float (211.281 /float (windowWidth / 2)) - 1,float (196.503 / float(windowHeight / 2)) - 1 ); // Value -1 -> 1 positioning x
	glEnd();

	// New Point
	glPointSize(66.0);
	glBegin(GL_POINTS);
	//glColor3f(0.584f, 0.607f, 0.921f); // RGB Point Color
	glColor3i(35, 227, 255); // RGB Point Color
	glVertex2d(100.0 , 309.0);
	glEnd();

	// Line Grid
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-1, 0, 0);
	glVertex3f(1, 0, 0);
	glEnd();
	// Line Grid
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(0, -1, 0);
	glVertex3f(0, 1, 0);
	glEnd();
	glFlush(); // Render Now
}
/* Handler for window re-size event. Called back when the window first appears and
whenever the window is re-sized with its new width and height */
void reshape(GLsizei width, GLsizei height) {  // GLsizei for non-negative integer
											   // Compute aspect ratio of the new window
	if (height == 0) height = 1;                // To prevent divide by 0
	GLfloat aspect = (GLfloat)width / (GLfloat)height;
	// gluOrtho2D(0, windowWidth, windowHeight, 0);

	// Set the viewport to cover the new window
	glViewport(0, 0, width - 1, height - 1);

	// Set the aspect ratio of the clipping area to match the viewport
	glMatrixMode(GL_PROJECTION);  // To operate on the Projection matrix
	glLoadIdentity();             // Reset the projection matrix
	if (width >= height) {
		// aspect >= 1, set the height from -1 to 1, with larger width
		// gluOrtho2D(-1.0 * aspect, 1.0 * aspect, -1.0, 1.0);
		gluOrtho2D(-1.0 * aspect, 1.0 * aspect, -1.0, 1.0);
		//gluOrtho2D(0 * aspect, windowWidth * aspect, windowHeight, 0);
	}
	else {
		// aspect < 1, set the width to -1 to 1, with larger height
		gluOrtho2D(-1.0, 1.0, -1.0 / aspect, 1.0 / aspect);
		//gluOrtho2D(0, windowWidth, windowHeight / aspect, 0 / aspect);
	}

	cout << "Aspect Left : " << -1 * aspect << endl;
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