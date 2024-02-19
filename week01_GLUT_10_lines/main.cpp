#include <GL/glut.h> ///使用 GLUT 外掛

void display()
{
    glutSolidTeapot( 0.3 );
    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///初始化
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("GLUT Shapes");///建視窗

    glutDisplayFunc(display);///設定要畫圖的

    glutMainLoop();///主要迴圈
}
