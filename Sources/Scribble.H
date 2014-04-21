#ifndef SCRIBBLE_INCLUDED
#define SCRIBBLE_INCLUDED

#include "ClassPad.h"
#include "Language.h"

///////////////////////////////////////////////////////////////////
// Button IDs used by the Scribble Application
#define IDB_BASE	2001
enum ScribbleButtonIds
{
    IDB_CLEAR = IDB_BASE,
    IDB_COUNT,
    IDB_SCRIBBLE_SAVE,
	IDB_SCRIBBLE_LOAD
};

///////////////////////////////////////////////////////////////////

// Custom application messages
enum ScribbleMessages {
    // message sent after window is resized or moved
	PM_SCRIBBLE_SIZE_CHANGED = FIRST_USER_MESSAGE
};

///////////////////////////////////////////////////////////////////

#endif

