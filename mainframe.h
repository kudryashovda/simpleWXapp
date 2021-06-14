#ifndef MAINFRAME_H
#define MAINFRAME_H

#include <wx/wx.h>

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString &title);
private:
	wxPanel *pnl;
	wxButton *btn1, *btn2;
	wxBoxSizer *mainSizer;
	wxTextCtrl *edit1, *edit2, *edit3;

	void onPressBtn1(wxMouseEvent& event);
	void onPressBtn2(wxMouseEvent& event);
};

#endif /* MAINFRAME_H */
