#include "Window.h"
#include <QApplication>
#include <QPushButton>

Window::Window(QWidget * parent) : QWidget(parent)
{
	// Set size of the window
	setFixedSize(400, 160);

	// Create and position the button
	m_button = new QPushButton("Hello World", this);
	m_button->setGeometry(10, 10, 80, 30);

	m_buttonInfo = new QPushButton("Info", this);
	m_buttonInfo->setGeometry(90, 10, 80, 30);

	m_buttonQuit = new QPushButton("Quit", this);
	m_buttonQuit->setGeometry(90, 40, 80, 30);

	QPalette buttonPalette = m_button->palette();
	buttonPalette.setColor(QPalette::ButtonText, QColor(Qt::white));
	buttonPalette.setColor(QPalette::Button, QColor(Qt::black));
	m_button->setAutoFillBackground(true);
	m_button->setPalette(buttonPalette);
	m_button->update();

	m_button->setCheckable(true);
	m_buttonInfo->setCheckable(true);
	m_buttonQuit->setCheckable(true);

	m_counter = 0;
	
	connect(m_buttonInfo, SIGNAL(clicked(bool)), QApplication::instance(), SLOT(aboutQt()));
	connect(m_buttonQuit, SIGNAL(clicked(bool)), QApplication::instance(), SLOT(quit()));
	connect(m_button, SIGNAL(clicked(bool)), this, SLOT(slotButtonClicked(bool)));
	connect(this, SIGNAL(counterReached()), QApplication::instance(), SLOT(quit()));
}

void Window::slotButtonClicked(bool checked)
{
	if (checked)
		m_button->setText("Checked");
	else
		m_button->setText("Hello World");
	
	m_counter++;
	if (m_counter == 10)
		emit counterReached();
}
