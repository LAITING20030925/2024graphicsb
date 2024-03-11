#include <GL/glut.h>
float teapotX = 0.5,teapotY = 0;
float angle = 0;
float s = 0.3;///�@�}�l�O�쥻��1��
void display()
{///�]�w "�M�I��" �C��
    glClearColor(1,1,0.9,1);///�C��R,G,B,A
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///�M�I��
    glColor3f(0,1,0);///3F�N�OR,G,B
    glPushMatrix();///�ƥ��x�}
        glTranslatef(teapotX,teapotY,0);
        glRotatef(angle++,0,0,1);
        glScalef(s,s,s);///�Y��s��
        glutSolidTeapot( 0.3 );
    glPopMatrix();
    glutSwapBuffers();
}
void motion(int x,int y)
{
    s = 1 + (x-150)/150.0;///�|�ܤj�ܤp���ܼ� 0-1
    display();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week04_translate_rotate_scale");
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMotionFunc(motion);
    glutMainLoop();
}
