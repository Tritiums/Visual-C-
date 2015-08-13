// onetwoDlg.cpp : implementation file
//

#include "stdafx.h"
#include "onetwo.h"
#include "onetwoDlg.h"

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
	afx_msg void OnIcon1();
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
	ON_BN_CLICKED(IDI_ICON1, OnIcon1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// COnetwoDlg dialog

COnetwoDlg::COnetwoDlg(CWnd* pParent /*=NULL*/)
	: CDialog(COnetwoDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(COnetwoDlg)
	m_result1 = 0.0f;
	m_a = 0.0f;
	m_b = 0.0f;
	m_c = 0.0f;
	m_result2 = 0.0f;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void COnetwoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(COnetwoDlg)
	DDX_Text(pDX, IDC_EDIT4, m_result1);
	DDX_Text(pDX, IDC_EDIT1, m_a);
	DDX_Text(pDX, IDC_EDIT2, m_b);
	DDX_Text(pDX, IDC_EDIT3, m_c);
	DDX_Text(pDX, IDC_EDIT5, m_result2);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(COnetwoDlg, CDialog)
	//{{AFX_MSG_MAP(COnetwoDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnCompute)
	ON_BN_CLICKED(IDC_BUTTON3, OnClose)
	ON_BN_CLICKED(IDC_BUTTON2, OnAbout)
	ON_COMMAND(M_Exit, OnExit)
	ON_COMMAND(M_About, OnMAbout)
	ON_EN_CHANGE(IDC_EDIT2, OnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT1, OnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT3, OnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT4, OnChangeEdit4)
	
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// COnetwoDlg message handlers

BOOL COnetwoDlg::OnInitDialog()
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
	double m_a,m_b,m_c,m_result1,m_result2;
	m_a=0;
	m_b=0;
	m_c=0;
	m_result1=0;
	m_result2=0;

	UpdateData(FALSE);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void COnetwoDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void COnetwoDlg::OnPaint() 
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
HCURSOR COnetwoDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}




#include<math.h>
void COnetwoDlg::OnCompute() 
{
double delta,deltar,head;
for(;;){
UpdateData(TRUE);
if(m_a==0&&m_b==0&&m_c==0){MessageBox("Please input 3 numbers!","Error",MB_OK|MB_ICONQUESTION);
  break;}
  if(m_a==0){MessageBox("The value a mustn't be equal to zero!","Error",MB_OK|MB_ICONEXCLAMATION);
   break;}
  
 delta=m_b*m_b-4*m_a*m_c;
	if(delta<0) {MessageBox("The Delta is smaller than 0,Please reinput!");
	m_a=m_b=m_c=0;
	UpdateData(FALSE);
	break;}
 deltar=sqrt(delta)/(2*m_a);
 head=-m_b/(2*m_a);
 m_result1=head+deltar;
 m_result2=head-deltar;
 UpdateData(FALSE);
 break;
}

	
    
}




void COnetwoDlg::OnClose() 
{
MessageBox("Thank you for using the 'Equation Roots'! ","Exit");

OnOK();
  

	
}





void COnetwoDlg::OnAbout() 
{
MessageBox("This program is produced by Dowrun Technology!","About this program",MB_OK|MB_ICONINFORMATION);	
}

void COnetwoDlg::OnExit() 
{
OnOK();	
}

void COnetwoDlg::OnMAbout() 
{
MessageBox("Dr Yang, Dowrun Technology","About");	
}

void CAboutDlg::OnIcon1() 
{
	// TODO: Add your control notification handler code here
	
}

void COnetwoDlg::OnChangeEdit2() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void COnetwoDlg::OnChangeEdit1() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void COnetwoDlg::OnChangeEdit3() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void COnetwoDlg::OnChangeEdit4() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void COnetwoDlg::OnMenuitem32774() 
{
OnOK();	
}
