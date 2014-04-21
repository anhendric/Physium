#ifndef SCRIBBLE_WINDOW_INCLUDED
#define SCRIBBLE_WINDOW_INCLUDED
#include "ClassPad.h"
#include "DrawWindow.h"
#define btntrai 2001
#define btnphai 2002
#define btnmai 2004
#define nmetal 2005
#define metal 2006
#define btnsrc 2007
#define ID_1 2008
#define ID_2 2009
#define btnall 2010
//#define IDB_MODULE_MAIN_WINDOW TYPE_MOD_RUNCAS


///////////////////////////////////////////////////////////////////
//
//
// This Example contains four classes:
// 
//	1.  ScribbleDocument	- Contains the data used in the applications (point
//							  locations and point count.) 
//
//	2.  ScribbleWindow		- The main module window
//
//	3.  DrawWindow			- The window in which the points are drawn.  
//							  ScribbleWindow is a viewport for the DrawWindow.  
//
//	4.  CounterWindow		- A separate window launched to display the point count
//

///////////////////////////////////////////////////////////////////
//
// ScribbleWindow - Main Module Window
//
///////////////////////////////////////////////////////////////////

class ScribbleWindow: public CPModuleWindow, public CPUndoThing
{
protected:
//  child window in charge of drawing the points
	DrawWindow* m_win;
    
public:

//  the Scribble Window has no invoking application
//	 it references a ScribbleDocument which allows for live updating of the point count
	ScribbleWindow(PegRect rect, ScribbleDocument * doc, CPMainFrame* frame);
	//CPModuleWindow *ReplaceModuleWindow(SIGNED iNewWindowID, void *pVoid = 0, BOOL bActive = TRUE);

// Overwritten draw function Draws the frame, UI, and all points that have been added	
	virtual void Draw();
	virtual void disp(int i);
	virtual int page();
	virtual int type();
	virtual void Search();

// Adds buttons to the app UI area to Clear the screen	
	virtual void AddUI();

// Gets messages from the App UI.  
	virtual SIGNED Message(const PegMessage &Mesg);

// Returns a pointer to the description of the Module's portion of the menu	
	virtual PegMenuDescriptionML* GetMenuDescriptionML(); 

// Undo Functions
	virtual void Undo();

// COUNT Button Click Handler
	void OnCount();
	
// Change StatusBar	
	void Status(int i);
};

#endif

