// AboutAbsorcon.cpp : implementation file
//

#include "stdafx.h"
#include "AbsorCon.h"
#include "AboutAbsorcon.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutAbsorcon dialog


CAboutAbsorcon::CAboutAbsorcon(CWnd* pParent /*=NULL*/)
	: CDialog(CAboutAbsorcon::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAboutAbsorcon)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CAboutAbsorcon::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutAbsorcon)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CAboutAbsorcon, CDialog)
	//{{AFX_MSG_MAP(CAboutAbsorcon)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAboutAbsorcon message handlers
