#include <QApplication>
#include <QProgressBar>
#include <QSlider> 
#include <QPushButton>

#include "Window.h"

int main(int argc, char *argv[])
{	
	QApplication app(argc, argv);
	
	Window window;
	window.show();

	return app.exec();
}
