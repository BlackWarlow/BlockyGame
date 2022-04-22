#ifndef CORE_WINDOW_H_
#define CORE_WINDOW_H_
#include "core.h"

namespace Minecraft
{
	struct Window
	{
		GLFWwindow* nativeWindow;
		int windowWidth;
		int windowHeight;

		void installMainCallbacks();

		void close();

		static Window* createWindow(int width, int height, const char* title, bool fullScreenMode=false);
		static void freeWindow(Window* window);
	};
}

#endif
