//#include <windows.h>  //Solo para Windows
//#include <GL/gl.h>     // The GL Header File
//#include <stdio.h>

//#include <math.h>
#include "Main.h"


class CFiguras
{
	public:

	float text_der;
	float text_izq;

	void esfera(GLfloat radio, int meridianos, int paralelos, GLuint text); //Func�on creacion esfera
	void cilindro(float radio, float altura, int resolucion, GLuint text);	//Func�on creacion cilindro
	void cono(float altura, float radio, int resolucion, GLuint text);		//Func�on creacion cono
	void prisma_anun (GLuint text, GLuint text2);							//Func�on creacion movimiento
	void prisma (float altura, float largo, float profundidad, GLuint text);//Func�on creacion prisma
	void pared(float largo, float altura, float profundidad, float frontback, float rightleft, float vertical, GLuint right, GLuint left=0, GLuint front=0, GLuint back=0);//Func�on creacion prisma
	void techo(float largo, float altura, float profundidad, float vertical, float horizontal,float side, GLuint top, GLuint bottom = 0, GLuint sides = 0);//Func�on creacion prisma
	void techomueve(float largo, float altura, float profundidad, float vertical,float verticalMoving, float horizontal, float horizontalMoving, float side, GLuint top, GLuint bottom = 0, GLuint sides = 0);//Func�on creacion prisma
	void prisma2 (GLuint text, GLuint text2);
	void skybox(float altura, float largo, float profundidad, GLuint text,GLuint text2);	//Funcion creacion cielo
	

	//void torus(GLfloat radioM, GLfloat radiom, int meridianos, int paralelos, GLuint text );
	void torus(GLfloat radioM, GLfloat radiom, int meridianos, int paralelos);

};
