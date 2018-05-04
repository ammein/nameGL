#include <stdlib.h>
#include <glut.h>
#include <iostream>

using namespace std;

GLsizei windowWidth = 1024, windowHeight = 435;

void initGL()
{
	glClearColor(0.937, 0.937, 0.937 , 1.0); // RGBA Window Color
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
	// Big Box
	glPointSize(404.172);
	glBegin(GL_POINTS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2d(512 , 217.5);
	glEnd();

	// Border right side
	glPointSize(12);
	glBegin(GL_POINTS);
	glColor3f(0.227, 0.227, 0.227);
	float vertex = 31.4;
	for (int a = 0; a <= 31; a++) {
		glVertex2d(698.1, vertex);
		vertex = vertex + 12;
	}
	glEnd();
	// Border left side
	glPointSize(12);
	glBegin(GL_POINTS);
	vertex = 31.4;
	glColor3f(0.227, 0.227, 0.227);
	for (int a = 0; a <= 31; a++) {
		glVertex2d(325.9, vertex);
		vertex = vertex + 12;
	}
	glEnd();
	// Border upper side
	glPointSize(12);
	glBegin(GL_POINTS);
	glColor3f(0.227, 0.227, 0.227);
	vertex = 337.906;
	for (int a = 0; a <= 29; a++) {
		glVertex2d(vertex, 31.4);
		vertex = vertex + 12.006;
	}
	glEnd();
	// Border upper side
	glPointSize(12);
	glBegin(GL_POINTS);
	glColor3f(0.227, 0.227, 0.227);
	vertex = 337.906;
	for (int a = 0; a <= 29; a++) {
		glVertex2d(vertex, 403.4);
		vertex = vertex + 12.006;
	}
	glEnd();


	/*********************************************/
					//PRESENTS BEGIN
	/*********************************************/
	// P
	glPointSize(6.827);
	glBegin(GL_POINTS);
	glColor3f(0.729, 0.619, 0.619);
	float pV = 81.465;
	float fixMove = 6.828;
	for (int a = 0; a <= 4; a++) {
		glVertex2f(404.053, pV); // Straight P
		pV = pV + fixMove;
	}
	// Circle P
	float pH = 410.88;
	for (int a = 0; a <= 1; a++) {
		glVertex2f(pH , 81.465); // Horizontal Circle P
		pH = pH + fixMove;
	}
	float pV2 = 88.293;
	for (int a = 0; a <= 1; a++)
	{
		glVertex2f(417.708, pV2); // Vertical Circle P
		pV2 = pV2 + fixMove;
	}
	glVertex2f(410.88 , 95.12); //  last shape
	glEnd();
	// Ends P

	// Begins R
	glPointSize(6.827);
	glBegin(GL_POINTS);
	glColor3f(0.729, 0.619, 0.619);
	// Reuse Defined Variable assign with new value
	// Code reads from top to bottom
	pV = 81.465;
	for (int a = 0; a <= 4; a++) {
		glVertex2f(432.669, pV); // Straight P
		pV = pV + fixMove;
	}
	// Circle P
	pH = 439.497;
	for (int a = 0; a <= 1; a++) {
		glVertex2f(pH, 81.465); // Horizontal Circle P
		pH = pH + fixMove;
	}
	pV2 = 88.293;
	for (int a = 0; a <= 1; a++)
	{
		glVertex2f(446.324, pV2); // Vertical Circle P
		pV2 = pV2 + fixMove;
	}
	glVertex2f(439.497, 95.12); //  last shape
	glVertex2f(449.738, 101.948); // Diagonal R
	glVertex2f(453.152, 108.775); // Diagonal R
	glEnd();
	// Ends R

	// Begin E
	glPointSize(6.827);
	glBegin(GL_POINTS);
	glColor3f(0.729, 0.619, 0.619);
	// Reuse Defined Variable assign with new value
	// Code reads from top to bottom
	pV = 81.465;
	for (int a = 0; a <= 4; a++) {
		glVertex2f(466.36, pV); // Straight E
		pV = pV + fixMove;
	}
	// E Horizontal Shape
	pH = 473.188;
	for (int a = 0; a <= 1; a++) {
		glVertex2f(pH, 81.465); // Horizontal E
		pH = pH + fixMove;
	}
	pV2 = 473.188;
	for (int a = 0; a <= 1; a++) {
		glVertex2f(pV2, 95.12); // Horizontal E
		pV2 = pV2 + fixMove;
	}
	float pV3 = 473.188;
	for (int a = 0; a <= 1; a++) {
		glVertex2f(pV3, 108.775); // Horizontal E
		pV3 = pV3 + fixMove;
	}
	glEnd();
	// Ends E

	// Begin S
	glPointSize(6.827);
	glBegin(GL_POINTS);
	glColor3f(0.729, 0.619, 0.619);
	// Reuse Defined Variable assign with new value
	// Code reads from top to bottom
	pV = 81.465;
	for (int a = 0; a <= 2; a++) {
		glVertex2f(492.819, pV); // Straight S
		pV = pV + fixMove;
	}
	pV = 95.12;
	for (int a = 0; a <= 2; a++) {
		glVertex2f(506.474, pV); // Straight S
		pV = pV + fixMove;
	}
	// S Horizontal Shape
	pH = 499.646;
	for (int a = 0; a <= 1; a++) {
		glVertex2f(pH, 81.465); // Horizontal S
		pH = pH + fixMove;
	}
	pV2 = 499.646;
	for (int a = 0; a <= 1; a++) {
		glVertex2f(pV2, 95.12); // Horizontal S
		pV2 = pV2 + fixMove;
	}
	pV3 = 492.819;
	for (int a = 0; a <= 1; a++) {
		glVertex2f(pV3, 108.775); // Horizontal S
		pV3 = pV3 + fixMove;
	}
	glEnd();
	// End S

	// Begin E
	glPointSize(6.827);
	glBegin(GL_POINTS);
	glColor3f(0.729, 0.619, 0.619);
	// Reuse Defined Variable assign with new value
	// Code reads from top to bottom
	pV = 81.465;
	for (int a = 0; a <= 4; a++) {
		glVertex2f(518.525, pV); // Straight E
		pV = pV + fixMove;
	}
	// E Horizontal Shape
	pH = 525.353;
	for (int a = 0; a <= 1; a++) {
		glVertex2f(pH, 81.465); // Horizontal E
		pH = pH + fixMove;
	}
	pV2 = 525.353;
	for (int a = 0; a <= 1; a++) {
		glVertex2f(pV2, 95.12); // Horizontal E
		pV2 = pV2 + fixMove;
	}
	pV3 = 525.353;
	for (int a = 0; a <= 1; a++) {
		glVertex2f(pV3, 108.775); // Horizontal E
		pV3 = pV3 + fixMove;
	}
	glEnd();
	// Ends E

	// Begin N
	glPointSize(6.827);
	glBegin(GL_POINTS);
	glColor3f(0.729, 0.619, 0.619);
	// Reuse Defined Variable assign with new value
	// Code reads from top to bottom
	pV = 81.465;
	for (int a = 0; a <= 4; a++) {
		glVertex2f(545.334, pV); // Straight N
		pV = pV + fixMove;
	}
	pV = 81.465;
	for (int a = 0; a <= 4; a++) {
		glVertex2f(565.816, pV); // Straight N
		pV = pV + fixMove;
	}
	pV2 = 88.293;
	pV = 552.162;
	for (int a = 0; a <= 1; a++)
	{
		glVertex2f(pV, pV2); // Diagonal N
		pV = pV + fixMove;
		pV2 = pV2 + fixMove;
	}
	glEnd();
	// Ends N

	// Begin T
	glPointSize(6.827);
	glBegin(GL_POINTS);
	glColor3f(0.729, 0.619, 0.619);
	// Reuse Defined Variable assign with new value
	// Code reads from top to bottom
	pV = 81.465;
	for (int a = 0; a <= 4; a++) {
		glVertex2f(585.738, pV); // Straight T
		pV = pV + fixMove;
	}
	// E Horizontal Shape
	pH = 578.91;
	for (int a = 0; a <= 2; a++) {
		glVertex2f(pH, 81.465); // Horizontal T
		pH = pH + fixMove;
	}
	glEnd();
	// Ends T

	// Begin S
	glPointSize(6.827);
	glBegin(GL_POINTS);
	glColor3f(0.729, 0.619, 0.619);
	// Reuse Defined Variable assign with new value
	// Code reads from top to bottom
	pV = 81.465;
	for (int a = 0; a <= 2; a++) {
		glVertex2f(606.292, pV); // Straight S
		pV = pV + fixMove;
	}
	pV = 95.12;
	for (int a = 0; a <= 2; a++) {
		glVertex2f(619.947, pV); // Straight S
		pV = pV + fixMove;
	}
	// S Horizontal Shape
	pH = 613.12;
	for (int a = 0; a <= 1; a++) {
		glVertex2f(pH, 81.465); // Horizontal S
		pH = pH + fixMove;
	}
	pV2 = 613.12;
	for (int a = 0; a <= 1; a++) {
		glVertex2f(pV2, 95.12); // Horizontal S
		pV2 = pV2 + fixMove;
	}
	pV3 = 606.292;
	for (int a = 0; a <= 1; a++) {
		glVertex2f(pV3, 108.775); // Horizontal S
		pV3 = pV3 + fixMove;
	}
	glEnd();
	// End S

	/*********************************************/
					//PRESENTS ENDS
	/*********************************************/

	glFlush(); // Render Now
}
/* Handler for window re-size event. Called back when the window first appears and
whenever the window is re-sized with its new width and height */
void reshape(GLsizei width, GLsizei height) {
	// References 
	/*aspectRatio = (oldWidth / oldHeight)
	newHeight = (newWidth / aspectRatio)
		newWidth = ( newHeight * aspectRatio )*/

	windowWidth = width;
	windowHeight = height;
	if (height == (height / 2)) height = windowHeight;
	GLfloat aspect = (GLfloat)width / (GLfloat)height;
	// Set the viewport to cover the new window
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION); 
	glLoadIdentity();
	if (width <= height) {
		gluOrtho2D(0 , GLdouble(width) * aspect, GLdouble(height) / aspect ,0);
	}
	else
	{
		gluOrtho2D(0, GLdouble(width), GLdouble(height), 0);
	}
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	displayFunc();
	cout << "Random Value = " << rand() << endl;
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