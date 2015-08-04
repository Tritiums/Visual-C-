// AboutMotionSpecialistVista.cpp : implementation file
//

#include "stdafx.h"
#include "MotionSpecialist Vista.h"
#include "AboutMotionSpecialistVista.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// AboutMotionSpecialistVista dialog


AboutMotionSpecialistVista::AboutMotionSpecialistVista(CWnd* pParent /*=NULL*/)
	: CDialog(AboutMotionSpecialistVista::IDD, pParent)
{
	//{{AFX_DATA_INIT(AboutMotionSpecialistVista)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void AboutMotionSpecialistVista::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(AboutMotionSpecialistVista)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(AboutMotionSpecialistVista, CDialog)
	//{{AFX_MSG_MAP(AboutMotionSpecialistVista)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// AboutMotionSpecialistVista message handlers
