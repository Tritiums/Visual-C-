// AxisDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Axis.h"
#include "AxisDlg.h"
#include "Copyright.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAxisDlg dialog

CAxisDlg::CAxisDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CAxisDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAxisDlg)
	m_check1 = FALSE;
	m_check2 = FALSE;
	m_check3 = FALSE;
	m_check4 = FALSE;
	m_check5 = FALSE;
	m_check6 = FALSE;
	m_check7 = FALSE;
	m_check8 = FALSE;
	m_check9 = FALSE;
	m_check10 = FALSE;
	m_check11 = FALSE;
	m_check12 = FALSE;
	m_qrs = 0;
	m_qrsl = 0;
	m_qrsu = 0;
	m_diagnosis = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CAxisDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAxisDlg)
	DDX_Check(pDX, IDC_CHECK1, m_check1);
	DDX_Check(pDX, IDC_CHECK2, m_check2);
	DDX_Check(pDX, IDC_CHECK3, m_check3);
	DDX_Check(pDX, IDC_CHECK4, m_check4);
	DDX_Check(pDX, IDC_CHECK5, m_check5);
	DDX_Check(pDX, IDC_CHECK6, m_check6);
	DDX_Check(pDX, IDC_CHECK7, m_check7);
	DDX_Check(pDX, IDC_CHECK8, m_check8);
	DDX_Check(pDX, IDC_CHECK9, m_check9);
	DDX_Check(pDX, IDC_CHECK10, m_check10);
	DDX_Check(pDX, IDC_CHECK11, m_check11);
	DDX_Check(pDX, IDC_CHECK12, m_check12);
	DDX_Text(pDX, IDC_EDIT1, m_qrs);
	DDX_Text(pDX, IDC_EDIT2, m_qrsl);
	DDX_Text(pDX, IDC_EDIT3, m_qrsu);
	DDX_Text(pDX, IDC_EDIT4, m_diagnosis);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAxisDlg, CDialog)
	//{{AFX_MSG_MAP(CAxisDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_CHECK1, OnCheck1)
	ON_BN_CLICKED(IDC_CHECK2, OnCheck2)
	ON_BN_CLICKED(IDC_CHECK3, OnCheck3)
	ON_BN_CLICKED(IDC_CHECK4, OnCheck4)
	ON_BN_CLICKED(IDC_CHECK5, OnCheck5)
	ON_BN_CLICKED(IDC_CHECK6, OnCheck6)
	ON_BN_CLICKED(IDC_CHECK7, OnCheck7)
	ON_BN_CLICKED(IDC_CHECK8, OnCheck8)
	ON_BN_CLICKED(IDC_CHECK9, OnCheck9)
	ON_BN_CLICKED(IDC_CHECK10, OnCheck10)
	ON_BN_CLICKED(IDC_CHECK11, OnCheck11)
	ON_BN_CLICKED(IDC_CHECK12, OnCheck12)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAxisDlg message handlers

BOOL CAxisDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CAxisDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CAxisDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CAxisDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CAxisDlg::OnCheck1() 
{
	UpdateData(TRUE);
  if(m_check2=TRUE) m_check2=FALSE;
  UpdateData(FALSE);
	
}

void CAxisDlg::OnCheck2() 
{
	UpdateData(TRUE);
  if(m_check1=TRUE) m_check1=FALSE;
  UpdateData(FALSE);
	
}

void CAxisDlg::OnCheck3() 
{
	UpdateData(TRUE);
    if(m_check4=TRUE) m_check4=FALSE;
   UpdateData(FALSE);
	
}

void CAxisDlg::OnCheck4() 
{
	UpdateData(TRUE);
  if(m_check3=TRUE) m_check3=FALSE;
  UpdateData(FALSE);
	
}

void CAxisDlg::OnCheck5() 
{
	UpdateData(TRUE);
  if(m_check6=TRUE) m_check6=FALSE;
  UpdateData(FALSE);
	
}

void CAxisDlg::OnCheck6() 
{
	UpdateData(TRUE);
  if(m_check5=TRUE) m_check5=FALSE;
  UpdateData(FALSE);
	
}

void CAxisDlg::OnCheck7() 
{
	UpdateData(TRUE);
  if(m_check8=TRUE) m_check8=FALSE;
  UpdateData(FALSE);
	
}

void CAxisDlg::OnCheck8() 
{
	UpdateData(TRUE);
  if(m_check7=TRUE) m_check7=FALSE;
  UpdateData(FALSE);
	
}

void CAxisDlg::OnCheck9() 
{
	UpdateData(TRUE);
  if(m_check10=TRUE) m_check10=FALSE;
  UpdateData(FALSE);
	
}

void CAxisDlg::OnCheck10() 
{
	UpdateData(TRUE);
  if(m_check9=TRUE) m_check9=FALSE;
  UpdateData(FALSE);
	
}

void CAxisDlg::OnCheck11() 
{
	UpdateData(TRUE);
  if(m_check12=TRUE) m_check12=FALSE;
  UpdateData(FALSE);
	
}

void CAxisDlg::OnCheck12() 
{
	UpdateData(TRUE);
  if(m_check11=TRUE) m_check11=FALSE;
  UpdateData(FALSE);
	
}

void CAxisDlg::OnButton1() 
{
	int lead1,lead2,lead3,avl,avf,avr,qrs=0,qrsu,qrsl;
	for(;;)
	{
	UpdateData(TRUE);
	
	lead1=m_check1;
    lead2=m_check3;
	lead3=m_check5;
	avl=m_check7;
	avf=m_check9;
	avr=m_check11;
    if(m_check1==FALSE&&m_check2==FALSE)
         {MessageBox("You haven't input the complete raw data to Lead I data check box!","Error",MB_OK|MB_ICONINFORMATION);
          break;}
	if(m_check3==FALSE&&m_check4==FALSE)
         {MessageBox("You haven't input the complete raw data to Lead II data check box!","Error",MB_OK|MB_ICONINFORMATION);
          break;}
	if(m_check5==FALSE&&m_check6==FALSE)
         {MessageBox("You haven't input the complete raw data to Lead III data check box!","Error",MB_OK|MB_ICONINFORMATION);
          break;}
	if(m_check7==FALSE&&m_check8==FALSE)
         {MessageBox("You haven't input the complete raw data to Lead aVL data check box!","Error",MB_OK|MB_ICONINFORMATION);
          break;}
	if(m_check9==FALSE&&m_check10==FALSE)
         {MessageBox("You haven't input the complete raw data to Lead aVF data check box!","Error",MB_OK|MB_ICONINFORMATION);
          break;}
	if(m_check11==FALSE&&m_check12==FALSE)
         {MessageBox("You haven't input the complete raw data to Lead aVR data check box!","Error",MB_OK|MB_ICONINFORMATION);
          break;}



	if(lead1)
		if(lead3)
			if(avl)
				qrs=45;
			else qrs=75;
		else if(lead2)
			    if(avf)
					qrs=15;
				else qrs=-15;
			else if(avr)
				     qrs=-75;
			      else qrs=-45;
	else if(lead3)
		     if(lead2)
		          if(avr)
					  qrs=135;
				  else qrs=105;
			else if(avf)
				      qrs=165;
			      else qrs=-165;
		else if(avl)
				 qrs=-105;
			else qrs=-135;
     
	  qrsl=qrs-13;
	  qrsu=qrs+13;

	 m_qrs=qrs;
	 m_qrsl=qrsl;
	 m_qrsu=qrsu;
     if(qrs<=90&&qrs>=0) m_diagnosis="Normal QRS Axis";
     if(qrs<=120&&qrs>90) m_diagnosis="Slight Left QRS Axis Deviation";
	 if(qrs<=150&&qrs>120) m_diagnosis="Significant Left QRS Axis Deviation";
	 if(qrs<=180&&qrs>150) m_diagnosis="Moderate Left QRS Axis Deviation";
	 if(qrs<0&&qrs>=-30) m_diagnosis="Slight Right QRS Axis Deviation";
	 if(qrs<-30&&qrs>=-60) m_diagnosis="Significant Right QRS Axis Deviation";
	 if(qrs<-60&&qrs>=-90) m_diagnosis="Moderate Right QRS Axis Deviation";
	 if(qrs<-90&&qrs>=-180) m_diagnosis="Extreme Right QRS Axis Deviation";

    UpdateData(FALSE);

	break;
	}
}

void CAxisDlg::OnButton2() 
{
	CCopyright dialogue;
	dialogue.DoModal();
}

void CAxisDlg::OnButton3() 
{
	OnOK();
	
}

BEGIN_EVENTSINK_MAP(CAxisDlg, CDialog)
    //{{AFX_EVENTSINK_MAP(CAxisDlg)
	ON_EVENT(CAxisDlg, IDC_IMAGE20, -600 /* Click */, OnYangChuan, VTS_NONE)
	ON_EVENT(CAxisDlg, IDC_IMAGE19, -600 /* Click */, OnYangChuan, VTS_NONE)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()



void CAxisDlg::OnYangChuan() 
{
	MessageBox("Yang Chuan   E-mail: dowrun@21cn.com   QQ: 2060350   ","Contact with Yang Chuan",MB_OK|MB_ICONINFORMATION);		
	
}

