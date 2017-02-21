#pragma once

#include <QWidget>

class QPushButton;

class Window : public QWidget 
{
	Q_OBJECT

public:
	explicit Window(QWidget * parent = Q_NULLPTR);

private slots:
	void slotButtonClicked(bool checked);

private:
	QPushButton* m_button;
};
