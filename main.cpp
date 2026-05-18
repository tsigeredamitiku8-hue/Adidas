#include <GL/glut.h>

float angle = 0.0f;
float scaleValue = 1.0f;
float tx = 0.0f;
float ty = 0.0f;

bool isHovered = false;

void drawLogo() {

    if (isHovered)
        glColor3f(1.0f, 1.0f, 1.0f);
    else
        glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_QUADS);
        glVertex2f(-0.7f, -0.6f);
        glVertex2f(-0.33f, -0.6f);
        glVertex2f(-0.55f, -0.15f);
        glVertex2f(-0.75f, -0.45f);
    glEnd();

    glBegin(GL_QUADS);
        glVertex2f(-0.2f, -0.6f);
        glVertex2f(0.2f, -0.6f);
        glVertex2f(-0.25f, 0.4f);
        glVertex2f(-0.53f, 0.1f);
    glEnd();

    glBegin(GL_QUADS);
        glVertex2f(0.35f, -0.6f);
        glVertex2f(0.8f, -0.6f);
        glVertex2f(0.1f, 0.9f);
        glVertex2f(-0.2f, 0.6f);
    glEnd();
}

void display();
void keyboard(unsigned char key, int x, int y);
void passiveMotion(int mouseX, int mouseY);
void init();


void init() {
    gluOrtho2D(-1, 1, -1, 1);
}

int main(int argc, char** argv) {

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(700, 500);

    glutCreateWindow("Adidas Logo - Team Project");

    init();

    glutDisplayFunc(display);

    glutKeyboardFunc(keyboard);

    glutPassiveMotionFunc(passiveMotion);

    glutMainLoop();

    return 0;
}




