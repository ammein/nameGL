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
	// Circle R
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


	/*********************************************/
					//BIG A
	/*********************************************/
	// Upper A
	float point = 13.122;
	glPointSize(point);
	glBegin(GL_POINTS);
	fixMove = 13.122;
	pV = 158.45;
	glColor3d(0.729, 0.619, 0.619);
	for (int a = 0; a <= 1; a++)
	{
		glVertex2f(505.439, pV);
		glVertex2f(518.561, pV);
		pV = pV + fixMove;
	}
	glVertex2f(492.317, 171.572); // Extra
	glVertex2f(531.683, 171.572); // Extra
	glEnd();
	// Upper LEFT A
	glPointSize(point);
	glBegin(GL_POINTS);
	pV = 184.694;
	glColor3d(0.729, 0.619, 0.619);
	for (int a = 0; a <= 1; a++)
	{
		glVertex2f(479.194, pV);
		glVertex2f(492.317, pV);
		pV = pV + fixMove;
	}
	glEnd();
	// Upper RIGHT A
	glPointSize(point);
	glBegin(GL_POINTS);
	pV = 184.694;
	glColor3d(0.729, 0.619, 0.619);
	for (int a = 0; a <= 1; a++)
	{
		glVertex2f(531.683, pV);
		glVertex2f(544.806, pV);
		pV = pV + fixMove;
	}
	glEnd();
	// LEFT A
	glPointSize(point);
	glBegin(GL_POINTS);
	pV = 210.939;
	glColor3d(0.729, 0.619, 0.619);
	for (int a = 0; a <= 6; a++)
	{
		glVertex2d(466.072, pV);
		glVertex2d(479.194, pV);
		pV = pV + fixMove;
	}
	glEnd();
	// RIGHT A
	glPointSize(point);
	glBegin(GL_POINTS);
	pV = 210.939;
	glColor3d(0.729, 0.619, 0.619);
	for (int a = 0; a <= 6; a++)
	{
		glVertex2d(544.806, pV);
		glVertex2d(557.928, pV);
		pV = pV + fixMove;
	}
	glEnd();
	// HORIZONTAL A
	glPointSize(point);
	glBegin(GL_POINTS);
	pV = 492.317;
	glColor3d(0.729, 0.619, 0.619);
	for (int a = 0; a <= 3; a++)
	{
		glVertex2d(pV, 237.183);
		glVertex2d(pV, 250.306);
		pV = pV + fixMove;
	}
	glEnd();
	/*********************************************/
					//ENDS BIG A
	/*********************************************/

	/*********************************************/
					// AMIN SHAZRIN
	/*********************************************/
	// Upper A
	point = 6.827;
	glPointSize(point);
	glBegin(GL_POINTS);
	fixMove = 6.827;
	pV = 363.043;
	glColor3d(0.729, 0.619, 0.619);
	for (int a = 0; a <= 1; a++)
	{
		glVertex2f(pV, 335.845);
		pV = pV + fixMove;
	}
	glVertex2f(359.63, 342.673); // Extra
	glVertex2f(373.285, 342.673); // Extra
	glEnd();
	// LEFT A
	glPointSize(point);
	glBegin(GL_POINTS);
	pV = 349.5;
	glColor3d(0.729, 0.619, 0.619);
	for (int a = 0; a <= 2; a++)
	{
		glVertex2d(356.216, pV);
		pV = pV + fixMove;
	}
	glEnd();
	// RIGHT A
	glPointSize(point);
	glBegin(GL_POINTS);
	pV = 349.5;
	glColor3d(0.729, 0.619, 0.619);
	for (int a = 0; a <= 2; a++)
	{
		glVertex2d(376.698, pV);
		pV = pV + fixMove;
	}
	glEnd();
	// HORIZONTAL A
	glPointSize(point);
	glBegin(GL_POINTS);
	pV = 363.043;
	glColor3d(0.729, 0.619, 0.619);
	for (int a = 0; a <= 1; a++)
	{
		glVertex2d(pV, 356.327);
		pV = pV + fixMove;
	}
	glEnd();
	// Ends A

	// M Shape 
	glPointSize(point);
	glBegin(GL_POINTS);
	pV = 335.845;
	for (int a = 0; a <= 4; a++)
	{
		glVertex2d(388.573 , pV); // Vertical Left
		pV = pV + fixMove;
	}
	pV = 335.845;
	for (int a = 0; a <= 4; a++)
	{
		glVertex2d(415.882, pV); // Vertical Rights
		pV = pV + fixMove;
	}
	glVertex2f(395.4 , 342.673);// Extra
	glVertex2f(402.227 , 349.5);// Extra
	glVertex2f(409.055,342.673);// Extra
	glEnd();

	// I Shape 
	glPointSize(point);
	glBegin(GL_POINTS);
	pV = 335.845;
	for (int a = 0; a <= 4; a++)
	{
		glVertex2d(430.053, pV); // Vertical Left
		pV = pV + fixMove;
	}
	glEnd();
	// End I

	// Begin N
	glPointSize(point);
	glBegin(GL_POINTS);
	glColor3f(0.729, 0.619, 0.619);
	// Reuse Defined Variable assign with new value
	// Code reads from top to bottom
	pV = 335.845;
	for (int a = 0; a <= 4; a++) {
		glVertex2f(444.224, pV); // Straight N
		pV = pV + fixMove;
	}
	pV = 335.845;
	for (int a = 0; a <= 4; a++) {
		glVertex2f(464.706, pV); // Straight N
		pV = pV + fixMove;
	}
	pV = 451.051;
	pV2 = 342.673;
	for (int a = 0; a <= 1; a++)
	{
		glVertex2f(pV, pV2); // Diagonal N
		pV = pV + fixMove;
		pV2 = pV2 + fixMove;
	}
	glEnd();
	// Ends N

	// Begin S
	glPointSize(point);
	glBegin(GL_POINTS);
	glColor3f(0.729, 0.619, 0.619);
	// Reuse Defined Variable assign with new value
	// Code reads from top to bottom
	pV = 335.845;
	for (int a = 0; a <= 2; a++) {
		glVertex2f(482.669, pV); // Straight S
		pV = pV + fixMove;
	}
	pV = 349.5;
	for (int a = 0; a <= 2; a++) {
		glVertex2f(496.324, pV); // Straight S
		pV = pV + fixMove;
	}
	// S Horizontal Shape
	pH = 489.496;
	for (int a = 0; a <= 1; a++) {
		glVertex2f(pH, 335.845); // Horizontal S
		pH = pH + fixMove;
	}
	pV2 = 489.496;
	for (int a = 0; a <= 1; a++) {
		glVertex2f(pV2, 349.5); // Horizontal S
		pV2 = pV2 + fixMove;
	}
	pV3 = 482.669;
	for (int a = 0; a <= 1; a++) {
		glVertex2f(pV3, 363.155); // Horizontal S
		pV3 = pV3 + fixMove;
	}
	glEnd();
	// End S

	// Begin H
	glPointSize(point);
	glBegin(GL_POINTS);
	glColor3f(0.729, 0.619, 0.619);
	// Reuse Defined Variable assign with new value
	// Code reads from top to bottom
	pV = 335.845;
	for (int a = 0; a <= 4; a++) {
		glVertex2f(510.169, pV); // Straight H
		pV = pV + fixMove;
	}
	pV = 335.845;
	for (int a = 0; a <= 4; a++) {
		glVertex2f(530.651, pV); // Straight H
		pV = pV + fixMove;
	}
	pV = 516.996;
	for (int a = 0; a <= 1; a++)
	{
		glVertex2f(pV, 349.5); // Horizontal H
		pV = pV + fixMove;
	}
	glEnd();
	// Ends H

	// Begins A
	glPointSize(point);
	glBegin(GL_POINTS);
	pV = 549.996;
	glColor3d(0.729, 0.619, 0.619);
	for (int a = 0; a <= 1; a++)
	{
		glVertex2f(pV, 335.845); // Upper A
		pV = pV + fixMove;
	}
	glVertex2f(546.582, 342.673); // Extra
	glVertex2f(560.237, 342.673); // Extra
	glEnd();
	// LEFT A
	glPointSize(point);
	glBegin(GL_POINTS);
	pV = 349.5;
	glColor3d(0.729, 0.619, 0.619);
	for (int a = 0; a <= 2; a++)
	{
		glVertex2d(543.169, pV);
		pV = pV + fixMove;
	}
	glEnd();
	// RIGHT A
	glPointSize(point);
	glBegin(GL_POINTS);
	pV = 349.5;
	glColor3d(0.729, 0.619, 0.619);
	for (int a = 0; a <= 2; a++)
	{
		glVertex2d(563.651, pV);
		pV = pV + fixMove;
	}
	glEnd();
	// HORIZONTAL A
	glPointSize(point);
	glBegin(GL_POINTS);
	pV = 549.996;
	glColor3d(0.729, 0.619, 0.619);
	for (int a = 0; a <= 1; a++)
	{
		glVertex2d(pV, 356.327);
		pV = pV + fixMove;
	}
	glEnd();
	// Ends A

	// Begin Z
	glPointSize(point);
	glBegin(GL_POINTS);
	pV = 576.169;
	for (int a = 0; a <= 2; a++)
	{
		glVertex2f(pV , 335.845); // Horizontal upper Z
		pV = pV + fixMove;
	}
	pV = 576.169;
	for (int a = 0; a <= 2; a++)
	{
		glVertex2f(pV , 363.155); // Horizontal bottom Z
		pV = pV + fixMove;
	}
	pV = 576.169;
	pV2 = 356.327;
	for (int a = 0; a <= 2; a++)
	{
		glVertex2f(pV , pV2); // Diagonal Z
		pV = pV + fixMove; // Increase X
		pV2 = pV2 - fixMove; // decrease Y
	}
	glEnd();
	// Ends Z

	// Begins R
	glPointSize(point);
	glBegin(GL_POINTS);
	glColor3f(0.729, 0.619, 0.619);
	// Reuse Defined Variable assign with new value
	// Code reads from top to bottom
	pV = 335.845;
	for (int a = 0; a <= 4; a++) {
		glVertex2f(601.014, pV); // Straight P
		pV = pV + fixMove;
	}
	// Circle R
	pH = 607.841;
	for (int a = 0; a <= 1; a++) {
		glVertex2f(pH, 335.845); // Horizontal Circle P
		pH = pH + fixMove;
	}
	pV2 = 342.673;
	for (int a = 0; a <= 1; a++)
	{
		glVertex2f(614.669, pV2); // Vertical Circle P
		pV2 = pV2 + fixMove;
	}
	glVertex2f(607.841, 349.5); //  last shape
	glVertex2f(618.082, 356.327); // Diagonal R
	glVertex2f(621.496, 363.155); // Diagonal R
	glEnd();
	// Ends R

	// I Shape 
	glPointSize(point);
	glBegin(GL_POINTS);
	pV = 335.845;
	for (int a = 0; a <= 4; a++)
	{
		glVertex2d(634.71, pV); // Vertical Left
		pV = pV + fixMove;
	}
	glEnd();
	// End I

	// Begin N
	glPointSize(point);
	glBegin(GL_POINTS);
	glColor3f(0.729, 0.619, 0.619);
	// Reuse Defined Variable assign with new value
	// Code reads from top to bottom
	pV = 335.845;
	for (int a = 0; a <= 4; a++) {
		glVertex2f(648.88, pV); // Straight N
		pV = pV + fixMove;
	}
	pV = 335.845;
	for (int a = 0; a <= 4; a++) {
		glVertex2f(669.363, pV); // Straight N
		pV = pV + fixMove;
	}
	pV = 655.708;
	pV2 = 342.673;
	for (int a = 0; a <= 1; a++)
	{
		glVertex2f(pV, pV2); // Diagonal N
		pV = pV + fixMove;
		pV2 = pV2 + fixMove;
	}
	glEnd();
	// Ends N

	/*********************************************/
				// ENDS AMIN SHAZRIN
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
	cout << "Random Value = " << rand() % 300<< endl;
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