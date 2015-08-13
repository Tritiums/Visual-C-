// SureToDelete.cpp : implementation file
//

#include "stdafx.h"
#include "CatheterManager_001.h"
#include "SureToDelete.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// SureToDelete dialog


SureToDelete::SureToDelete(CWnd* pParent /*=NULL*/)
	: CDialog(SureToDelete::IDD, pParent)
{
	//{{AFX_DATA_INIT(SureToDelete)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void SureToDelete::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(SureToDelete)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(SureToDelete, CDialog)
	//{{AFX_MSG_MAP(SureToDelete)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// SureToDelete message handlers
