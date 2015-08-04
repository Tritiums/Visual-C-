// SureToDelete.cpp : implementation file
//

#include "stdafx.h"
#include "MotionSpecialist Vista.h"
#include "SureToDelete.h"

#include "PasswordAquisition.h"

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
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// SureToDelete message handlers

void SureToDelete::OnOK() 
{

	PasswordAquisition dialogue;
	int i=0;

	if(dialogue.DoModal()==IDOK)
	{
		if(dialogue.m_password_input=="cmu2h.com")
		{
			CDialog::OnOK();

		}
		else
			MessageBox("对不起，密码错误，您无权删除该数据。","密码错误",MB_OK|MB_ICONINFORMATION);
	
	}
}
