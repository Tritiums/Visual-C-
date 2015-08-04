// AdvancedSearch.cpp : implementation file
//

#include "stdafx.h"
#include "MotionSpecialist Vista.h"
#include "AdvancedSearch.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// AdvancedSearch dialog


AdvancedSearch::AdvancedSearch(CWnd* pParent /*=NULL*/)
	: CDialog(AdvancedSearch::IDD, pParent)
{
	//{{AFX_DATA_INIT(AdvancedSearch)
	m_shortnumber_advanced = _T("");
	m_mobile_phone_advanced = _T("");
	m_department_advanced = _T("");
	m_lecture_date_add = 0;
	//}}AFX_DATA_INIT
}


void AdvancedSearch::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(AdvancedSearch)
	DDX_Control(pDX, IDC_COMBO1, m_sponsor_advanced_search);
	DDX_Text(pDX, IDC_EDIT1, m_shortnumber_advanced);
	DDX_Text(pDX, IDC_EDIT2, m_mobile_phone_advanced);
	DDX_Text(pDX, IDC_EDIT3, m_department_advanced);
	DDX_DateTimeCtrl(pDX, IDC_DATETIMEPICKER1, m_lecture_date_add);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(AdvancedSearch, CDialog)
	//{{AFX_MSG_MAP(AdvancedSearch)
	ON_BN_CLICKED(IDOK2, OnOk2)
	ON_BN_CLICKED(IDOK3, OnOk3)
	ON_BN_CLICKED(IDOK4, OnOk4)
	ON_BN_CLICKED(IDOK5, OnOk5)
	ON_BN_CLICKED(IDOK6, OnOk6)
	ON_BN_CLICKED(IDOK7, OnOk7)
	ON_BN_CLICKED(IDOK11, OnOk11)
	ON_BN_CLICKED(IDOK12, OnOk12)
	ON_BN_CLICKED(IDOK8, OnOk8)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDOK9, OnOk9)
	ON_BN_CLICKED(IDOK10, OnOk10)
	ON_BN_CLICKED(IDOK13, OnOk13)
	ON_BN_CLICKED(IDOK15, OnOk15)
	ON_BN_CLICKED(IDOK16, OnOk16)
	ON_BN_CLICKED(IDOK14, OnOk14)
	ON_BN_CLICKED(IDOK18, OnOk18)
	ON_BN_CLICKED(IDOK19, OnOk19)
	ON_BN_CLICKED(IDOK20, OnOk20)
	ON_BN_CLICKED(IDOK21, OnOk21)
	ON_BN_CLICKED(IDOK22, OnOk22)
	ON_BN_CLICKED(IDOK23, OnOk23)
	ON_BN_CLICKED(IDOK24, OnOk24)
	ON_BN_CLICKED(IDOK25, OnOk25)
	ON_BN_CLICKED(IDOK26, OnOk26)
	ON_BN_CLICKED(IDC_BUTTON2, OnUploadSponsor)
	ON_BN_CLICKED(IDOK27, OnOk27)
	ON_BN_CLICKED(IDOK28, OnOk28)
	ON_BN_CLICKED(IDOK17, OnOk17)
	ON_BN_CLICKED(IDOK29, OnOk29)
	ON_BN_CLICKED(IDOK30, OnOk30)
	ON_BN_CLICKED(IDOK31, OnOk31)
	ON_BN_CLICKED(IDOK32, OnOk32)
	ON_BN_CLICKED(IDOK33, OnOk33)
	ON_BN_CLICKED(IDOK34, OnOk34)
	ON_BN_CLICKED(IDOK35, OnOk35)
	ON_BN_CLICKED(IDOK36, OnOk36)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// AdvancedSearch message handlers

void AdvancedSearch::OnOk2() 
{
	this->m_ButtonID=2;

	OnOK();	
}

void AdvancedSearch::OnOk3() 
{
	this->m_ButtonID=3;

	OnOK();		
}

void AdvancedSearch::OnOk4() 
{
	this->m_ButtonID=4;

	OnOK();		
}

void AdvancedSearch::OnOk5() 
{
	this->m_ButtonID=5;

	OnOK();	
}

void AdvancedSearch::OnOk6() 
{
	this->m_ButtonID=6;

	OnOK();		
}

void AdvancedSearch::OnOk7() 
{
	this->m_ButtonID=7;

	OnOK();	
}

void AdvancedSearch::OnOk11() 
{
	this->m_ButtonID=11;

	OnOK();		
}

void AdvancedSearch::OnOk12() 
{
	this->m_ButtonID=12;

	OnOK();		
}

void AdvancedSearch::OnOk8() 
{
	this->m_ButtonID=8;

	OnOK();		
}

void AdvancedSearch::OnButton1() 
{
	this->m_ButtonID=1001;

	OnOK();		
}

void AdvancedSearch::OnOk9() 
{
	this->m_ButtonID=9;

	OnOK();		
}

void AdvancedSearch::OnOk10() 
{
	this->m_ButtonID=10;

	OnOK();		
}

void AdvancedSearch::OnOk13() 
{
	this->m_ButtonID=13;

	OnOK();		
}

void AdvancedSearch::OnOk15() 
{
	this->m_ButtonID=15;

	OnOK();		
}

void AdvancedSearch::OnOk16() 
{
	this->m_ButtonID=16;

	OnOK();		
}


void AdvancedSearch::OnOk14() 
{
	UpdateData(TRUE);

	if(m_shortnumber_advanced!="")
	{
		this->m_ButtonID=14;
		OnOK();	
	}
	else
		MessageBox("对不起，无待查询数据！","错误",MB_OK|MB_ICONINFORMATION);

}

void AdvancedSearch::OnOk18() 
{
	this->m_ButtonID=18;
	
	OnOK();		

}

void AdvancedSearch::OnOk19() 
{
	this->m_ButtonID=19;
	
	OnOK();		
	
}



void AdvancedSearch::OnOk20() 
{
	this->m_ButtonID=20;
	
	OnOK();	
	
}

void AdvancedSearch::OnOk21() 
{
	this->m_ButtonID=21;
	
	OnOK();		
}

void AdvancedSearch::OnOk22() 
{
	this->m_ButtonID=22;
	
	OnOK();		
}

void AdvancedSearch::OnOk23() 
{
	this->m_ButtonID=23;
	
	OnOK();		
	
}

void AdvancedSearch::OnOk24() 
{
	this->m_ButtonID=24;
	
	OnOK();		
	
}

void AdvancedSearch::OnOk25() 
{

	this->m_ButtonID=25;

	OnOK();
}

void AdvancedSearch::OnOk26() 
{
	this->m_ButtonID=26;
	
	OnOK();
}

void AdvancedSearch::OnUploadSponsor() 
{
	int i;
	CString sponsor[30];
	
	sponsor[0]="赛诺菲";
	sponsor[1]="辉瑞";
	sponsor[2]="默沙东";
	sponsor[3]="葛兰素";
	sponsor[4]="武田";
	sponsor[5]="勃林格";
	sponsor[6]="田边";
	sponsor[7]="阿斯利康";
	sponsor[8]="默克";
	sponsor[9]="施维雅";
	sponsor[10]="先灵";
	sponsor[11]="协和发酵";
	sponsor[12]="许瓦兹";
	sponsor[13]="三共";
	sponsor[14]="神威";
	sponsor[15]="成都时代";
	sponsor[16]="诺华";
	sponsor[17]="联仁";
	sponsor[18]="拜耳";
	sponsor[19]="强生";
	sponsor[20]="北大维信";
	sponsor[21]="主任邀请";
	sponsor[22]="圣犹达";	
	sponsor[23]="施贵宝";
	sponsor[24]="深圳康哲";
	
	for(i=0;i<25;i++)
	{
		this->m_sponsor_advanced_search.AddString((LPCTSTR)sponsor[i]);
	}
	
	this->m_sponsor_advanced_search.SetCurSel(-1);
}

void AdvancedSearch::OnOk27() 
{
	UpdateData(TRUE);

	if(this->m_sponsor_advanced_search.GetCurSel()==-1)
	{
		MessageBox("对不起，组合框中无信息，请选择。","错误",MB_OK|MB_ICONINFORMATION);

	}
	else
	{
		this->m_ButtonID=27;
		m_sponsor_advanced_search.GetLBText(m_sponsor_advanced_search.GetCurSel(),this->sponsor_advanced);
		OnOK();
	}
}

void AdvancedSearch::OnOk28() 
{
	this->m_ButtonID=28;
	
	OnOK();
	
}

void AdvancedSearch::OnOk17() 
{
	this->m_ButtonID=17;
	
	OnOK();
	
}

void AdvancedSearch::OnOk29() 
{
	UpdateData(TRUE);

	if(this->m_sponsor_advanced_search.GetCurSel()==-1)
	{
		MessageBox("对不起，组合框中无信息，请选择。","错误",MB_OK|MB_ICONINFORMATION);

	}
	else
	{
		this->m_ButtonID=29;
		m_sponsor_advanced_search.GetLBText(m_sponsor_advanced_search.GetCurSel(),this->sponsor_advanced);
		OnOK();
	}
	
}

void AdvancedSearch::OnOk30() 
{
	this->m_ButtonID=30;
	
	OnOK();
}

void AdvancedSearch::OnOk31() 
{
	this->m_ButtonID=31;
	
	OnOK();
}

void AdvancedSearch::OnOk32() 
{
	this->m_ButtonID=32;
	
	OnOK();
	
}

void AdvancedSearch::OnOk33() 
{
	this->m_ButtonID=33;
	
	OnOK();
	
}

void AdvancedSearch::OnOk34() 
{
	this->m_ButtonID=34;
	
	OnOK();
}

void AdvancedSearch::OnOk35() 
{
	this->m_ButtonID=35;
	
	OnOK();
	
}

void AdvancedSearch::OnOk36() 
{
	this->m_ButtonID=36;
	
	OnOK();
	
}
