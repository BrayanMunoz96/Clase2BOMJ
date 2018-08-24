//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************											******//
//*************											******//
//************************************************************//
#include "Main.h"
void InitGL ( GLvoid )     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	
	
}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview
/* 1er. caso:
	//Poner aqui codigo ha dibujar
	glBegin(GL_POINTS); //m�nima representaci�n = punto
	glPointSize(20.0f);
	glVertex3f(0.0f, 0.0f, -1.0f);//D�nde queremos ese punto... 3 par�metros de punto flotante
	//Para asegurar que se trata de un flotante ponemos el .0f
	glEnd(); // Termina mi dibujo
	*/
	/*	2do. caso:
		glBegin(GL_LINES); //dibujar una l�nea, esta funci�n toma un par de puntos
		glPointSize(20.0f);
		glVertex3f(0.0f, 0.0f, -1.0f);//D�nde queremos el primer punto
		glVertex3f(1.0f, 1.0f, -1.0f); //2do punto de la l�nea

		glVertex3f(-2.0f, 0.0f, 0.0f);
		glVertex3f(0.0f, 0.0f, -1.0f);

		glVertex3f(-2.0f, 0.0f, 0.0f);
		glVertex3f(0.0f, 0.0f, -1.0f);
		glEnd(); // Termina mi dibujo
		*/
		/*  3er. caso:
			glBegin(GL_LINE_LOOP); //No importa juntar los pares, s�lo necesito lo v�rtices
			glPointSize(20.0f);
			glVertex3f(0.0f, 0.0f, -1.0f);
			glVertex3f(0.0f, 0.0f, -1.0f);
			glVertex3f(3.0f, 3.0f, -1.0f);
			glVertex3f(5.0f, 3.0f, -1.0f);
			glEnd(); // Termina mi dibujo
		*/
		/* 4to. caso:
			glBegin(GL_TRIANGLES); //Toma la tercia de v�rtices y los rellena formando el tri�ngulo
			glPointSize(20.0f);
			glVertex3f(0.0f, 0.0f, -1.0f);
			glVertex3f(3.0f, 0.0f, -1.0f);
			glVertex3f(5.0f, 3.0f, -1.0f);
			glEnd();
			*/
			/*
				glBegin(GL_QUADS); //Pol�gonos, en 2D no influye tanto el orden de los v�rtices
				glPointSize(20.0f);
				glVertex3f(-1.5f, -1.5f, -1.0f);
				glVertex3f(1.5f, -1.5f, -1.0f);
				glVertex3f(1.5f, 1.5f, -1.0f);
				glVertex3f(-1.5f, 1.5f, -1.0f);
				glEnd();
				*/

//Ejercicio: CG BM
	glBegin(GL_QUADS); // 4 v�rtices para formar el pol�gono
	glColor3f(0, 0, 1); //Flotante Rojo, Verde y Azul (RGB) --> Rango entre 0 y 1 e un modelo de color de 0 a 255
	glPointSize(20.0f);
	glVertex3f(0.0f, 0.0f, -1.0f);
	glVertex3f(2.0f, 0.0f, -1.0f);
	glVertex3f(2.0f, 1.5f, -1.0f);
	glVertex3f(1.5f, 1.5f, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(0.0f, 0.0f, -1.0f);
	glVertex3f(1.5f, 1.5f, -1.0f);
	glVertex3f(0.0f, 5.0f, -1.0f);
	glVertex3f(1.5f, 3.5f, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(0.0f, 5.0f, -1.0f);
	glVertex3f(2.0f, 5.0f, -1.0f);
	glVertex3f(2.0f, 3.5f, -1.0f);
	glVertex3f(1.5f, 3.5f, -1.0f);
	glEnd();
//----------------------------------------------FIN letra C 

	glBegin(GL_QUADS);
	glColor3f(1, 0, 0);
	glVertex3f(3.0f,0.0f, -1.0f);
	glVertex3f(6.0f,0.0f, -1.0f);
	glVertex3f(5.0f,1.0f, -1.0f);
	glVertex3f(4.0f,1.0f, -1.0f);
	glEnd();
/*
	glBegin(GL_QUADS);
	glVertex3f(f, f, -1.0f);
	glVertex3f(f, f, -1.0f);
	glVertex3f(f, f, -1.0f);
	glVertex3f(f, f, -1.0f);
	glEnd();
*/
	glBegin(GL_QUADS);
	glVertex3f(3.0f,0.0f, -1.0f);
	glVertex3f(3.0f,5.0f, -1.0f);
	glVertex3f(4.0f,4.0f, -1.0f);
	glVertex3f(4.0f,1.0f, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(3.0f,5.0f, -1.0f);
	glVertex3f(6.0f,5.0f, -1.0f);
	glVertex3f(6.0f,4.0f, -1.0f);
	glVertex3f(4.0f,4.0f, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(6.0f,0.0f, -1.0f);
	glVertex3f(6.0f,2.5f, -1.0f);
	glVertex3f(5.0f,2.0f, -1.0f);
	glVertex3f(5.0f,1.0f, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(4.5f,2.0f, -1.0f);
	glVertex3f(5.0f,2.0f, -1.0f);
	glVertex3f(6.0f,2.5f, -1.0f);
	glVertex3f(4.5f,2.5f, -1.0f);
	glEnd();

	//------------------------------FIN letra G


	glFlush();
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
	if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	glOrtho(-10,10,-10,10,0.1,2); //par�metros de visi�n total de mi ventana; Los dibujos que hago deben estar dentro de ese rango

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();									
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key) 
	 {
		case 27: exit(0);
				 break;
	 }
	  glutPostRedisplay();
}    

int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitWindowSize  (500, 500);	// Tama�o de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 2"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut funci�n de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut funci�n en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut funci�n de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}

