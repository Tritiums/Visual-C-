// CDSSelect.cpp : implementation file
//

#include "stdafx.h"
#include "Expression.h"
#include "CDSSelect.h"
#include "afxdialogex.h"


// CCDSSelect dialog

IMPLEMENT_DYNAMIC(CCDSSelect, CDialogEx)

CCDSSelect::CCDSSelect(CWnd* pParent /*=NULL*/)
	: CDialogEx(CCDSSelect::IDD, pParent)
{

	m_CDS_from = 0;
	m_CDS_to = 0;
}

CCDSSelect::~CCDSSelect()
{
}

void CCDSSelect::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_CDS_from);
	DDX_Text(pDX, IDC_EDIT8, m_CDS_to);
}


BEGIN_MESSAGE_MAP(CCDSSelect, CDialogEx)
	ON_BN_CLICKED(IDOK, &CCDSSelect::OnBnClickedOk)
END_MESSAGE_MAP()


// CCDSSelect message handlers


void CCDSSelect::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnOK();
}
