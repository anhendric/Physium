
#include "ScribbleWindow.h"

#define POINT_WIDTH	2	// Points are draw as 2x2 squares
extern PegBitmap gbtraiBitmap,gbphaiBitmap,gbmaiBitmap,gbtraimBitmap,gbmaimBitmap, gblantBitmap, gbpictBitmap, gbpictmBitmap;
///////////////////////////////////////////////////////////////////
//
// DrawWindow - Child Window that manages drawing
//
// DrawWindow Functions
///////////////////////////////////////////////////////////////////

// Constructor
// Create window that does not have a frame (sytle is FF_NONE).
DrawWindow::DrawWindow(PegRect rect, ScribbleDocument * doc):CPWindow(rect,FF_NONE)
{
	m_doc = doc; 
}

//-----------------------------------------------------------------
void DrawWindow::OnLButtonUp(const PegPoint &p)
{
    //int count = m_doc->GetCount();
	//PegPoint last = m_doc->GetPoint(count-1);
	ScribbleWindow * parent = (ScribbleWindow*) Parent();
	int i,trai=parent->page();
    if (trai==0)
    {
    i=int((p.x)/8)+18*int((p.y-5)/8);    
    }    
    else
    {
    i=int((p.x-12)/23)+6*int((p.y-10)/20);
    }
    parent->disp(i);
}

//-----------------------------------------------------------------
void DrawWindow::OnPointerMove(const PegPoint & p)
{
	ScribbleWindow * parent = (ScribbleWindow*) Parent();
	int i,trai=parent->page();
    if (trai==0)
    {
    i=int((p.x)/8)+18*int((p.y-1)/8);    
    }    
    else
    {
    i=int((p.x-12)/23)+6*int((p.y-10)/20);
    }    
    parent->Status(i);
}

//-----------------------------------------------------------------
void DrawWindow::Draw()
{
	ScribbleWindow * parent = (ScribbleWindow*) Parent();
    int trai=parent->page();
    int autre=parent->type();
    CPWindow::Draw();
	//int pointcount = m_doc->GetCount();
	PegRect r = mReal;
	PegPoint p={r.wLeft,r.wTop};
	if (autre==0)
	{
	if (trai==0) Bitmap(p,&gbpictBitmap);
	else if (trai==1) Bitmap(p,&gbtraiBitmap);
	else if (trai==2) Bitmap(p,&gbphaiBitmap);
	else if (trai==3) Bitmap(p,&gbmaiBitmap);
	else if (trai==4) Bitmap(p,&gblantBitmap);
    }
    else if (autre==1)
    {
    if (trai==0) Bitmap(p,&gbpictmBitmap);
	else if (trai==1) Bitmap(p,&gbtraimBitmap);
	else if (trai==2) Bitmap(p,&gbphaiBitmap);
	else if (trai==3) Bitmap(p,&gbmaimBitmap);	
	else if (trai==4) Bitmap(p,&gblantBitmap);
    }    
}

//-----------------------------------------------------------------

