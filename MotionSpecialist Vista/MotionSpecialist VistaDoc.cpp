// MotionSpecialist VistaDoc.cpp : implementation of the CMotionSpecialistVistaDoc class
//

#include "stdafx.h"
#include "MotionSpecialist Vista.h"

#include "MotionSpecialist VistaSet.h"
#include "MotionSpecialist VistaDoc.h"
#include "Login.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMotionSpecialistVistaDoc

IMPLEMENT_DYNCREATE(CMotionSpecialistVistaDoc, CDocument)

BEGIN_MESSAGE_MAP(CMotionSpecialistVistaDoc, CDocument)
	//{{AFX_MSG_MAP(CMotionSpecialistVistaDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMotionSpecialistVistaDoc construction/destruction

CMotionSpecialistVistaDoc::CMotionSpecialistVistaDoc()
{
	// TODO: add one-time construction code here

}

CMotionSpecialistVistaDoc::~CMotionSpecialistVistaDoc()
{
}

BOOL CMotionSpecialistVistaDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)
	
	Login dialogue;
	dialogue.DoModal();
	

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMotionSpecialistVistaDoc serialization

void CMotionSpecialistVistaDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CMotionSpecialistVistaDoc diagnostics

#ifdef _DEBUG
void CMotionSpecialistVistaDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMotionSpecialistVistaDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMotionSpecialistVistaDoc commands
