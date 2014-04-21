#ifndef SCRIBBLEFRAME_INCLUDED
#define SCRIBBLEFRAME_INCLUDED

#include "ClassPad.h"

///////////////////////////////////////////////////////////////////
//
// ScribbleFrame - Main Application Frame
//
///////////////////////////////////////////////////////////////////

class ScribbleFrame: public CPMainFrame
{
public:
	ScribbleFrame(PegRect &Rect);
	virtual PegMenuDescriptionML* GetMenuDescriptionML();
};


#endif


