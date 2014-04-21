#include "ScribbleFrame.h"


//////////////////////////////////////////////////////////////////////////////////

// CP Menu for application
static PegMenuDescriptionML ScribbleOPMenu[] = {
	{ NULL,			CMN_MENU_OP_CLOSE,	FWM_CLOSE,					AF_ENABLED,		NULL },
	DECLARE_MENU_LINE
	{"Scribble",	CMN_NO_ID,			FWM_ACTIVATE_MAIN_WINDOW,	AF_ENABLED,		NULL},
	DECLARE_MENU_LINE
	{NULL,			SYS_CMN_KEY,		FWM_KEYPAD,					AF_ENABLED,		NULL },
	DECLARE_MENU_LINE
	DECLARE_MENU_SETTINGS
	{NULL,			CMN_NO_ID,			0,							0,				NULL }
};

// Application specific menu. This menu will appear with all module window menus
static PegMenuDescriptionML ScribbleFrameMenu[] = {
	{ NULL,			CMN_MENU_OP,	IDB_SETTINGS_MENU,	AF_ENABLED, ScribbleOPMenu },
	{ NULL,			CMN_NO_ID,		0,				0,					NULL }
};

//-----------------------------------------------------------------
// Constructor
ScribbleFrame::ScribbleFrame(PegRect &Rect) : CPMainFrame(Rect)
{
}
//-----------------------------------------------------------------
// Defines the top menu.  The Mainframe manages showing and hiding menus when 
// the window becomes active or inactive. The menu defined by the MainFrame will
// be merged with the menu for each ModuleWindow
PegMenuDescriptionML* ScribbleFrame::GetMenuDescriptionML()
{
	return ScribbleFrameMenu;
}



