#include "mainframe.h"

/* Here we create our main form (frame)
 * The first function (method) is a constructor
 * that was called in main.cpp:
 * Remember ... new MainFrame(_("Simple wxApp"));
 *
 * Next we have to define our frame size, align it
 * create status bar if needed
 *
 * Form composition starts with panel creation
 * Here pnl is a pointer to wxPanel object
 * All pointer here used are defined in mainframe.h
 * to use it across all MainFrame methods
 *
 * new pnl object mast have a parent - this
 * oll other elements (widgets) placed on pnl
 * should have pnl parent
 *
 * Buttons have to call events. This events we have to
 * assign to the button:
 * btn1->Bind (wxEVT_LEFT_UP, &MainFrame::onPressBtn1, this);
 * wxEVT_LEFT_UP - event when left button upped
 * &MainFrame::onPressBtn1 - our defined function
 *
 * Sizer is a way to dynamically resize elements inside the frame
 * In mainSizer = new wxBoxSizer(wxHORIZONTAL);
 * wxHORIZONTAL - elements added wil be placed horizontally
 * Their proportions will be defined by int number:
 * 0 - the element won't be resized horizontally
 * if ( > 0) - will be a proportion 1:1 or 2:1 or 10:1 etc
 *
 * Their vertical size (height) will be defined by
 * frame size (min/max) or by other parent sizer
 * wxEXPAND - do expand vertically if there ia free space
 * wxALL - means make the all border around = ",5"(px)
 * 
 * Next we set our sizer on panel
 * Fit window size
 * and lock resize if needed
*/


MainFrame::MainFrame(const wxString &title):wxFrame(NULL, wxID_ANY, title)
{
	CreateStatusBar(1);
	SetStatusText(wxT("Welcome"), 0);

	pnl = new wxPanel(this, wxID_ANY);

	btn1 = new wxButton(pnl, wxID_ANY, "Button1");
	btn2 = new wxButton(pnl, wxID_ANY, "Button2");

	btn1->Bind (wxEVT_LEFT_UP, &MainFrame::onPressBtn1, this);
	btn2->Bind (wxEVT_LEFT_UP, &MainFrame::onPressBtn2, this);

	edit1 = new wxTextCtrl(pnl, wxID_ANY, wxT("First value:"));
	edit2 = new wxTextCtrl(pnl, wxID_ANY, wxT("Second value:"));
	edit3 = new wxTextCtrl(pnl, wxID_ANY, wxT("Third value:"));

	mainSizer = new wxBoxSizer(wxHORIZONTAL);

	mainSizer->Add(btn1, 0,  wxALL, 5);
	mainSizer->Add(edit1, 0, wxEXPAND | wxALL, 5);
	mainSizer->Add(edit2, 0, wxEXPAND | wxALL, 5);
	mainSizer->Add(edit3, 0, wxEXPAND | wxALL, 5);
	mainSizer->Add(btn2, 0, wxALL, 5);

	pnl->SetSizer(mainSizer);

	mainSizer->Fit(this); // resize (fit) main window based on elements inside sizer

	wxSize ws = this->GetSize();

	SetMinSize(ws);
	SetMaxSize(ws);
	Centre();
}

void MainFrame::onPressBtn1(wxMouseEvent& event)
{
	event.Skip(); // if skip it - bugs with text selection appear
	// your code
}

void MainFrame::onPressBtn2(wxMouseEvent& event)
{
	event.Skip(); // if skip it - bugs with text selection appear
	// your code
}
