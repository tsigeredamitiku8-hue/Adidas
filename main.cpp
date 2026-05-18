#include <GL/glut.h>

void display();
void keyboard(unsigned char key, int x, int y);
void passiveMotion(int mouseX, int mouseY);
void init();

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

void init() {
    gluOrtho2D(-1, 1, -1, 1);
}