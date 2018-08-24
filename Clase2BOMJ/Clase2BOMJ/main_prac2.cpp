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
	glBegin(GL_POINTS); //mínima representación = punto
	glPointSize(20.0f);
	glVertex3f(0.0f, 0.0f, -1.0f);//Dónde queremos ese punto... 3 parámetros de punto flotante
	//Para asegurar que se trata de un flotante ponemos el .0f
	glEnd(); // Termina mi dibujo
	*/
	/*	2do. caso:
		glBegin(GL_LINES); //dibujar una línea, esta función toma un par de puntos
		glPointSize(20.0f);
		glVertex3f(0.0f, 0.0f, -1.0f);//Dónde queremos el primer punto
		glVertex3f(1.0f, 1.0f, -1.0f); //2do punto de la línea

		glVertex3f(-2.0f, 0.0f, 0.0f);
		glVertex3f(0.0f, 0.0f, -1.0f);

		glVertex3f(-2.0f, 0.0f, 0.0f);
		glVertex3f(0.0f, 0.0f, -1.0f);
		glEnd(); // Termina mi dibujo
		*/
		/*  3er. caso:
			glBegin(GL_LINE_LOOP); //No importa juntar los pares, sólo necesito lo vértices
			glPointSize(20.0f);
			glVertex3f(0.0f, 0.0f, -1.0f);
			glVertex3f(0.0f, 0.0f, -1.0f);
			glVertex3f(3.0f, 3.0f, -1.0f);
			glVertex3f(5.0f, 3.0f, -1.0f);
			glEnd(); // Termina mi dibujo
		*/
		/* 4to. caso:
			glBegin(GL_TRIANGLES); //Toma la tercia de vértices y los rellena formando el triángulo
			glPointSize(20.0f);
			glVertex3f(0.0f, 0.0f, -1.0f);
			glVertex3f(3.0f, 0.0f, -1.0f);
			glVertex3f(5.0f, 3.0f, -1.0f);
			glEnd();
			*/
			/*
				glBegin(GL_QUADS); //Polígonos, en 2D no influye tanto el orden de los vértices
				glPointSize(20.0f);
				glVertex3f(-1.5f, -1.5f, -1.0f);
				glVertex3f(1.5f, -1.5f, -1.0f);
				glVertex3f(1.5f, 1.5f, -1.0f);
				glVertex3f(-1.5f, 1.5f, -1.0f);
				glEnd();
				*/

//Ejercicio: CG BM
	glBegin(GL_QUADS); // 4 vértices para formar el polígono
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
	glOrtho(-10,10,-10,10,0.1,2); //parámetros de visión total de mi ventana; Los dibujos que hago deben estar dentro de ese rango

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
  glutInitWindowSize  (500, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 2"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut función de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}

