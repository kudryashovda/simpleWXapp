#ifndef MAIN_H
#define MAIN_H

#include <wx/wx.h>

class MyApp : public wxApp
{
public:
	virtual bool OnInit();
};

#endif /* MAIN_H */


/*
* Here string at the top and botton are used
* to avoid of the .h file double inclusion.

 * Next we define class MyApp which has only 
 * one method - bool OnInit(). 
 * virtual - because it was implemented earlier
*/