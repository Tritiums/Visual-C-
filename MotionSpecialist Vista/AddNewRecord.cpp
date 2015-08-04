// AddNewRecord.cpp : implementation file
//

#include "stdafx.h"
#include "MotionSpecialist Vista.h"
#include "AddNewRecord.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// AddNewRecord dialog


AddNewRecord::AddNewRecord(CWnd* pParent /*=NULL*/)
	: CDialog(AddNewRecord::IDD, pParent)
{
	//{{AFX_DATA_INIT(AddNewRecord)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void AddNewRecord::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(AddNewRecord)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(AddNewRecord, CDialog)
	//{{AFX_MSG_MAP(AddNewRecord)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// AddNewRecord message handlers
