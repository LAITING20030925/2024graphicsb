#include <GL/glut.h> ///�ϥ� GLUT �~��

void display()
{
    glutSolidTeapot( 0.3 );
    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///��l��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("GLUT Shapes");///�ص���

    glutDisplayFunc(display);///�]�w�n�e�Ϫ�

    glutMainLoop();///�D�n�j��
}
