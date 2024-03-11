#include <GL/glut.h>
float s = 1;///一開始是原本的1倍
void display()
{///設定 "清背景" 顏色
    glClearColor(1,1,0.9,1);///顏色R,G,B,A
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///清背景
    glColor3f(0,1,0);///3F就是R,G,B
    glPushMatrix();///備份矩陣
        glScalef(s,s,s);///縮放s倍
        glutSolidTeapot( 0.3 );
    glPopMatrix();
    glutSwapBuffers();
}
void motion(int x,int y)
{
    s = 1 + (x-150)/150.0;///會變大變小的變數 0-1
    display();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week04_mouse_glScalef");
    glutDisplayFunc(display);
    glutMotionFunc(motion);
    glutMainLoop();
}
