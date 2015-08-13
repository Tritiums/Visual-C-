// CatheterManager_001Doc.cpp : implementation of the CCatheterManager_001Doc class
//

#include "stdafx.h"
#include "CatheterManager_001.h"

#include "CatheterManager_001Set.h"
#include "CatheterManager_001Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCatheterManager_001Doc

IMPLEMENT_DYNCREATE(CCatheterManager_001Doc, CDocument)

BEGIN_MESSAGE_MAP(CCatheterManager_001Doc, CDocument)
	//{{AFX_MSG_MAP(CCatheterManager_001Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCatheterManager_001Doc construction/destruction

CCatheterManager_001Doc::CCatheterManager_001Doc()
{
	// TODO: add one-time construction code here

}

CCatheterManager_001Doc::~CCatheterManager_001Doc()
{
}

BOOL CCatheterManager_001Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CCatheterManager_001Doc serialization

void CCatheterManager_001Doc::Serialize(CArchive& ar)
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
// CCatheterManager_001Doc diagnostics

#ifdef _DEBUG
void CCatheterManager_001Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCatheterManager_001Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCatheterManager_001Doc commands
