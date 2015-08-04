// AddNew.cpp : implementation file
//

#include "stdafx.h"
#include "MotionSpecialist Vista.h"
#include "AddNew.h"
#include "AboutMotionSpecialistVista.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// AddNew dialog


AddNew::AddNew(CWnd* pParent /*=NULL*/)
	: CDialog(AddNew::IDD, pParent)
{
	//{{AFX_DATA_INIT(AddNew)
	m_gender_m_input = FALSE;
	m_gender_f_input = FALSE;
	m_ID_add = _T("");
	m_department_add = _T("");
	m_address_add = _T("");
	m_class2_add = _T("");
	m_class3_add = _T("");
	m_sponsor_add = _T("");
	m_profession_add = _T("");
	m_telephone_add = _T("");
	m_mobile_add = _T("");
	m_city_add = _T("");
	m_abbreviation_add = _T("");
	m_email_add = _T("");
	m_postcode_add = _T("");
	m_hotel_add = _T("");
	m_fax_add = _T("");
	m_arrival_add = _T("");
	m_major_add = _T("");
	m_article_add = _T("");
	m_name_add = _T("");
	m_title_add = _T("");
	m_gender_add = _T("");
	m_class1_add = _T("");
	m_means_add = _T("");
	m_type_add = _T("");
	m_hospital_add = _T("");
	//}}AFX_DATA_INIT
}


void AddNew::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(AddNew)
	DDX_Check(pDX, IDC_CHECK1, m_gender_m_input);
	DDX_Check(pDX, IDC_CHECK2, m_gender_f_input);
	DDX_Text(pDX, IDC_EDIT1, m_ID_add);
	DDX_Text(pDX, IDC_EDIT10, m_department_add);
	DDX_Text(pDX, IDC_EDIT11, m_address_add);
	DDX_Text(pDX, IDC_EDIT12, m_class2_add);
	DDX_Text(pDX, IDC_EDIT13, m_class3_add);
	DDX_Text(pDX, IDC_EDIT14, m_sponsor_add);
	DDX_Text(pDX, IDC_EDIT15, m_profession_add);
	DDX_Text(pDX, IDC_EDIT17, m_telephone_add);
	DDX_Text(pDX, IDC_EDIT18, m_mobile_add);
	DDX_Text(pDX, IDC_EDIT19, m_city_add);
	DDX_Text(pDX, IDC_EDIT20, m_abbreviation_add);
	DDX_Text(pDX, IDC_EDIT21, m_email_add);
	DDX_Text(pDX, IDC_EDIT22, m_postcode_add);
	DDX_Text(pDX, IDC_EDIT23, m_hotel_add);
	DDX_Text(pDX, IDC_EDIT24, m_fax_add);
	DDX_Text(pDX, IDC_EDIT25, m_arrival_add);
	DDX_Text(pDX, IDC_EDIT28, m_major_add);
	DDX_Text(pDX, IDC_EDIT29, m_article_add);
	DDX_Text(pDX, IDC_EDIT3, m_name_add);
	DDX_Text(pDX, IDC_EDIT4, m_title_add);
	DDX_Text(pDX, IDC_EDIT5, m_gender_add);
	DDX_Text(pDX, IDC_EDIT6, m_class1_add);
	DDX_Text(pDX, IDC_EDIT7, m_means_add);
	DDX_Text(pDX, IDC_EDIT8, m_type_add);
	DDX_Text(pDX, IDC_EDIT9, m_hospital_add);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(AddNew, CDialog)
	//{{AFX_MSG_MAP(AddNew)
	ON_BN_CLICKED(IDC_BUTTON5, OnSave)
	ON_BN_CLICKED(IDC_BUTTON7, OnAbout)
	ON_BN_CLICKED(IDC_BUTTON9, OnArrival)
	ON_BN_CLICKED(IDC_CHECK1, OnCheck1)
	ON_BN_CLICKED(IDC_BUTTON1, OnCancel)
	ON_BN_CLICKED(IDC_CHECK2, OnCheck2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// AddNew message handlers

void AddNew::OnSave() 
{

	UpdateData(TRUE);

	if(m_name_add=="")
		MessageBox("对不起,代表姓名未输入，请核对。","输入落项",MB_OK|MB_ICONINFORMATION);
	else
		if(m_abbreviation_add=="")
		MessageBox("对不起，代表姓名音序缩写未输入，请核对。","输入落项",MB_OK|MB_ICONINFORMATION);
		else
			CDialog::OnOK();	
}

void AddNew::OnCancel() 
{
	CDialog::OnCancel();	
}

void AddNew::OnAbout() 
{
	AboutMotionSpecialistVista dialogue;
	dialogue.DoModal();
}

void AddNew::OnArrival() 
{
	UpdateData(TRUE);
	m_arrival_add="已注册";
	UpdateData(FALSE);
}

void AddNew::OnCheck1() 
{
	UpdateData(TRUE);

	m_gender_f_input=0;
	m_gender_m_input=1;
	m_gender_add="男";

	UpdateData(FALSE);
	
}

void AddNew::OnCheck2() 
{
	UpdateData(TRUE);

	m_gender_m_input=0;
	m_gender_f_input=1;
	m_gender_add="女";

	UpdateData(FALSE);
}
