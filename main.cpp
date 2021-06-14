#include "main.h"
#include "mainframe.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
	MainFrame *frame = new MainFrame(_("Simple wxApp"));
	frame->Show(true);

	return true;
}

/*
 * It is better to use such construction,
 * because your project may grow exponetially
 * and later will be difficult to search bugs.
 * 
 * Here MainFrame is a class decribed in mainframe.h
 * and implemented in mainframe.cpp.
 * Here is only two tasks - to run class's constructor
 * and to call Show(true) method of the class
 * Next comments will be in mainframe.cpp file






*/