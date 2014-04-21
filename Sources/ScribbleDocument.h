#ifndef SCRIBBLE_DOCUMENT_INCLUDED
#define SCRIBBLE_DOCUMENT_INCLUDED

#include "ClassPad.h"


///////////////////////////////////////////////////////////////////
//
// ScribblePointArray - Utility class for managing the memory in a
// PegPoint array
//
// At this point we are managing 2 arrays of points. One array
// for the live data, and one for the undo data. This is a good
// time to abstract the data into another class.
//
// This reduces duplicate code and moves all memory management into
// into this array class.
///////////////////////////////////////////////////////////////////
class ScribblePointArray
{
protected:
	int m_counter;
	PegPoint* m_pointlist;

public:
    // constructor and destructor
    ScribblePointArray();
    ~ScribblePointArray();

	// Size returns the number of points
	int Size()		{ return m_counter; }
	// Add a new point
	void Add(const PegPoint& p);
	// clear all points and free up memory
    //void Clear();
    // array operator. Get point at index
	PegPoint operator[](int index) const;
	// copy "points"
	ScribblePointArray& operator=(const ScribblePointArray& points);
	// Swap my data and the data from "points"
    //void Swap(ScribblePointArray& points);
	// Write data to a file
	//void Write(CPWriteFile &f);
	// Read data from a file
	//void Read(CPReadFile &f);
};

///////////////////////////////////////////////////////////////////
//
// ScribbleDocument - Document "Container Class"
//
///////////////////////////////////////////////////////////////////

class ScribbleDocument: public CPDocument
{

protected:
    
	ScribblePointArray m_pointlist;
	int thai;
	// Variables for the Undo State
	ScribblePointArray m_undo_pointlist;

public:

	// Standard constructor for a document, document must be loaded into the mainframe
	ScribbleDocument(CPMainFrame * frame);
	virtual ~ScribbleDocument();

	// Functions used to get a point information
	//CPString GetCountAsString();
	//PegPoint GetPoint(int i)			{return m_pointlist[i];}
	//inline int GetCount()				{return thai; }

	// Functions to save and load the document
	//void WriteData(CPWriteFile &f);
	//virtual void Write(CPWriteFile &f);
	//virtual void Read(CPReadFile &f);

	// Functions to manage the Undo/Redo state
	//void SetUndoState();
	//void RestoreUndoState();
	//void ReleaseUndoState();

	// These are pure virtual functions that must be overwritten
	virtual WORD DocType();
	virtual WORD Version();

	// static (global) function which returns a unique name for Application's data
	static const PEGCHAR* GetMCSAppName();
	// static (global) function which returns a unique name for document's data
	static const PEGCHAR* GetMCSDataName();


};

#endif
