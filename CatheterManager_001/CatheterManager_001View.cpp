// CatheterManager_001View.cpp : implementation of the CCatheterManager_001View class
//

#include "stdafx.h"
#include "CatheterManager_001.h"

#include "CatheterManager_001Set.h"
#include "CatheterManager_001Doc.h"
#include "CatheterManager_001View.h"
#include "AddNewProcess.h"
#include "SureToDelete.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCatheterManager_001View

IMPLEMENT_DYNCREATE(CCatheterManager_001View, CRecordView)

BEGIN_MESSAGE_MAP(CCatheterManager_001View, CRecordView)
	//{{AFX_MSG_MAP(CCatheterManager_001View)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_CBN_EDITCHANGE(IDC_COMBO1, OnEditchangeCombo1)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	ON_BN_CLICKED(IDC_BUTTON6, OnButton6)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST1, OnDblclkList1)
	ON_BN_CLICKED(IDC_BUTTON7, OnButton7)
	ON_BN_CLICKED(IDC_BUTTON8, OnButton8)
	ON_BN_CLICKED(IDC_CHECK1, OnCheck1)
	ON_BN_CLICKED(IDC_CHECK2, OnCheck2)
	ON_BN_CLICKED(IDC_BUTTON9, OnButton9)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCatheterManager_001View construction/destruction

CCatheterManager_001View::CCatheterManager_001View()
	: CRecordView(CCatheterManager_001View::IDD)
{
	//{{AFX_DATA_INIT(CCatheterManager_001View)
	m_pSet = NULL;
	m_begin_input = 0;
	m_deadline_input = 0;
	m_ID_input = _T("");
	m_date_output = 0;
	m_price_output = 0.0;
	m_import_output = 0.0;
	m_total_output = 0.0;
	m_customer_output = _T("");
	m_diagnosis_output = _T("");
	m_operator_output = _T("");
	m_assistant_output = _T("");
	m_manager_output = _T("");
	m_message_product_output = _T("");
	m_message_patient_output = _T("");
	m_ID_output = _T("");
	m_patient_abbreviation_output = _T("");
	m_number_output = 0;
	m_customer_abbreviation_input = _T("");
	m_number_each_product_output = 0;
	m_number_record_output = 0;
	m_name_date_check = FALSE;
	m_manufacturer_date_check = FALSE;
	//}}AFX_DATA_INIT
	// TODO: add construction code here

}

CCatheterManager_001View::~CCatheterManager_001View()
{
}

void CCatheterManager_001View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCatheterManager_001View)
	DDX_Control(pDX, IDC_COMBO8, m_manufacturer_date_input);
	DDX_Control(pDX, IDC_COMBO6, m_name_date_input);
	DDX_Control(pDX, IDC_COMBO7, m_name_customer_input);
	DDX_Control(pDX, IDC_COMBO5, m_manufacturer_output);
	DDX_Control(pDX, IDC_COMBO4, m_retailer_output);
	DDX_Control(pDX, IDC_COMBO3, m_type_output);
	DDX_Control(pDX, IDC_COMBO2, m_name_output);
	DDX_Control(pDX, IDC_COMBO1, m_abbreviation_output);
	DDX_Control(pDX, IDC_LIST1, m_Record_List);
	DDX_DateTimeCtrl(pDX, IDC_DATETIMEPICKER1, m_begin_input);
	DDX_DateTimeCtrl(pDX, IDC_DATETIMEPICKER2, m_deadline_input);
	DDX_Text(pDX, IDC_EDIT4, m_ID_input);
	DDX_DateTimeCtrl(pDX, IDC_DATETIMEPICKER3, m_date_output);
	DDX_Text(pDX, IDC_EDIT3, m_price_output);
	DDX_Text(pDX, IDC_EDIT5, m_import_output);
	DDX_Text(pDX, IDC_EDIT6, m_total_output);
	DDX_Text(pDX, IDC_EDIT7, m_customer_output);
	DDX_Text(pDX, IDC_EDIT1, m_diagnosis_output);
	DDX_Text(pDX, IDC_EDIT8, m_operator_output);
	DDX_Text(pDX, IDC_EDIT9, m_assistant_output);
	DDX_Text(pDX, IDC_EDIT10, m_manager_output);
	DDX_Text(pDX, IDC_EDIT12, m_message_product_output);
	DDX_Text(pDX, IDC_EDIT13, m_message_patient_output);
	DDX_Text(pDX, IDC_EDIT14, m_ID_output);
	DDX_Text(pDX, IDC_EDIT11, m_patient_abbreviation_output);
	DDX_Text(pDX, IDC_EDIT2, m_number_output);
	DDX_Text(pDX, IDC_EDIT15, m_customer_abbreviation_input);
	DDX_Text(pDX, IDC_EDIT17, m_number_each_product_output);
	DDX_Text(pDX, IDC_EDIT18, m_number_record_output);
	DDX_Check(pDX, IDC_CHECK1, m_name_date_check);
	DDX_Check(pDX, IDC_CHECK2, m_manufacturer_date_check);
	//}}AFX_DATA_MAP
}

BOOL CCatheterManager_001View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CRecordView::PreCreateWindow(cs);
}

void CCatheterManager_001View::OnInitialUpdate()
{
	AddNewProcess dlg;

	CString abbreviation[3],name[3],type[3],manufacturer[50],retailer[50];

	CTime NowTime=CTime::GetCurrentTime();
	int i=0,CompanyNum=0;
	
	m_pSet = &GetDocument()->m_catheterManager_001Set;
	CRecordView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();


	/////////////////Set Current Time//////////////////////////////

	m_deadline_input=NowTime;
	m_begin_input=NowTime;
	UpdateData(FALSE);


	///////////////Link to the base/////////////////////

	this->m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		if(m_pSet->m_void_010=="company")
			CompanyNum++;
		m_pSet->MoveNext();
	}



	//////////////Set Combo Box////////////////////////


	this->m_pSet->MoveFirst();
	while(!m_pSet->IsEOF())
	{
		if(m_pSet->m_void_010=="company")
		{
			manufacturer[i]=m_pSet->m_manufacturer;
			retailer[i]=m_pSet->m_retailer;

			i++;
		}


		m_pSet->MoveNext();
	}


	abbreviation[0]="Cypher_Stent";
	abbreviation[1]="Release";
	abbreviation[2]="guiding";

	name[0]="Cypher支架";
	name[1]="可撕开鞘";
	name[2]="导引导丝";

	type[0]="3厘米";
	type[1]="8F";
	type[2]="6F";

    

	retailer[0]="某公司";
	retailer[1]="北京盛安通达商贸有限责任公司";
	retailer[2]="哈尔滨木天医疗器械经销有限公司";





	for(i=0;i<CompanyNum;i++)
	{
//		this->m_abbreviation_output.AddString((LPCTSTR)abbreviation[i]);
//		this->m_name_output.AddString((LPCTSTR)name[i]);
//		this->m_type_output.AddString((LPCTSTR)type[i]);
		this->m_manufacturer_output.AddString((LPCTSTR)manufacturer[i]);
//		this->m_name_date_input.AddString((LPCTSTR)name[i]);
		this->m_retailer_output.AddString((LPCTSTR)retailer[i]);
		this->m_manufacturer_date_input.AddString((LPCTSTR)manufacturer[i]);
	}

	
    	this->m_abbreviation_output.SetCurSel(-1);
    	this->m_name_output.SetCurSel(-1);
    	this->m_type_output.SetCurSel(-1);
    	this->m_manufacturer_output.SetCurSel(-1);
    	this->m_retailer_output.SetCurSel(-1);
		this->m_name_date_input.SetCurSel(-1);
		this->m_manufacturer_date_input.SetCurSel(-1);
////////////////////////////////////////////////////////////////

		this->m_name_date_input.EnableWindow(FALSE);
		this->m_manufacturer_date_input.EnableWindow(FALSE);





/////////////////// Set dlg Combo Box/////////////////////////
		


	m_Record_List.SetExtendedStyle(LVS_EX_FULLROWSELECT|LVS_EX_GRIDLINES);

	LV_COLUMN h;

	h.mask=LVCF_FMT|LVCF_TEXT|LVCF_WIDTH;

	h.fmt=LVCFMT_LEFT;

	h.cx=80;


	h.pszText="使用日期";
	m_Record_List.InsertColumn(0,&h);

	h.pszText="序号";
	m_Record_List.InsertColumn(1,&h);


	h.pszText="产品缩写";
	m_Record_List.InsertColumn(2,&h);


	h.pszText="产品名称";
	m_Record_List.InsertColumn(3,&h);

	h.pszText="型号";
	m_Record_List.InsertColumn(4,&h);	

	h.pszText="单价";
	m_Record_List.InsertColumn(5,&h);

	h.pszText="数量";
	m_Record_List.InsertColumn(6,&h);	

	h.pszText="患者姓名";
	m_Record_List.InsertColumn(7,&h);

	h.pszText="制造商";
	m_Record_List.InsertColumn(8,&h);


	h.pszText="代理商";
	m_Record_List.InsertColumn(9,&h);

	

    

	
	
	



}

/////////////////////////////////////////////////////////////////////////////
// CCatheterManager_001View diagnostics

#ifdef _DEBUG
void CCatheterManager_001View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCatheterManager_001View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCatheterManager_001Doc* CCatheterManager_001View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCatheterManager_001Doc)));
	return (CCatheterManager_001Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCatheterManager_001View database support
CRecordset* CCatheterManager_001View::OnGetRecordset()
{
	return m_pSet;
}


/////////////////////////////////////////////////////////////////////////////
// CCatheterManager_001View message handlers

void CCatheterManager_001View::OnButton1() 
{
	CTimeSpan TimeDifferent1, TimeDifferent2;
	int DeltaSeconds1,DeltaSeconds2,i=0;
	long sum=0;
	CString s,str;

	UpdateData(TRUE);

	


	

	if(this->m_name_date_input.IsWindowEnabled()==FALSE&&this->m_manufacturer_date_input.IsWindowEnabled()==FALSE)
	{
		m_pSet->MoveFirst();

		while(!m_pSet->IsEOF())
			{

			TimeDifferent1=m_begin_input-m_pSet->m_date;
			TimeDifferent2=m_pSet->m_date-m_deadline_input;

			DeltaSeconds1=TimeDifferent1.GetTotalSeconds();
			DeltaSeconds2=TimeDifferent2.GetTotalSeconds();

			if(DeltaSeconds1<=43200&&DeltaSeconds2<=43200)
				{
				s=m_pSet->m_date.Format("%m/%d/%Y");
				m_Record_List.InsertItem(i,s);
				m_Record_List.SetItemText(i,1,m_pSet->m_ID);
				m_Record_List.SetItemText(i,2,m_pSet->m_abbreviation);
				m_Record_List.SetItemText(i,3,m_pSet->m_name);
				m_Record_List.SetItemText(i,4,m_pSet->m_type);

				s.Format("%f",m_pSet->m_void_001);
				m_Record_List.SetItemText(i,5,s);

				s.Format("%d",m_pSet->m_number);
				m_Record_List.SetItemText(i,6,s);

				m_Record_List.SetItemText(i,7,m_pSet->m_customer);
				m_Record_List.SetItemText(i,8,m_pSet->m_manufacturer);
				m_Record_List.SetItemText(i,9,m_pSet->m_retailer);

				i++;

				}

			

			m_pSet->MoveNext();

		
		}
	
	if(i!=0)
	{
	    m_Record_List.InsertItem(i,"-----------------------");
		m_Record_List.SetItemText(i,1,"----------------------");
		m_Record_List.SetItemText(i,2,"----------------------");
		m_Record_List.SetItemText(i,3,"----------------------");
		m_Record_List.SetItemText(i,4,"----------------------");		
		m_Record_List.SetItemText(i,5,"----------------------");		
		m_Record_List.SetItemText(i,6,"----------------------");
		m_Record_List.SetItemText(i,7,"----------------------");
		m_Record_List.SetItemText(i,8,"----------------------");
		m_Record_List.SetItemText(i,9,"----------------------");
	}
	
}



	else
	{

	this->m_name_date_input.GetLBText(m_name_date_input.GetCurSel(),str);


	m_pSet->MoveFirst();

	while(!m_pSet->IsEOF())
	{
		TimeDifferent1=m_begin_input-m_pSet->m_date;
		TimeDifferent2=m_pSet->m_date-m_deadline_input;

		DeltaSeconds1=TimeDifferent1.GetTotalSeconds();
		DeltaSeconds2=TimeDifferent2.GetTotalSeconds();

		if(DeltaSeconds1<=43200&&DeltaSeconds2<=43200&&m_pSet->m_name==str)
		{
			s=m_pSet->m_date.Format("%m/%d/%Y");
		    m_Record_List.InsertItem(i,s);

	    	m_Record_List.SetItemText(i,1,m_pSet->m_ID);
    		m_Record_List.SetItemText(i,2,m_pSet->m_abbreviation);
    		m_Record_List.SetItemText(i,3,m_pSet->m_name);
	    	m_Record_List.SetItemText(i,4,m_pSet->m_type);

	    	s.Format("%f",m_pSet->m_void_001);
    		m_Record_List.SetItemText(i,5,s);

    		s.Format("%d",m_pSet->m_number);
    		m_Record_List.SetItemText(i,6,s);
		
    		m_Record_List.SetItemText(i,7,m_pSet->m_customer);
    		m_Record_List.SetItemText(i,8,m_pSet->m_manufacturer);
    		m_Record_List.SetItemText(i,9,m_pSet->m_retailer);

			sum=sum+m_pSet->m_number;
 
			i++;
		
		}

			

			m_pSet->MoveNext();

		
	}
	
	if(i!=0)
	{
	    m_Record_List.InsertItem(i,"-----------------------");
		m_Record_List.SetItemText(i,1,"----------------------");
		m_Record_List.SetItemText(i,2,"----------------------");
		m_Record_List.SetItemText(i,3,"----------------------");
		m_Record_List.SetItemText(i,4,"----------------------");		
		m_Record_List.SetItemText(i,5,"----------------------");		
		m_Record_List.SetItemText(i,6,"----------------------");
		m_Record_List.SetItemText(i,7,"----------------------");
		m_Record_List.SetItemText(i,8,"----------------------");
		m_Record_List.SetItemText(i,9,"----------------------");

		m_number_record_output=i; 
		m_number_each_product_output=sum;

		UpdateData(FALSE);
		
	}
}
	
}
	



void CCatheterManager_001View::OnButton2() 
{

	CString s;
	int i=0;
	
	m_pSet->MoveFirst();

	while(!m_pSet->IsEOF())
	{
		s=m_pSet->m_date.Format("%m/%d/%Y");
		m_Record_List.InsertItem(i,s);

		m_Record_List.SetItemText(i,1,m_pSet->m_ID);
		m_Record_List.SetItemText(i,2,m_pSet->m_abbreviation);
		m_Record_List.SetItemText(i,3,m_pSet->m_name);
		m_Record_List.SetItemText(i,4,m_pSet->m_type);

		s.Format("%f",m_pSet->m_void_001);
		m_Record_List.SetItemText(i,5,s);

		s.Format("%d",m_pSet->m_number);
		m_Record_List.SetItemText(i,6,s);
		
		m_Record_List.SetItemText(i,7,m_pSet->m_customer);
		m_Record_List.SetItemText(i,8,m_pSet->m_manufacturer);
		m_Record_List.SetItemText(i,9,m_pSet->m_retailer);




		
		i++;

		m_pSet->MoveNext();
		
	}

	    m_Record_List.InsertItem(i,"------------------------");
		m_Record_List.SetItemText(i,1,"----------------------");
		m_Record_List.SetItemText(i,2,"----------------------");
		m_Record_List.SetItemText(i,3,"----------------------");
		m_Record_List.SetItemText(i,4,"----------------------");		
		m_Record_List.SetItemText(i,5,"----------------------");		
		m_Record_List.SetItemText(i,6,"----------------------");
		m_Record_List.SetItemText(i,7,"----------------------");
		m_Record_List.SetItemText(i,8,"----------------------");
		m_Record_List.SetItemText(i,9,"----------------------");

}

void CCatheterManager_001View::OnButton3() 
{
	int i=0,manufacturer_indicator=0,retailer_indicator=0;
	UpdateData(TRUE);

	manufacturer_indicator=this->m_manufacturer_output.GetCurSel();
	retailer_indicator=this->m_retailer_output.GetCurSel();
	
	if(m_ID_output=="")
		MessageBox("对不起，请输入数据。","错误",MB_OK|MB_ICONINFORMATION);
	else

	if(manufacturer_indicator==-1||retailer_indicator==-1)
		MessageBox("对不起，制造商或代理商尚未输入。","错误",MB_OK|MB_ICONINFORMATION);
	else
	{


	m_pSet->MoveFirst();
	
	while(!m_pSet->IsEOF())
	{

		if(m_pSet->m_ID==m_ID_output)
		{
			m_pSet->Delete();
			m_pSet->AddNew();

			m_pSet->m_date=m_date_output;
			this->m_abbreviation_output.GetLBText(m_abbreviation_output.GetCurSel(),m_pSet->m_abbreviation);
			this->m_name_output.GetLBText(m_name_output.GetCurSel(),m_pSet->m_name);
			this->m_type_output.GetLBText(m_type_output.GetCurSel(),m_pSet->m_type);
			this->m_manufacturer_output.GetLBText(m_manufacturer_output.GetCurSel(),m_pSet->m_manufacturer);
			this->m_retailer_output.GetLBText(m_retailer_output.GetCurSel(),m_pSet->m_retailer);

			m_pSet->m_void_001=m_price_output;
			m_pSet->m_void_002=m_import_output;
			m_pSet->m_number=m_number_output;
			m_pSet->m_customer=m_customer_output;
			m_pSet->m_void_003=m_diagnosis_output;
			m_pSet->m_operator=m_operator_output;
			m_pSet->m_assistant=m_assistant_output;
			m_pSet->m_manager=m_manager_output;

			m_pSet->m_void_004=m_message_product_output;
			m_pSet->m_void_005=m_message_patient_output;
			m_pSet->m_ID=m_ID_output;
			m_pSet->m_void_006=m_patient_abbreviation_output;
	
			m_pSet->Update();
			
			break;
			

		}
		m_pSet->MoveNext();
	}


	}

}

void CCatheterManager_001View::OnButton4() 
{

	m_Record_List.DeleteAllItems();
}

void CCatheterManager_001View::OnEditchangeCombo1() 
{


}

void CCatheterManager_001View::OnButton5() 
{

	int i;


	UpdateData(TRUE);
	if(m_ID_input=="")
		MessageBox("对不起，请输入数据。","错误",MB_OK|MB_ICONINFORMATION);
	else
	{
		m_pSet->MoveFirst();

		while(!m_pSet->IsEOF())
		{
			if(m_ID_input==m_pSet->m_ID)
			{
				m_date_output=m_pSet->m_date;

				i=this->m_abbreviation_output.FindString(0,(LPCTSTR) m_pSet->m_abbreviation);
				this->m_abbreviation_output.SetCurSel(i);

				i=this->m_name_output.FindString(0,(LPCTSTR) m_pSet->m_name);
				this->m_name_output.SetCurSel(i);
				
				i=this->m_type_output.FindString(0,(LPCTSTR) m_pSet->m_type);
				this->m_type_output.SetCurSel(i);

				i=this->m_manufacturer_output.FindString(0,(LPCTSTR) m_pSet->m_manufacturer);
				this->m_manufacturer_output.SetCurSel(i);

				i=this->m_retailer_output.FindString(0,(LPCTSTR) m_pSet->m_retailer);
				this->m_retailer_output.SetCurSel(i);

				m_price_output=m_pSet->m_void_001;
				m_import_output=m_pSet->m_void_002;
				m_number_output=m_pSet->m_number;
				m_customer_output=m_pSet->m_customer;
				m_diagnosis_output=m_pSet->m_void_003;
				m_operator_output=m_pSet->m_operator;
				m_assistant_output=m_pSet->m_assistant;
				m_manager_output=m_pSet->m_manager;
				m_total_output=m_pSet->m_void_001*m_pSet->m_number;

				m_message_product_output=m_pSet->m_void_004;
				m_message_patient_output=m_pSet->m_void_005;
				m_ID_output=m_pSet->m_ID;
				m_patient_abbreviation_output=m_pSet->m_void_006;


			

				UpdateData(FALSE);
				break;
			}

			m_pSet->MoveNext();
		}
	}

}



void CCatheterManager_001View::OnButton6() 
{	

	int InitiationNum, RecordNum=0,judgement=0,i=0;
	CString InitiationNum_String, ZeroZero="0",s,str,manufacturer_output,retailer_output;
	CTime NowTime=CTime::GetCurrentTime();
	double price_output,entrance_price_output;

//////////////////////////////////define DialogueBox/////////////////

	AddNewProcess dlg;

///////////////////////////////////////////////////////////////////////


	dlg.m_date_add=NowTime;
	
	UpdateData(FALSE);

/////////////////////////////////Confirm ID///////////////////////////

	m_pSet->MoveFirst();

	while(!m_pSet->IsEOF())
	{
		RecordNum++;
		m_pSet->MoveNext();

	}

	InitiationNum=RecordNum-3+100000;
	
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

	dlg.m_ID_add=InitiationNum_String;
	
	UpdateData(FALSE);

////////////////////////////////////////////////////////////////////////

	if(dlg.DoModal()==IDOK)
	{
		m_pSet->MoveFirst();

		while(!m_pSet->IsEOF())
		{
			if(m_pSet->m_abbreviation==dlg.abbreviationStr)
			{
				manufacturer_output=m_pSet->m_manufacturer;
				retailer_output=m_pSet->m_retailer;
				price_output=m_pSet->m_void_001;
				entrance_price_output=m_pSet->m_void_002;
				break;
			}
			m_pSet->MoveNext();
		}


		    m_pSet->AddNew();		    
			
			m_pSet->m_abbreviation=dlg.abbreviationStr;
			m_pSet->m_name=dlg.nameStr;
			m_pSet->m_type=dlg.typeStr;
			
			m_pSet->m_date=dlg.m_date_add;

			m_pSet->m_manufacturer=manufacturer_output;
			m_pSet->m_retailer=retailer_output;
			m_pSet->m_void_001=price_output;
			m_pSet->m_void_002=entrance_price_output;
		
			m_pSet->m_number=dlg.m_number_add;
			m_pSet->m_customer=dlg.m_customer_add;
			m_pSet->m_void_003=dlg.m_diagnosis_add;
			m_pSet->m_operator=dlg.m_operator_add;
			m_pSet->m_assistant=dlg.m_assistant_add;
			m_pSet->m_manager=dlg.m_manager_add;

			m_pSet->m_ID=dlg.m_ID_add;
			m_pSet->m_void_006=dlg.m_patient_abbreviation_add;

			m_pSet->Update();
	
////////////////////////////////////////////////////////////////////
	        m_pSet->MoveLast();

		    s=m_pSet->m_date.Format("%m/%d/%Y");
		    m_Record_List.InsertItem(0,s);

	    	m_Record_List.SetItemText(0,1,m_pSet->m_ID);
    		m_Record_List.SetItemText(0,2,m_pSet->m_abbreviation);
     		m_Record_List.SetItemText(0,3,m_pSet->m_name);
	    	m_Record_List.SetItemText(0,4,m_pSet->m_type);

	    	s.Format("%f",m_pSet->m_void_001);
    		m_Record_List.SetItemText(0,5,s);

    		s.Format("%d",m_pSet->m_number);
    		m_Record_List.SetItemText(0,6,s);
		
    		m_Record_List.SetItemText(0,7,m_pSet->m_customer);
    		m_Record_List.SetItemText(0,8,m_pSet->m_manufacturer);
    		m_Record_List.SetItemText(0,9,m_pSet->m_retailer);
 
///////////////////////////////////////////////////////////////////////
			
            m_date_output=m_pSet->m_date;
			i=this->m_abbreviation_output.FindString(0,(LPCTSTR) m_pSet->m_abbreviation);
    		this->m_abbreviation_output.SetCurSel(i);

			i=this->m_name_output.FindString(0,(LPCTSTR) m_pSet->m_name);
			this->m_name_output.SetCurSel(i);
				
			i=this->m_type_output.FindString(0,(LPCTSTR) m_pSet->m_type);
			this->m_type_output.SetCurSel(i);

			i=this->m_manufacturer_output.FindString(0,(LPCTSTR) m_pSet->m_manufacturer);
			this->m_manufacturer_output.SetCurSel(i);

			i=this->m_retailer_output.FindString(0,(LPCTSTR) m_pSet->m_retailer);
			this->m_retailer_output.SetCurSel(i);

			m_price_output=m_pSet->m_void_001;
			m_import_output=m_pSet->m_void_002;
			m_number_output=m_pSet->m_number;
			m_customer_output=m_pSet->m_customer;
			m_diagnosis_output=m_pSet->m_void_003;
			m_operator_output=m_pSet->m_operator;
			m_assistant_output=m_pSet->m_assistant;
			m_manager_output=m_pSet->m_manager;
			m_total_output=m_pSet->m_void_001*m_pSet->m_number;

			m_message_product_output=m_pSet->m_void_004;
			m_message_patient_output=m_pSet->m_void_005;
			m_ID_output=m_pSet->m_ID;
			m_patient_abbreviation_output=m_pSet->m_void_006;

			m_Record_List.InsertItem(1,"------------------------");
    		m_Record_List.SetItemText(1,1,"----------------------");
	    	m_Record_List.SetItemText(1,2,"----------------------");
	    	m_Record_List.SetItemText(1,3,"----------------------");
    		m_Record_List.SetItemText(1,4,"----------------------");		
	    	m_Record_List.SetItemText(1,5,"----------------------");		
    		m_Record_List.SetItemText(1,6,"----------------------");
	    	m_Record_List.SetItemText(1,7,"----------------------");
	    	m_Record_List.SetItemText(1,8,"----------------------");
			m_Record_List.SetItemText(i,9,"----------------------");

			

			UpdateData(FALSE);

	}



	
}

void CCatheterManager_001View::OnDblclkList1(NMHDR* pNMHDR, LRESULT* pResult) 
{

	CString str;
	int i=0;

	int CurSel=m_Record_List.GetNextItem(-1,LVNI_ALL | LVNI_SELECTED);

    str=m_Record_List.GetItemText(CurSel,1);


	m_pSet->MoveFirst();
	
	while(!m_pSet->IsEOF())
	{

		if(m_pSet->m_ID==str)
		{
			    m_date_output=m_pSet->m_date;

				i=this->m_abbreviation_output.FindString(0,(LPCTSTR) m_pSet->m_abbreviation);
				this->m_abbreviation_output.SetCurSel(i);

				i=this->m_name_output.FindString(0,(LPCTSTR) m_pSet->m_name);
				this->m_name_output.SetCurSel(i);
				
				i=this->m_type_output.FindString(0,(LPCTSTR) m_pSet->m_type);
				this->m_type_output.SetCurSel(i);

				i=this->m_manufacturer_output.FindString(0,(LPCTSTR) m_pSet->m_manufacturer);
				this->m_manufacturer_output.SetCurSel(i);

				i=this->m_retailer_output.FindString(0,(LPCTSTR) m_pSet->m_retailer);
				this->m_retailer_output.SetCurSel(i);

				m_price_output=m_pSet->m_void_001;
				m_import_output=m_pSet->m_void_002;
				m_number_output=m_pSet->m_number;
				m_customer_output=m_pSet->m_customer;
				m_diagnosis_output=m_pSet->m_void_003;
				m_operator_output=m_pSet->m_operator;
				m_assistant_output=m_pSet->m_assistant;
				m_manager_output=m_pSet->m_manager;
				m_total_output=m_pSet->m_void_001*m_pSet->m_number;

				m_message_product_output=m_pSet->m_void_004;
				m_message_patient_output=m_pSet->m_void_005;
				m_ID_output=m_pSet->m_ID;
				m_patient_abbreviation_output=m_pSet->m_void_006;
				


			

				UpdateData(FALSE);
				break;
		}

		m_pSet->MoveNext();
	}


	*pResult = 0;
	*pResult = 0;
}

void CCatheterManager_001View::OnButton7() 
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

void CCatheterManager_001View::OnButton8() 
{
	CString s;
	int i=0;

	UpdateData(TRUE);

	m_pSet->MoveFirst();

	while(!m_pSet->IsEOF())
	{
		
	if(m_customer_abbreviation_input==m_pSet->m_void_006)
		{
			s=m_pSet->m_date.Format("%m/%d/%Y");
		    m_Record_List.InsertItem(i,s);

	    	m_Record_List.SetItemText(i,1,m_pSet->m_ID);
    		m_Record_List.SetItemText(i,2,m_pSet->m_abbreviation);
    		m_Record_List.SetItemText(i,3,m_pSet->m_name);
	    	m_Record_List.SetItemText(i,4,m_pSet->m_type);

	    	s.Format("%f",m_pSet->m_void_001);
    		m_Record_List.SetItemText(i,5,s);

    		s.Format("%d",m_pSet->m_number);
    		m_Record_List.SetItemText(i,6,s);
		
    		m_Record_List.SetItemText(i,7,m_pSet->m_customer);
    		m_Record_List.SetItemText(i,8,m_pSet->m_manufacturer);
    		m_Record_List.SetItemText(i,9,m_pSet->m_retailer);

			 
			i++;
		
		}		

			m_pSet->MoveNext();

	}

    		m_Record_List.InsertItem(i,"------------------------");
    		m_Record_List.SetItemText(i,1,"----------------------");
	    	m_Record_List.SetItemText(i,2,"----------------------");
	    	m_Record_List.SetItemText(i,3,"----------------------");
    		m_Record_List.SetItemText(i,4,"----------------------");		
	    	m_Record_List.SetItemText(i,5,"----------------------");		
    		m_Record_List.SetItemText(i,6,"----------------------");
	    	m_Record_List.SetItemText(i,7,"----------------------");
	    	m_Record_List.SetItemText(i,8,"----------------------");
			m_Record_List.SetItemText(i,9,"----------------------");

    	m_number_record_output=i;
    	UpdateData(FALSE);
}

void CCatheterManager_001View::OnCheck1() 
{

	UpdateData(TRUE);

	if(this->m_name_date_check==1)
	{
		this->m_name_date_input.EnableWindow(TRUE);
		this->m_manufacturer_date_check=0;
		this->m_manufacturer_date_input.EnableWindow(FALSE);
	}
	else
		this->m_name_date_input.EnableWindow(FALSE);

	UpdateData(FALSE);
}

void CCatheterManager_001View::OnCheck2() 
{
	UpdateData(TRUE);

	if(this->m_manufacturer_date_check==1)
	{
		this->m_manufacturer_date_input.EnableWindow(TRUE);
		this->m_name_date_check=0;
		this->m_name_date_input.EnableWindow(FALSE);

	}
	else
		this->m_manufacturer_date_input.EnableWindow(FALSE);

	UpdateData(FALSE);

	
}

void CCatheterManager_001View::OnButton9() 
{
	int i;
	CString abbreviation[3],name[3],type[3],manufacturer[50],retailer[3];


	manufacturer[0]="圣犹达医疗用品（上海）有限公司";
    manufacturer[1]="B.BRAUN MELSUNGENAG";
    manufacturer[2]="ClearStreamTechnologies Ltd";
    manufacturer[3]="Invatec S.r.1.";
    manufacturer[4]="MeritMedicalSystems,INC";
    manufacturer[5]="北京乐普医疗器械有限公司";
	manufacturer[6]="波士顿科学公司";
	manufacturer[7]="德国百多力有限公司";
	manufacturer[8]="Pfm Produkte fuer die Medizin AG";
	manufacturer[9]="麦瑞特医疗设备有限公司";
	manufacturer[10]="Medtronics 2";
	manufacturer[11]="AGA";
	manufacturer[12]="Arrow";
	manufacturer[13]="Biosense Webster";
	manufacturer[14]="Datascope";
	manufacturer[15]="MAXXIM Medical";
	manufacturer[16]="St.Jude Medical Inc 1";
	manufacturer[17]="St.Jude Medical,Daig Division";
	manufacturer[18]="美国巴德国际有限公司北京代表处";
	manufacturer[19]="美国佳腾国际公司";
	manufacturer[20]="美国雅培";
	manufacturer[21]="泰尔茂株式会社";
	manufacturer[22]="山东吉威医疗制品有限公司";
	manufacturer[23]="陕西秦明医学仪器股份有限公司";
	manufacturer[24]="上海形状记忆合金材料有限公司";
	manufacturer[25]="深圳市惠泰医疗器械有限公司";
	manufacturer[26]="深圳市先建科技股份有限公司";
	manufacturer[27]="沈阳新智源医疗用品有限公司";
	manufacturer[28]="沈阳中科天成医疗器械有限公司";
	manufacturer[29]="微创医疗器械(上海)有限公司";
	manufacturer[30]="北京微斯曼医疗器械有限公司";
	manufacturer[31]="百多力";
	manufacturer[32]="Medtronics 1";
	manufacturer[33]="St.Jude Medical Inc 3";
	manufacturer[34]="St.Jude Medical Inc 2";

	for(i=0;i<35;i++)
	{
		
		this->m_manufacturer_date_input.AddString((LPCTSTR)manufacturer[i]);
	}

	
    	this->m_abbreviation_output.SetCurSel(-1);
    	this->m_name_output.SetCurSel(-1);
    	this->m_type_output.SetCurSel(-1);
    	this->m_manufacturer_output.SetCurSel(-1);
    	this->m_retailer_output.SetCurSel(-1);
		this->m_name_date_input.SetCurSel(-1);
		this->m_manufacturer_date_input.SetCurSel(-1);
////////////////////////////////////////////////////////////////

		this->m_name_date_input.EnableWindow(FALSE);
		this->m_manufacturer_date_input.EnableWindow(FALSE);





}
