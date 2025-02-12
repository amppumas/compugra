#include "figuras.h"


const double PI = 3.1415926535897;
float text_der = 1.0;
float text_izq = 0.0;

void CFiguras::skybox(float largo, float altura, float profundidad, GLuint text,GLuint text2)  //Funcion creacion cielo
{

	GLfloat vertice [8][3] = {
				{0.5*largo ,-0.5*altura, 0.5*profundidad},    //Coordenadas V�rtice 1 V1
				{-0.5*largo ,-0.5*altura , 0.5*profundidad},    //Coordenadas V�rtice 2 V2
				{-0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas V�rtice 3 V3
				{0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas V�rtice 4 V4
				{0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas V�rtice 5 V5
				{0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas V�rtice 6 V6
				{-0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas V�rtice 7 V7
				{-0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas V�rtice 8 V8
				};

		glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
		//glBindTexture(GL_TEXTURE_2D, texture[filter]);   // choose the texture to use.
		glBegin(GL_POLYGON);	//Front
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( 0.0f, 0.0f, -1.0f);
			glTexCoord2f(0.0f, -0.035f); glVertex3fv(vertice[0]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(1.0f, -0.035f); glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( -1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, -0.035f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, -0.035f); glVertex3fv(vertice[3]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			//glColor3f(0.0,1.0,0.0);
			glNormal3f( 0.0f, 0.0f,1.0f);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(1.0f, -0.035f); glVertex3fv(vertice[3]);
			glTexCoord2f(0.0f, -0.035f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			//glColor3f(1.0,1.0,1.0);
			glNormal3f(1.0f, 0.0f, 0.0f);
			glTexCoord2f(1.0f, -0.035f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, -0.035f); glVertex3fv(vertice[2]);
		glEnd();
		glBindTexture(GL_TEXTURE_2D, text2);
		glBegin(GL_POLYGON);  //Bottom
			glNormal3f( 0.0f,1.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); 
			glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); 
			glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 1.0f); 
			glVertex3fv(vertice[2]);
		    glTexCoord2f(0.0f, 1.0f); 
			glVertex3fv(vertice[3]);
		glEnd();

		glBegin(GL_POLYGON);  //Top
			glNormal3f( 0.0f, -1.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); 
			glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 0.0f); 
			glVertex3fv(vertice[5]);
			glTexCoord2f(1.0f, 1.0f); 
			glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 1.0f); 
        	glVertex3fv(vertice[7]);
		glEnd();
}

void CFiguras::prisma (float largo, float altura, float profundidad, GLuint text)  //Funcion creacion prisma
{

	GLfloat vertice [8][3] = {
				{0.5*largo ,-0.5*altura, 0.5*profundidad},    //Coordenadas V�rtice 1 V1
				{-0.5*largo ,-0.5*altura , 0.5*profundidad},    //Coordenadas V�rtice 2 V2
				{-0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas V�rtice 3 V3
				{0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas V�rtice 4 V4
				{0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas V�rtice 5 V5
				{0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas V�rtice 6 V6
				{-0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas V�rtice 7 V7
				{-0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas V�rtice 8 V8
				};

		glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
		//glBindTexture(GL_TEXTURE_2D, texture[filter]);   // choose the texture to use.
		glBegin(GL_POLYGON);	//Front
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( 0.0f, 0.0f, 1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( 1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			//glColor3f(0.0,1.0,0.0);
			glNormal3f( 0.0f, 0.0f,-1.0f);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			//glColor3f(1.0,1.0,1.0);
			glNormal3f(-1.0f, 0.0f, 0.0f);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			//glColor3f(0.4,0.2,0.6);
			glNormal3f( 0.0f,-1.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[2]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[3]);
		glEnd();

		glBegin(GL_POLYGON);  //Top
			//glColor3f(0.8,0.2,0.4);
			glNormal3f( 0.0f, 1.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[7]);
		glEnd();
}

void CFiguras::techo(float largo, float altura, float profundidad, float vertical, float horizontal,float side, GLuint top, GLuint bottom, GLuint sides)  //Funcion creacion prisma
{

	GLfloat vertice[8][3] = {
		{ 0.5*largo ,-0.5*altura, 0.5*profundidad },    //Coordenadas V�rtice 1 V1
		{ -0.5*largo ,-0.5*altura , 0.5*profundidad },    //Coordenadas V�rtice 2 V2
		{ -0.5*largo ,-0.5*altura , -0.5*profundidad },    //Coordenadas V�rtice 3 V3
		{ 0.5*largo ,-0.5*altura , -0.5*profundidad },    //Coordenadas V�rtice 4 V4
		{ 0.5*largo ,0.5*altura , 0.5*profundidad },    //Coordenadas V�rtice 5 V5
		{ 0.5*largo ,0.5*altura , -0.5*profundidad },    //Coordenadas V�rtice 6 V6
		{ -0.5*largo ,0.5*altura , -0.5*profundidad },    //Coordenadas V�rtice 7 V7
		{ -0.5*largo ,0.5*altura , 0.5*profundidad },    //Coordenadas V�rtice 8 V8
	};
	glBindTexture(GL_TEXTURE_2D, bottom == 0 ? top : bottom);   // choose the texture to use.
	glBegin(GL_POLYGON);  //Bottom
						  //glColor3f(0.4,0.2,0.6);
	glNormal3f(0.0f, -1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f*horizontal, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(1.0f*horizontal, 1.0f*vertical); glVertex3fv(vertice[2]);
	glTexCoord2f(0.0f, 1.0f*vertical); glVertex3fv(vertice[3]);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, top);   // choose the texture to use.
	glBegin(GL_POLYGON);  //Top
						  //glColor3f(0.8,0.2,0.4);
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[4]);
	glTexCoord2f(1.0f*horizontal, 0.0f); glVertex3fv(vertice[5]);
	glTexCoord2f(1.0f*horizontal, 1.0f*vertical); glVertex3fv(vertice[6]);
	glTexCoord2f(0.0f, 1.0f*vertical); glVertex3fv(vertice[7]);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, sides == 0 ? top : sides);   // choose the texture to use.
										  //glBindTexture(GL_TEXTURE_2D, texture[filter]);   // choose the texture to use.
	glBegin(GL_POLYGON);	//Front
							//glColor3f(0.0,0.0,1.0);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.0f, 0.1f); glVertex3fv(vertice[4]);
	glTexCoord2f(1.0f*side, 0.1f); glVertex3fv(vertice[7]);
	glTexCoord2f(1.0f*side, 0.0f); glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
							//glColor3f(0.0,0.0,1.0);
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f*side, 0.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(1.0f*side, 0.1f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.0f, 0.1f); glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
							//glColor3f(0.0,1.0,0.0);
	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.0f, 0.1f); glVertex3fv(vertice[6]);
	glTexCoord2f(1.0f*side, 0.1f); glVertex3fv(vertice[5]);
	glTexCoord2f(1.0f*side, 0.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
						  //glColor3f(1.0,1.0,1.0);
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(1.0f*side, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(1.0f*side, 0.1f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.0f, 0.1f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
	glEnd();
}
void CFiguras::techomueve(float largo, float altura, float profundidad, float vertical,float verticalMoving, float horizontal,float horizontalMoving, float side, GLuint top, GLuint bottom, GLuint sides)  //Funcion creacion prisma
{

	GLfloat vertice[8][3] = {
		{ 0.5*largo ,-0.5*altura, 0.5*profundidad },    //Coordenadas V�rtice 1 V1
		{ -0.5*largo ,-0.5*altura , 0.5*profundidad },    //Coordenadas V�rtice 2 V2
		{ -0.5*largo ,-0.5*altura , -0.5*profundidad },    //Coordenadas V�rtice 3 V3
		{ 0.5*largo ,-0.5*altura , -0.5*profundidad },    //Coordenadas V�rtice 4 V4
		{ 0.5*largo ,0.5*altura , 0.5*profundidad },    //Coordenadas V�rtice 5 V5
		{ 0.5*largo ,0.5*altura , -0.5*profundidad },    //Coordenadas V�rtice 6 V6
		{ -0.5*largo ,0.5*altura , -0.5*profundidad },    //Coordenadas V�rtice 7 V7
		{ -0.5*largo ,0.5*altura , 0.5*profundidad },    //Coordenadas V�rtice 8 V8
	};
	glBindTexture(GL_TEXTURE_2D, bottom == 0 ? top : bottom);   // choose the texture to use.
	glBegin(GL_POLYGON);  //Bottom
						  //glColor3f(0.4,0.2,0.6);
	glNormal3f(0.0f, -1.0f, 0.0f);
	glTexCoord2f(0.0f + horizontalMoving, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f*horizontal+horizontalMoving, 0.0f + verticalMoving); glVertex3fv(vertice[1]);
	glTexCoord2f(1.0f*horizontal + horizontalMoving, 1.0f*vertical+verticalMoving); glVertex3fv(vertice[2]);
	glTexCoord2f(0.0f + horizontalMoving, 1.0f*vertical + verticalMoving); glVertex3fv(vertice[3]);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, top);   // choose the texture to use.
	glBegin(GL_POLYGON);  //Top
						  //glColor3f(0.8,0.2,0.4);
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.0f+ horizontalMoving, 0.0f + verticalMoving); glVertex3fv(vertice[4]);
	glTexCoord2f(1.0f*horizontal + horizontalMoving, 0.0f + verticalMoving); glVertex3fv(vertice[5]);
	glTexCoord2f(1.0f*horizontal + horizontalMoving, 1.0f*vertical + verticalMoving); glVertex3fv(vertice[6]);
	glTexCoord2f(0.0f+ horizontalMoving, 1.0f*vertical + verticalMoving); glVertex3fv(vertice[7]);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, sides == 0 ? top : sides);   // choose the texture to use.
															  //glBindTexture(GL_TEXTURE_2D, texture[filter]);   // choose the texture to use.
	glBegin(GL_POLYGON);	//Front
							//glColor3f(0.0,0.0,1.0);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.0f, 0.1f); glVertex3fv(vertice[4]);
	glTexCoord2f(1.0f*side, 0.1f); glVertex3fv(vertice[7]);
	glTexCoord2f(1.0f*side, 0.0f); glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
							//glColor3f(0.0,0.0,1.0);
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f*side, 0.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(1.0f*side, 0.1f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.0f, 0.1f); glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
							//glColor3f(0.0,1.0,0.0);
	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.0f, 0.1f); glVertex3fv(vertice[6]);
	glTexCoord2f(1.0f*side, 0.1f); glVertex3fv(vertice[5]);
	glTexCoord2f(1.0f*side, 0.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
						  //glColor3f(1.0,1.0,1.0);
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(1.0f*side, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(1.0f*side, 0.1f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.0f, 0.1f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
	glEnd();
}
void CFiguras::arbol(float altura,float radio,GLuint arbol)
{
	glPushMatrix();
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);
	glBindTexture(GL_TEXTURE_2D, arbol);
	glBegin(GL_QUADS); //plano
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3f(-radio, 0.0, 0.0);
	glTexCoord2f(1.0f, 0.0f); glVertex3f(radio, 0.0, 0.0);
	glTexCoord2f(1.0f, 1.0f); glVertex3f(radio, altura, 0.0);
	glTexCoord2f(0.0f, 1.0f); glVertex3f(-radio, altura, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();
	glRotatef(45, 0, 1, 0);
	glBegin(GL_QUADS); //plano
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3f(-radio, 0.0, 0.0);
	glTexCoord2f(1.0f, 0.0f); glVertex3f(radio, 0.0, 0.0);
	glTexCoord2f(1.0f, 1.0f); glVertex3f(radio, altura, 0.0);
	glTexCoord2f(0.0f, 1.0f); glVertex3f(-radio, altura, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glRotatef(-45, 0, 1, 0);
	glBegin(GL_QUADS); //plano
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3f(-radio, 0.0, 0.0);
	glTexCoord2f(1.0f, 0.0f); glVertex3f(radio, 0.0, 0.0);
	glTexCoord2f(1.0f, 1.0f); glVertex3f(radio, altura, 0.0);
	glTexCoord2f(0.0f, 1.0f); glVertex3f(-radio, altura, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glRotatef(90, 0, 1, 0);
	glBegin(GL_QUADS); //plano
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3f(-radio, 0.0, 0.0);
	glTexCoord2f(1.0f, 0.0f); glVertex3f(radio, 0.0, 0.0);
	glTexCoord2f(1.0f, 1.0f); glVertex3f(radio, altura, 0.0);
	glTexCoord2f(0.0f, 1.0f); glVertex3f(-radio, altura, 0.0);
	glEnd();
	glDisable(GL_ALPHA_TEST);

	glPopMatrix();
}
void CFiguras::pared(float largo, float altura, float profundidad,float frontback, float rightleft, float vertical, GLuint right,GLuint left, GLuint front, GLuint back)  //Funcion creacion prisma
{

	GLfloat vertice[8][3] = {
		{ 0.5*largo ,-0.5*altura, 0.5*profundidad },    //Coordenadas V�rtice 1 V1
		{ -0.5*largo ,-0.5*altura , 0.5*profundidad },    //Coordenadas V�rtice 2 V2
		{ -0.5*largo ,-0.5*altura , -0.5*profundidad },    //Coordenadas V�rtice 3 V3
		{ 0.5*largo ,-0.5*altura , -0.5*profundidad },    //Coordenadas V�rtice 4 V4
		{ 0.5*largo ,0.5*altura , 0.5*profundidad },    //Coordenadas V�rtice 5 V5
		{ 0.5*largo ,0.5*altura , -0.5*profundidad },    //Coordenadas V�rtice 6 V6
		{ -0.5*largo ,0.5*altura , -0.5*profundidad },    //Coordenadas V�rtice 7 V7
		{ -0.5*largo ,0.5*altura , 0.5*profundidad },    //Coordenadas V�rtice 8 V8
	};

	glBindTexture(GL_TEXTURE_2D, front==0 ? right : front);   // choose the texture to use.
										  //glBindTexture(GL_TEXTURE_2D, texture[filter]);   // choose the texture to use.
	glBegin(GL_POLYGON);	//Front
							//glColor3f(0.0,0.0,1.0);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.0f, 2.0f); glVertex3fv(vertice[4]);
	glTexCoord2f(1.0f * frontback, 2.0f); glVertex3fv(vertice[7]);
	glTexCoord2f(1.0f * frontback, 0.0f); glVertex3fv(vertice[1]);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, right);   // choose the texture to use.

	glBegin(GL_POLYGON);	//Right
							//glColor3f(0.0,0.0,1.0);
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f*rightleft, 0.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(1.0f*rightleft, 1.0f*vertical); glVertex3fv(vertice[5]);
	glTexCoord2f(0.0f, 1.0f*vertical); glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
						  //glColor3f(0.4,0.2,0.6);
	glNormal3f(0.0f, -1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f*rightleft, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(1.0f*rightleft, 1.0f*vertical); glVertex3fv(vertice[2]);
	glTexCoord2f(0.0f, 1.0f*vertical); glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
						  //glColor3f(0.8,0.2,0.4);
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[4]);
	glTexCoord2f(1.0f*rightleft, 0.0f); glVertex3fv(vertice[5]);
	glTexCoord2f(1.0f*rightleft, 1.0f*vertical); glVertex3fv(vertice[6]);
	glTexCoord2f(0.0f, 1.0f*vertical); glVertex3fv(vertice[7]);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, back == 0 ? right : back);   // choose the texture to use.

	glBegin(GL_POLYGON);	//Back
							//glColor3f(0.0,1.0,0.0);
	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.0f, 1.0f*vertical); glVertex3fv(vertice[6]);
	glTexCoord2f(1.0f*frontback, 1.0f*vertical); glVertex3fv(vertice[5]);
	glTexCoord2f(1.0f*frontback, 0.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, left == 0 ? right : left);   // choose the texture to use.

	glBegin(GL_POLYGON);  //Left
						  //glColor3f(1.0,1.0,1.0);
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(1.0f*rightleft, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(1.0f*rightleft, 1.0f*vertical); glVertex3fv(vertice[7]);
	glTexCoord2f(0.0f, 1.0f*vertical); glVertex3fv(vertice[6]);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
	glEnd();
}

void CFiguras::prisma2 (GLuint text, GLuint text2)  //Funcion creacion prisma
{

	GLfloat vertice [8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas V�rtice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas V�rtice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas V�rtice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas V�rtice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas V�rtice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas V�rtice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas V�rtice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas V�rtice 7 V7
				};

		
		glBindTexture(GL_TEXTURE_2D, text2);   // choose the texture to use.
		//glBindTexture(GL_TEXTURE_2D, texture[filter]);   // choose the texture to use.
		glBegin(GL_POLYGON);	//Front
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( 0.0f, 0.0f, 1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[1]);
		glEnd();
	
		glBegin(GL_POLYGON);	//Right
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( 1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			//glColor3f(0.0,1.0,0.0);
			glNormal3f( 0.0f, 0.0f,-1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			//glColor3f(1.0,1.0,1.0);
			glNormal3f(-1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			//glColor3f(0.4,0.2,0.6);
			glNormal3f( 0.0f,-1.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[2]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[3]);
		glEnd();

		glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
		glBegin(GL_POLYGON);  //Top
			//glColor3f(0.8,0.2,0.4);
			glNormal3f( 0.0f,1.0f, 0.0f);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[7]);
		glEnd();
}

void CFiguras::prisma_anun (GLuint text, GLuint text2)  //Funcion creacion prisma
{

	GLfloat vertice [8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas V�rtice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas V�rtice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas V�rtice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas V�rtice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas V�rtice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas V�rtice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas V�rtice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas V�rtice 7 V7
				};

		
		glBindTexture(GL_TEXTURE_2D, text2);   // choose the texture to use.
		//glBindTexture(GL_TEXTURE_2D, texture[filter]);   // choose the texture to use.
		glBegin(GL_POLYGON);	//Front
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( 0.0f, 0.0f, 1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[1]);
		glEnd();
	
		glBegin(GL_POLYGON);	//Right
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( 1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			//glColor3f(0.0,1.0,0.0);
			glNormal3f( 0.0f, 0.0f,-1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			//glColor3f(1.0,1.0,1.0);
			glNormal3f(-1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			//glColor3f(0.4,0.2,0.6);
			glNormal3f( 0.0f,-1.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[2]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[3]);
		glEnd();

		glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
		glBegin(GL_POLYGON);  //Top
			//glColor3f(0.8,0.2,0.4);
		glNormal3f( 0.0f,1.0f, 0.0f);
			/*glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[7]);*/
			glTexCoord2f(text_der, 0.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(text_der, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(text_izq, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(text_izq, 0.0f); glVertex3fv(vertice[7]);
		glEnd();
}




void CFiguras::esfera(GLfloat radio, int meridianos, int paralelos, GLuint text )
{
	
	GLdouble angulop = 3.1415/paralelos;
	GLdouble angulom = 3.1415/meridianos;
	//GLdouble angulop = 360/paralelos;
	//GLdouble angulop = 20;
	//GLdouble angulom = 20;
	GLdouble theta, phi;
	//bool even = true;
	
	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
	
	/*for(double b = 0; b <= 90-angulop; b += angulop)
	{
		for(double a = 0; a <= 360-angulom; a += angulom)
		{
			//glBegin(GL_TRIANGLES);
			glBegin(GL_POLYGON);
			glVertex3f( radio*sin((a)/180*PI)*sin((b)/180*PI), radio*cos((a)/180*PI)*sin((b)/180*PI), radio*sin((b)/180*PI) );	
			glVertex3f( radio*sin((a)/180*PI)*sin((b+angulop)/180*PI), radio*cos((a)/180*PI)*sin((b+angulop)/180*PI), radio*sin((b+angulop)/180*PI) );	
			glVertex3f( radio*sin((a+angulom)/180*PI)*sin((b)/180*PI), radio*cos((a+angulom)/180*PI)*sin((b)/180*PI), radio*sin((b)/180*PI) );	
			glVertex3f( radio*sin((a+angulom)/180*PI)*sin((b+angulop)/180*PI), radio*cos((a+angulom)/180*PI)*sin((b+angulop)/180*PI), radio*sin((b+angulop)/180*PI) );	
			glEnd();
		}
	}*/

	for(double p =-3.14/2; p < 3.14/2; p += angulop)
	{
		for(double m = 0; m < 3.14*2; m+=angulom)
		{
			//glBegin(GL_LINE_LOOP);
			glBegin(GL_POLYGON);
			

			//glBegin(GL_POINTS);
			glNormal3f( radio*cos(p + angulop)*cos(m), radio*sin(p + angulop), radio*cos(p + angulop)*sin(m));			
			glVertex3f( radio*cos(p + angulop)*cos(m), radio*sin(p + angulop), radio*cos(p + angulop)*sin(m));	

			glNormal3f( radio*cos(p + angulop)*cos(m + angulom), radio*sin(p + angulop), radio*cos(p + angulop)*sin(m + angulom));
			glVertex3f( radio*cos(p + angulop)*cos(m + angulom), radio*sin(p + angulop), radio*cos(p + angulop)*sin(m + angulom));

			glNormal3f( radio*cos(p)*cos(m + angulom), radio*sin(p), radio*cos(p)*sin(m + angulom));
			glVertex3f( radio*cos(p)*cos(m + angulom), radio*sin(p), radio*cos(p)*sin(m + angulom));

			glNormal3f(radio*cos(p)*cos(m), radio*sin(p), radio*cos(p)*sin(m));
			glVertex3f( radio*cos(p)*cos(m), radio*sin(p), radio*cos(p)*sin(m));
				
			glEnd();
		}
	}

/*
	float v1[]={0.0, 0.0, 0.0};
	float v2[]={0.0, 0.0, 0.0};
	float v3[]={0.0, 0.0, 0.0};
	float v4[]={0.0, 0.0, 0.0};
	int i, j;
	float angulom, angulop;
	angulom=2*3.141592654/meridianos;
	for(i=0;i<meridianos;i++)
	{
		angulop=3.141592654/paralelos; 
		for(j=0;j<paralelos;j++)
		{
			v1[0]=radio*cos(angulom*i)*sin(angulop*j);
			v1[1]=radio*cos(angulop*j);
			v1[2]=radio*sin(angulom*i)*sin(angulop*j);
			
			v2[0]=radio*cos(angulom*i)*sin(angulop*(j+1));
			v2[1]=radio*cos(angulop*(j+1));
			v2[2]=radio*sin(angulom*i)*sin(angulop*(j+1));
			
			v3[0]=radio*cos(angulom*(i+1))*sin(angulop*(j+1));
			v3[1]=radio*cos(angulop*(j+1));
			v3[2]=radio*sin(angulom*(i+1))*sin(angulop*(j+1));

			v4[0]=radio*cos(angulom*(i+1))*sin(angulop*j);
			v4[1]=radio*cos(angulop*j);
			v4[2]=radio*sin(angulom*(i+1))*sin(angulop*j);
			
			//glBegin(GL_LINE_LOOP);
			glBegin(GL_POLYGON);
				glVertex3fv(v1);
				glVertex3fv(v2);
				glVertex3fv(v3);
				glVertex3fv(v4);
			glEnd();
		}
	}*/
}

/*void CFiguras::torus(GLfloat radioM, GLfloat radiom, int meridianos, int paralelos, GLuint text )
{
*/
	/*float v1[]={0.0, 0.0, 0.0};
	float v2[]={0.0, 0.0, 0.0};
	float v3[]={0.0, 0.0, 0.0};
	float v4[]={0.0, 0.0, 0.0};

	int i,j;

	GLdouble angulop = 2*3.1415/paralelos;
	GLdouble angulom = 2*3.1415/meridianos;

	float R = radioM - radiom;

	for(i=0;i<meridianos;i++)
	{
		for(j=0;j<paralelos;j++)
		{
			v1[0]=radiom*cos(angulom*i)*sin(angulop*j)+radioM*cos(angulom*i);
			v1[2]=radiom*sin(angulom*i)*sin(angulop*j)+radioM*sin(angulom*i);
			v1[1]=radiom*cos(angulop*j);
			
			v2[0]=radiom*cos(angulom*i)*sin(angulop*(j+1))+radioM*cos(angulom*i);
			v2[2]=radiom*sin(angulom*i)*sin(angulop*(j+1))+radioM*sin(angulom*i);
			v2[1]=radiom*cos(angulop*(j+1));
			
			v3[0]=radiom*cos(angulom*(i+1))*sin(angulop*(j+1))+radioM*cos(angulom*(i+1));
			v3[2]=radiom*sin(angulom*(i+1))*sin(angulop*(j+1))+radioM*sin(angulom*(i+1));
			v3[1]=radiom*cos(angulop*(j+1));
			
			v4[0]=radiom*cos(angulom*(i+1))*sin(angulop*j)+radioM*cos(angulom*(i+1));
			v4[2]=radiom*sin(angulom*(i+1))*sin(angulop*j)+radioM*sin(angulom*(i+1));
			v4[1]=radiom*cos(angulop*j);
			
			glBegin(GL_LINE_LOOP);
				glVertex3fv(v1);
				glVertex3fv(v2);
				glVertex3fv(v3);
				glVertex3fv(v4);
			glEnd();
		}
	}*/
	/*float R = 0;
	float r = 0;

	float v1[]={0.0, 0.0, 0.0};
	float v2[]={0.0, 0.0, 0.0};
	float v3[]={0.0, 0.0, 0.0};
	float v4[]={0.0, 0.0, 0.0};

	int i,j;

	GLdouble angulop = 2*3.1415/paralelos;
	GLdouble angulom = 2*3.1415/meridianos;

	r = (radioM - radiom)/2;
	R = radiom + r;

	for(i=0;i<meridianos;i++)
	{
		for(j=0;j<paralelos;j++)
		{
			
			v1[0]=R*cos(angulom*i) + r*cos(angulom*i)*cos(angulop*j);
			v1[2]=R*sin(angulom*i)+ r*sin(angulom*i)*cos(angulop*j);
			v1[1]=r*sin(angulop*j);

			glNormal3f(v1[0], v1[1], v1[2]);
			
			v2[0]=R*cos(angulom*i) + r*cos(angulom*i)*cos(angulop*(j+1));
			v2[2]=R*sin(angulom*i) + r*sin(angulom*i)*cos(angulop*(j+1));
			v2[1]=r*sin(angulop*(j+1));

			glNormal3f(v2[0], v2[1], v2[2]);

			v3[0]=R*cos(angulom*(i+1)) + r*cos(angulom*(i+1))*cos(angulop*(j+1));
			v3[2]=R*sin(angulom*(i+1)) + r*sin(angulom*(i+1))*cos(angulop*(j+1));
			v3[1]=r*sin(angulop*(j+1));

			glNormal3f(v3[0], v3[1], v3[2]);

			v4[0]=R*cos(angulom*(i+1)) + r*cos(angulom*(i+1))*cos(angulop*j);
			v4[2]=R*sin(angulom*(i+1)) + r*sin(angulom*(i+1))*cos(angulop*j);
			v4[1]=r*sin(angulop*j);

			glNormal3f(v4[0], v4[1], v4[2]);
			
			
			//glBegin(GL_LINE_LOOP);
			glBegin(GL_POLYGON);
			glColor3f(0.5,0.5,0.8);
				glVertex3fv(v1);
				glVertex3fv(v2);
				glVertex3fv(v3);
				glVertex3fv(v4);
			glEnd();
		}
	}
}*/

void CFiguras::torus(GLfloat radioM, GLfloat radiom, int meridianos, int paralelos )
{

	/*float v1[]={0.0, 0.0, 0.0};
	float v2[]={0.0, 0.0, 0.0};
	float v3[]={0.0, 0.0, 0.0};
	float v4[]={0.0, 0.0, 0.0};

	int i,j;

	GLdouble angulop = 2*3.1415/paralelos;
	GLdouble angulom = 2*3.1415/meridianos;

	float R = radioM - radiom;

	for(i=0;i<meridianos;i++)
	{
		for(j=0;j<paralelos;j++)
		{
			v1[0]=radiom*cos(angulom*i)*sin(angulop*j)+radioM*cos(angulom*i);
			v1[2]=radiom*sin(angulom*i)*sin(angulop*j)+radioM*sin(angulom*i);
			v1[1]=radiom*cos(angulop*j);
			
			v2[0]=radiom*cos(angulom*i)*sin(angulop*(j+1))+radioM*cos(angulom*i);
			v2[2]=radiom*sin(angulom*i)*sin(angulop*(j+1))+radioM*sin(angulom*i);
			v2[1]=radiom*cos(angulop*(j+1));
			
			v3[0]=radiom*cos(angulom*(i+1))*sin(angulop*(j+1))+radioM*cos(angulom*(i+1));
			v3[2]=radiom*sin(angulom*(i+1))*sin(angulop*(j+1))+radioM*sin(angulom*(i+1));
			v3[1]=radiom*cos(angulop*(j+1));
			
			v4[0]=radiom*cos(angulom*(i+1))*sin(angulop*j)+radioM*cos(angulom*(i+1));
			v4[2]=radiom*sin(angulom*(i+1))*sin(angulop*j)+radioM*sin(angulom*(i+1));
			v4[1]=radiom*cos(angulop*j);
			
			glBegin(GL_LINE_LOOP);
				glVertex3fv(v1);
				glVertex3fv(v2);
				glVertex3fv(v3);
				glVertex3fv(v4);
			glEnd();
		}
	}*/
	float R = 0;
	float r = 0;

	float v1[]={0.0, 0.0, 0.0};
	float v2[]={0.0, 0.0, 0.0};
	float v3[]={0.0, 0.0, 0.0};
	float v4[]={0.0, 0.0, 0.0};

	int i,j;

	GLdouble angulop = 2*3.1415/paralelos;
	GLdouble angulom = 2*3.1415/meridianos;

	r = (radioM - radiom)/2;
	R = radiom + r;

	for(i=0;i<meridianos;i++)
	{
		for(j=0;j<paralelos;j++)
		{
			
			v1[0]=R*cos(angulom*i) + r*cos(angulom*i)*cos(angulop*j);
			v1[2]=R*sin(angulom*i)+ r*sin(angulom*i)*cos(angulop*j);
			v1[1]=r*sin(angulop*j);

			glNormal3f(v1[0], v1[1], v1[2]);
			
			v2[0]=R*cos(angulom*i) + r*cos(angulom*i)*cos(angulop*(j+1));
			v2[2]=R*sin(angulom*i) + r*sin(angulom*i)*cos(angulop*(j+1));
			v2[1]=r*sin(angulop*(j+1));

			glNormal3f(v2[0], v2[1], v2[2]);

			v3[0]=R*cos(angulom*(i+1)) + r*cos(angulom*(i+1))*cos(angulop*(j+1));
			v3[2]=R*sin(angulom*(i+1)) + r*sin(angulom*(i+1))*cos(angulop*(j+1));
			v3[1]=r*sin(angulop*(j+1));

			glNormal3f(v3[0], v3[1], v3[2]);

			v4[0]=R*cos(angulom*(i+1)) + r*cos(angulom*(i+1))*cos(angulop*j);
			v4[2]=R*sin(angulom*(i+1)) + r*sin(angulom*(i+1))*cos(angulop*j);
			v4[1]=r*sin(angulop*j);

			glNormal3f(v4[0], v4[1], v4[2]);
			
			
			//glBegin(GL_LINE_LOOP);
			glBegin(GL_POLYGON);
				glVertex3fv(v1);
				glVertex3fv(v2);
				glVertex3fv(v3);
				glVertex3fv(v4);
			glEnd();
		}
	}
}

void CFiguras::cono(float altura, float radio, int resolucion, GLuint text)
{
	
	float v1[]={0.0, 0.0, 0.0};
	float v2[]={0.0, 0.0, 0.0};
	float v3[]={0.0, 0.0, 0.0};
	float v4[]={0.0, 0.0, 0.0};

	float angulo=2*3.14/resolucion;
	
	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
	for(int i=0; i <resolucion; i++)
	{
		
		v2[0]=radio*cos(angulo*i);
		v2[1]=0;
		v2[2]=radio*sin(angulo*i);

		v3[0]=radio*cos(angulo*(i+1));
		v3[1]=0;
		v3[2]=radio*sin(angulo*(i+1));
		
		//glBegin(GL_LINE_LOOP);
        glBegin(GL_POLYGON); //Construye Base
			glNormal3f( 0.0f, -1.0f, 0.0f);
			glVertex3f(0.0,0.0,0.0);
			glVertex3fv(v2);
			glVertex3fv(v3);
		glEnd();

		glBegin(GL_POLYGON);  //Construye Cuerpo
			glNormal3f( v2[0], 0.25f, v2[2]);
			//glNormal3fv(v2);
			glVertex3fv(v2);
			//glNormal3fv(v3);
			glVertex3fv(v3);
			//glNormal3f(0.0,altura,0);
			glVertex3f(0.0,altura,0.0);
			
		glEnd();
	}
}

void CFiguras::cilindro(float radio, float altura, int resolucion, GLuint text)
{
	float v1[] = { 0.0, 0.0, 0.0 };
	float v2[] = { 0.0, 0.0, 0.0 };
	float v3[] = { 0.0, 0.0, 0.0 };
	float v4[] = { 0.0, 0.0, 0.0 };
	float v5[] = { 0.0, 0.0, 0.0 };

	float angulo = 2 * 3.14 / resolucion;

	//float ctext_s = 1/resolucion-1;
	float ctext_s = 1.0 / resolucion;
	float ctext_t = 0.0;


	for (int i = 0; i <resolucion; i++)
	{

		v2[0] = radio*cos(angulo*i);
		v2[1] = 0;
		v2[2] = radio*sin(angulo*i);

		v3[0] = radio*cos(angulo*(i + 1));
		v3[1] = 0;
		v3[2] = radio*sin(angulo*(i + 1));

		v4[0] = radio*cos(angulo*i);
		v4[1] = altura;
		v4[2] = radio*sin(angulo*i);

		v5[0] = radio*cos(angulo*(i + 1));
		v5[1] = altura;
		v5[2] = radio*sin(angulo*(i + 1));

		glBegin(GL_POLYGON);
		glNormal3f(0.0f, -1.0f, 0.0f);
		glVertex3f(0.0, 0.0, 0.0);
		glVertex3fv(v2);
		glVertex3fv(v3);
		glEnd();

		glBegin(GL_POLYGON);
		glNormal3f(0.0f, 1.0f, 0.0f);
		glTexCoord2f(0.5, 0.5); glVertex3f(0.0, altura, 0.0);
		glTexCoord2f(0.5, 0.5); glVertex3fv(v4);
		glTexCoord2f(0.5, 0.5); (v5);
		glEnd();

		glBindTexture(GL_TEXTURE_2D, text);
		glBegin(GL_POLYGON);
		glNormal3f(v2[0], 0.0f, v2[2]);
		glTexCoord2f(1.0 - ctext_s*i, 0.0f);		glVertex3fv(v2);
		glTexCoord2f(1.0 - ctext_s*(i + 1), 0.0f);	glVertex3fv(v3);
		glTexCoord2f(1.0 - ctext_s*(i + 1), 1.0f);	glVertex3fv(v5);
		glTexCoord2f(1.0 - ctext_s*i, 1.0f);		glVertex3fv(v4);
		glEnd();
	}
}

void CFiguras::ventana_solid(float altura, float largo, float profundidad, GLuint frame) {
	float rep_ancho = largo*2.5, vertical = altura*2;
	glTranslatef(0, -altura / 2 + profundidad / 2, 0);
	pared(profundidad, profundidad, largo, profundidad, rep_ancho, profundidad, frame);
	glTranslatef(0, altura - profundidad, 0);
	pared(profundidad, profundidad, largo, profundidad, rep_ancho, profundidad, frame);
	glTranslatef(0, -altura / 2 + profundidad / 2, -largo / 2 + profundidad / 2);
	pared(profundidad, altura - 2 * profundidad, profundidad, profundidad, profundidad, vertical, frame);
	glTranslatef(0, 0, largo - profundidad);
	pared(profundidad, altura - 2 * profundidad, profundidad, profundidad, profundidad, vertical, frame);
}

void CFiguras::ventana_blend(float altura, float largo, float profundidad, GLuint window) {
	glEnable(GL_BLEND);     // Turn Blending On
	glBlendFunc(GL_SRC_COLOR, GL_ONE_MINUS_SRC_ALPHA);
	CFiguras::pared(profundidad, altura - 2 * profundidad-.001, largo - 2 * profundidad-.001, 0, 1, 1, window);
	glDisable(GL_BLEND);        // Turn Blending Off
}

void CFiguras::ventana_solid_repeat(float longitud, float ventanas,float altura, float profundidad, GLuint frame) {
	float largo = (profundidad*(ventanas-1)+longitud)/ventanas;
	glPushMatrix();
		glTranslatef(0,0, -longitud / 2 + largo / 2);
		for (int i = 0; i < ventanas; i++)
		{
			CFiguras::ventana_solid(altura, largo, profundidad, frame);
			glTranslatef(0, 0, largo / 2-profundidad/2);
		}
	glPopMatrix();
}
void CFiguras::ventana_blend_repeat(float longitud, float ventanas, float altura, float profundidad, GLuint window) {
	float largo = (profundidad*(ventanas - 1) + longitud) / ventanas;
	glPushMatrix();
		glTranslatef(0, 0, -longitud / 2 + largo / 2);
		for (int i = 0; i < ventanas; i++)
		{
			CFiguras::ventana_blend(altura, largo, profundidad, window);
			glTranslatef(0, 0, largo-profundidad);
		}
	glPopMatrix();
}

void CFiguras::chair(GLuint material, GLuint sillon) {
	glPushMatrix(); //respaldo
		glRotatef(3, 0, 0, 1);
		glTranslatef(0, 0.71, 0.015);
		CFiguras::pared(0.03, 0.56, 0.03, 1, 2, 3, material);
		glTranslatef(0, 0, 0.34);
		CFiguras::pared(0.03, 0.56, 0.03, 1, 2, 3, material);
		glTranslatef(0, 0.22, -0.17);
		CFiguras::pared(0.02, 0.06, 0.31, 3, 3, 0.1, material);
		glTranslatef(0, -0.475, 0);
		CFiguras::pared(0.03, 0.05, 0.31, 3, 3, 0.1, material);
		glTranslatef(0, 0.235, 0);
		CFiguras::pared(0.03, 0.42, 0.03, 1, 2, 3, material);
	glPopMatrix();
	glPushMatrix();//asiento
		glTranslatef(0.115, 0.40525, 0.185);
		CFiguras::techo(0.31, 0.05, 0.37, 3, 3, 0.1, material);
		glTranslatef(0.01, 0.03, 0);
		CFiguras::techo(0.28, 0.005, 0.36, 3, 3, 0.1, sillon);
	glPopMatrix();
	glPushMatrix(); //patas
		glTranslatef(-0.015625, 0.165, 0.025);
		CFiguras::pared(0.05, 0.43, 0.05, 1, 2, 3, material);
		glTranslatef(0, 0, 0.32);
		CFiguras::pared(0.05, 0.43, 0.05, 1, 2, 3, material);
		glTranslatef(0.26, 0, 0);
		CFiguras::pared(0.05, 0.43, 0.05, 1, 2, 3, material);
		glTranslatef(0, 0, -0.32);
		CFiguras::pared(0.05, 0.43, 0.05, 1, 2, 3, material);
	glPopMatrix();
}
void CFiguras::table(GLuint patas, GLuint mesa) {
	glPushMatrix();
		glTranslatef(1, 0.72, 0);
		CFiguras::techo(2, 0.1, 1, 5, 5, 10, mesa);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(0.05,0.335,-0.45);
		CFiguras::pared(0.1, 0.67, 0.1,3,2,1,patas);
		glTranslatef(1.9, 0, 0);
		CFiguras::pared(0.1, 0.67, 0.1, 3, 2, 1, patas);
		glTranslatef(0, 0, 0.9);
		CFiguras::pared(0.1, 0.67, 0.1, 3, 2, 1, patas);
		glTranslatef(-1.9, 0, 0);
		CFiguras::pared(0.1, 0.67, 0.1, 3, 2, 1, patas);
	glPopMatrix();
}

void CFiguras::sofa(GLuint sides,GLuint material, GLuint cojines) {
	glPushMatrix();
		glTranslatef(0.3, 0.25, 0.05);
		CFiguras::pared(0.6,0.5,0.1,2,0.5,2,sides);
		glTranslatef(0,0,1.4);
		CFiguras::pared(0.6, 0.5, 0.1, 2, 0.5, 2, sides);
		glTranslatef(-0.25,0.25,-0.7);
		CFiguras::pared(0.1, 1, 1.3, 1, 3, 2, material);
		glPushMatrix();
			glTranslatef(0.3, -0.35, 0);
			glRotatef(90, 0, 1, 0);
			CFiguras::pared(1.3, 0.3, 0.5, 5, 1.5, 5, material);
		glPopMatrix();
		if (cojines != 0) {
			glTranslatef(0.05, 0.01, -0.435);
			glRotatef(45, 1, 0, 0);
			CFiguras::pared(0.05, 0.3, 0.3, 1, 3, 2, cojines);
			glTranslatef(0, 0.31, 0.31);
			CFiguras::pared(0.05, 0.3, 0.3, 1, 3, 2, cojines);
			glTranslatef(0, 0.31, 0.31);
			CFiguras::pared(0.05, 0.3, 0.3, 1, 3, 2, cojines);
		}
	glPopMatrix();
}
void CFiguras::tv(GLuint material, GLuint tv,float distortion) {
	glTranslatef(0.009375, 0, 0);
	CFiguras::pared(0.01875,0.75,0.89,1,2,3,material);
	glTranslatef(0.00948, 0, 0);
	CFiguras::pared(0, 0.72, 0.85, 1, -1, 1-distortion, tv);
}
void CFiguras::agua(float largo, float altura, float profundidad, float vertical, float frontback, float verticalMoving, float side, GLuint top)  //Funcion creacion prisma
{

	GLfloat vertice[8][3] = {
		{ 0.5*largo ,-0.5*altura, 0.5*profundidad },    //Coordenadas V�rtice 1 V1
		{ -0.5*largo ,-0.5*altura , 0.5*profundidad },    //Coordenadas V�rtice 2 V2
		{ -0.5*largo ,-0.5*altura , -0.5*profundidad },    //Coordenadas V�rtice 3 V3
		{ 0.5*largo ,-0.5*altura , -0.5*profundidad },    //Coordenadas V�rtice 4 V4
		{ 0.5*largo ,0.5*altura , 0.5*profundidad },    //Coordenadas V�rtice 5 V5
		{ 0.5*largo ,0.5*altura , -0.5*profundidad },    //Coordenadas V�rtice 6 V6
		{ -0.5*largo ,0.5*altura , -0.5*profundidad },    //Coordenadas V�rtice 7 V7
		{ -0.5*largo ,0.5*altura , 0.5*profundidad },    //Coordenadas V�rtice 8 V8
	};

	glBindTexture(GL_TEXTURE_2D, top);   // choose the texture to use.
										 //glBindTexture(GL_TEXTURE_2D, texture[filter]);   // choose the texture to use.
	glBegin(GL_POLYGON);	//Front
							//glColor3f(0.0,0.0,1.0);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0f, 0.0f + verticalMoving); glVertex3fv(vertice[0]);
	glTexCoord2f(0.0f, 1.0f*vertical + verticalMoving); glVertex3fv(vertice[4]);
	glTexCoord2f(1.0f * frontback, 1.0f*vertical + verticalMoving); glVertex3fv(vertice[7]);
	glTexCoord2f(1.0f * frontback, 0.0f + verticalMoving); glVertex3fv(vertice[1]);
	glEnd();



	glBegin(GL_POLYGON);	//Right
							//glColor3f(0.0,0.0,1.0);
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f + verticalMoving); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f*frontback, 0.0f + verticalMoving); glVertex3fv(vertice[3]);
	glTexCoord2f(1.0f*frontback, 1.0f*vertical + verticalMoving); glVertex3fv(vertice[5]);
	glTexCoord2f(0.0f, 1.0f*vertical + verticalMoving); glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
						  //glColor3f(0.4,0.2,0.6);
	glNormal3f(0.0f, -1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f + verticalMoving); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f*frontback, 0.0f + verticalMoving); glVertex3fv(vertice[1]);
	glTexCoord2f(1.0f*frontback, 1.0f*vertical + verticalMoving); glVertex3fv(vertice[2]);
	glTexCoord2f(0.0f, 1.0f*vertical + verticalMoving); glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
						  //glColor3f(0.8,0.2,0.4);
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f + verticalMoving); glVertex3fv(vertice[4]);
	glTexCoord2f(1.0f*frontback, 0.0f + verticalMoving); glVertex3fv(vertice[5]);
	glTexCoord2f(1.0f*frontback, 1.0f*vertical + verticalMoving); glVertex3fv(vertice[6]);
	glTexCoord2f(0.0f, 1.0f*vertical + verticalMoving); glVertex3fv(vertice[7]);
	glEnd();


	glBegin(GL_POLYGON);	//Back
							//glColor3f(0.0,1.0,0.0);
	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.0f, 1.0f*vertical + verticalMoving); glVertex3fv(vertice[6]);
	glTexCoord2f(1.0f*frontback, 1.0f*vertical + verticalMoving); glVertex3fv(vertice[5]);
	glTexCoord2f(1.0f*frontback, 0.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.0f, 0.0f + verticalMoving); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
						  //glColor3f(1.0,1.0,1.0);
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(1.0f*frontback, 0.0f + verticalMoving); glVertex3fv(vertice[1]);
	glTexCoord2f(1.0f*frontback, 1.0f*vertical + verticalMoving); glVertex3fv(vertice[7]);
	glTexCoord2f(0.0f, 1.0f*vertical + verticalMoving); glVertex3fv(vertice[6]);
	glTexCoord2f(0.0f, 0.0f + verticalMoving); glVertex3fv(vertice[2]);
	glEnd();
}
void CFiguras::alacena(GLuint wood, GLuint marble, float rotalacena) {
	glPushMatrix();
	CFiguras::techo(1.14, .90, .05, 5, 5, 1, wood);

	glTranslatef(-0.57 + 0.025, 0, 0.2875);
	CFiguras::techo(.05, .90, 0.575, 5, 5, 1, wood);

	glTranslatef(1.14 - .05, 0, 0);
	CFiguras::techo(.05, .90, 0.575, 5, 5, 1, wood);

	glTranslatef(-0.57 + 0.025, 0.45 + 0.025, 0);
	CFiguras::techo(1.14, .05, .60 + 0.0125 + 0.0125, 5, 5, 1, marble);

	glTranslatef(0, -(0.90 + 0.05), 0);
	CFiguras::techo(1.14, .05, .60 + 0.0125 + 0.0125, 5, 5, 1, marble);

	while (rotalacena > 100)
		rotalacena -= 100;
	if (rotalacena < 0)
		rotalacena *= -1;

	glPushMatrix();
	glTranslatef(-0.57, .5 - .025, 0.25 + .05);
	glPushMatrix();
	glRotatef(rotalacena, 0, -1, 0);
	glTranslatef(0.285, 0, 0);
	CFiguras::techo(0.57, .90, .025, 5, 5, 1, wood);
	glPopMatrix();
	glTranslatef(1.14, 0, 0);
	glRotatef(rotalacena, 0, 1, 0);
	glTranslatef(-0.285, 0, 0);
	CFiguras::techo(0.57, .90, .025, 5, 5, 1, wood);

	glPopMatrix();
	glPopMatrix();

	/*
	glTranslatef(0.285, -.45 - .025, -0.30);
	CFiguras::techo(1.14, .05, .60 + 0.0125 + 0.0125, 5, 5, 1, marble);

	glTranslatef(-0.285 + .025, 0, 0.285);
	CFiguras::techo(0.57, .90, .025, 5, 5, 1, wood);

	glTranslatef(-0.57, 0, 0);
	CFiguras::techo(0.57, .90, .025, 5, 5, 1, wood);


	glTranslatef(0, .95, 0);
	CFiguras::techo(1.14, .05, .60 + 0.0125 + 0.0125, 5, 5, 1, marble);
	*/
}
void CFiguras::cama(float xMadera, float yMadera, float zMadera, GLuint base, GLuint blanket, GLuint almohada){
	glPushMatrix();
		glScalef(xMadera, yMadera, zMadera); //posicion y tama�o 
		//cabecera
		glPushMatrix();
			glTranslatef(0.0, 0.6, -1.04);
			CFiguras::prisma(2.1, 1.2, 0.08, base);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(0.0, 0.25, 1.04);
			CFiguras::prisma(2.1, 0.5, 0.08, base);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(0.0, 0.4, 0.0);
			CFiguras::prisma(2.1, 0.2, 2.0, base);
		glPopMatrix();

		//Colchon
		glPushMatrix();
			glTranslatef(0.0, 0.6, 0.0);
			CFiguras::pared(2.0, 0.2, 2.0, 10, 2, 2, blanket);
		glPopMatrix();

		//Almohadas
		glPushMatrix();
			glTranslatef(-0.5, 0.75, -0.80);
			CFiguras::prisma(0.8, 0.1, 0.3, almohada);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(0.5, 0.75, -0.80);
			CFiguras::prisma(0.8, 0.1, 0.3, almohada);
		glPopMatrix();
	glPopMatrix();
}
void CFiguras::door(float profundidad, float altura, float largo,float apertura, GLuint pared, GLuint pared2, GLuint puerta,GLuint puerta2) {
	apertura *= 12.73 * 2;
	if (apertura > 80)apertura = 160-apertura;
	if (apertura < -80)apertura = -160 - apertura;
	glTranslatef(0, 0, -profundidad+largo*.5);
	CFiguras::pared(profundidad, altura, profundidad, 0.2, 0.1, 2, pared2,pared,pared,pared);//Marco de la puerta
	glTranslatef(0, altura*0.41379, -.5*largo);
	CFiguras::pared(profundidad, altura*0.172413, largo-profundidad, 1, 2, 0.3, pared2, pared, pared, pared);
	glPushMatrix();
		glTranslatef(0, -altura*.5, (largo - profundidad)*-.5);
		glRotatef(apertura, 0, 1, 0);
		glTranslatef(0, 0, (largo - profundidad)*.5);
		CFiguras::pared(profundidad, altura*0.827586, largo - profundidad,0.1, 1, 1, puerta2,puerta,puerta,puerta);
	glPopMatrix();
}
void CFiguras::cajon(GLfloat xCajon, GLfloat yCajon, GLfloat zCajon, GLuint text, GLuint manija)
{
	glPushMatrix();
		//glTranslatef(0.0, 0.0, cajon_mov);
		glPushMatrix();
			glTranslatef(0.0, 0.39, 0.23);
			CFiguras::prisma(0.40, 0.12, 0.02, text);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0.0, 0.39, -0.23);
			CFiguras::prisma(0.40, 0.12, 0.02, text);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0.19, 0.39, 0.0);
			CFiguras::prisma(0.02, 0.12, 0.44, text);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(-0.19, 0.39, 0.0);
			CFiguras::prisma(0.02, 0.12, 0.44, text);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0.0, 0.34, 0.0);
			CFiguras::prisma(0.36, 0.02, 0.44, text);
		glPopMatrix();

	//Manija
		glPushMatrix();
			glTranslatef(0.0, 0.39, 0.3);
			CFiguras::prisma(0.2, 0.015, 0.015, manija);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0.0925, 0.39, 0.26425);
			CFiguras::prisma(0.015, 0.015, 0.0585, manija);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(-0.0925, 0.39, 0.26425);
			CFiguras::prisma(0.015, 0.015, 0.0585, manija);
		glPopMatrix();
	glPopMatrix();
}
void CFiguras::armario(GLfloat xcloset, GLfloat ycloset, GLfloat zcloset, GLuint text, GLuint manija, GLuint tubo) {
	glPushMatrix();
		glPushMatrix();
			glTranslatef(0.5, 2.5/2, -0.3);
			CFiguras::prisma(0.02, 2.5, 0.6, text);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(-0.5, 2.5/2, -0.3);
			CFiguras::prisma(0.02, 2.5, 0.6, text);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(-1.5, 2.9/2, -0.3);
			CFiguras::prisma(0.02, 2.9, 0.6, text);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(1.5, 2.9/2, -0.3);
			CFiguras::prisma(0.02, 2.9, 0.6, text);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0.0, 2.51, -0.3);
			CFiguras::prisma(2.98, 0.02, 0.6, text);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(-1.0, 2.5/2, -0.3);
			CFiguras::prisma(0.98, 0.02, 0.6, text);
			glPushMatrix();
				glTranslatef(0.5, 1.15, 0.0);
				glRotatef(90, 0.0, 0.0, 1.0);
				CFiguras::cilindro(0.02, 1.0, 50, tubo);
			glPopMatrix();
			glPushMatrix();
				glTranslatef(0.5, -0.15, 0.0);
				glRotatef(90, 0.0, 0.0, 1.0);
				CFiguras::cilindro(0.02, 1.0, 50, tubo);
			glPopMatrix();
		glPopMatrix();

		glPushMatrix();
			glTranslatef(0.0, 2.5/6, -0.3);
			CFiguras::prisma(0.98, 0.02, 0.6, text);
			glTranslatef(0.0, 2.5 / 6, 0.0);
			CFiguras::prisma(0.98, 0.02, 0.6, text);
			glTranslatef(0.0, 2.5 / 6, 0.0);
			CFiguras::prisma(0.98, 0.02, 0.6, text);
			glTranslatef(0.0, 2.5 / 6, 0.0);
			CFiguras::prisma(0.98, 0.02, 0.6, text);
			glTranslatef(0.0, 2.5 / 6, 0.0);
			CFiguras::prisma(0.98, 0.02, 0.6, text);
		glPopMatrix();

		glPushMatrix();
			glPushMatrix();
				glTranslatef(1.35, 2.5-2.5/4, -0.3);
				CFiguras::prisma(0.3, 0.02, 0.6, text);
				glTranslatef(0.0, - 2.5 / 4, 0.0);
				CFiguras::prisma(0.3, 0.02, 0.6, text);
				glTranslatef(0.0, -2.5 / 4, 0.0);
				CFiguras::prisma(0.3, 0.02, 0.6, text);
				glTranslatef(0.0, -2.5 / 4, 0.0);
				CFiguras::prisma(0.3, 0.02, 0.6, text);
			glPopMatrix();
			glPushMatrix();
				glTranslatef(1.19, 2.5/2, -0.3);
				CFiguras::prisma(0.02, 2.48, 0.6, text);
			glPopMatrix();
		glPopMatrix();

		glPushMatrix();
			glPushMatrix();
				glTranslatef(0.845, 1.015, -0.3);
				CFiguras::prisma(0.675, 0.02, 0.6, text);
			glPopMatrix();

			glPushMatrix();
				glTranslatef(1.175, 2.4, -0.3);
				glRotatef(90, 0.0, 0.0, 1.0);
				CFiguras::cilindro(0.02, .675, 50, tubo);
			glPopMatrix();

			glTranslatef(0.845, -0.4, -0.285);
			glPushMatrix();
				glScalef(1.66, 2.0, 1.20);
				CFiguras::cajon(1.0,1.0,1.0, text, manija);
			glPopMatrix();
			glPushMatrix();
				glTranslatef(0.0, -0.25, 0.0);
				glScalef(1.66, 2.0, 1.20);
				CFiguras::cajon(1.0, 1.0, 1.0, text, manija);
			glPopMatrix();
			glPushMatrix();
				glTranslatef(0.0, 0.25, 0.0);
				glScalef(1.66, 2.0, 1.20);
				CFiguras::cajon(1.0, 1.0, 1.0, text, manija);
			glPopMatrix();
			glPushMatrix();
				glTranslatef(0.0, 0.5, 0.0);
				glScalef(1.66, 2.0, 1.20);
				CFiguras::cajon(1.0, 1.0, 1.0, text, manija);
			glPopMatrix();
		glPopMatrix();
	glPopMatrix();
}
void CFiguras::buro(GLfloat xburo, GLfloat yburo, GLfloat zburo, GLfloat mov_cajon, GLuint text, GLuint manija){
	glPushMatrix();
		glScalef(xburo, yburo, zburo); //posicion y tama�o 
		glPushMatrix();
			glTranslatef(0.0, 0.025, 0.0);
			CFiguras::prisma(0.45, 0.05, 0.45, text);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(0.0, 0.075, 0.0);
			CFiguras::prisma(0.5, 0.05, 0.5, text);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(0.225, 0.3, 0.0);
			CFiguras::prisma(0.05, 0.4, 0.5, text);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(-0.225, 0.3, 0.0);
			CFiguras::prisma(0.05, 0.4, 0.5, text);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(0.0, 0.475, 0.0);
			CFiguras::prisma(0.5, 0.05, 0.5, text);
		glPopMatrix();

		//Cajon
		glPushMatrix();
			glTranslatef(0.0, 0.0, mov_cajon);
			CFiguras::cajon(1.0,1.0,1.0, text, manija);
		glPopMatrix();
	glPopMatrix();
}
void CFiguras::escritorio(GLfloat xescritorio, GLfloat yescritorio, GLfloat zescritorio, GLfloat text, GLuint tubos)
{
	glPushMatrix();
	glScalef(xescritorio, yescritorio, zescritorio);
		glPushMatrix();
			glTranslatef(0.0,0.72,0.0);
			CFiguras::prisma(1.2,0.04,0.4, text);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(-0.58,0.35,0.0);
			CFiguras::prisma(0.04,0.7,0.4, text);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0.45,0.70,0.0);
			glRotatef(180, 1.0, 0.0, 0.0);
			CFiguras::cilindro(0.02,0.10,100, tubos);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0.45,0.02,0.25);
			CFiguras::prisma(0.3, 0.04, 0.9, text);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0.45,0.04,0.0);
			CFiguras::cilindro(0.02,0.25,100, tubos);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0.45,0.165,0.68);
			CFiguras::prisma(0.3, 0.25, 0.04, text);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0.45,0.31,0.25);
			CFiguras::prisma(0.3, 0.04, 0.9, text);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0.45,0.33,0.55);
			CFiguras::cilindro(0.02,0.25,100, tubos);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0.45,0.455,-0.18);
			CFiguras::prisma(0.3, 0.25, 0.04, text);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0.45,0.60,0.25);
			CFiguras::prisma(0.3, 0.04, 0.9, text);
		glPopMatrix();

		//Repisa
		glPushMatrix();
			glTranslatef(0.0,1.5,-0.05);
			CFiguras::prisma(1.0, 0.04, 0.3, text);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0.48,1.72,-0.05);
			CFiguras::prisma(0.04, 0.4, 0.3, text);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(-0.48,1.72,-0.05);
			CFiguras::prisma(0.04, 0.4, 0.3, text);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0.0,1.94,-0.05);
			CFiguras::prisma(1.0, 0.04, 0.3, text);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(-0.20,1.72,-0.05);
			CFiguras::prisma(0.04, 0.4, 0.3, text);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0.20,1.72,-0.05);
			CFiguras::prisma(0.04, 0.4, 0.3, text);
		glPopMatrix();
	glPopMatrix();
}
void CFiguras::lampara(GLfloat xlampara, GLfloat ylampara, GLfloat zlampara, GLfloat text1, GLuint text2) {
	glPushMatrix();
	glScalef(xlampara, ylampara, zlampara);
		glPushMatrix();
			glRotatef(180, 0.0, 0.0, 1.0);
			cilindro(0.04,0.03,50,text1);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0.0,-0.01,0.0);
			glRotatef(20, 0.0, 0.0, 1.0);
			cilindro(0.005,0.20,50, text1);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(-0.068,0.18,0.0);
			glRotatef(80, 0.0, 0.0, 1.0);
			cilindro(0.005,0.1,50, text1);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(-0.16,0.145,0.0);
			glRotatef(0, 0.0, 0.0, 1.0);
			cono(0.05,0.05,30, text2);
		glPopMatrix();
	glPopMatrix();
}
void CFiguras::Laptop(GLfloat xLaptop, GLfloat yLaptop, GLfloat zLaptop, GLfloat text, GLfloat teclado, GLfloat pantalla)
{
		glPushMatrix();		
		glScalef(xLaptop, yLaptop, zLaptop);
			glPushMatrix();
				glRotatef(90, 0.0, 1.0, 0.0);
				glTranslatef(0.0, 0.01, 0.0);
				CFiguras::prisma(0.25, 0.02, 0.38, text);
				glTranslatef(0.0, 0.01, 0.0);
				CFiguras::prisma(0.25, 0.0001, 0.38, teclado);
			glPopMatrix();

			glPushMatrix();		
				glTranslatef(0.0, 0.21, 0.12);
				CFiguras::prisma(0.38, 0.40, 0.02, text);
				glTranslatef(0.0, 0.0, -0.01);
				CFiguras::prisma(0.38, 0.40, 0.0001, pantalla);
			glPopMatrix();

		glPopMatrix();	
}
void CFiguras::ropero(GLfloat xropero, GLfloat yropero, GLfloat zropero, GLfloat text){
	glPushMatrix();
	glScalef(1.0,1.0,1.0);
			glPushMatrix();
				glTranslatef(0.0,0.015,0.0);
				CFiguras::prisma(3.0,0.03,0.5, text);
			glPopMatrix();
			glPushMatrix();
				glTranslatef(0.0,0.90,0.0);
				CFiguras::prisma(3.0,0.03,0.5, text);
			glPopMatrix();
			glPushMatrix();
				glTranslatef(0.0,1.48,0.0);
				CFiguras::prisma(3.0, 0.03, 0.5, text);
			glPopMatrix();
			glPushMatrix();
				glTranslatef(0.0,2.9,0.0);
				CFiguras::prisma(3.0, 0.03, 0.5, text);
			glPopMatrix();
			glPushMatrix();
				glTranslatef(1.125,2.06,0.0);
				CFiguras::prisma(0.75,0.03,0.5, text);
			glPopMatrix();
			glPushMatrix();
				glTranslatef(-1.125,2.06,0.0);
				CFiguras::prisma(0.75,0.03,0.5, text);
			glPopMatrix();
			glPushMatrix();
				glTranslatef(1.5,1.45,0.0);
				CFiguras::prisma(0.03,2.9,0.5, text);
			glPopMatrix();
			glPushMatrix();
				glTranslatef(-1.5,1.45,0.0);
				CFiguras::prisma(0.03,2.9,0.5, text);
			glPopMatrix();
			glPushMatrix();
				glTranslatef(0.75,1.45,0.0);
				CFiguras::prisma(0.03,2.9,0.5, text);
			glPopMatrix();
			glPushMatrix();
				glTranslatef(-0.75,1.45,0.0);
				CFiguras::prisma(0.03,2.9,0.5, text);
			glPopMatrix();
			glPushMatrix();
				glTranslatef(0.0,1.45,-0.25);
				CFiguras::prisma(3.0,2.9,0.03, text);
			glPopMatrix();
		glPopMatrix();
}