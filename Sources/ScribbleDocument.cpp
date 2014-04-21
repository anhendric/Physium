#include "ScribbleDocument.h"


#define MIN_SCRIBBLE_HEAPSIZE		(30*1024) // save at least 30K free
int thai=1;
//-----------------------------------------------------------------
// Defined as constant data so it will not be copied to RAM
// Defined as static data so it will not be visible outside this file

static const PEGCHAR* SCRIBBLE_APP_NAME = "Scribble";
static const PEGCHAR* SCRIBBLE_DATA_NAME = "Picture";

//-----------------------------------------------------------------
// COnstructor - Init all values
ScribblePointArray::ScribblePointArray()
	: m_counter(0) ,m_pointlist(NULL)
{
}    

//-----------------------------------------------------------------
// Destructor - free all memory
ScribblePointArray::~ScribblePointArray()
{
    
}    

    
//-----------------------------------------------------------------
// get point at index
PegPoint ScribblePointArray::operator[](int index) const
{
    if (m_counter>index && index>=0) {
        return m_pointlist[index];
    }
    // This is actually an error condition, but return something
    // as a default
    PegPoint p = {0, 0};
    return p;
}
    
//-----------------------------------------------------------------
// Create a copy of array "points"
ScribblePointArray& ScribblePointArray::operator=(const ScribblePointArray& points)
{
	bool bHaveMemory = CPWindow::MemoryCheck(MIN_SCRIBBLE_HEAPSIZE,true,true);
	if (&points != this && bHaveMemory) {
	    m_counter = points.m_counter;
	    if (m_counter) {
			m_pointlist = new PegPoint[m_counter];
			PegPoint *src = points.m_pointlist;
			PegPoint *dst = m_pointlist;
			for (int i = 0; i<m_counter; i++) {
			    *dst = *src;
			    src++;
			    dst++;
			}
		}
	}
	return *this;
}    

//-----------------------------------------------------------------
// Swap my data with the data from "points"
/*void ScribblePointArray::Swap(ScribblePointArray& points)
{
	// Swap the counter
	int temp_int = m_counter;
	m_counter = points.m_counter;
	points.m_counter = temp_int;

	// Swap the point list
	PegPoint * temp_list = m_pointlist;
	m_pointlist = points.m_pointlist;
	points.m_pointlist = temp_list;
} */   

//-----------------------------------------------------------------
// Write my data to a file
/*void ScribblePointArray::Write(CPWriteFile &f)
{ 
	// Write the point count
	f.WriteInt(m_counter);

	// Write the point locations
	for(int i=0;i<m_counter && f.IsNotError();i++)
	{
	    PegPoint p = m_pointlist[i];
		f.WriteInt(p.x);
		f.WriteInt(p.y);
	}
}*/

//-----------------------------------------------------------------
// Read my data from a file
/*void ScribblePointArray::Read(CPReadFile &f)
{
	// Read in the point count
	m_counter = f.ReadInt();
	if (m_counter) {
		// Create a new point list of the appropriate size
		m_pointlist = new PegPoint[m_counter];
		// Read in the points
	    PegPoint p;
		for (int ii=0; ii< m_counter && f.IsNotError(); ii++)
		{
			p.x=f.ReadInt();
			p.y=f.ReadInt();
			m_pointlist[ii] = p;
		}
	}   
}*/


///////////////////////////////////////////////////////////////////
//
// ScribbleDocument - Document "Container Class"
//
// Scribble Document Functions
//
///////////////////////////////////////////////////////////////////

ScribbleDocument::ScribbleDocument(CPMainFrame *frame):CPDocument(frame)
{
}

//-----------------------------------------------------------------
// Destructor
ScribbleDocument::~ScribbleDocument()
{
}
    
//-----------------------------------------------------------------
// Pure virtual function that must be overwritten
// If you had more than one document type or wanted other window
// classes to be able to read or write a ScribbleDocument you should
// define a unique DocType ID
WORD ScribbleDocument::DocType()
{
    return 0;
}

//-----------------------------------------------------------------
// Pure virtual function that must be overwritten
// If the data structure ever changes then you need to increase the version
// number.
WORD ScribbleDocument::Version()
{
    return 1;
}

//-----------------------------------------------------------------
// Quick way to convert the counter to a string format.  For more information on
// the CPString  utility class, see the ClassPad SDK documentation
/*CPString ScribbleDocument::GetCountAsString()
{
	unsigned char count[10];
	CP_IntToString(GetCount(),count);

	CPString current_count = (char *) count;
	return current_count;
}*/


//-----------------------------------------------------------------
/*void ScribbleDocument::Write(CPWriteFile &f)
{
	// Write once to compute size
	WriteData(f);
	f.Realize();
	
	// Write a second time - this time it is actually written to the allocated memory
	if(f.is_open())
		WriteData(f);
	
}*/

//-----------------------------------------------------------------
/*void ScribbleDocument::WriteData(CPWriteFile &f)
{ 
	// Write the Header
	CPMEMFileHeader header(SCRIBBLE_APP_NAME, SCRIBBLE_DATA_NAME);
	header.Write(f);
	m_pointlist.Write(f);
}*/


//-----------------------------------------------------------------
/*void ScribbleDocument::Read(CPReadFile &f)
{
	// Read in the header
	CPMEMFileHeader header(SCRIBBLE_APP_NAME, SCRIBBLE_DATA_NAME);
	header.Read(f);	
	m_pointlist.Read(f);
	SetUndoState();
}*/

//-----------------------------------------------------------------
/*void ScribbleDocument::SetUndoState()
{
	m_undo_pointlist = m_pointlist;
}

//-----------------------------------------------------------------
void ScribbleDocument::RestoreUndoState()
{
	m_pointlist.Swap(m_undo_pointlist);
}*/

//-----------------------------------------------------------------
// static (global) function which returns a unique name for Application's data
const PEGCHAR* ScribbleDocument::GetMCSAppName()
{
    return SCRIBBLE_APP_NAME;
}
    
//-----------------------------------------------------------------
// static (global) function which returns a unique name for document's data
const PEGCHAR* ScribbleDocument::GetMCSDataName()
{
    return SCRIBBLE_DATA_NAME;
}
//-----------------------------------------------------------------

