#include "FragChangeColor.h"
#include <core/application.h>

Tut03FragChangeColor::Tut03FragChangeColor()
{
}

void Tut03FragChangeColor::Init()
{
    Array<IDrawable::Vertex> vertices;
    Array<unsigned int> indices;
    Array<String> shaders(2);

    vertices.Add(IDrawable::Vertex(glm::vec3( 0.0f,  1.0f, -1.0f), glm::vec4(1.0f, 0.0f, 0.0f, 1.0f)));
    vertices.Add(IDrawable::Vertex(glm::vec3( 1.0f, -1.0f, -1.0f), glm::vec4(0.0f, 1.0f, 0.0f, 1.0f)));
    vertices.Add(IDrawable::Vertex(glm::vec3(-1.0f, -1.0f, -1.0f), glm::vec4(1.0f, 0.0f, 1.0f, 1.0f)));

    IFile *simpleVertShader = filesystem->Open(URL("data/VertexColors.vert"), PLAIN_TEXT);
    IFile *simpleFragShader = filesystem->Open(URL("data/VertexColors.frag"), PLAIN_TEXT);

    shaders.Insert(simpleVertShader->Read(), VERTEX_SHADER);
    shaders.Insert(simpleFragShader->Read(), FRAGMENT_SHADER);

    delete simpleVertShader;
    delete simpleFragShader;

    triangle = renderer->CreateDrawable(vertices, indices, shaders, NULL);
    description = new Text("TUT03 - PRESS SPACE FOR NEXT SCENE");

    camera = new Camera();

    components.Add(description);
    components.Add(camera);
}

void Tut03FragChangeColor::Update()
{
    renderer->Draw(triangle);

    if (input.Pressed(input.Key.SPACE))
    {
        Application::NextScene();
    }
}

void Tut03FragChangeColor::UpdateAfterPhysics()
{
}

/* Original tut02 code Tut03FragChangeColor.cpp

#include <string>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <glload/gl_3_3.h>
#include <GL/freeglut.h>
#include "../framework/framework.h"

GLuint theProgram;
GLint elapsedTimeUniform;

void InitializeProgram()
{
	std::vector<GLuint> shaderList;

	shaderList.push_back(Framework::LoadShader(GL_VERTEX_SHADER, "data/calcOffset.vert"));
	shaderList.push_back(Framework::LoadShader(GL_FRAGMENT_SHADER, "data/calcColor.frag"));

	theProgram = Framework::CreateProgram(shaderList);

	elapsedTimeUniform = glGetUniformLocation(theProgram, "time");

	GLint loopDurationUnf = glGetUniformLocation(theProgram, "loopDuration");
	GLint fragLoopDurUnf = glGetUniformLocation(theProgram, "fragLoopDuration");

	glUseProgram(theProgram);
	glUniform1f(loopDurationUnf, 5.0f);
	glUniform1f(fragLoopDurUnf, 10.0f);
	glUseProgram(0);
}

const float vertexPositions[] = {
	0.25f, 0.25f, 0.0f, 1.0f,
	0.25f, -0.25f, 0.0f, 1.0f,
	-0.25f, -0.25f, 0.0f, 1.0f,
};

GLuint positionBufferObject;
GLuint vao;


void InitializeVertexBuffer()
{
	glGenBuffers(1, &positionBufferObject);

	glBindBuffer(GL_ARRAY_BUFFER, positionBufferObject);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertexPositions), vertexPositions, GL_STREAM_DRAW);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
}

//Called after the window and OpenGL are initialized. Called exactly once, before the main loop.
void init()
{
	InitializeProgram();
	InitializeVertexBuffer();

	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);
}

//Called to update the display.
//You should call glutSwapBuffers after all of your rendering to display what you rendered.
//If you need continuous updates of the screen, call glutPostRedisplay() at the end of the function.
void display()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	glUseProgram(theProgram);

	glUniform1f(elapsedTimeUniform, glutGet(GLUT_ELAPSED_TIME) / 1000.0f);

	glBindBuffer(GL_ARRAY_BUFFER, positionBufferObject);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 4, GL_FLOAT, GL_FALSE, 0, 0);

	glDrawArrays(GL_TRIANGLES, 0, 3);

	glDisableVertexAttribArray(0);
	glUseProgram(0);

	glutSwapBuffers();
	glutPostRedisplay();
}

//Called whenever the window is resized. The new window size is given, in pixels.
//This is an opportunity to call glViewport or glScissor to keep up with the change in size.
void reshape (int w, int h)
{
	glViewport(0, 0, (GLsizei) w, (GLsizei) h);
}

//Called whenever a key on the keyboard was pressed.
//The key is given by the ''key'' parameter, which is in ASCII.
//It's often a good idea to have the escape key (ASCII value 27) call glutLeaveMainLoop() to 
//exit the program.
void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27:
		glutLeaveMainLoop();
		return;
	}
}


unsigned int defaults(unsigned int displayMode, int &width, int &height) {return displayMode;}
*/
