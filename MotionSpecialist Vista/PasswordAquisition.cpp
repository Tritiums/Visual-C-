// PasswordAquisition.cpp : implementation file
//

#include "stdafx.h"
#include "MotionSpecialist Vista.h"
#include "PasswordAquisition.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// PasswordAquisition dialog


PasswordAquisition::PasswordAquisition(CWnd* pParent /*=NULL*/)
	: CDialog(PasswordAquisition::IDD, pParent)
{
	//{{AFX_DATA_INIT(PasswordAquisition)
	m_password_input = _T("");
	//}}AFX_DATA_INIT
}


void PasswordAquisition::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(PasswordAquisition)
	DDX_Text(pDX, IDC_EDIT1, m_password_input);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(PasswordAquisition, CDialog)
	//{{AFX_MSG_MAP(PasswordAquisition)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// PasswordAquisition message handlers
