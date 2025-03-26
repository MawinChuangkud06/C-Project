// standard lib
#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<memory>
#include<thread>
// graphic lib
#include<glad/glad.h>
#include<GLFW/glfw3.h>
// define.
#define ll long long 
#define ull unsigned long long
#define FOR_LOOP(len) for (int i =0;i<len;i++)
#ifndef WINDOW
#define WINDOW "WIN32"

int main()
{
	glfwInit();

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_VERSION_MINOR, 3);

	GLFWwindow* window = glfwCreateWindow(500, 500, "TestOpenGL", NULL, NULL);
	if (window == NULL)
	{
		std::cout << "Failed To create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	gladLoadGL();
	glViewport(0, 0, 800, 800);

	glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glfwSwapBuffers(window);

	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
	}
	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}

#endif
