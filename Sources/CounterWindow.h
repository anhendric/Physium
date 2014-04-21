#ifndef COUNTER_WINDOW_INCLUDED
#define COUNTER_WINDOW_INCLUDED
#define btnsave 3001
#define btnlist 3002
#define btnmain 3003
#define IDB_MODULE_MAIN_WINDOW TYPE_MOD_RUNCAS

#include "ScribbleDocument.h"

///////////////////////////////////////////////////////////////////
//
// CounterWindow - Secondary Module Window
//
///////////////////////////////////////////////////////////////////
CPModuleWindow *ReplaceModuleWindow(SIGNED iNewWindowID, void *pVoid = 0, BOOL bActive = TRUE);
class CounterWindow: public CPModuleWindow
{
public:
// The CounterWindow is invoked by the ScribbleWindow.  
	CounterWindow(PegRect rect, CPModuleWindow* invoking_window, ScribbleDocument * doc, CPMainFrame* frame);
	
// Overwritten Draw Function draws the window, and adds the point count
	virtual void Draw();
	virtual void disp(int i);	
	virtual void liste();
	virtual void AddUI();
	virtual void SaveVar();
	virtual void seemain();

// Gets messages from the App UI.  
	virtual SIGNED Message(const PegMessage &Mesg);
	virtual PegMenuDescriptionML* GetMenuDescriptionML(); 


// Function to allow for live updating of data
	virtual void OnDataChanged();
};

#endif
