#include <stdlib.h>
#include <GL/glut.h>
void init(void);
void tampil(void);
void mouse(int button, int state, int x, int y);
void ukuran(int, int);
void mouseMotion(int x, int y);
int is_depth;
float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
static float abcd = 0, defg = 0, hijk = 0,a = 0, b = 0,c = -10;

void idle()
{
    if (!mouseDown)
    {
        xrot += 0.3f;
        yrot += 0.4f;
    }
glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
        {
            mouseDown = true;
            xdiff = x - yrot;
            ydiff = -y + xrot;
        }
    else
    mouseDown = false;
}

void mouseMotion(int x, int y)
{
    if(mouseDown)
    {
        yrot = x - xdiff;
        xrot = y + ydiff;
        glutPostRedisplay();
    }
}



void coba(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int
z1,float z2,float z3){
glColor3f(1,0.5,0);
glVertex3d(x1,y1,z2);
glVertex3d(x2,y2,z2);
glVertex3d(x3,y3,z2);
glVertex3d(x4,y4,z2);
glColor3f(0.1,0,0);
glVertex3d(x2,y2,z2);
glVertex3d(x2,y2,z1);
glVertex3d(x3,y3,z1);
glVertex3d(x3,y3,z2);
glColor3f(1,0.5,0);
glVertex3d(x1,y1,z1);
glVertex3d(x2,y2,z1);
glVertex3d(x3,y3,z1);
glVertex3d(x4,y4,z1);
glColor3f(0.1,0,0);
glVertex3d(x1,y1,z2);
glVertex3d(x1,y1,z1);
glVertex3d(x4,y4,z1);
glVertex3d(x4,y4,z2);
glColor3f(1,0.5,1);
glVertex3d(x1,y1,z2);
glVertex3d(x2,y2,z2);
glVertex3d(x2,y2,z1);
glVertex3d(x1,y1,z1);
glColor3f(1,0.5,0);
glVertex3d(x3,y3,z2);
glVertex3d(x4,y4,z2);
glVertex3d(x4,y4,z1);
glVertex3d(x3,y3,z1);
}
void cobain(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int
y4,float z1,float z2,float z3){
glVertex3d(x3,y3,z1);
glVertex3d(x3,y3,z2);
glVertex3d(x3,y1,z3);
glColor3f(1,0.5,0);
glVertex3d(x4,y4,z2);
glVertex3d(x4,y4,z1);
glVertex3d(x4,y1,z3);
}
void cobaini(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int
y4,float z1,float z2,float z3){
glColor3f(0.1,0,0);
glVertex3d(x4,y4,z1);
glVertex3d(x3,y3,z1);
glVertex3d(x3,y1,z3);
glVertex3d(x4,y1,z3);
glColor3f(0.1,0,0);
glVertex3d(x3,y3,z2);
glVertex3d(x4,y4,z2);
glVertex3d(x4,y1,z3);
glVertex3d(x3,y1,z3);
}
void init(void)
{
 glClearColor (1.0, 1.0, 1.0, 0.0);
 glOrtho(-12,12,-6,6,-35,35);
 glEnable(GL_DEPTH_TEST);
 glShadeModel (GL_SMOOTH);
 glMatrixMode (GL_PROJECTION);
 glLoadIdentity ();
 gluPerspective(80.0,2.2, 1.0, 20.0);
 glMatrixMode (GL_MODELVIEW);
}
void display(void)
{
if (is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
        glClear(GL_COLOR_BUFFER_BIT);
glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glLoadIdentity ();
gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
glRotatef(xrot, 1.0f, 0.0f, 0.0f);
glRotatef(yrot, 0.0f, 1.0f, 0.0f);
glPushMatrix();
glTranslatef(a,b,c);
glRotatef(hijk,1,0,0);
glRotatef(abcd,0,1,0);
glRotatef(defg,0,0,1);
glBegin(GL_QUADS);
//Rumah
coba(-8,-2,8,-2,8,2,-8,2,-5,3,0);//rumah
coba(2,-2,8,-2,8,2,2,2,-5,4,0);//kamar
coba(-8,-2,-7,-2,-7,0,-8,0,-5,5.5,0);
cobaini(-3,5,0,0,8,2,-8,2,-5.5,4.5,0);
glColor3f(1,0.5,0);//plafon depan
glVertex3d(8,1.8,-3);
glVertex3d(-8,1.8,-3);
glVertex3d(-8,1.8,4.5);
glVertex3d(8,1.8,4.5);
glVertex3d(8,1.8,4.5);
glVertex3d(-8,1.8,4.5);
glVertex3d(-8,2,4.5);
glVertex3d(8,2,4.5);
glColor3f(0.1,0,0);//plafon belakang
glVertex3d(8,1.8,-5.5);
glVertex3d(-8,1.8,-5.5);
glVertex3d(-8,1.8,4.5);
glVertex3d(8,1.8,4.5);
glVertex3d(8,1.8,-5.5);
glVertex3d(-8,1.8,-5.5);
glVertex3d(-8,2,-5.5);
glVertex3d(8,2,-5.5);
glVertex3d(4,-0.5,4.1);//jendela rumah
glVertex3d(5.2,-0.5,4.1);
glVertex3d(5.2,1,4.1);
glVertex3d(4,1,4.1);
glVertex3d(2.7,-0.5,4.1);//jendela rumah2
glVertex3d(3.7,-0.5,4.1);
glVertex3d(3.7,1,4.1);
glVertex3d(2.7,1,4.1);
glVertex3d(5.4,-0.5,4.1);//jendela rumah3
glVertex3d(6.6,-0.5,4.1);
glVertex3d(6.6,1,4.1);
glVertex3d(5.4,1,4.1);
glVertex3d(-2,-2,3.05);//pintu depan
glVertex3d(2,-2,3.05);
glVertex3d(2,1.3,3.05);
glVertex3d(-2,1.3,3.05);
glVertex3d(-2,-2,-5.05);//pintu belakang
glVertex3d(2,-2,-5.05);
glVertex3d(2,1,-5.05);
glVertex3d(-2,1,-5.05);
glVertex3d(-3.5,-1,3.05);//jendela rmh1 depan
glVertex3d(-2.5,-1,3.05);
glVertex3d(-2.5,1.3,3.05);
glVertex3d(-3.5,1.3,3.05);
glVertex3d(-5,-1,3.05);//jendela rmh2 depan
glVertex3d(-4,-1,3.05);
glVertex3d(-4,1.3,3.05);
glVertex3d(-5,1.3,3.05);
glVertex3d(5,-1,-5.05);//jendela rmh2 belakang
glVertex3d(2.5,-1,-5.05);
glVertex3d(2.5,1,-5.05);
glVertex3d(5,1,-5.05);
glEnd();
glBegin(GL_TRIANGLES);
cobain(-3,5,0,0,8,2,-8,2,-5.5,4.5,0);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex3d(8,1.8,4.5);
glVertex3d(-8,1.8,4.5);
glVertex3d(-8,1.8,-5.5);
glVertex3d(8,1.8,-5.5);
glColor3f(1,0,0);
glVertex3d(-4.5,-1,-5.05);
glVertex3d(-4.5,1,-5.05);
glVertex3d(4.5,-1,-5.05);
glVertex3d(4.5,1,-5.05);
glEnd();
glutSwapBuffers();
}
void keyboard(unsigned char key, int x, int y)
{
 switch (key) {
case 'x':
hijk=hijk+5;
 if (hijk>360) hijk=0;
 glutPostRedisplay();
 break;
case 'y':
 abcd=abcd+5;
 if (abcd>360) abcd=0;
 glutPostRedisplay();
 break;
 case 'z':
 defg = defg+1;
 if (defg>360) defg=0;
 glutPostRedisplay();
 break;
case 'w':
b = b + 1;
glutPostRedisplay();
break;
case 's':
b = b - 1;
glutPostRedisplay();
break;
case 'a':
a = a + 1;
glutPostRedisplay();
break;
case 'd':
a = a - 1;
glutPostRedisplay();
break;
case 'q':
c = c + 1;
glutPostRedisplay();
break;
case 'e':
c = c - 1;
glutPostRedisplay();
break;
case '5':
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
 }
}
int main(int argc, char** argv)
{
 glutInit(&argc, argv);
 glutInitDisplayMode (GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
 glutInitWindowSize (500, 500);
 glutInitWindowPosition (100, 100);
 glutCreateWindow("Yonatan Surya Kristama - 672018217");
 init();
 glutDisplayFunc(display);
 glutKeyboardFunc(keyboard);
 glutMouseFunc(mouse);
 glutMotionFunc(mouseMotion);
 glutIdleFunc(display);
 glutMainLoop();
 return 0;
}
