
#include "ScribbleWindow.h"
#include "ScribbleFrame.h"
/*--------------------------------------------------------------------------*/
void PegAppInitialize(PegPresentationManager *pPresentation)
{
	// create some simple Windows: 
	
	PegRect Rect;
	Rect.Set(MAINFRAME_LEFT, MAINFRAME_TOP, MAINFRAME_RIGHT, MAINFRAME_BOTTOM);

	CPMainFrame *mw = new ScribbleFrame(Rect);

	// Create the Scribble Document
	ScribbleDocument * sdoc = new ScribbleDocument(mw);

	// Create the Scribble Window
	PegRect ChildRect = mw->FullAppRectangle();
	ScribbleWindow* swin = new ScribbleWindow(ChildRect,sdoc,mw);
	mw->SetTopWindow(swin);

	// Need to set a main window for this module.  In our case, it is the scribble window
	mw->SetMainWindow(swin);

	pPresentation->Add(mw);
}

/*--------------------------------------------------------------------------*/

/*extern "C" char *ExtensionGetLang(ID_MESSAGE MessageNo)
{
	return "";
}*/

