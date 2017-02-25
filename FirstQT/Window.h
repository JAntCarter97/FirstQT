#pragma once

#include <QWidget>

class QPushButton;

class Window : public QWidget 
{
	Q_OBJECT

public:
	explicit Window(QWidget * parent = Q_NULLPTR);

signals:
	void counterReached();

private slots:
	void slotButtonClicked(bool checked);

private:
	int m_counter;
	QPushButton* m_button;
	QPushButton* m_buttonInfo;
	QPushButton* m_buttonQuit;

};
