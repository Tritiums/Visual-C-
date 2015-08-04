// ProtectedPasswordAquisition.cpp : implementation file
//

#include "stdafx.h"
#include "MotionSpecialist Vista.h"
#include "ProtectedPasswordAquisition.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ProtectedPasswordAquisition dialog


ProtectedPasswordAquisition::ProtectedPasswordAquisition(CWnd* pParent /*=NULL*/)
	: CDialog(ProtectedPasswordAquisition::IDD, pParent)
{
	//{{AFX_DATA_INIT(ProtectedPasswordAquisition)
	m_name_show = _T("");
	m_password_add = _T("");
	//}}AFX_DATA_INIT
}


void ProtectedPasswordAquisition::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(ProtectedPasswordAquisition)
	DDX_Text(pDX, IDC_EDIT2, m_name_show);
	DDX_Text(pDX, IDC_EDIT1, m_password_add);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(ProtectedPasswordAquisition, CDialog)
	//{{AFX_MSG_MAP(ProtectedPasswordAquisition)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// ProtectedPasswordAquisition message handlers

void ProtectedPasswordAquisition::OnOK() 
{
	UpdateData(TRUE);

	if(m_password_add=="q")
		CDialog::OnOK();
	else
		MessageBox("对不起，密码错误，您无权访问该记录全部内容，请核对密码。","密码错误",MB_OK|MB_ICONINFORMATION);

}
