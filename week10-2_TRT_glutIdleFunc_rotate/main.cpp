#include <GL/glut.h>
void myBody(){
    glColor3f(1,0,0);///紅色的身體
    glutWireCube(0.6);///方塊
}
void myArm(){
    glColor3f(0,1,0);///綠色手臂
    glScalef(1.5,0.5,0.5);///寬變1.5倍,高度變0.5倍
    glutWireCube(0.3);///方塊
}
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        ///glTranslatef(-0.6,+0.3,0);
        myBody();
    glPopMatrix();
    glPushMatrix();
        ///glRotatef(angle++,0,0,1);
        glRotatef(angle++,0,0,1);
        myArm();
    glPopMatrix();
    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week09-2 glutSolid");
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}
