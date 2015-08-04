// MotionSpecialist VistaView.cpp : implementation of the CMotionSpecialistVistaView class
//

#include "stdafx.h"
#include "MotionSpecialist Vista.h"

#include "MotionSpecialist VistaSet.h"
#include "MotionSpecialist VistaDoc.h"
#include "MotionSpecialist VistaView.h"

#include "AddNew.h"
#include "ProtectedPasswordAquisition.h"
#include "PasswordAquisition.h"
#include "AdvancedSearch.h"
#include "SureToDelete.h"
#include "AboutMotionSpecialistVista.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMotionSpecialistVistaView

IMPLEMENT_DYNCREATE(CMotionSpecialistVistaView, CRecordView)

BEGIN_MESSAGE_MAP(CMotionSpecialistVistaView, CRecordView)
	//{{AFX_MSG_MAP(CMotionSpecialistVistaView)
	ON_BN_CLICKED(IDC_BUTTON1, OnBrowse)
	ON_BN_CLICKED(IDC_BUTTON2, OnSearch)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST1, OnDoubleClickListControl)
	ON_BN_CLICKED(IDC_BUTTON4, OnSave)
	ON_BN_CLICKED(IDC_BUTTON53, OnActiveRandom)
	ON_BN_CLICKED(IDC_BUTTON44, OnCaptureAddress)
	ON_BN_CLICKED(IDC_BUTTON6, OnLectureLen)
	ON_BN_CLICKED(IDC_BUTTON11, OnArticleLen)
	ON_BN_CLICKED(IDC_BUTTON16, OnCommentLen)
	ON_BN_CLICKED(IDC_BUTTON13, OnMajorLen)
	ON_BN_CLICKED(IDC_BUTTON3, OnIDSearch)
	ON_COMMAND(ID_FILE_SAVE, OnFileSave)
	ON_BN_CLICKED(IDC_BUTTON7, OnClear)
	ON_BN_CLICKED(IDC_BUTTON42, OnHospitalSearch)
	ON_BN_CLICKED(IDC_BUTTON51, OnLocationSearch)
	ON_BN_CLICKED(IDC_BUTTON26, OnUploadSponsor)
	ON_BN_CLICKED(IDC_BUTTON52, OnAdvancedSearch)
	ON_BN_CLICKED(IDC_BUTTON5, OnAddNew)
	ON_BN_CLICKED(IDC_BUTTON22, OnDelete)
	ON_BN_CLICKED(IDC_BUTTON46, OnDeleteRecordListItem)
	ON_BN_CLICKED(IDC_BUTTON35, OnExportRecord)
	ON_BN_CLICKED(IDC_BUTTON38, OnExportEnvelope)
	ON_BN_CLICKED(IDC_BUTTON23, OnPrint)
	ON_BN_CLICKED(IDC_BUTTON8, OnAbout)
	ON_COMMAND(ID_FILE_NEW, OnFileNew)
	ON_BN_CLICKED(IDC_BUTTON27, OnButton27)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMotionSpecialistVistaView construction/destruction

CMotionSpecialistVistaView::CMotionSpecialistVistaView()
	: CRecordView(CMotionSpecialistVistaView::IDD)
{
	//{{AFX_DATA_INIT(CMotionSpecialistVistaView)
	m_pSet = NULL;
	m_ID_output = _T("");
	m_name_output = _T("");
	m_abbreviation_output = _T("");
	m_profession_output = _T("");
	m_title_output = _T("");
	m_major_output = _T("");
	m_means_output = _T("");
	m_type_output = _T("");
	m_hospital_output = _T("");
	m_department_output = _T("");
	m_address_output = _T("");
	m_postcode_output = _T("");
	m_sponsor_output = _T("");
	m_abbreviation_input = _T("");
	m_ID_input = _T("");
	m_telephone_output = _T("");
	m_mobile_output = _T("");
	m_city_output = _T("");
	m_email_output = _T("");
	m_fax_output = _T("");
	m_number_sponsor = 0;
	m_hospital_search = _T("");
	m_lecture_output = _T("");
	m_home_telephone_output = _T("");
	m_length_output = 0;
	m_shortnumber_output = _T("");
	m_indicator_output = _T("");
	m_writer_output = _T("");
	m_spokesman_output = _T("");
	m_article_output = _T("");
	m_comment_output = _T("");
	m_personal_ID_output = _T("");
	m_marker_output = _T("");
	m_age_output = _T("");
	m_class_1_output = _T("");
	m_class_2_output = _T("");
	m_class_3_output = _T("");
	m_lecture_date_output = 0;
	//}}AFX_DATA_INIT
	// TODO: add construction code here

}

CMotionSpecialistVistaView::~CMotionSpecialistVistaView()
{
}

void CMotionSpecialistVistaView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMotionSpecialistVistaView)
	DDX_Control(pDX, IDC_COMBO7, m_lecture_order_output);
	DDX_Control(pDX, IDC_COMBO6, m_lecture_noon_output);
	DDX_Control(pDX, IDC_COMBO5, m_hotel_output);
	DDX_Control(pDX, IDC_COMBO4, m_arrival_output);
	DDX_Control(pDX, IDC_COMBO3, m_gender_output);
	DDX_Control(pDX, IDC_PROGRESS3, m_Add_Progress);
	DDX_Control(pDX, IDC_PROGRESS2, m_Save_Progress);
	DDX_Control(pDX, IDC_PROGRESS1, m_Progress);
	DDX_Control(pDX, IDC_COMBO1, m_sponsor_search);
	DDX_Control(pDX, IDC_COMBO2, m_province_search);
	DDX_Control(pDX, IDC_LIST1, m_Record_List);
	DDX_Text(pDX, IDC_EDIT1, m_ID_output);
	DDX_Text(pDX, IDC_EDIT2, m_name_output);
	DDX_Text(pDX, IDC_EDIT20, m_abbreviation_output);
	DDX_Text(pDX, IDC_EDIT36, m_profession_output);
	DDX_Text(pDX, IDC_EDIT3, m_title_output);
	DDX_Text(pDX, IDC_EDIT28, m_major_output);
	DDX_Text(pDX, IDC_EDIT6, m_means_output);
	DDX_Text(pDX, IDC_EDIT7, m_type_output);
	DDX_Text(pDX, IDC_EDIT8, m_hospital_output);
	DDX_Text(pDX, IDC_EDIT9, m_department_output);
	DDX_Text(pDX, IDC_EDIT10, m_address_output);
	DDX_Text(pDX, IDC_EDIT11, m_postcode_output);
	DDX_Text(pDX, IDC_EDIT14, m_sponsor_output);
	DDX_Text(pDX, IDC_EDIT15, m_abbreviation_input);
	DDX_Text(pDX, IDC_EDIT16, m_ID_input);
	DDX_Text(pDX, IDC_EDIT17, m_telephone_output);
	DDX_Text(pDX, IDC_EDIT18, m_mobile_output);
	DDX_Text(pDX, IDC_EDIT19, m_city_output);
	DDX_Text(pDX, IDC_EDIT21, m_email_output);
	DDX_Text(pDX, IDC_EDIT24, m_fax_output);
	DDX_Text(pDX, IDC_EDIT27, m_number_sponsor);
	DDX_Text(pDX, IDC_EDIT30, m_hospital_search);
	DDX_Text(pDX, IDC_EDIT31, m_lecture_output);
	DDX_Text(pDX, IDC_EDIT32, m_home_telephone_output);
	DDX_Text(pDX, IDC_EDIT33, m_length_output);
	DDX_Text(pDX, IDC_EDIT34, m_shortnumber_output);
	DDX_Text(pDX, IDC_EDIT35, m_indicator_output);
	DDX_Text(pDX, IDC_EDIT38, m_writer_output);
	DDX_Text(pDX, IDC_EDIT39, m_spokesman_output);
	DDX_Text(pDX, IDC_EDIT29, m_article_output);
	DDX_Text(pDX, IDC_EDIT37, m_comment_output);
	DDX_Text(pDX, IDC_EDIT26, m_personal_ID_output);
	DDX_Text(pDX, IDC_EDIT40, m_marker_output);
	DDX_Text(pDX, IDC_EDIT41, m_age_output);
	DDX_Text(pDX, IDC_EDIT5, m_class_1_output);
	DDX_Text(pDX, IDC_EDIT12, m_class_2_output);
	DDX_Text(pDX, IDC_EDIT13, m_class_3_output);
	DDX_DateTimeCtrl(pDX, IDC_DATETIMEPICKER1, m_lecture_date_output);
	//}}AFX_DATA_MAP
}

BOOL CMotionSpecialistVistaView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CRecordView::PreCreateWindow(cs);
}

void CMotionSpecialistVistaView::OnInitialUpdate()
{
	CString sponsor[50],province[40];
	int i;
	CTime Original(2007,1,1,22,0,0);
	

	m_pSet = &GetDocument()->m_motionSpecialistVistaSet;
	CRecordView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

	m_Record_List.SetExtendedStyle(LVS_EX_FULLROWSELECT|LVS_EX_GRIDLINES);

	LV_COLUMN h;

	h.mask=LVCF_FMT|LVCF_TEXT;

	h.fmt=LVCFMT_LEFT;

//	h.cx=83;

	h.pszText="注册号";
	m_Record_List.InsertColumn(0,&h);

	h.pszText="姓名";
	m_Record_List.InsertColumn(1,&h);

	h.pszText="职称";
	m_Record_List.InsertColumn(2,&h);


	h.pszText="大会职务";
	m_Record_List.InsertColumn(3,&h);

	h.pszText="单位";
	m_Record_List.InsertColumn(4,&h);

	h.pszText="科室";
	m_Record_List.InsertColumn(5,&h);


	h.pszText="参会方式";
	m_Record_List.InsertColumn(6,&h);

	h.pszText="赞助厂家";
	m_Record_List.InsertColumn(7,&h);

	h.pszText="参会状态";
	m_Record_List.InsertColumn(8,&h);

	//////////////// Set Column Width////////////////////////


	m_Record_List.SetColumnWidth(0,55);
	m_Record_List.SetColumnWidth(1,72);
	m_Record_List.SetColumnWidth(2,78);
	m_Record_List.SetColumnWidth(3,75);
	m_Record_List.SetColumnWidth(4,200);
	m_Record_List.SetColumnWidth(5,75);
	m_Record_List.SetColumnWidth(6,70);
	m_Record_List.SetColumnWidth(7,70);
	m_Record_List.SetColumnWidth(8,65);

	//////////////////////////Provinces///////////////////////////////////////

	province[0]="辽宁";
	province[1]="吉林";
	province[2]="黑龙江";
	province[3]="内蒙古";
	province[4]="河北";
	province[5]="北京";
	province[6]="天津";
	province[7]="山东";
	province[8]="河南";
	province[9]="山西";
	province[10]="陕西";
	province[11]="甘肃";
	province[12]="宁夏";
	province[13]="新疆";
	province[14]="西藏";
	province[15]="青海";
	province[16]="云南";
	province[17]="贵州";
	province[18]="广西";
	province[19]="广东";
	province[20]="海南";
	province[21]="福建";
	province[22]="湖北";
	province[23]="湖南";
	province[24]="江西";
	province[25]="浙江";
	province[26]="江苏";
	province[27]="上海";
	province[28]="安徽";
	province[29]="台湾";
	province[30]="四川";
	province[31]="重庆";
	province[32]="香港";
	province[33]="澳门";


	for(i=0;i<34;i++)
	{
		this->m_province_search.AddString((LPCTSTR)province[i]);
	}

	this->m_province_search.SetCurSel(-1);


	////////////////////////Sponsors///////////////////////


	sponsor[0]="Sanofi-Aventis China";
	sponsor[1]="Pfizer Pharmaceuticals Limited";
	sponsor[2]="Merck Sharp & Dohme Ltd.";
	sponsor[3]="GlaxoSmithKline Investment Co,. Ltd.";
	sponsor[4]="Tianjin Takeda Pharmaceuticals Co., Ltd.";
	sponsor[5]="Boehringer Ingelheim Pharmaceuticals Co., Ltd.";
	sponsor[6]="Tianjin Tanabe Seiyaku Co., Ltd.";
	sponsor[7]="AstraZeneca Pharmaceuticals Company";
	sponsor[8]="Merck Apotec Pharmaceutical Co., Ltd.";
	sponsor[9]="Servier Pharmaceutical Co., Ltd.";
	sponsor[10]="Schering Pharmaceutical Ltd.";
	sponsor[11]="Kyowa Hakko Kogyo Co., Ltd.";
	sponsor[12]="Schwarz Pharma";
	sponsor[13]="Sankyo Seiki Manufacturing Company";
	sponsor[14]="神威药业有限公司";
	sponsor[15]="成都时代第一制药有限公司";
	sponsor[16]="Novartis";
	sponsor[17]="黑龙江省联仁医药有限责任公司";
	sponsor[18]="Bayer HealthCare";
	sponsor[19]="Johnson & Johnson";
	sponsor[20]="北大维信生物科技有限公司";
	sponsor[21]="St. Jude Medical Ltd.";
	sponsor[22]="Bristol-Myers Squibb Company";
	sponsor[23]="中国医科大学附属盛京医院";
	sponsor[24]="深圳康哲";
	sponsor[25]="香港宏志";


	for(i=0;i<25;i++)
	{
		this->m_sponsor_search.AddString((LPCTSTR)sponsor[i]);
	}

	this->m_sponsor_search.SetCurSel(-1);

	////////////////////////////Gender////////////////////////

	this->m_gender_output.AddString((LPCTSTR)"男");
	this->m_gender_output.AddString((LPCTSTR)"女");
	this->m_gender_output.SetCurSel(-1);

	///////////////////////////Arrival///////////////////////////

	this->m_arrival_output.AddString((LPCTSTR)"已注册");
	this->m_arrival_output.AddString((LPCTSTR)"已回执");
	this->m_arrival_output.AddString((LPCTSTR)"清空");
	this->m_arrival_output.SetCurSel(-1);

	//////////////////////////Accomodattion////////////////////

	this->m_hotel_output.AddString((LPCTSTR)"住宿");
	this->m_hotel_output.AddString((LPCTSTR)"不住宿");
	this->m_hotel_output.SetCurSel(-1);

	////////////////////Time of Lecture////////////////////////

	this->m_lecture_noon_output.AddString((LPCTSTR)"上午");
	this->m_lecture_noon_output.AddString((LPCTSTR)"下午");
	this->m_lecture_noon_output.AddString((LPCTSTR)"清空");
	this->m_lecture_noon_output.SetCurSel(-1);

	////////////////////Time of Lecture////////////////////////

	this->m_lecture_order_output.AddString((LPCTSTR)"1");
	this->m_lecture_order_output.AddString((LPCTSTR)"2");
	this->m_lecture_order_output.AddString((LPCTSTR)"3");
	this->m_lecture_order_output.AddString((LPCTSTR)"4");
	this->m_lecture_order_output.AddString((LPCTSTR)"5");
	this->m_lecture_order_output.AddString((LPCTSTR)"6");
	this->m_lecture_order_output.AddString((LPCTSTR)"0");
	this->m_lecture_order_output.SetCurSel(-1);

	/////////////////////Time Picker///////////////////////////


	this->m_lecture_date_output=Original;

	UpdateData(FALSE);




}

/////////////////////////////////////////////////////////////////////////////
// CMotionSpecialistVistaView diagnostics

#ifdef _DEBUG
void CMotionSpecialistVistaView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMotionSpecialistVistaView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMotionSpecialistVistaDoc* CMotionSpecialistVistaView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMotionSpecialistVistaDoc)));
	return (CMotionSpecialistVistaDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMotionSpecialistVistaView database support
CRecordset* CMotionSpecialistVistaView::OnGetRecordset()
{
	return m_pSet;
}


/////////////////////////////////////////////////////////////////////////////
// CMotionSpecialistVistaView message handlers

void CMotionSpecialistVistaView::OnBrowse() 
{
	int i=0;
	
	/////////////////////////////////////////////////////////////////////////////
	
	m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		i++;
		m_pSet->MoveNext();		
	}
	
	m_number_sponsor=i;
	
	this->ProgressInitiation();   ///////////Initiation of Progress Bar//////////
	
	/////////////////////////////////////////////////////////////////////////////
	
	i=0;
	
	m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		m_Record_List.InsertItem(i,m_pSet->m_ID);
		m_Record_List.SetItemText(i,1,m_pSet->m_name);
		m_Record_List.SetItemText(i,2,m_pSet->m_profession);
		m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
		m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
		m_Record_List.SetItemText(i,5,m_pSet->m_department);
		m_Record_List.SetItemText(i,6,m_pSet->m_means);
		m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
		m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
		
		
		m_pSet->MoveNext();
		
		i++;
		
		m_Progress.StepIt();
	}
	
	this->SeperateRow(i);   //**************Place the seperator*****************
	
	
	UpdateData(FALSE);
	
}


void CMotionSpecialistVistaView::ProgressInitiation()
{
	m_RangeFrom=0;
	m_RangeTo=m_number_sponsor;

	m_Progress.SetPos(0);
	m_Progress.SetRange(m_RangeFrom,m_RangeTo);
	m_Progress.SetStep(1);

}

void CMotionSpecialistVistaView::SeperateRow(int n)
{
	int i;
 	i=n;
 	
 	m_Record_List.InsertItem(i,"-------------");
 	m_Record_List.SetItemText(i,1,"-------------------");
 	m_Record_List.SetItemText(i,2,"--------------------");
 	m_Record_List.SetItemText(i,3,"--------------------");
 	m_Record_List.SetItemText(i,4,"-------------------------------------------------------------");
 	m_Record_List.SetItemText(i,5,"-------------------");
 	m_Record_List.SetItemText(i,6,"-------------------");
 	m_Record_List.SetItemText(i,7,"-------------------");
 	m_Record_List.SetItemText(i,8,"-----------------");

}

void CMotionSpecialistVistaView::OnSearch() 
{
	
	int w=0,i=0;    //Variable definition.
	ProtectedPasswordAquisition dialogue;
		
	UpdateData(TRUE);       //Input all data.
	
	//////////////////////////The Different Process///////////////////////////////
	
	if(m_abbreviation_input=="")    //If the ID box is empty, the message is popup.
	{
		w=1;
		MessageBox("对不起，请输入数据。","错误",MB_OK|MB_ICONINFORMATION);
		
	}
	
	//////////////////////////The Normal Process////////////////////////////////
	
	else
	{
		m_Record_List.SendMessage(WM_VSCROLL,6,0); //*********Scroll to the first line!

		m_pSet->MoveFirst();     //Locate the first record.

		while(!m_pSet->IsEOF())    //If the record exist, display in the ListControl.
		{
			if(m_pSet->m_abbreviation==m_abbreviation_input)
			{
				m_Record_List.InsertItem(i,m_pSet->m_ID);
				m_Record_List.SetItemText(i,1,m_pSet->m_name);
				m_Record_List.SetItemText(i,2,m_pSet->m_profession);
				m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
				m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
				m_Record_List.SetItemText(i,5,m_pSet->m_department);
				m_Record_List.SetItemText(i,6,m_pSet->m_means);
				m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
				m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
				
				
				i++;
				w=1;
				
			}
			
			m_pSet->MoveNext();
		}
		
		
		if(w==0)
			MessageBox("对不起，无此人记录，请核对！","记录不存在",MB_OK|MB_ICONINFORMATION);
		
		else
		{
			this->SeperateRow(i);   //**************Place the seperator*****************
			
		}
		
		////////////////////////////////////////////////////////////////////////////////
		
		if(i==1)   //If there is only 1 record, display it in the data area, directly.
		{
			m_pSet->MoveFirst();
			
			while(!m_pSet->IsEOF())
			{
				if(m_pSet->m_abbreviation==m_abbreviation_input)
				{
					if(m_pSet->m_indicator!="p")
					{
						this->DisplayRecordContent();  //***Display Record Content******
						
						this->m_number_sponsor=i;
						
						break;
					}
					if(m_pSet->m_indicator=="p")
					{
						dialogue.m_name_show=m_pSet->m_name;
						UpdateData(FALSE);
						
						if(dialogue.DoModal()==IDOK)
						{
							this->DisplayRecordContent();  //****Display Record Content****
							break;
						}
						else
						{
							this->DisplayRecordContent_protected(); //***Display part Record Content****
							break;
						}
					}
				}
				
				m_pSet->MoveNext();
			}
			
		}
		
		///////////////////////////////////////////////////////////////////
		
		
		this->m_number_sponsor=i;  //Show the number found.
		
		UpdateData(FALSE);   //Output all data.
	}
}

void CMotionSpecialistVistaView::DisplayRecordContent()
{
	int age,i,birthyear,ComboNum=0;
	char *pYear;
	SYSTEMTIME CurrentTime;
	CString year;
	CTime Original(2007,1,1,22,0,0);
	
	OnClear();
	m_Save_Progress.SetPos(0);
	m_Add_Progress.SetPos(0);

	GetLocalTime(&CurrentTime);	

	if(m_pSet->m_personal_ID!="")
	{
		pYear=(LPSTR)LPCTSTR(m_pSet->m_personal_ID);
		
		if(strlen(m_pSet->m_personal_ID)==18)
		{
			for(i=0;i<6;i++)
				pYear++;
			birthyear=(pYear[0]-48)*1000+(pYear[1]-48)*100+(pYear[2]-48)*10+(pYear[3]-48);
			
			age=CurrentTime.wYear-birthyear;

			m_age_output.Format("%d",age);    ////Convert int to string
		}

		///////////////////////////////////////////////////////////////////////////////
       
		if(strlen(m_pSet->m_personal_ID)==15)
		{
			for(i=0;i<6;i++)
				pYear++;
			birthyear=1900+(pYear[0]-48)*10+(pYear[1]-48);
			
			age=CurrentTime.wYear-birthyear;

			m_age_output.Format("%d",age);   ////Convert int to string
		}
	}

	///////////////////////////////////////////////////////////
	
	m_ID_output=m_pSet->m_ID;
	m_name_output=m_pSet->m_name;
	
	ComboNum=this->m_gender_output.FindString(0,(LPCTSTR) m_pSet->m_gender);
	this->m_gender_output.SetCurSel(ComboNum);

	ComboNum=this->m_arrival_output.FindString(0,(LPCTSTR) m_pSet->m_arrival);
	this->m_arrival_output.SetCurSel(ComboNum);

	ComboNum=this->m_hotel_output.FindString(0,(LPCTSTR) m_pSet->m_hotel);
	this->m_hotel_output.SetCurSel(ComboNum);

	ComboNum=this->m_lecture_noon_output.FindString(0,(LPCTSTR) m_pSet->m_lecture_noon);
	this->m_lecture_noon_output.SetCurSel(ComboNum);

	ComboNum=this->m_lecture_order_output.FindString(0,(LPCTSTR) m_pSet->m_lecture_order);
	this->m_lecture_order_output.SetCurSel(ComboNum);

	if(m_pSet->m_lecture_date==NULL)
		this->m_lecture_date_output=Original;
	else
		this->m_lecture_date_output=m_pSet->m_lecture_date;

	m_hospital_output=m_pSet->m_hospital;
	m_address_output=m_pSet->m_address;
	m_department_output=m_pSet->m_department;
	m_postcode_output=m_pSet->m_post_code;
	m_means_output=m_pSet->m_means;
	m_profession_output=m_pSet->m_profession;
	m_title_output=m_pSet->m_title;
	m_class_1_output=m_pSet->m_class_1;
	m_class_2_output=m_pSet->m_class_2;
	m_class_3_output=m_pSet->m_class_3;
	m_telephone_output=m_pSet->m_telephone;
	m_mobile_output=m_pSet->m_mobile_phone;
	m_sponsor_output=m_pSet->m_sponsor;
	m_type_output=m_pSet->m_type;
	m_city_output=m_pSet->m_city;
	m_abbreviation_output=m_pSet->m_abbreviation;
	m_email_output=m_pSet->m_email;


	m_fax_output=m_pSet->m_fax;


	m_major_output=m_pSet->m_major;
	m_article_output=m_pSet->m_article;
	m_lecture_output=m_pSet->m_lecture;
	m_home_telephone_output=m_pSet->m_home_telephone;
	m_shortnumber_output=m_pSet->m_shortnumber;
	m_indicator_output=m_pSet->m_indicator;
	m_comment_output=m_pSet->m_comment;
	m_writer_output=m_pSet->m_writer;
	m_spokesman_output=m_pSet->m_spokesman;
	m_personal_ID_output=m_pSet->m_personal_ID;
	m_marker_output=m_pSet->m_marker;

	this->OnActivateRandom_plain();
	this->MakeReadOnly();

	UpdateData(FALSE);

	return;

}

void CMotionSpecialistVistaView::DisplayRecordContent_protected()
{
	int ComboNum;
	CTime Original(2007,1,1,22,0,0);
	
	m_Save_Progress.SetPos(0);
	m_Add_Progress.SetPos(0);
	
	m_ID_output=m_pSet->m_ID;
	m_name_output=m_pSet->m_name;
		
	ComboNum=this->m_gender_output.FindString(0,(LPCTSTR) m_pSet->m_gender);
	this->m_gender_output.SetCurSel(ComboNum);

	ComboNum=this->m_arrival_output.FindString(0,(LPCTSTR) m_pSet->m_arrival);
	this->m_arrival_output.SetCurSel(ComboNum);

	ComboNum=this->m_hotel_output.FindString(0,(LPCTSTR) m_pSet->m_hotel);
	this->m_hotel_output.SetCurSel(ComboNum);

	ComboNum=this->m_lecture_noon_output.FindString(0,(LPCTSTR) m_pSet->m_lecture_noon);
	this->m_lecture_noon_output.SetCurSel(ComboNum);

	ComboNum=this->m_lecture_order_output.FindString(0,(LPCTSTR) m_pSet->m_lecture_order);
	this->m_lecture_order_output.SetCurSel(ComboNum);

	if(m_pSet->m_lecture_date==NULL)
		this->m_lecture_date_output=Original;
	else
		this->m_lecture_date_output=m_pSet->m_lecture_date;

	m_hospital_output=m_pSet->m_hospital;
	m_address_output=m_pSet->m_address;
	m_department_output=m_pSet->m_department;
	m_postcode_output=m_pSet->m_post_code;
	m_means_output=m_pSet->m_means;
	m_profession_output=m_pSet->m_profession;
	m_title_output=m_pSet->m_title;
	m_class_1_output=m_pSet->m_class_1;
	m_class_2_output=m_pSet->m_class_2;
	m_class_3_output=m_pSet->m_class_3;
	m_telephone_output=m_pSet->m_telephone;
	m_mobile_output="hidden";
	m_sponsor_output=m_pSet->m_sponsor;
	m_type_output=m_pSet->m_type;
	m_city_output=m_pSet->m_city;
	m_abbreviation_output=m_pSet->m_abbreviation;
	m_email_output=m_pSet->m_email;


	m_fax_output=m_pSet->m_fax;


	m_major_output=m_pSet->m_major;
	m_article_output=m_pSet->m_article;
	m_lecture_output=m_pSet->m_lecture;
	m_home_telephone_output="hidden";
	m_shortnumber_output="hidden";
	m_indicator_output=m_pSet->m_indicator;
	m_comment_output=m_pSet->m_comment;
	m_writer_output=m_pSet->m_writer;
	m_spokesman_output=m_pSet->m_spokesman;
	m_personal_ID_output="hidden";
	m_marker_output=m_pSet->m_marker;
	m_age_output="";
	
	this->OnActivateRandom_plain();
	this->MakeReadOnly();
	UpdateData(FALSE);
	
	return;


}



void CMotionSpecialistVistaView::OnDoubleClickListControl(NMHDR* pNMHDR, LRESULT* pResult) 
{
	CString str;
	ProtectedPasswordAquisition dialogue;
	int CurSel=m_Record_List.GetNextItem(-1,LVNI_ALL | LVNI_SELECTED);
    
	str=m_Record_List.GetItemText(CurSel,0);
	
	m_pSet->MoveFirst();
	
	while(!m_pSet->IsEOF())
	{
		
		if(m_pSet->m_ID==str)
		{
			if(m_pSet->m_indicator=="p")
			{
				dialogue.m_name_show=m_pSet->m_name;
				UpdateData(FALSE);
				
				if(dialogue.DoModal()==IDOK)
				{
					this->DisplayRecordContent();  //********Display Record Content*****
					
					break;
				}
				else
				{
					this->DisplayRecordContent_protected();  //******Display part Record Content****
					
					break;
				}
			}
			else
			{
				this->DisplayRecordContent();  //*****Display Record Content*******				
				
				break;
			}
			
		}
		
		m_pSet->MoveNext();
	}
	
	*pResult = 0;
}

void CMotionSpecialistVistaView::OnSave() 
{

	int i=0;
	CString TempString;
	CTime SetPoint(2007,4,2,9,0,0);
		
	UpdateData(TRUE);

	////////////////////////////////////
	m_Save_Progress.SetPos(0);
	m_Save_Progress.SetRange(0,30);
	m_Save_Progress.SetStep(30);
	////////////////////////////////////

	if(m_ID_output=="")
		MessageBox("对不起，当前无数据待保存，请核对。","错误",MB_OK|MB_ICONINFORMATION);

	////////////////////////////////////////////////////////////////////////////////

	else
		if(strlen(m_lecture_output)>=240||strlen(m_article_output)>=240||strlen(m_comment_output)>=240||strlen(m_major_output)>=240)
			MessageBox("对不起，某些字段字符串长度超过规定上限，请核对。","错误",MB_OK|MB_ICONINFORMATION);

		else
		if(m_mobile_output=="hidden"||m_home_telephone_output=="hidden"||m_shortnumber_output=="hidden")
			MessageBox("对不起，由于有非公开信息，当前数据无法保存，请核对。","错误",MB_OK|MB_ICONINFORMATION);
		
		//////////////////////////////The Normal Process//////////////////////////////////////////

		else
		{
			m_pSet->MoveFirst();

			while(!m_pSet->IsEOF())
			{
				if(m_pSet->m_ID==m_ID_output)
				{
					m_pSet->Delete();
					m_pSet->AddNew();

					m_pSet->m_ID=m_ID_output;
					m_pSet->m_name=m_name_output;
					
					/////////////////////////////////////////////////////////////

					if(this->m_gender_output.GetCurSel()==-1)
						m_pSet->m_gender="";
					else
						this->m_gender_output.GetLBText(m_gender_output.GetCurSel(),m_pSet->m_gender);

					/////////////////////////////////////////////////////////////
					
					if(this->m_arrival_output.GetCurSel()==-1)
						m_pSet->m_arrival="";
					else
					{
						this->m_arrival_output.GetLBText(m_arrival_output.GetCurSel(),TempString);
						if(TempString=="清空")
							m_pSet->m_arrival="";
						else
							m_pSet->m_arrival=TempString;
					}

					////////////////////////////////////////////////////////////
					
					if(this->m_hotel_output.GetCurSel()==-1)
						m_pSet->m_hotel="";
					else
					{
						this->m_hotel_output.GetLBText(m_hotel_output.GetCurSel(),TempString);
						if(TempString=="不住宿")
							m_pSet->m_hotel="";
						else
							m_pSet->m_hotel=TempString;
					}

					//////////////////////////////////////////////////////////////

					if(this->m_lecture_noon_output.GetCurSel()==-1)
						m_pSet->m_lecture_noon="";
					else
					{
						this->m_lecture_noon_output.GetLBText(m_lecture_noon_output.GetCurSel(),TempString);
						if(TempString=="清空")
							m_pSet->m_lecture_noon="";
						else
							m_pSet->m_lecture_noon=TempString;
					}

					//////////////////////////////////////////////////////////////

					if(this->m_lecture_order_output.GetCurSel()==-1)
						m_pSet->m_lecture_order="";
					else
					{
						this->m_lecture_order_output.GetLBText(m_lecture_order_output.GetCurSel(),TempString);
						if(TempString=="0")
							m_pSet->m_lecture_order="";
						else
							m_pSet->m_lecture_order=TempString;
					}

					////////////////////////////////////////////////////////////

					if((this->m_lecture_date_output-SetPoint).GetTotalSeconds()<0)
						m_pSet->m_lecture_date=NULL;
					else
						m_pSet->m_lecture_date=this->m_lecture_date_output;

					/////////////////////////////////////////////////////////////

					m_pSet->m_hospital=m_hospital_output;
					m_pSet->m_address=m_address_output;
					m_pSet->m_department=m_department_output;
					m_pSet->m_post_code=m_postcode_output;
					m_pSet->m_means=m_means_output;
					m_pSet->m_title=m_title_output;
					m_pSet->m_class_1=m_class_1_output;
					m_pSet->m_class_2=m_class_2_output;
					m_pSet->m_class_3=m_class_3_output;
					m_pSet->m_telephone=m_telephone_output;
					m_pSet->m_mobile_phone=m_mobile_output;
					m_pSet->m_abbreviation=m_abbreviation_output;
					m_pSet->m_type=m_type_output;
					m_pSet->m_city=m_city_output;
					m_pSet->m_sponsor=m_sponsor_output;


					m_pSet->m_email=m_email_output;
					m_pSet->m_fax=m_fax_output;


					m_pSet->m_major=m_major_output;
					m_pSet->m_article=m_article_output;
					m_pSet->m_lecture=m_lecture_output;
					m_pSet->m_home_telephone=m_home_telephone_output;
					m_pSet->m_shortnumber=m_shortnumber_output;
					m_pSet->m_indicator=m_indicator_output;
					m_pSet->m_profession=m_profession_output;
					m_pSet->m_comment=m_comment_output;
					m_pSet->m_writer=m_writer_output;
					m_pSet->m_spokesman=m_spokesman_output;
					m_pSet->m_personal_ID=m_personal_ID_output;
					m_pSet->m_marker=m_marker_output;
					m_pSet->m_lecture=m_lecture_output;

					m_pSet->Update();					

					m_Save_Progress.StepIt();
					


					break;

				}
				
				m_pSet->MoveNext();
			}
			
		}

}

void CMotionSpecialistVistaView::OnActiveRandom() 
{
	PasswordAquisition dlg;

	CEdit *pEdit2=(CEdit*)GetDlgItem(IDC_EDIT2)
		, *pEdit3=(CEdit*)GetDlgItem(IDC_EDIT3)	
		, *pEdit5=(CEdit*)GetDlgItem(IDC_EDIT5)
		, *pEdit6=(CEdit*)GetDlgItem(IDC_EDIT6)
		, *pEdit7=(CEdit*)GetDlgItem(IDC_EDIT7)
		, *pEdit8=(CEdit*)GetDlgItem(IDC_EDIT8)
		, *pEdit9=(CEdit*)GetDlgItem(IDC_EDIT9)
		, *pEdit10=(CEdit*)GetDlgItem(IDC_EDIT10)
		, *pEdit11=(CEdit*)GetDlgItem(IDC_EDIT11)
		, *pEdit12=(CEdit*)GetDlgItem(IDC_EDIT12)
		, *pEdit13=(CEdit*)GetDlgItem(IDC_EDIT13)
		, *pEdit14=(CEdit*)GetDlgItem(IDC_EDIT14)
		, *pEdit17=(CEdit*)GetDlgItem(IDC_EDIT17)
		, *pEdit18=(CEdit*)GetDlgItem(IDC_EDIT18)
		, *pEdit19=(CEdit*)GetDlgItem(IDC_EDIT19)
		, *pEdit20=(CEdit*)GetDlgItem(IDC_EDIT20)
		, *pEdit21=(CEdit*)GetDlgItem(IDC_EDIT21)
		, *pEdit24=(CEdit*)GetDlgItem(IDC_EDIT24)
		, *pEdit26=(CEdit*)GetDlgItem(IDC_EDIT26)
		, *pEdit28=(CEdit*)GetDlgItem(IDC_EDIT28)
		, *pEdit31=(CEdit*)GetDlgItem(IDC_EDIT31)
		, *pEdit32=(CEdit*)GetDlgItem(IDC_EDIT32)
		, *pEdit34=(CEdit*)GetDlgItem(IDC_EDIT34)
		, *pEdit35=(CEdit*)GetDlgItem(IDC_EDIT35)
		, *pEdit36=(CEdit*)GetDlgItem(IDC_EDIT36)
		, *pEdit29=(CEdit*)GetDlgItem(IDC_EDIT29)
		, *pEdit38=(CEdit*)GetDlgItem(IDC_EDIT38)
		, *pEdit39=(CEdit*)GetDlgItem(IDC_EDIT39)
		, *pEdit40=(CEdit*)GetDlgItem(IDC_EDIT40);
	
 

	if(dlg.DoModal()==IDOK)
	{
		if(dlg.m_password_input=="s")
		{
			pEdit2->SetReadOnly(FALSE);
			pEdit3->SetReadOnly(FALSE);

			GetDlgItem(IDC_COMBO3)->EnableWindow(TRUE);
			GetDlgItem(IDC_COMBO4)->EnableWindow(TRUE);
			GetDlgItem(IDC_COMBO5)->EnableWindow(TRUE);
			GetDlgItem(IDC_COMBO6)->EnableWindow(TRUE);
			GetDlgItem(IDC_COMBO7)->EnableWindow(TRUE);
			GetDlgItem(IDC_DATETIMEPICKER1)->EnableWindow(TRUE);

			GetDlgItem(IDC_BUTTON44)->EnableWindow(TRUE);
			GetDlgItem(IDC_BUTTON6)->EnableWindow(TRUE);
			GetDlgItem(IDC_BUTTON11)->EnableWindow(TRUE);
			GetDlgItem(IDC_BUTTON13)->EnableWindow(TRUE);
			GetDlgItem(IDC_BUTTON16)->EnableWindow(TRUE);

    	
			pEdit5->SetReadOnly(FALSE);
			pEdit6->SetReadOnly(FALSE);
			pEdit7->SetReadOnly(FALSE);
			pEdit8->SetReadOnly(FALSE);
			pEdit9->SetReadOnly(FALSE);
			pEdit10->SetReadOnly(FALSE);
			pEdit11->SetReadOnly(FALSE);
			pEdit12->SetReadOnly(FALSE);
			pEdit13->SetReadOnly(FALSE);
			pEdit14->SetReadOnly(FALSE);
			pEdit17->SetReadOnly(FALSE);
			pEdit18->SetReadOnly(FALSE);
			pEdit19->SetReadOnly(FALSE);
			pEdit20->SetReadOnly(FALSE);
			pEdit21->SetReadOnly(FALSE);
			pEdit24->SetReadOnly(FALSE);
			pEdit26->SetReadOnly(FALSE);
			pEdit28->SetReadOnly(FALSE);
			pEdit31->SetReadOnly(FALSE);
			pEdit32->SetReadOnly(FALSE);
			pEdit34->SetReadOnly(FALSE);
			pEdit35->SetReadOnly(FALSE);
			pEdit36->SetReadOnly(FALSE);
			pEdit29->SetReadOnly(FALSE);
			pEdit38->SetReadOnly(FALSE);
			pEdit39->SetReadOnly(FALSE);
			pEdit40->SetReadOnly(FALSE);
			

		}

		else
		{
			MessageBox("对不起，密码错误，您无权应用该功能。","密码错误",MB_OK|MB_ICONINFORMATION);
		}
	}
	
	
}

void CMotionSpecialistVistaView::OnActivateRandom_plain()
{
	CEdit *pEdit2=(CEdit*)GetDlgItem(IDC_EDIT2)
		, *pEdit3=(CEdit*)GetDlgItem(IDC_EDIT3)	
		, *pEdit5=(CEdit*)GetDlgItem(IDC_EDIT5)
		, *pEdit6=(CEdit*)GetDlgItem(IDC_EDIT6)
		, *pEdit7=(CEdit*)GetDlgItem(IDC_EDIT7)
		, *pEdit8=(CEdit*)GetDlgItem(IDC_EDIT8)
		, *pEdit9=(CEdit*)GetDlgItem(IDC_EDIT9)
		, *pEdit10=(CEdit*)GetDlgItem(IDC_EDIT10)
		, *pEdit11=(CEdit*)GetDlgItem(IDC_EDIT11)
		, *pEdit12=(CEdit*)GetDlgItem(IDC_EDIT12)
		, *pEdit13=(CEdit*)GetDlgItem(IDC_EDIT13)
		, *pEdit14=(CEdit*)GetDlgItem(IDC_EDIT14)
		, *pEdit17=(CEdit*)GetDlgItem(IDC_EDIT17)
		, *pEdit18=(CEdit*)GetDlgItem(IDC_EDIT18)
		, *pEdit19=(CEdit*)GetDlgItem(IDC_EDIT19)
		, *pEdit20=(CEdit*)GetDlgItem(IDC_EDIT20)
		, *pEdit21=(CEdit*)GetDlgItem(IDC_EDIT21)
		, *pEdit24=(CEdit*)GetDlgItem(IDC_EDIT24)
		, *pEdit26=(CEdit*)GetDlgItem(IDC_EDIT26)
		, *pEdit28=(CEdit*)GetDlgItem(IDC_EDIT28)
		, *pEdit31=(CEdit*)GetDlgItem(IDC_EDIT31)
		, *pEdit32=(CEdit*)GetDlgItem(IDC_EDIT32)
		, *pEdit34=(CEdit*)GetDlgItem(IDC_EDIT34)
		, *pEdit35=(CEdit*)GetDlgItem(IDC_EDIT35)
		, *pEdit36=(CEdit*)GetDlgItem(IDC_EDIT36)
		, *pEdit29=(CEdit*)GetDlgItem(IDC_EDIT29)
		, *pEdit38=(CEdit*)GetDlgItem(IDC_EDIT38)
		, *pEdit39=(CEdit*)GetDlgItem(IDC_EDIT39)
		, *pEdit40=(CEdit*)GetDlgItem(IDC_EDIT40);

	
			pEdit2->SetReadOnly(FALSE);
			pEdit3->SetReadOnly(FALSE);
			
			GetDlgItem(IDC_COMBO3)->EnableWindow(TRUE);
			GetDlgItem(IDC_COMBO4)->EnableWindow(TRUE);
			GetDlgItem(IDC_COMBO5)->EnableWindow(TRUE);
			GetDlgItem(IDC_COMBO6)->EnableWindow(TRUE);
			GetDlgItem(IDC_COMBO7)->EnableWindow(TRUE);
			GetDlgItem(IDC_DATETIMEPICKER1)->EnableWindow(TRUE);

			GetDlgItem(IDC_BUTTON44)->EnableWindow(TRUE);
			GetDlgItem(IDC_BUTTON6)->EnableWindow(TRUE);
			GetDlgItem(IDC_BUTTON11)->EnableWindow(TRUE);
			GetDlgItem(IDC_BUTTON13)->EnableWindow(TRUE);
			GetDlgItem(IDC_BUTTON16)->EnableWindow(TRUE);
			
			pEdit5->SetReadOnly(FALSE);
			pEdit6->SetReadOnly(FALSE);
			pEdit7->SetReadOnly(FALSE);
			pEdit8->SetReadOnly(FALSE);
			pEdit9->SetReadOnly(FALSE);
			pEdit10->SetReadOnly(FALSE);
			pEdit11->SetReadOnly(FALSE);
			pEdit12->SetReadOnly(FALSE);
			pEdit13->SetReadOnly(FALSE);
			pEdit14->SetReadOnly(FALSE);
			pEdit17->SetReadOnly(FALSE);
			pEdit18->SetReadOnly(FALSE);
			pEdit19->SetReadOnly(FALSE);
			pEdit20->SetReadOnly(FALSE);
			pEdit21->SetReadOnly(FALSE);
			pEdit24->SetReadOnly(FALSE);
			pEdit26->SetReadOnly(FALSE);
			pEdit28->SetReadOnly(FALSE);
			pEdit31->SetReadOnly(FALSE);
			pEdit32->SetReadOnly(FALSE);
			pEdit34->SetReadOnly(FALSE);
			pEdit35->SetReadOnly(FALSE);
			pEdit36->SetReadOnly(FALSE);
			pEdit29->SetReadOnly(FALSE);
			pEdit38->SetReadOnly(FALSE);
			pEdit39->SetReadOnly(FALSE);
			pEdit40->SetReadOnly(FALSE);


}

void CMotionSpecialistVistaView::MakeReadOnly()
{
	CEdit *pEdit1=(CEdit*)GetDlgItem(IDC_EDIT1)
		, *pEdit2=(CEdit*)GetDlgItem(IDC_EDIT2)
		, *pEdit3=(CEdit*)GetDlgItem(IDC_EDIT3)		  	
		, *pEdit5=(CEdit*)GetDlgItem(IDC_EDIT5)
		, *pEdit6=(CEdit*)GetDlgItem(IDC_EDIT6)
		, *pEdit7=(CEdit*)GetDlgItem(IDC_EDIT7)
		, *pEdit8=(CEdit*)GetDlgItem(IDC_EDIT8)
		, *pEdit9=(CEdit*)GetDlgItem(IDC_EDIT9)
		, *pEdit10=(CEdit*)GetDlgItem(IDC_EDIT10)
		, *pEdit11=(CEdit*)GetDlgItem(IDC_EDIT11)
		, *pEdit12=(CEdit*)GetDlgItem(IDC_EDIT12)
		, *pEdit13=(CEdit*)GetDlgItem(IDC_EDIT13)
		, *pEdit14=(CEdit*)GetDlgItem(IDC_EDIT14)
		, *pEdit17=(CEdit*)GetDlgItem(IDC_EDIT17)
		, *pEdit18=(CEdit*)GetDlgItem(IDC_EDIT18)
		, *pEdit19=(CEdit*)GetDlgItem(IDC_EDIT19)
		, *pEdit20=(CEdit*)GetDlgItem(IDC_EDIT20)
		, *pEdit21=(CEdit*)GetDlgItem(IDC_EDIT21)
		, *pEdit24=(CEdit*)GetDlgItem(IDC_EDIT24)
		, *pEdit26=(CEdit*)GetDlgItem(IDC_EDIT26)
		, *pEdit28=(CEdit*)GetDlgItem(IDC_EDIT28)
		, *pEdit31=(CEdit*)GetDlgItem(IDC_EDIT31)
		, *pEdit32=(CEdit*)GetDlgItem(IDC_EDIT32)
		, *pEdit34=(CEdit*)GetDlgItem(IDC_EDIT34)
		, *pEdit35=(CEdit*)GetDlgItem(IDC_EDIT35)
		, *pEdit36=(CEdit*)GetDlgItem(IDC_EDIT36)
		, *pEdit29=(CEdit*)GetDlgItem(IDC_EDIT29)
		, *pEdit38=(CEdit*)GetDlgItem(IDC_EDIT38)
		, *pEdit39=(CEdit*)GetDlgItem(IDC_EDIT39)
		, *pEdit40=(CEdit*)GetDlgItem(IDC_EDIT40);

		

	if(strlen(m_ID_output)==5)
	{
		pEdit1->SetReadOnly(TRUE);
		pEdit2->SetReadOnly(TRUE);
    	pEdit3->SetReadOnly(TRUE);

		GetDlgItem(IDC_COMBO3)->EnableWindow(FALSE);
//		GetDlgItem(IDC_COMBO4)->EnableWindow(FALSE);
		GetDlgItem(IDC_COMBO5)->EnableWindow(FALSE);
		GetDlgItem(IDC_COMBO6)->EnableWindow(FALSE);
		GetDlgItem(IDC_COMBO7)->EnableWindow(FALSE);
		GetDlgItem(IDC_DATETIMEPICKER1)->EnableWindow(FALSE);
		GetDlgItem(IDC_BUTTON44)->EnableWindow(FALSE);
		GetDlgItem(IDC_BUTTON6)->EnableWindow(FALSE);
		GetDlgItem(IDC_BUTTON11)->EnableWindow(FALSE);
		GetDlgItem(IDC_BUTTON13)->EnableWindow(FALSE);
		GetDlgItem(IDC_BUTTON16)->EnableWindow(FALSE);
		
			
		pEdit5->SetReadOnly(TRUE);
		pEdit6->SetReadOnly(TRUE);
		pEdit7->SetReadOnly(TRUE);
		pEdit8->SetReadOnly(TRUE);
		pEdit9->SetReadOnly(TRUE);
		pEdit10->SetReadOnly(TRUE);
		pEdit11->SetReadOnly(TRUE);
		pEdit12->SetReadOnly(TRUE);
		pEdit13->SetReadOnly(TRUE);
		pEdit14->SetReadOnly(TRUE);
		pEdit17->SetReadOnly(TRUE);
		pEdit18->SetReadOnly(TRUE);
		pEdit19->SetReadOnly(TRUE);
		pEdit20->SetReadOnly(TRUE);
		pEdit21->SetReadOnly(TRUE);
		pEdit24->SetReadOnly(TRUE);
		pEdit26->SetReadOnly(TRUE);
		pEdit28->SetReadOnly(TRUE);
		pEdit31->SetReadOnly(TRUE);
		pEdit32->SetReadOnly(TRUE);
		pEdit34->SetReadOnly(TRUE);
		pEdit35->SetReadOnly(TRUE);
		pEdit36->SetReadOnly(TRUE);
		pEdit29->SetReadOnly(TRUE);
		pEdit38->SetReadOnly(TRUE);
		pEdit39->SetReadOnly(TRUE);
		pEdit40->SetReadOnly(TRUE);
						
	}

}

void CMotionSpecialistVistaView::OnCaptureAddress() 
{

	UpdateData(TRUE);

	m_pSet->MoveFirst();
	
	while(!m_pSet->IsEOF())
	{
		if((m_hospital_output==m_pSet->m_hospital)&&(m_pSet->m_address!=""))
		{
			m_address_output=m_pSet->m_address;
			m_city_output=m_pSet->m_city;
			m_postcode_output=m_pSet->m_post_code;
			break;
		}
		m_pSet->MoveNext();
	}

	UpdateData(FALSE);	
}

void CMotionSpecialistVistaView::OnLectureLen() 
{
	int length;

	UpdateData(TRUE);
	
	length=strlen(m_lecture_output);

	m_length_output=length;

	UpdateData(FALSE);

}

void CMotionSpecialistVistaView::OnArticleLen() 
{

	int length;

	UpdateData(TRUE);
	
	length=strlen(m_article_output);

	m_length_output=length;

	UpdateData(FALSE);
	
}

void CMotionSpecialistVistaView::OnCommentLen() 
{

	int length;

	UpdateData(TRUE);
	
	length=strlen(m_comment_output);

	m_length_output=length;

	UpdateData(FALSE);
	
}

void CMotionSpecialistVistaView::OnMajorLen() 
{

	int length;

	UpdateData(TRUE);
	
	length=strlen(m_major_output);

	m_length_output=length;

	UpdateData(FALSE);
	
}

void CMotionSpecialistVistaView::OnIDSearch() 
{
	int i=0,w=0;
	ProtectedPasswordAquisition dialogue;
	
	UpdateData(TRUE);

	if(m_ID_input=="")
	{
		w=1;
		MessageBox("对不起，请输入数据。","错误",MB_OK|MB_ICONINFORMATION);

	}

	else
	{
		m_Record_List.SendMessage(WM_VSCROLL,6,0); //*********Scroll to the first line!

		m_pSet->MoveFirst();

		while(!m_pSet->IsEOF())
		{
			if(m_pSet->m_ID==m_ID_input)
			{
				if(m_pSet->m_indicator!="p")
				{
					this->DisplayRecordContent();  //*****Display Record Content*******
					w=1;
					break;
				}
				
				if(m_pSet->m_indicator=="p")
				{
					dialogue.m_name_show=m_pSet->m_name;
					UpdateData(FALSE);

					if(dialogue.DoModal()==IDOK)
					{
						this->DisplayRecordContent();  //********Display Record Content*****
						w=1;
						break;
					}
					else
					{
						this->DisplayRecordContent_protected();  //******Display part Record Content****
						w=1;
						break;
					}
				}
			}

			m_pSet->MoveNext();
		}

		if(w==0)
			MessageBox("无此人记录，请核对入！","记录不存在",MB_OK|MB_ICONINFORMATION);
	}
		
}

void CMotionSpecialistVistaView::OnFileSave() 
{
	this->OnSave();
}

void CMotionSpecialistVistaView::OnClear() 
{
	CTime Original(2007,1,1,22,0,0);

	m_ID_output="";
	m_name_output="";

	m_gender_output.SetCurSel(-1);
	m_arrival_output.SetCurSel(-1);
	m_hotel_output.SetCurSel(-1);
	m_lecture_noon_output.SetCurSel(-1);
	m_lecture_noon_output.SetCurSel(-1);
	m_lecture_date_output=Original;

	m_hospital_output="";
	m_address_output="";
	m_department_output="";
	m_postcode_output="";
	m_means_output="";
	m_profession_output="";
	m_title_output="";
	m_class_1_output="";
	m_class_2_output="";
	m_class_3_output="";
	m_telephone_output="";
	m_mobile_output="";
	m_sponsor_output="";
	m_city_output="";
	m_abbreviation_output="";
	m_email_output="";
	m_type_output="";


	m_ID_input="";
	m_fax_output="";


	m_major_output="";
	m_article_output="";
	m_lecture_output="";
	m_home_telephone_output="";
	m_shortnumber_output="";
	m_indicator_output="";
	m_comment_output="";
	m_writer_output="";
	m_spokesman_output="";
	m_length_output=0;
	m_marker_output="";
	m_personal_ID_output="";
	m_age_output="";
	

	this->OnActivateRandom_plain();

	this->m_Save_Progress.SetPos(0);
	this->m_Add_Progress.SetPos(0);
	
	UpdateData(FALSE);
		
}

void CMotionSpecialistVistaView::OnHospitalSearch() 
{
	int w=0,i=0,p=0,q=0,StringLength,RecordLength,indicator=0;
	char *pRecord,*pString;
	CString repID;
	
	UpdateData(TRUE);
	
	
	if(m_hospital_search=="")
	{
		w=1;
		MessageBox("对不起，文本框中无信息，请选择。","错误",MB_OK|MB_ICONINFORMATION);
		
	}
	
	///////////////////////////////////////////////////////////////////////////////////
	
	else
	{
		
		StringLength=strlen(m_hospital_search);       //Get the search string length.
		pString=(LPSTR)LPCTSTR(m_hospital_search);     //The pointer which point to the search string
		
		m_pSet->MoveFirst();

		m_Record_List.SendMessage(WM_VSCROLL,6,0); //*********Scroll to the first line!
		
		/////////////////////////////////////////////////////////////////////////////
		
		while(!m_pSet->IsEOF())
		{
			RecordLength=strlen(m_pSet->m_hospital);   //Get the record string length.
			pRecord=(LPSTR)LPCTSTR(m_pSet->m_hospital);  //The pointer which point to the record string
			
			/////////////////////////for circulation//////////////////////////////
			
			for(q=0;q<RecordLength;q++)    //Great circulation, the Record String
			{
				
				for(p=0;p<StringLength;p++)   //Inner circulation, the String
				{
					if(pRecord[p]==pString[p])
						
						indicator=1;
					
					else
					{
						indicator=0;   // If there is only one indicator=1, then the pointer pointing the record string points the next character.
						break;
					}
				}
				
				
				
				if(indicator==1)
				{
					m_Record_List.InsertItem(i,m_pSet->m_ID);
					m_Record_List.SetItemText(i,1,m_pSet->m_name);
					m_Record_List.SetItemText(i,2,m_pSet->m_profession);
					m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
					m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
					m_Record_List.SetItemText(i,5,m_pSet->m_department);
					m_Record_List.SetItemText(i,6,m_pSet->m_means);
					m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
					m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
					
					i++;
					w=1;
					repID=m_pSet->m_ID;
					break;
				}
				
				else
					pRecord++;  //The pointer pointing the record number points the next character.
				
			}
			
			///////////////////////the "for" circulation end////////////////////////////////
			
			m_pSet->MoveNext();
		}
		
		//////////////////////the "while" circulation end//////////////////////////////////////
		
		
		if(w==0)
			MessageBox("记录未找到，请核对后再输入！","错误",MB_OK|MB_ICONINFORMATION);
		
		else
		{
			this->SeperateRow(i);   //***************Place the seperator*****************
			
		}
		
		////////////////////////////////////////////////////////////////////////////////
		
		if(i==1)
		{
			m_pSet->MoveFirst();
			
			while(!m_pSet->IsEOF())
			{
				if(m_pSet->m_ID==repID)
				{
					DisplayRecordContent(); //*********Display Record Contents********//
				}
				
				m_pSet->MoveNext();
			}
			
		}
		
		else
		{
			this->m_number_sponsor=i;
			
			UpdateData(FALSE);
		}
	}
	
}

void CMotionSpecialistVistaView::OnLocationSearch() 
{
	int w,i;
	w=0;
	i=0;
	CString province,city_short,province_short;


	UpdateData(TRUE);

	if(m_province_search.GetCurSel()==-1)
	{
		w=1;
		MessageBox("对不起，组合框中无信息，请选择。","错误",MB_OK|MB_ICONINFORMATION);

	}

	else
	{
		this->m_province_search.GetLBText(m_province_search.GetCurSel(),province);

		m_Record_List.SendMessage(WM_VSCROLL,6,0); //*********Scroll to the first line!

		m_pSet->MoveFirst();
		while(!m_pSet->IsEOF())
		{
			city_short=m_pSet->m_city.Left(4);
			province_short=province.Left(4);

			if(city_short==province_short)
			{
				m_Record_List.InsertItem(i,m_pSet->m_ID);
				m_Record_List.SetItemText(i,1,m_pSet->m_name);
				m_Record_List.SetItemText(i,2,m_pSet->m_profession);
				m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
				m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
				m_Record_List.SetItemText(i,5,m_pSet->m_department);
				m_Record_List.SetItemText(i,6,m_pSet->m_means);
				m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
				m_Record_List.SetItemText(i,8,m_pSet->m_arrival);

				i++;
				w=1;
			}
			
			m_pSet->MoveNext();

		}

		if(w==0)
			MessageBox("对不起，无该地区记录，请核对！","记录不存在",MB_OK|MB_ICONINFORMATION);
		else
		{
			this->SeperateRow(i);   //***************Place the seperator*************
		}

	}


	
		this->m_number_sponsor=i;

		UpdateData(FALSE);
		
}

void CMotionSpecialistVistaView::OnUploadSponsor() 
{
	CString str,sponsor_full[50],sponsor_short[50],sponsor_string;
	int i;

		UpdateData(TRUE);

		sponsor_full[0]="Sanofi-Aventis China";
    	sponsor_full[1]="Pfizer Pharmaceuticals Limited";
    	sponsor_full[2]="Merck Sharp & Dohme Ltd.";
	    sponsor_full[3]="GlaxoSmithKline Investment Co,. Ltd.";
    	sponsor_full[4]="Tianjin Takeda Pharmaceuticals Co., Ltd.";
    	sponsor_full[5]="Boehringer Ingelheim Pharmaceuticals Co., Ltd.";
    	sponsor_full[6]="Tianjin Tanabe Seiyaku Co., Ltd.";
    	sponsor_full[7]="AstraZeneca Pharmaceuticals Company";
    	sponsor_full[8]="Merck Apotec Pharmaceutical Co., Ltd.";
    	sponsor_full[9]="Servier Pharmaceutical Co., Ltd.";
    	sponsor_full[10]="Schering Pharmaceutical Ltd.";
    	sponsor_full[11]="Kyowa Hakko Kogyo Co., Ltd.";
    	sponsor_full[12]="Schwarz Pharma";
    	sponsor_full[13]="Sankyo Seiki Manufacturing Company";
    	sponsor_full[14]="神威药业有限公司";
    	sponsor_full[15]="成都时代第一制药有限公司";
    	sponsor_full[16]="Novartis";
    	sponsor_full[17]="黑龙江省联仁医药有限责任公司";
    	sponsor_full[18]="Bayer HealthCare";
    	sponsor_full[19]="Johnson & Johnson";
    	sponsor_full[20]="北大维信生物科技有限公司";
    	sponsor_full[21]="中国医科大学附属盛京医院";
		sponsor_full[22]="St. Jude Medical Ltd.";
		sponsor_full[23]="Bristol-Myers Squibb Company";
		sponsor_full[24]="深圳康哲";

		sponsor_short[0]="赛诺菲";
		sponsor_short[1]="辉瑞";
		sponsor_short[2]="默沙东";
		sponsor_short[3]="葛兰素";
		sponsor_short[4]="武田";
		sponsor_short[5]="勃林格";
		sponsor_short[6]="田边";
		sponsor_short[7]="阿斯利康";
		sponsor_short[8]="默克";
		sponsor_short[9]="施维雅";
		sponsor_short[10]="先灵";
		sponsor_short[11]="协和发酵";
		sponsor_short[12]="许瓦兹";
		sponsor_short[13]="三共";
		sponsor_short[14]="神威";
		sponsor_short[15]="成都时代";
		sponsor_short[16]="诺华";
		sponsor_short[17]="联仁";
		sponsor_short[18]="拜耳";
		sponsor_short[19]="强生";
		sponsor_short[20]="北大维信";
		sponsor_short[21]="主任邀请";
		sponsor_short[22]="圣犹达";
		sponsor_short[23]="施贵宝";
		sponsor_short[24]="深圳康哲";
		



		if(m_sponsor_search.GetCurSel()==-1)
			MessageBox("组合框中项目为空，请重新选择！","错误",MB_OK|MB_ICONINFORMATION);
		else
		{
			this->m_sponsor_search.GetLBText(m_sponsor_search.GetCurSel(),str);

			for(i=0;i<25;i++)
			{
				if(sponsor_full[i]==str)
				{
					sponsor_string=sponsor_short[i];
					break;
				}
			}


			if(m_sponsor_output!="")
			{
				m_means_output="厂家赞助";
				m_sponsor_output=m_sponsor_output+", "+sponsor_string;
			}
			
			else
			{
				m_means_output="厂家赞助";
				m_sponsor_output=sponsor_string;
			}

			UpdateData(FALSE);

		}
		
}



void CMotionSpecialistVistaView::OnAdvancedSearch() 
{
	AdvancedSearch dlg;
	ProtectedPasswordAquisition dialogue;
	int indicator=0,instruction=0,i,p,q,order=0,n=0,w=0,StringLength,RecordLength;
	CTime FirstDay(2007,6,8,8,0,0);
	CString sponsor;
	char *pRecord, *pString;

	///////////////////////////////////////////////////////////////

	dlg.m_lecture_date_add=FirstDay;
	dlg.DoModal();

	
	//////////////////////////////////////////

	m_Record_List.SendMessage(WM_VSCROLL,6,0); //*********Scroll to the first line!

	if(dlg.m_ButtonID==2)	
		ShowChairman();	

	if(dlg.m_ButtonID==3)
		ShowAcademicCouncil();

	if(dlg.m_ButtonID==4)
		ShowRepresentative();

	if(dlg.m_ButtonID==5)
		ShowSubscriber();

	if(dlg.m_ButtonID==6)
		ShowFavorableSubscriber();

	if(dlg.m_ButtonID==1001)
		ShowRegistered();

	if(dlg.m_ButtonID==9)
		ShowRegisteredSubscriber();

	if(dlg.m_ButtonID==10)
		ShowRegisteredFavorableSubscriber();

	if(dlg.m_ButtonID==11)
		ShowRegisteredPresidium();

	if(dlg.m_ButtonID==12)
		ShowRegisteredScientific();

	if(dlg.m_ButtonID==13)
		ShowRegisteredAccommodated();

	if(dlg.m_ButtonID==16)
		ShowWriter();

	if(dlg.m_ButtonID==17)
		ShowSponsored();

	if(dlg.m_ButtonID==15)
		ShowSpokesman();

	if(dlg.m_ButtonID==18)
		ShowSponsor();
	
	if(dlg.m_ButtonID==20)
		ShowWriterSent();
	
	if(dlg.m_ButtonID==21)
		ShowWriterNotSent();
	
	if(dlg.m_ButtonID==22)
		ShowBlankPostCode();
	
	if(dlg.m_ButtonID==23)
		ShowSpecialRepresentative();	
	
	if(dlg.m_ButtonID==25)
		ShowReply();	

	if(dlg.m_ButtonID==36)
		ShowDirector();	
	
	/////////////////////////////14: Shortnumber Search/////////////////////////////////
	
	
	if(dlg.m_ButtonID==14)
	{
		m_pSet->MoveFirst();
		
		while(!m_pSet->IsEOF())
		{
			if(dlg.m_shortnumber_advanced==m_pSet->m_shortnumber)
			{
				if(m_pSet->m_indicator=="p")
				{
					dialogue.m_name_show=m_pSet->m_name;
					UpdateData(FALSE);
					
					if(dialogue.DoModal()==IDOK)
					{
						m_Record_List.InsertItem(0,m_pSet->m_ID);
						m_Record_List.SetItemText(0,1,m_pSet->m_name);
						m_Record_List.SetItemText(0,2,m_pSet->m_profession);
						m_Record_List.SetItemText(0,3,m_pSet->m_class_1);
						m_Record_List.SetItemText(0,4,m_pSet->m_hospital);
						m_Record_List.SetItemText(0,5,m_pSet->m_department);
						m_Record_List.SetItemText(0,6,m_pSet->m_means);
						m_Record_List.SetItemText(0,7,m_pSet->m_sponsor);
						m_Record_List.SetItemText(0,8,m_pSet->m_arrival);
						
						this->SeperateRow(1); //////////////Place Seperator/////////////						
						this->DisplayRecordContent();  //********Display Record Content*****
						
						this->m_number_sponsor=1;						
						indicator=1;
						
						UpdateData(FALSE);						
						
						break;
					}
					else
					{
						this->DisplayRecordContent_protected();  //******Display part Record Content****
						
						indicator=1;
						
						break;
					}
				}
				else
				{
					this->DisplayRecordContent();  //*****Display Record Content*******	

					indicator=1;					
					break;
				}				
			}
			
			m_pSet->MoveNext();
		}
		
		if(indicator==0)
			MessageBox("对不起，无此人记录，请核对！","记录不存在",MB_OK|MB_ICONINFORMATION);
	}

	///////////////////////////26: Lecture Date Search/////////////////////////////////////////

	if(dlg.m_ButtonID==26)
	{
		i=0;

		m_pSet->MoveFirst();
		while(!m_pSet->IsEOF())
		{
			
			if(dlg.m_lecture_date_add.GetYear()==m_pSet->m_lecture_date.GetYear()&&dlg.m_lecture_date_add.GetMonth()==m_pSet->m_lecture_date.GetMonth()&&dlg.m_lecture_date_add.GetDay()==m_pSet->m_lecture_date.GetDay())
			{
				m_Record_List.InsertItem(i,m_pSet->m_ID);
				m_Record_List.SetItemText(i,1,m_pSet->m_name);
				m_Record_List.SetItemText(i,2,m_pSet->m_profession);
				m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
				m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
				m_Record_List.SetItemText(i,5,m_pSet->m_department);
				m_Record_List.SetItemText(i,6,m_pSet->m_means);
				m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
				m_Record_List.SetItemText(i,8,m_pSet->m_arrival);

				i++;
				w=1;

			}

			m_pSet->MoveNext();
		}

		if(w==0)
			MessageBox("对不起，无此记录，请核对！","记录不存在",MB_OK|MB_ICONINFORMATION);
		
		else
		{
			this->SeperateRow(i);   //**************Place the seperator*****************
			
		}

		this->m_number_sponsor=i;  //Show the number found.		
		UpdateData(FALSE);   //Output all data.
		
	}

	//////////////////////////////19: Mobile Phone Search///////////////////////////////////
	
	
	if(dlg.m_ButtonID==19)
	{
		m_pSet->MoveFirst();
		
		while(!m_pSet->IsEOF())
		{
			if(dlg.m_mobile_phone_advanced==m_pSet->m_mobile_phone)
			{
				if(m_pSet->m_indicator=="p")
				{
					dialogue.m_name_show=m_pSet->m_name;
					UpdateData(FALSE);
					
					if(dialogue.DoModal()==IDOK)
					{
						m_Record_List.InsertItem(0,m_pSet->m_ID);
						m_Record_List.SetItemText(0,1,m_pSet->m_name);
						m_Record_List.SetItemText(0,2,m_pSet->m_profession);
						m_Record_List.SetItemText(0,3,m_pSet->m_class_1);
						m_Record_List.SetItemText(0,4,m_pSet->m_hospital);
						m_Record_List.SetItemText(0,5,m_pSet->m_department);
						m_Record_List.SetItemText(0,6,m_pSet->m_means);
						m_Record_List.SetItemText(0,7,m_pSet->m_sponsor);
						m_Record_List.SetItemText(0,8,m_pSet->m_arrival);
						
						this->SeperateRow(1); //////////////Place Seperator/////////////						
						this->DisplayRecordContent();  //********Display Record Content*****
						
						this->m_number_sponsor=1;
						
						indicator=1;
						
						UpdateData(FALSE);						
						
						break;
					}
					else
					{
						this->DisplayRecordContent_protected();  //******Display part Record Content****
						
						indicator=1;
						
						break;
					}
				}
				else
				{
					this->DisplayRecordContent();  //*****Display Record Content*******	
					
					indicator=1;

					break;
				}				
				
			}
			
			m_pSet->MoveNext();
		}
		
		if(indicator==0)
			MessageBox("对不起，无此人记录，请核对！","记录不存在",MB_OK|MB_ICONINFORMATION);
	}

	///////////////////////////24: Department Search/////////////////////////////////////////


	if(dlg.m_ButtonID==24)
	{
		i=0;

		m_pSet->MoveFirst();
		
		while(!m_pSet->IsEOF())
		{
			if(m_pSet->m_department==dlg.m_department_advanced)
			{
				m_Record_List.InsertItem(i,m_pSet->m_ID);
				m_Record_List.SetItemText(i,1,m_pSet->m_name);
				m_Record_List.SetItemText(i,2,m_pSet->m_profession);
				m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
				m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
				m_Record_List.SetItemText(i,5,m_pSet->m_department);
				m_Record_List.SetItemText(i,6,m_pSet->m_means);
				m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
				m_Record_List.SetItemText(i,8,m_pSet->m_arrival);				
				
				i++;
				indicator=1;
				
			}
			
			m_pSet->MoveNext();
		}

		
		if(indicator==0)
			MessageBox("对不起，无此人记录，请核对！","记录不存在",MB_OK|MB_ICONINFORMATION);
		else
		{
			this->SeperateRow(i);   //**************Place the seperator*****************
			
		}

		this->m_number_sponsor=i;

		UpdateData(FALSE);	
	
	}


	////////////////////////////27: Sponsored Representive Search//////////////////////////

	if(dlg.m_ButtonID==27)
	{
		i=0;
		
		sponsor=dlg.sponsor_advanced;
		
		StringLength=strlen(sponsor);
		pString=(LPSTR)LPCTSTR(sponsor);
		
		m_Record_List.SendMessage(WM_VSCROLL,6,0); //*********Scroll to the first line!
		
		m_pSet->MoveFirst();
		
		while(!m_pSet->IsEOF())
		{
			if(m_pSet->m_means=="厂家赞助")
			{
				RecordLength=strlen(m_pSet->m_sponsor);   //Get the record string length.
				pRecord=(LPSTR)LPCTSTR(m_pSet->m_sponsor);  //The pointer which point to the record string
				
				/////////////////////////for circulation//////////////////////////////
				
				for(q=0;q<RecordLength;q++)    //Great circulation, the Record String
				{
					
					for(p=0;p<StringLength;p++)   //Inner circulation, the String
					{
						if(pRecord[p]==pString[p])
							
							indicator=1;
						
						else
						{
							indicator=0;   // If there is only one indicator=1, then the pointer pointing the record string points the next character.
							break;
						}
					}
					
					
					
					if(indicator==1)
					{
						m_Record_List.InsertItem(i,m_pSet->m_ID);
						m_Record_List.SetItemText(i,1,m_pSet->m_name);
						m_Record_List.SetItemText(i,2,m_pSet->m_profession);
						m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
						m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
						m_Record_List.SetItemText(i,5,m_pSet->m_department);
						m_Record_List.SetItemText(i,6,m_pSet->m_means);
						m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
						m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
						
						i++;
						w=1;
						break;
					}
					
					else
						pRecord++;  //The pointer pointing the record number points the next character.
					
				}
				
				///////////////////////the "for" circulation end////////////////////////////////
			}
			
			m_pSet->MoveNext();
		}
		
		//////////////////////////////////////////////////////////////////////////////////////////

		if(i==0)
			MessageBox("对不起，无该赞助商赞助记录，请核对！","记录不存在",MB_OK|MB_ICONINFORMATION);
		else
		{
			this->SeperateRow(i);   //***************Place the seperator*************
		}

		this->m_number_sponsor=i;
		
		UpdateData(FALSE);
		
	}

	//////////////////////////////////////29: Detailed Repeat Sponsored///////////////
	
	if(dlg.m_ButtonID==29)
	{
		i=0;
		order=0;
		
		sponsor=dlg.sponsor_advanced;
		
		StringLength=strlen(sponsor);
		pString=(LPSTR)LPCTSTR(sponsor);
		
		m_Record_List.SendMessage(WM_VSCROLL,6,0); //*********Scroll to the first line!
		
		m_pSet->MoveFirst();
		
		while(!m_pSet->IsEOF())
		{
			if(m_pSet->m_means=="厂家赞助")
			{
				RecordLength=strlen(m_pSet->m_sponsor);   //Get the record string length.
				pRecord=(LPSTR)LPCTSTR(m_pSet->m_sponsor);  //The pointer which point to the record string
				
				/////////////////////////for circulation//////////////////////////////
				
				for(q=0;q<RecordLength;q++)    //Great circulation, the Record String
				{
					
					for(p=0;p<StringLength;p++)   //Inner circulation, the String
					{
						if(pRecord[p]==pString[p])
							
							indicator=1;
						
						else
						{
							indicator=0;   // If there is only one indicator=1, then the pointer pointing the record string points the next character.
							break;
						}
					}			
					
					
					if(indicator==1)
					{
						w=1;
						break;
					}
					
					else
						pRecord++;  //The pointer pointing the record number points the next character.
					
				}
				
				///////////////////////the "for" circulation end////////////////////////////////

				////////////////////////////////////////////////////////////////////////////////

				RecordLength=strlen(m_pSet->m_sponsor);   //Get the record string length.
				pRecord=(LPSTR)LPCTSTR(m_pSet->m_sponsor); 
				
				for(n=0;n<RecordLength;n++)
				{
					if(pRecord[n]==','&&indicator==1)
					{
						order=i;
						i++;
						instruction=1;
						break;
					}
					else
						instruction=0;
				}

				
				if(indicator==1&&instruction==1)
				{
					m_Record_List.InsertItem(order,m_pSet->m_ID);
					m_Record_List.SetItemText(order,1,m_pSet->m_name);
					m_Record_List.SetItemText(order,2,m_pSet->m_profession);
					m_Record_List.SetItemText(order,3,m_pSet->m_class_1);
					m_Record_List.SetItemText(order,4,m_pSet->m_hospital);
					m_Record_List.SetItemText(order,5,m_pSet->m_department);
					m_Record_List.SetItemText(order,6,m_pSet->m_means);
					m_Record_List.SetItemText(order,7,m_pSet->m_sponsor);
					m_Record_List.SetItemText(order,8,m_pSet->m_arrival);
				}
				
			}			
			m_pSet->MoveNext();
		}
		
		//////////////////////////////////////////////////////////////////////////////////////////

		if(i==0)
			MessageBox("对不起，无该赞助商重复赞助记录，请核对！","记录不存在",MB_OK|MB_ICONINFORMATION);
		else
		{
			this->SeperateRow(i);   //***************Place the seperator*************
		}

		this->m_number_sponsor=i;
		
		UpdateData(FALSE);
		
	}
	
	//////////////////////////////////////28: Repeat Sponsored///////////////////////

	if(dlg.m_ButtonID==28)
	{		
		i=0,n=0,RecordLength=0;
				
		m_pSet->MoveFirst();

		while(!m_pSet->IsEOF())
		{
			if(m_pSet->m_means=="厂家赞助")
			{
				
				RecordLength=strlen(m_pSet->m_sponsor);   //Get the record string length.
				pRecord=(LPSTR)LPCTSTR(m_pSet->m_sponsor); 
				
				for(n=0;n<RecordLength;n++)
				{
					if(pRecord[n]==',')
					{
						m_Record_List.InsertItem(i,m_pSet->m_ID);
						m_Record_List.SetItemText(i,1,m_pSet->m_name);
						m_Record_List.SetItemText(i,2,m_pSet->m_profession);
						m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
						m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
						m_Record_List.SetItemText(i,5,m_pSet->m_department);
						m_Record_List.SetItemText(i,6,m_pSet->m_means);
						m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
						m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
						
						i++;
						break;
					}
				}
			}

			m_pSet->MoveNext();
			
		}

		if(i==0)
			MessageBox("对不起，无该重复赞助记录。","查询结果无重复",MB_OK|MB_ICONINFORMATION);
		else
		{
			this->SeperateRow(i);   //***************Place the seperator*************
		}

		this->m_number_sponsor=i;
		
		UpdateData(FALSE);
	}

	///////////////////////////////30: Registered Other Province Representitave///////////////////////////

	
	if(dlg.m_ButtonID==30)
	{
		i=0;
		
		m_pSet->MoveFirst();
		while(!m_pSet->IsEOF())
		{
			
			if(m_pSet->m_arrival=="已注册"&&m_pSet->m_city.Left(4)!="辽宁")
			{
				m_Record_List.InsertItem(i,m_pSet->m_ID);
				m_Record_List.SetItemText(i,1,m_pSet->m_name);
				m_Record_List.SetItemText(i,2,m_pSet->m_profession);
				m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
				m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
				m_Record_List.SetItemText(i,5,m_pSet->m_department);
				m_Record_List.SetItemText(i,6,m_pSet->m_means);
				m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
				m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
				
				i++;
				
				
			}
			
			m_pSet->MoveNext();
		}
		
		if(i==0)
			MessageBox("对不起，无此记录，请核对！","记录不存在",MB_OK|MB_ICONINFORMATION);
		
		else
		{
			this->SeperateRow(i);   //**************Place the seperator*****************
			
		}
		
		this->m_number_sponsor=i;  //Show the number found.		
		UpdateData(FALSE);   //Output all data.
		
	}


	///////////////////////////////31: Registered Other City Representitave///////////////////////////

	
	if(dlg.m_ButtonID==31)
	{
		i=0;
		
		m_pSet->MoveFirst();
		while(!m_pSet->IsEOF())
		{
			
			if(m_pSet->m_arrival=="已注册"&&m_pSet->m_city.Left(12)!="辽宁省沈阳市")
			{
				m_Record_List.InsertItem(i,m_pSet->m_ID);
				m_Record_List.SetItemText(i,1,m_pSet->m_name);
				m_Record_List.SetItemText(i,2,m_pSet->m_profession);
				m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
				m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
				m_Record_List.SetItemText(i,5,m_pSet->m_department);
				m_Record_List.SetItemText(i,6,m_pSet->m_means);
				m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
				m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
				
				i++;
				
				
			}
			
			m_pSet->MoveNext();
		}
		
		if(i==0)
			MessageBox("对不起，无此记录，请核对！","记录不存在",MB_OK|MB_ICONINFORMATION);
		
		else
		{
			this->SeperateRow(i);   //**************Place the seperator*****************
			
		}
		
		this->m_number_sponsor=i;  //Show the number found.		
		UpdateData(FALSE);   //Output all data.
		
	}


	///////////////////////////////32: Registered Shenyang City Representitave///////////////////////////

	
	if(dlg.m_ButtonID==32)
	{
		i=0;
		
		m_pSet->MoveFirst();
		while(!m_pSet->IsEOF())
		{
			
			if(m_pSet->m_arrival=="已注册"&&m_pSet->m_city.Left(12)=="辽宁省沈阳市")
			{
				m_Record_List.InsertItem(i,m_pSet->m_ID);
				m_Record_List.SetItemText(i,1,m_pSet->m_name);
				m_Record_List.SetItemText(i,2,m_pSet->m_profession);
				m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
				m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
				m_Record_List.SetItemText(i,5,m_pSet->m_department);
				m_Record_List.SetItemText(i,6,m_pSet->m_means);
				m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
				m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
				
				i++;
				
				
			}
			
			m_pSet->MoveNext();
		}
		
		if(i==0)
			MessageBox("对不起，无此记录，请核对！","记录不存在",MB_OK|MB_ICONINFORMATION);
		
		else
		{
			this->SeperateRow(i);   //**************Place the seperator*****************
			
		}
		
		this->m_number_sponsor=i;  //Show the number found.		
		UpdateData(FALSE);   //Output all data.
		
	}


	///////////////////////////////33: Registered Accomodated Representitave///////////////////////////

	
	if(dlg.m_ButtonID==33)
	{
		i=0;
		
		m_pSet->MoveFirst();
		while(!m_pSet->IsEOF())
		{
			
			if(m_pSet->m_arrival=="已注册"&&m_pSet->m_hotel=="住宿")
			{
				m_Record_List.InsertItem(i,m_pSet->m_ID);
				m_Record_List.SetItemText(i,1,m_pSet->m_name);
				m_Record_List.SetItemText(i,2,m_pSet->m_profession);
				m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
				m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
				m_Record_List.SetItemText(i,5,m_pSet->m_department);
				m_Record_List.SetItemText(i,6,m_pSet->m_means);
				m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
				m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
				
				i++;
				
				
			}
			
			m_pSet->MoveNext();
		}
		
		if(i==0)
			MessageBox("对不起，无此记录，请核对！","记录不存在",MB_OK|MB_ICONINFORMATION);
		
		else
		{
			this->SeperateRow(i);   //**************Place the seperator*****************
			
		}
		
		this->m_number_sponsor=i;  //Show the number found.		
		UpdateData(FALSE);   //Output all data.
		
	}

	///////////////////////////////34: Registered non-sponsored Representitave///////////////////////////

	
	if(dlg.m_ButtonID==34)
	{
		i=0;
		
		m_pSet->MoveFirst();
		while(!m_pSet->IsEOF())
		{
			
			if(m_pSet->m_arrival=="已注册"&&m_pSet->m_means!="厂家赞助")
			{
				m_Record_List.InsertItem(i,m_pSet->m_ID);
				m_Record_List.SetItemText(i,1,m_pSet->m_name);
				m_Record_List.SetItemText(i,2,m_pSet->m_profession);
				m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
				m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
				m_Record_List.SetItemText(i,5,m_pSet->m_department);
				m_Record_List.SetItemText(i,6,m_pSet->m_means);
				m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
				m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
				
				i++;
				
				
			}
			
			m_pSet->MoveNext();
		}
		
		if(i==0)
			MessageBox("对不起，无此记录，请核对！","记录不存在",MB_OK|MB_ICONINFORMATION);
		
		else
		{
			this->SeperateRow(i);   //**************Place the seperator*****************
			
		}
		
		this->m_number_sponsor=i;  //Show the number found.		
		UpdateData(FALSE);   //Output all data.
		
	}

	///////////////////////////////35: Free Representitave///////////////////////////

	
	if(dlg.m_ButtonID==35)
	{
		i=0;
		
		m_pSet->MoveFirst();
		while(!m_pSet->IsEOF())
		{
			
			if(m_pSet->m_means=="全免")
			{
				m_Record_List.InsertItem(i,m_pSet->m_ID);
				m_Record_List.SetItemText(i,1,m_pSet->m_name);
				m_Record_List.SetItemText(i,2,m_pSet->m_profession);
				m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
				m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
				m_Record_List.SetItemText(i,5,m_pSet->m_department);
				m_Record_List.SetItemText(i,6,m_pSet->m_means);
				m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
				m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
				
				i++;
				
				
			}
			
			m_pSet->MoveNext();
		}
		
		if(i==0)
			MessageBox("对不起，无此记录，请核对！","记录不存在",MB_OK|MB_ICONINFORMATION);
		
		else
		{
			this->SeperateRow(i);   //**************Place the seperator*****************
			
		}
		
		this->m_number_sponsor=i;  //Show the number found.		
		UpdateData(FALSE);   //Output all data.
		
	}

}


void CMotionSpecialistVistaView::ShowChairman()
{
	int w,i;
	w=0;
	i=0;
	
	m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		if(m_pSet->m_class_1=="主席团")
		{
			m_Record_List.InsertItem(i,m_pSet->m_ID);
			m_Record_List.SetItemText(i,1,m_pSet->m_name);
			m_Record_List.SetItemText(i,2,m_pSet->m_profession);
			m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
			m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
			m_Record_List.SetItemText(i,5,m_pSet->m_department);
			m_Record_List.SetItemText(i,6,m_pSet->m_means);
			m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
			m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
			i++;
			w=1;

		}
		m_pSet->MoveNext();
	}

	m_number_sponsor=i;
	UpdateData(FALSE);

	if(w==0)
		MessageBox("记录未找到，请核对后再输入！","错误",MB_OK|MB_ICONINFORMATION);
	else
		this->SeperateRow(i);   //***************Place the seperator*************

	return;

}

void CMotionSpecialistVistaView::ShowAcademicCouncil()
{
	int w,i;
	w=0;
	i=0;
	
	m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		if(m_pSet->m_class_1=="学术委员会")
		{
			m_Record_List.InsertItem(i,m_pSet->m_ID);
			m_Record_List.SetItemText(i,1,m_pSet->m_name);
			m_Record_List.SetItemText(i,2,m_pSet->m_profession);
			m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
			m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
			m_Record_List.SetItemText(i,5,m_pSet->m_department);
			m_Record_List.SetItemText(i,6,m_pSet->m_means);
			m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
			m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
			i++;
			w=1;

		}
		m_pSet->MoveNext();
	}

	m_number_sponsor=i;
	UpdateData(FALSE);

	if(w==0)
		MessageBox("记录未找到，请核对后再输入！","错误",MB_OK|MB_ICONINFORMATION);
	else
		this->SeperateRow(i);   //***************Place the seperator*************

	return;


}

void CMotionSpecialistVistaView::ShowRepresentative()
{
	int w,i;
	w=0;
	i=0;
	
	m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		if(m_pSet->m_class_1=="代表")
		{
			m_Record_List.InsertItem(i,m_pSet->m_ID);
			m_Record_List.SetItemText(i,1,m_pSet->m_name);
			m_Record_List.SetItemText(i,2,m_pSet->m_profession);
			m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
			m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
			m_Record_List.SetItemText(i,5,m_pSet->m_department);
			m_Record_List.SetItemText(i,6,m_pSet->m_means);
			m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
			m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
			i++;
			w=1;

		}
		m_pSet->MoveNext();
	}

	m_number_sponsor=i;
	UpdateData(FALSE);

	if(w==0)
		MessageBox("记录未找到，请核对后再输入！","错误",MB_OK|MB_ICONINFORMATION);
	else
		this->SeperateRow(i);   //***************Place the seperator*************

	return;



}

void CMotionSpecialistVistaView::ShowSubscriber()
{
	int w,i;
	w=0;
	i=0;
	
	m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		if(m_pSet->m_means=="自费")
		{
			m_Record_List.InsertItem(i,m_pSet->m_ID);
			m_Record_List.SetItemText(i,1,m_pSet->m_name);
			m_Record_List.SetItemText(i,2,m_pSet->m_profession);
			m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
			m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
			m_Record_List.SetItemText(i,5,m_pSet->m_department);
			m_Record_List.SetItemText(i,6,m_pSet->m_means);
			m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
			m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
			i++;
			w=1;

		}
		m_pSet->MoveNext();
	}

	m_number_sponsor=i;
	UpdateData(FALSE);

	if(w==0)
		MessageBox("记录未找到，请核对后再输入！","错误",MB_OK|MB_ICONINFORMATION);
	else
		this->SeperateRow(i);   //***************Place the seperator*************

	return;

}

void CMotionSpecialistVistaView::ShowRegistered()
{
	int w,i;
	w=0;
	i=0;
	
	m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		if(m_pSet->m_arrival=="已注册")
		{
			m_Record_List.InsertItem(i,m_pSet->m_ID);
			m_Record_List.SetItemText(i,1,m_pSet->m_name);
			m_Record_List.SetItemText(i,2,m_pSet->m_profession);
			m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
			m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
			m_Record_List.SetItemText(i,5,m_pSet->m_department);
			m_Record_List.SetItemText(i,6,m_pSet->m_means);
			m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
			m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
			i++;
			w=1;

		}
		m_pSet->MoveNext();
	}

	m_number_sponsor=i;
	UpdateData(FALSE);

	if(w==0)
		MessageBox("记录未找到，请核对后再输入！","错误",MB_OK|MB_ICONINFORMATION);

	else
	{
		this->SeperateRow(i);   //***************Place the seperator*************

	}

	return;



}

void CMotionSpecialistVistaView::ShowRegisteredSubscriber()
{
	int w,i;
	w=0;
	i=0;
	
	m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		if(m_pSet->m_arrival=="已注册"&&m_pSet->m_means=="自费")
		{
			m_Record_List.InsertItem(i,m_pSet->m_ID);
			m_Record_List.SetItemText(i,1,m_pSet->m_name);
			m_Record_List.SetItemText(i,2,m_pSet->m_profession);
			m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
			m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
			m_Record_List.SetItemText(i,5,m_pSet->m_department);
			m_Record_List.SetItemText(i,6,m_pSet->m_means);
			m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
			m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
			i++;
			w=1;

		}
		m_pSet->MoveNext();
	}

	m_number_sponsor=i;
	UpdateData(FALSE);

	
	if(w==0)
		MessageBox("记录未找到，请核对后再输入！","错误",MB_OK|MB_ICONINFORMATION);

	else
	{
		this->SeperateRow(i);   //***************Place the seperator*************
	}

	return;
}

void CMotionSpecialistVistaView::ShowRegisteredFavorableSubscriber()
{
	int w,i;
	w=0;
	i=0;
	
	m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		if(m_pSet->m_arrival=="已注册"&&m_pSet->m_means=="自费"&&m_pSet->m_type=="优惠")
		{
			m_Record_List.InsertItem(i,m_pSet->m_ID);
			m_Record_List.SetItemText(i,1,m_pSet->m_name);
			m_Record_List.SetItemText(i,2,m_pSet->m_profession);
			m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
			m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
			m_Record_List.SetItemText(i,5,m_pSet->m_department);
			m_Record_List.SetItemText(i,6,m_pSet->m_means);
			m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
			m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
			i++;
			w=1;

		}
		m_pSet->MoveNext();
	}

	m_number_sponsor=i;
	UpdateData(FALSE);


	if(w==0)
		MessageBox("记录未找到，请核对后再输入！","错误",MB_OK|MB_ICONINFORMATION);

	else	
		this->SeperateRow(i);   //***************Place the seperator*************

	return;

}

void CMotionSpecialistVistaView::ShowRegisteredAccommodated()
{
	int w,i;
	w=0;
	i=0;
	
	m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		if(m_pSet->m_hotel=="住宿")
		{
			m_Record_List.InsertItem(i,m_pSet->m_ID);
			m_Record_List.SetItemText(i,1,m_pSet->m_name);
			m_Record_List.SetItemText(i,2,m_pSet->m_profession);
			m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
			m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
			m_Record_List.SetItemText(i,5,m_pSet->m_department);
			m_Record_List.SetItemText(i,6,m_pSet->m_means);
			m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
			m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
			i++;
			w=1;

		}
		m_pSet->MoveNext();
	}

	m_number_sponsor=i;
	UpdateData(FALSE);

	if(w==0)
		MessageBox("记录未找到，请核对后再输入！","错误",MB_OK|MB_ICONINFORMATION);

	else
	{
		this->SeperateRow(i);   //***************Place the seperator*************
	}
	
	return;

}

void CMotionSpecialistVistaView::ShowWriter()
{
	int w,i;
	w=0;
	i=0;
	
	m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		if(m_pSet->m_writer=="w")
		{
			m_Record_List.InsertItem(i,m_pSet->m_ID);
			m_Record_List.SetItemText(i,1,m_pSet->m_name);
			m_Record_List.SetItemText(i,2,m_pSet->m_profession);
			m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
			m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
			m_Record_List.SetItemText(i,5,m_pSet->m_department);
			m_Record_List.SetItemText(i,6,m_pSet->m_means);
			m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
			m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
			i++;
			w=1;

		}
		m_pSet->MoveNext();
	}

	m_number_sponsor=i;
	UpdateData(FALSE);

	this->ProgressInitiation(); ///////Intiation Progress Bar/////////////
	

	if(w==0)
		MessageBox("记录未找到，请核对后再输入！","错误",MB_OK|MB_ICONINFORMATION);

	else
	{
		this->SeperateRow(i);   //***************Place the seperator*************

	}

	return;
}

void CMotionSpecialistVistaView::ShowSponsor()
{
	
	int w,i;
	w=0;
	i=0;
	
	m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		if(m_pSet->m_class_1=="赞助商")
		{
			m_Record_List.InsertItem(i,m_pSet->m_ID);
			m_Record_List.SetItemText(i,1,m_pSet->m_name);
			m_Record_List.SetItemText(i,2,m_pSet->m_profession);
			m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
			m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
			m_Record_List.SetItemText(i,5,m_pSet->m_department);
			m_Record_List.SetItemText(i,6,m_pSet->m_means);
			m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
			m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
			i++;
			w=1;
			
		}
		m_pSet->MoveNext();
	}
	
	m_number_sponsor=i;
	UpdateData(FALSE);
	
	
	if(w==0)
		MessageBox("记录未找到，请核对后再输入！","错误",MB_OK|MB_ICONINFORMATION);
	
	else
	{
		this->SeperateRow(i);   //***************Place the seperator*************
	}
	
	return;
	
}

void CMotionSpecialistVistaView::ShowSponsored()
{
	int w,i;
	w=0;
	i=0;
	
	m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		if(m_pSet->m_means=="厂家赞助")
		{
			m_Record_List.InsertItem(i,m_pSet->m_ID);
			m_Record_List.SetItemText(i,1,m_pSet->m_name);
			m_Record_List.SetItemText(i,2,m_pSet->m_title);
			m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
			m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
			m_Record_List.SetItemText(i,5,m_pSet->m_department);
			m_Record_List.SetItemText(i,6,m_pSet->m_means);
			m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
			m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
			i++;
			w=1;

		}
		m_pSet->MoveNext();
	}

	m_number_sponsor=i;
	UpdateData(FALSE);
	

	if(w==0)
		MessageBox("记录未找到，请核对后再输入！","错误",MB_OK|MB_ICONINFORMATION);
	else
		this->SeperateRow(i);   //***************Place the seperator*************

	return;


}

void CMotionSpecialistVistaView::ShowSpokesman()
{
	int w,i;
	w=0;
	i=0;
	
	m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		if(m_pSet->m_spokesman=="s")
		{
			m_Record_List.InsertItem(i,m_pSet->m_ID);
			m_Record_List.SetItemText(i,1,m_pSet->m_name);
			m_Record_List.SetItemText(i,2,m_pSet->m_profession);
			m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
			m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
			m_Record_List.SetItemText(i,5,m_pSet->m_department);
			m_Record_List.SetItemText(i,6,m_pSet->m_means);
			m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
			m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
			i++;
			w=1;

		}
		m_pSet->MoveNext();
	}

	m_number_sponsor=i;
	UpdateData(FALSE);

	this->ProgressInitiation(); ///////Intiation Progress Bar/////////////
	

	if(w==0)
		MessageBox("记录未找到，请核对后再输入！","错误",MB_OK|MB_ICONINFORMATION);

	else
	{
		this->SeperateRow(i);   //***************Place the seperator*************

	}

	return;



}

void CMotionSpecialistVistaView::OnAddNew() 
{

	int InitiationNum, RecordNum=0,judgement=0;
	CString InitiationNum_String, ZeroZero="0";

	AddNew dlg;

	m_Add_Progress.SetPos(0);
	m_Add_Progress.SetRange(0,50);
	m_Add_Progress.SetStep(10);

	

	/////////////////////////////////////////////////////////

	this->OnClear();   ////Clear record content//////

	////////////////////////////////////////////////////////

	m_Add_Progress.StepIt();////////////////////////////////////Step it!

	m_pSet->MoveFirst();

	while(!m_pSet->IsEOF())
	{
		RecordNum++;
		m_pSet->MoveNext();

	}

	m_Add_Progress.StepIt();////////////////////////////////////Step it!

	InitiationNum=RecordNum-2560+530003;

	m_Add_Progress.StepIt();////////////////////////////////////Step it!
	
	while(1)
	{
		InitiationNum_String.Format("%d",InitiationNum);
		
		m_pSet->MoveFirst();
		
		while(!m_pSet->IsEOF())
		{
			if(m_pSet->m_ID==InitiationNum_String)
			{
				judgement=1;
				break;
			}
			
			m_pSet->MoveNext();
		}



		if(judgement==1)
		{
			judgement=0;
			InitiationNum++;
		}
		else
			break;
	}

	m_Add_Progress.StepIt();////////////////////////////////////Step it!
	
	
	InitiationNum_String=InitiationNum_String;

	////////////////////////////////////////////////////////////////////////////

	


	dlg.m_ID_add=InitiationNum_String;
	dlg.m_means_add="自费";
	dlg.m_class1_add="代表";
	dlg.m_city_add="辽宁省沈阳市";
	dlg.m_department_add="心内科";

	m_Add_Progress.StepIt();////////////////////////////////////Step it!	

	UpdateData(FALSE);

	if(dlg.DoModal()==IDOK)
	{
		    m_pSet->AddNew();

		    m_pSet->m_ID=dlg.m_ID_add;
			m_pSet->m_name=dlg.m_name_add;
			m_pSet->m_gender=dlg.m_gender_add;
			m_pSet->m_hospital=dlg.m_hospital_add;
			m_pSet->m_address=dlg.m_address_add;
			m_pSet->m_department=dlg.m_department_add;
			m_pSet->m_post_code=dlg.m_postcode_add;
			m_pSet->m_means=dlg.m_means_add;
			m_pSet->m_profession=dlg.m_profession_add;
			m_pSet->m_title=dlg.m_title_add;
			m_pSet->m_class_1=dlg.m_class1_add;
			m_pSet->m_class_2=dlg.m_class2_add;
			m_pSet->m_class_3=dlg.m_class3_add;
			m_pSet->m_telephone=dlg.m_telephone_add;
			m_pSet->m_mobile_phone=dlg.m_mobile_add;
			m_pSet->m_abbreviation=dlg.m_abbreviation_add;
			m_pSet->m_city=dlg.m_city_add;
			m_pSet->m_sponsor=dlg.m_sponsor_add;
			m_pSet->m_hotel=dlg.m_hotel_add;
			m_pSet->m_type=dlg.m_type_add;
			m_pSet->m_email=dlg.m_email_add;
			m_pSet->m_fax=dlg.m_fax_add;
			m_pSet->m_arrival=dlg.m_arrival_add;
			m_pSet->m_major=dlg.m_major_add;
			m_pSet->m_article=dlg.m_article_add;

			m_pSet->Update();
	
    	    m_pSet->MoveLast();

			m_Record_List.SendMessage(WM_VSCROLL,6,0);

	    	m_Record_List.InsertItem(0,m_pSet->m_ID);
		    m_Record_List.SetItemText(0,1,m_pSet->m_name);
    		m_Record_List.SetItemText(0,2,m_pSet->m_profession);
	    	m_Record_List.SetItemText(0,3,m_pSet->m_class_1);
    		m_Record_List.SetItemText(0,4,m_pSet->m_hospital);
    		m_Record_List.SetItemText(0,5,m_pSet->m_department);
    		m_Record_List.SetItemText(0,6,m_pSet->m_means);
    		m_Record_List.SetItemText(0,7,m_pSet->m_sponsor);

			this->SeperateRow(1);   //***************Place the seperator*************
			

			/////////////////////////////////////////////////////////////////////

    		
			this->DisplayRecordContent(); //***********Display Record Content******//

			UpdateData(FALSE);

	}


		
}

void CMotionSpecialistVistaView::OnDelete() 
{
	SureToDelete dialogue;
	int indicator=0;
	CString Information_Content;

	if(dialogue.DoModal()==IDOK)
	{
		UpdateData(TRUE);

		m_pSet->MoveFirst();

		while(!m_pSet->IsEOF())
		{
			if(m_ID_output==m_pSet->m_ID)
			{
				Information_Content=m_pSet->m_ID+"   "+m_pSet->m_name+"， "+"该记录已经被删除！";
				
				m_pSet->Delete();

				this->OnClear();

				MessageBox(Information_Content,"提示",MB_OK|MB_ICONINFORMATION);
				
				indicator=1;
				
				break;

			}
			m_pSet->MoveNext();
		}

		if(indicator==0)
			MessageBox("对不起，该记录未找到！请核对。","提示",MB_OK|MB_ICONINFORMATION);
	}

	
		
}

void CMotionSpecialistVistaView::OnDeleteRecordListItem() 
{
	m_Record_List.DeleteAllItems();
	m_Progress.SetPos(0);
		
}

void CMotionSpecialistVistaView::OnExportRecord() 
{
	CString str;
	int n=0,i=0;
	FILE *fp;
	struct SpecialistRecord
	{
		CString ID;
		CString name;
		CString title;
		CString hospital;
		CString department;
		CString address;
		CString post_code;
		CString telephone;
		CString mobile_phone;
		CString lecture;
		CString article;
		CString means;
		CString sponsor;
	}Record[1000];

	////////////////////////////////////////////////////////////////////////

	UpdateData(TRUE);

	if(m_number_sponsor==0||m_number_sponsor>1500)
		MessageBox("对不起，系统待导出记录数量超过最大限额或无待导出记录！","错误",MB_OK|MB_ICONINFORMATION);

	else
	{
		n=m_number_sponsor;

		this->ProgressInitiation(); ///////Intiation of Progress Bar/////////////

		for(i=0;i<n;i++)
		{
			Record[i].ID=m_Record_List.GetItemText(i,0);
			m_pSet->MoveFirst();
			while(!m_pSet->IsEOF())
			{
				if(m_pSet->m_ID==Record[i].ID)
				{
					Record[i].name=m_pSet->m_name;
					Record[i].title=m_pSet->m_title;					
					Record[i].hospital=m_pSet->m_hospital;					
					Record[i].department=m_pSet->m_department;					
					Record[i].address=m_pSet->m_address;					
					Record[i].post_code=m_pSet->m_post_code;					
					Record[i].telephone=m_pSet->m_telephone;
					Record[i].mobile_phone=m_pSet->m_mobile_phone;
					Record[i].lecture=m_pSet->m_lecture;
					Record[i].article=m_pSet->m_article;
					Record[i].means=m_pSet->m_means;
					Record[i].sponsor=m_pSet->m_sponsor;
					break;
				}
				m_pSet->MoveNext();
			}
			m_Progress.StepIt();
		}

		fp=fopen("d:/Record_Export.xls","w");
			
		for(i=0;i<n;i++)
		{
			fwrite(Record[i].name,strlen(Record[i].name),1,fp);
			fputc(9,fp);
			fwrite(Record[i].title,strlen(Record[i].title),1,fp);
			fputc(9,fp);
			fwrite(Record[i].hospital,strlen(Record[i].hospital),1,fp);
			fputc(9,fp);
			fwrite(Record[i].department,strlen(Record[i].department),1,fp);
			fputc(9,fp);
			fwrite(Record[i].address,strlen(Record[i].address),1,fp);
			fputc(9,fp);
			fwrite(Record[i].post_code,strlen(Record[i].post_code),1,fp);
			fputc(9,fp);
			fwrite(Record[i].telephone,strlen(Record[i].telephone),1,fp);
			fputc(9,fp);
			fwrite(Record[i].mobile_phone,strlen(Record[i].mobile_phone),1,fp);
			fputc(9,fp);
			fwrite(Record[i].lecture,strlen(Record[i].lecture),1,fp);
			fputc(9,fp);
			fwrite(Record[i].article,strlen(Record[i].article),1,fp);
			fputc(9,fp);
			fwrite(Record[i].means,strlen(Record[i].means),1,fp);
			fputc(9,fp);
			fwrite(Record[i].sponsor,strlen(Record[i].sponsor),1,fp);
			fputc('\n',fp);
			
			
		}

		MessageBox("所有记录已被成功导出！","完毕",MB_OK|MB_ICONINFORMATION);

		fclose(fp);
	}		
}

void CMotionSpecialistVistaView::OnExportEnvelope() 
{

	CString str;
	int n=0,i=0;
	FILE *fp;
	struct SpecialistRecord
	{
		CString ID;
		CString name;
		CString profession;
		CString hospital;
		CString department;
		CString address;
		CString post_code;
		CString telephone;
	}Record[2000];

	////////////////////////////////////////////////////////////////////////

	UpdateData(TRUE);

	if(m_number_sponsor==0||m_number_sponsor>2000)
		MessageBox("对不起，系统待导出记录数量超过最大限额或无待导出记录！","错误",MB_OK|MB_ICONINFORMATION);

	else
	{
		n=m_number_sponsor;

		this->ProgressInitiation(); ///////Intiation of Progress Bar/////////////

		for(i=0;i<n;i++)
		{
			Record[i].ID=m_Record_List.GetItemText(i,0);
			m_pSet->MoveFirst();
			while(!m_pSet->IsEOF())
			{
				if(m_pSet->m_ID==Record[i].ID)
				{
					Record[i].name=m_pSet->m_name;					
					Record[i].profession=m_pSet->m_profession;					
					Record[i].hospital=m_pSet->m_hospital;					
					Record[i].department=m_pSet->m_department;					
					Record[i].address=m_pSet->m_address;					
					Record[i].post_code="邮编："+m_pSet->m_post_code;					
					Record[i].telephone=m_pSet->m_telephone;					
					break;
				}
				m_pSet->MoveNext();
			}
			m_Progress.StepIt();
		}

		fp=fopen("C:/Documents and Settings/Chuan/Desktop/Envelope_Export.xls","w");
			
		for(i=0;i<n;i++)
		{
			fwrite(Record[i].post_code,strlen(Record[i].post_code),1,fp);
			fputc('\n',fp);

			fwrite(Record[i].address,strlen(Record[i].address),1,fp);
			fputc('\n',fp);

			fwrite(Record[i].hospital,strlen(Record[i].hospital),1,fp);
			fputc(32,fp);
			fwrite(Record[i].department,strlen(Record[i].department),1,fp);
			fputc('\n',fp);
						
			fwrite(Record[i].name,strlen(Record[i].name),1,fp);
			fputc(32,fp);
			fwrite(Record[i].profession,strlen(Record[i].profession),1,fp);
			fputc(32,fp);
			fwrite("收",2,1,fp);
			fputc('\n',fp);			
			
		}

		MessageBox("所有记录已被成功导出！","完毕",MB_OK|MB_ICONINFORMATION);

		fclose(fp);
	}	
}

void CMotionSpecialistVistaView::OnPrint() 
{	
	int word_size1,word_size2,word_size3,word_size4,word_size5,word_size6;
	char szprinter[80];
	char *szDevice,*szDriver,*szOutput;
	HDC hdcprint;

	UpdateData(TRUE);

	word_size1=strlen(m_postcode_output);
	word_size2=strlen(m_address_output);
	word_size3=strlen(m_hospital_output);
	word_size4=strlen(m_name_output);
	word_size5=strlen(m_title_output);
	word_size6=strlen(m_department_output);


	static DOCINFO di={sizeof(DOCINFO),"printer",NULL}; 
	
	GetProfileString("windows","device",",,,",szprinter,80); 

	
	
	if(NULL!=(szDevice=strtok(szprinter,","))&&NULL!=(szDriver=strtok(NULL,","))&&NULL!=(szOutput=strtok(NULL,",")))
		
		if((hdcprint=CreateDC(szDriver,szDevice,szOutput,NULL))!=0)
			{
			if(StartDoc(hdcprint,&di)>0)
				{ 
				StartPage(hdcprint); 
				SaveDC(hdcprint); 
				TextOut(hdcprint,600,1400,"邮编：",6);
				TextOut(hdcprint,1220,1400,m_postcode_output,word_size1); 
				TextOut(hdcprint,600,1700,m_address_output,word_size2); 
				TextOut(hdcprint,600,2000,m_hospital_output,word_size3);
				TextOut(hdcprint,2100,2000,m_department_output,word_size6);
				TextOut(hdcprint,600,2300,m_name_output,word_size4);
				TextOut(hdcprint,1350,2300,m_title_output,word_size5);
				TextOut(hdcprint,1850,2300,"收",2);
				
				RestoreDC(hdcprint,-1); 
				EndPage(hdcprint); 
				EndDoc(hdcprint); 
				MessageBox("打印机连接成功！","提示",MB_ICONINFORMATION);
				}
			DeleteDC(hdcprint);
			}
		
		else
			{
			MessageBox("打印机连接失败！","提示",MB_ICONINFORMATION);
			return;
			}

		
}

void CMotionSpecialistVistaView::OnAbout() 
{
	AboutMotionSpecialistVista dialogue;
	dialogue.DoModal();
	
}

void CMotionSpecialistVistaView::OnFileNew() 
{
	this->OnAddNew();
}


void CMotionSpecialistVistaView::ShowWriterSent()
{
	int w,i;
	w=0;
	i=0;
	
	m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		if((m_pSet->m_writer=="w")&&(m_pSet->m_marker=="r"))
		{
			m_Record_List.InsertItem(i,m_pSet->m_ID);
			m_Record_List.SetItemText(i,1,m_pSet->m_name);
			m_Record_List.SetItemText(i,2,m_pSet->m_profession);
			m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
			m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
			m_Record_List.SetItemText(i,5,m_pSet->m_department);
			m_Record_List.SetItemText(i,6,m_pSet->m_means);
			m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
			m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
			i++;
			w=1;

		}
		m_pSet->MoveNext();
	}

	m_number_sponsor=i;
	UpdateData(FALSE);

	if(w==0)
		MessageBox("记录未找到，请核对后再输入！","错误",MB_OK|MB_ICONINFORMATION);
	else
		this->SeperateRow(i);   //***************Place the seperator*************

	return;

}

void CMotionSpecialistVistaView::ShowWriterNotSent()
{
	int w,i;
	w=0;
	i=0;
	
	m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		if((m_pSet->m_writer=="w")&&(m_pSet->m_marker==""))
		{
			m_Record_List.InsertItem(i,m_pSet->m_ID);
			m_Record_List.SetItemText(i,1,m_pSet->m_name);
			m_Record_List.SetItemText(i,2,m_pSet->m_profession);
			m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
			m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
			m_Record_List.SetItemText(i,5,m_pSet->m_department);
			m_Record_List.SetItemText(i,6,m_pSet->m_means);
			m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
			m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
			i++;
			w=1;
			
		}
		m_pSet->MoveNext();
	}
	
	m_number_sponsor=i;
	UpdateData(FALSE);
	
	if(w==0)
		MessageBox("记录未找到，请核对后再输入！","错误",MB_OK|MB_ICONINFORMATION);
	else
		this->SeperateRow(i);   //***************Place the seperator*************
	
	return;
	
	
}

void CMotionSpecialistVistaView::ShowBlankPostCode()
{	
	int w,i;
	w=0;
	i=0;
	
	m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		if(m_pSet->m_post_code=="")
		{
			m_Record_List.InsertItem(i,m_pSet->m_ID);
			m_Record_List.SetItemText(i,1,m_pSet->m_name);
			m_Record_List.SetItemText(i,2,m_pSet->m_profession);
			m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
			m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
			m_Record_List.SetItemText(i,5,m_pSet->m_department);
			m_Record_List.SetItemText(i,6,m_pSet->m_means);
			m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
			m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
			i++;
			w=1;
			
		}
		m_pSet->MoveNext();
	}
	
	m_number_sponsor=i;
	UpdateData(FALSE);
	
	if(w==0)
		MessageBox("记录未找到，请核对后再输入！","错误",MB_OK|MB_ICONINFORMATION);
	else
		this->SeperateRow(i);   //***************Place the seperator*************
	
	return;
	

}

void CMotionSpecialistVistaView::ShowSpecialRepresentative()
{	
	int w,i;
	w=0;
	i=0;
	
	m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		if(m_pSet->m_class_1=="百城巡讲代表")
		{
			m_Record_List.InsertItem(i,m_pSet->m_ID);
			m_Record_List.SetItemText(i,1,m_pSet->m_name);
			m_Record_List.SetItemText(i,2,m_pSet->m_profession);
			m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
			m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
			m_Record_List.SetItemText(i,5,m_pSet->m_department);
			m_Record_List.SetItemText(i,6,m_pSet->m_means);
			m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
			m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
			i++;
			w=1;

		}
		m_pSet->MoveNext();
	}

	m_number_sponsor=i;
	UpdateData(FALSE);

	if(w==0)
		MessageBox("记录未找到，请核对后再输入！","错误",MB_OK|MB_ICONINFORMATION);
	else
		this->SeperateRow(i);   //***************Place the seperator*************

	return;


}

void CMotionSpecialistVistaView::ShowReply()
{
	int w,number;
	w=0;
	number=0;
	
	m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		if(m_pSet->m_arrival=="已回执")
		{
			m_Record_List.InsertItem(number,m_pSet->m_ID);
			m_Record_List.SetItemText(number,1,m_pSet->m_name);
			m_Record_List.SetItemText(number,2,m_pSet->m_profession);
			m_Record_List.SetItemText(number,3,m_pSet->m_class_1);
			m_Record_List.SetItemText(number,4,m_pSet->m_hospital);
			m_Record_List.SetItemText(number,5,m_pSet->m_department);
			m_Record_List.SetItemText(number,6,m_pSet->m_means);
			m_Record_List.SetItemText(number,7,m_pSet->m_sponsor);
			m_Record_List.SetItemText(number,8,m_pSet->m_arrival);
			number++;
			w=1;

		}
		m_pSet->MoveNext();
	}

	m_number_sponsor=number;
	UpdateData(FALSE);

	if(w==0)
		MessageBox("记录未找到，请核对后再输入！","错误",MB_OK|MB_ICONINFORMATION);

	else
	{
		this->SeperateRow(number);   //***************Place the seperator*************

	}

	return;


}

void CMotionSpecialistVistaView::ShowFavorableSubscriber()
{
	int w,i;
	w=0;
	i=0;
	
	m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		if(m_pSet->m_type=="优惠")
		{
			m_Record_List.InsertItem(i,m_pSet->m_ID);
			m_Record_List.SetItemText(i,1,m_pSet->m_name);
			m_Record_List.SetItemText(i,2,m_pSet->m_profession);
			m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
			m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
			m_Record_List.SetItemText(i,5,m_pSet->m_department);
			m_Record_List.SetItemText(i,6,m_pSet->m_means);
			m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
			m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
			i++;
			w=1;
			
		}
		m_pSet->MoveNext();
	}
	
	m_number_sponsor=i;
	UpdateData(FALSE);
	
	
	if(w==0)
		MessageBox("记录未找到，请核对后再输入！","错误",MB_OK|MB_ICONINFORMATION);
	
	else	
		this->SeperateRow(i);   //***************Place the seperator*************
	
	return;
	
	
}

void CMotionSpecialistVistaView::OnButton27() 
{

	this->m_means_output="";
	this->m_sponsor_output="";
	UpdateData(FALSE);
}

void CMotionSpecialistVistaView::ShowRegisteredPresidium()
{
	int i=0;	
	
	m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		
		if(m_pSet->m_class_1=="主席团"&&m_pSet->m_arrival=="已注册")
		{
			m_Record_List.InsertItem(i,m_pSet->m_ID);
			m_Record_List.SetItemText(i,1,m_pSet->m_name);
			m_Record_List.SetItemText(i,2,m_pSet->m_profession);
			m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
			m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
			m_Record_List.SetItemText(i,5,m_pSet->m_department);
			m_Record_List.SetItemText(i,6,m_pSet->m_means);
			m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
			m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
			
			i++;
			
			
		}
		
		m_pSet->MoveNext();
	}
	
	if(i==0)
		MessageBox("对不起，无此记录，请核对！","记录不存在",MB_OK|MB_ICONINFORMATION);
	
	else
	{
		this->SeperateRow(i);   //**************Place the seperator*****************
		
	}
	
	this->m_number_sponsor=i;  //Show the number found.		
	UpdateData(FALSE);   //Output all data.
	

}

void CMotionSpecialistVistaView::ShowRegisteredScientific()
{
	int i=0;	
	
	m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		
		if(m_pSet->m_class_1=="学术委员会"&&m_pSet->m_arrival=="已注册")
		{
			m_Record_List.InsertItem(i,m_pSet->m_ID);
			m_Record_List.SetItemText(i,1,m_pSet->m_name);
			m_Record_List.SetItemText(i,2,m_pSet->m_profession);
			m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
			m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
			m_Record_List.SetItemText(i,5,m_pSet->m_department);
			m_Record_List.SetItemText(i,6,m_pSet->m_means);
			m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
			m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
			
			i++;
			
			
		}
		
		m_pSet->MoveNext();
	}
	
	if(i==0)
		MessageBox("对不起，无此记录，请核对！","记录不存在",MB_OK|MB_ICONINFORMATION);
	
	else
	{
		this->SeperateRow(i);   //**************Place the seperator*****************
		
	}
	
	this->m_number_sponsor=i;  //Show the number found.		
	UpdateData(FALSE);   //Output all data.
	


}

void CMotionSpecialistVistaView::ShowDirector()
{
	int i=0;	
	
	m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		
		if(m_pSet->m_profession=="主任"||m_pSet->m_title.Left(4)=="主任")
		{
			m_Record_List.InsertItem(i,m_pSet->m_ID);
			m_Record_List.SetItemText(i,1,m_pSet->m_name);
			m_Record_List.SetItemText(i,2,m_pSet->m_profession);
			m_Record_List.SetItemText(i,3,m_pSet->m_class_1);
			m_Record_List.SetItemText(i,4,m_pSet->m_hospital);
			m_Record_List.SetItemText(i,5,m_pSet->m_department);
			m_Record_List.SetItemText(i,6,m_pSet->m_means);
			m_Record_List.SetItemText(i,7,m_pSet->m_sponsor);
			m_Record_List.SetItemText(i,8,m_pSet->m_arrival);
			
			i++;
			
			
		}
		
		m_pSet->MoveNext();
	}
	
	if(i==0)
		MessageBox("对不起，无此记录，请核对！","记录不存在",MB_OK|MB_ICONINFORMATION);
	
	else
	{
		this->SeperateRow(i);   //**************Place the seperator*****************
		
	}
	
	this->m_number_sponsor=i;  //Show the number found.		
	UpdateData(FALSE);   //Output all data.
	

}
