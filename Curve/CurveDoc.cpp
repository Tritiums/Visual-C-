// CurveDoc.cpp : implementation of the CCurveDoc class
//

#include "stdafx.h"
#include "Curve.h"

#include "CurveDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCurveDoc

IMPLEMENT_DYNCREATE(CCurveDoc, CDocument)

BEGIN_MESSAGE_MAP(CCurveDoc, CDocument)
	//{{AFX_MSG_MAP(CCurveDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCurveDoc construction/destruction

CCurveDoc::CCurveDoc()
{
	// TODO: add one-time construction code here

}

CCurveDoc::~CCurveDoc()
{
}

BOOL CCurveDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CCurveDoc serialization

void CCurveDoc::Serialize(CArchive& ar)
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
// CCurveDoc diagnostics

#ifdef _DEBUG
void CCurveDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCurveDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCurveDoc commands
