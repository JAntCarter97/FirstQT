#include <QApplication>
#include <QProgressBar>
#include <QSlider> 

#include "Window.h"

// Text stream is text-codec aware
//QTextStream cout(stdout, QIODevice::WriteOnly);

int main(int argc, char *argv[])
{	
	QApplication app(argc, argv);
	
	Window window;

	// Create Progress Bar
	// Range set from 0 to 100 and starting at a value of 0
	// /QProgressBar* progressBar = new QProgressBar(&window);
	//progressBar->setRange(0, 100);
	//progressBar->setValue(0);
	//progressBar->setGeometry(10, 10, 180, 30);

	// Create Horizontal Slider
	// Range set from 0 to 100 and starting at a value of 0
	// /QSlider* slider = new QSlider(&window);
	//slider->setRange(0, 100);
	//slider->setValue(0);
	//slider->setGeometry(10, 40, 145, 20);
	//slider->setOrientation(Qt::Horizontal);

	window.show();

	//QObject::connect(slider, SIGNAL(valueChanged(int value)), progressBar, SLOT(setValue(int value)));

	return app.exec();
}
