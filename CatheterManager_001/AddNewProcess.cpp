// AddNewProcess.cpp : implementation file
//

#include "stdafx.h"
#include "CatheterManager_001.h"
#include "AddNewProcess.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// AddNewProcess dialog


AddNewProcess::AddNewProcess(CWnd* pParent /*=NULL*/)
	: CDialog(AddNewProcess::IDD, pParent)
{
	//{{AFX_DATA_INIT(AddNewProcess)
	m_ID_add = _T("");
	m_number_add = 0;
	m_customer_add = _T("");
	m_patient_abbreviation_add = _T("");
	m_diagnosis_add = _T("");
	m_operator_add = _T("");
	m_assistant_add = _T("");
	m_manager_add = _T("");
	m_date_add = 0;
	//}}AFX_DATA_INIT
}


void AddNewProcess::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(AddNewProcess)
	DDX_Control(pDX, IDC_COMBO3, m_type_add);
	DDX_Control(pDX, IDC_COMBO2, m_name_add);
	DDX_Control(pDX, IDC_COMBO1, m_abbreviation_add);
	DDX_Text(pDX, IDC_EDIT14, m_ID_add);
	DDX_Text(pDX, IDC_EDIT2, m_number_add);
	DDX_Text(pDX, IDC_EDIT7, m_customer_add);
	DDX_Text(pDX, IDC_EDIT11, m_patient_abbreviation_add);
	DDX_Text(pDX, IDC_EDIT1, m_diagnosis_add);
	DDX_Text(pDX, IDC_EDIT8, m_operator_add);
	DDX_Text(pDX, IDC_EDIT9, m_assistant_add);
	DDX_Text(pDX, IDC_EDIT10, m_manager_add);
	DDX_DateTimeCtrl(pDX, IDC_DATETIMEPICKER3, m_date_add);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(AddNewProcess, CDialog)
	//{{AFX_MSG_MAP(AddNewProcess)
	ON_BN_CLICKED(IDCANCEL2, OnLoadList)
	ON_BN_CLICKED(IDCANCEL3, OnCancel3)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// AddNewProcess message handlers

void AddNewProcess::OnLoadList() 
{
	///////////////////////////////Set Combo Box/////////////////////////////
	
		

	this->m_abbreviation_add.ResetContent();
		
	this->m_abbreviation_add.AddString((LPCTSTR)"Cypher_Stent");
	this->m_abbreviation_add.AddString((LPCTSTR)"Release");
	this->m_abbreviation_add.AddString((LPCTSTR)"guiding");
	
    this->m_abbreviation_add.SetCurSel(-1);

}


void AddNewProcess::OnCancel3() 
{
	int i;
	CString str;

	this->m_abbreviation_add.GetLBText(m_abbreviation_add.GetCurSel(),str);

	if(str=="Cypher_Stent")
	{
		this->m_name_add.ResetContent();
		this->m_type_add.ResetContent();
		this->m_name_add.AddString((LPCTSTR)"Cypher支架");
		this->m_type_add.AddString((LPCTSTR)"3厘米");
		i=this->m_name_add.FindString(0,(LPCTSTR)"Cypher支架");
		this->m_name_add.SetCurSel(i);
		i=this->m_type_add.FindString(0,(LPCTSTR)"3厘米");
		this->m_type_add.SetCurSel(i);
	}

	if(str=="Release")
	{
		this->m_name_add.ResetContent();
		this->m_type_add.ResetContent();
		this->m_name_add.AddString((LPCTSTR)"可撕开鞘");
		this->m_type_add.AddString((LPCTSTR)"8F");
		i=this->m_name_add.FindString(0,(LPCTSTR)"可撕开鞘");
		this->m_name_add.SetCurSel(i);
		i=this->m_type_add.FindString(0,(LPCTSTR)"8F");
		this->m_type_add.SetCurSel(i);
	}

	if(str=="guiding")
	{
		this->m_name_add.ResetContent();
		this->m_type_add.ResetContent();
		this->m_name_add.AddString((LPCTSTR)"导引导丝");
		this->m_type_add.AddString((LPCTSTR)"6F");
		i=this->m_name_add.FindString(0,(LPCTSTR)"导引导丝");
		this->m_name_add.SetCurSel(i);
		i=this->m_type_add.FindString(0,(LPCTSTR)"6F");
		this->m_type_add.SetCurSel(i);
	}
	

}

void AddNewProcess::OnOK() 
{
	int abbreviation_indicator, name_indicator;

	UpdateData(TRUE);

	abbreviation_indicator=this->m_abbreviation_add.GetCurSel();
	name_indicator=this->m_name_add.GetCurSel();
	
	
	if(abbreviation_indicator==-1||name_indicator==-1||this->m_number_add==0)
		MessageBox("对不起产品缩写、名称或产品数量尚未输入，请核对！","错误",MB_OK|MB_ICONINFORMATION);
	else
	{
		this->m_abbreviation_add.GetLBText(m_abbreviation_add.GetCurSel(),abbreviationStr);
		this->m_name_add.GetLBText(m_name_add.GetCurSel(),nameStr);
		this->m_type_add.GetLBText(m_type_add.GetCurSel(),typeStr);

		CDialog::OnOK();
	}
}
