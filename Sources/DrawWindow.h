#ifndef DRAWWINDOW_INCLDUED
#define DRAWWINDOW_INCLDUED

#include "ScribbleDocument.h"

///////////////////////////////////////////////////////////////////
//
// DrawWindow - Child Window that manages drawing
//
///////////////////////////////////////////////////////////////////

class DrawWindow: public CPWindow
{
protected:
	// Data abstracted into Document class
	ScribbleDocument * m_doc;

public:
	// Constructor takes a window rectangle and a pointer to the document	
	DrawWindow(PegRect rect, ScribbleDocument * doc);

	//Overwritten function to Draw ScribbleDocument
	virtual void Draw();

	// Overwritten function to handle pointer events
	virtual void OnLButtonUp(const PegPoint &p);
	virtual void OnPointerMove(const PegPoint &p);	
};

#endif
