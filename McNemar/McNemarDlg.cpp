// McNemarDlg.cpp : implementation file
//

#include "stdafx.h"
#include "McNemar.h"
#include "McNemarDlg.h"

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
// CMcNemarDlg dialog

CMcNemarDlg::CMcNemarDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMcNemarDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMcNemarDlg)
	m_a = 0.0f;
	m_b = 0.0f;
	m_c = 0.0f;
	m_d = 0.0f;
	m_chisq = 0.0f;
	m_symbo1 = _T("");
	m_symbo2 = _T("");
	m_or = 0.0f;
	m_orl = 0.0f;
	m_oru = 0.0f;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMcNemarDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMcNemarDlg)
	DDX_Text(pDX, IDC_EDIT1, m_a);
	DDX_Text(pDX, IDC_EDIT2, m_b);
	DDX_Text(pDX, IDC_EDIT3, m_c);
	DDX_Text(pDX, IDC_EDIT4, m_d);
	DDX_Text(pDX, IDC_EDIT5, m_chisq);
	DDX_Text(pDX, IDC_EDIT6, m_symbo1);
	DDX_Text(pDX, IDC_EDIT7, m_symbo2);
	DDX_Text(pDX, IDC_EDIT8, m_or);
	DDX_Text(pDX, IDC_EDIT9, m_orl);
	DDX_Text(pDX, IDC_EDIT10, m_oru);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMcNemarDlg, CDialog)
	//{{AFX_MSG_MAP(CMcNemarDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)

	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMcNemarDlg message handlers

BOOL CMcNemarDlg::OnInitDialog()
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
	float m_a=0,
	      m_b=0,
		  m_c=0,
		  m_d=0,
		  m_chisq=0,
		  m_or=0,
		  m_orl=0,
		  m_oru=0;
	
	char m_symbo1, m_sybo2;

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMcNemarDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CMcNemarDlg::OnPaint() 
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
HCURSOR CMcNemarDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}
#include<math.h>
void CMcNemarDlg::OnButton1() 
{ float temporary;

for(;;){
  UpdateData(TRUE);
    
  if(m_a<=0||m_b<=0||m_c<=0||m_d<=0){MessageBox("The values in the blanks mustn't be less than one!","Error",MB_OK|MB_ICONQUESTION);
  break;}

  if(m_b+m_c>=40) 
  {m_chisq=(m_b-m_c)*(m_b-m_c)/(m_b+m_c);
   m_or=m_c/m_b;
  }
  else
  {m_chisq=(abs(m_b-m_c)-1)*(abs(m_b-m_c)-1)/(m_b+m_c);
   m_or=m_c/m_b;
  }
  if(m_chisq>3.8416) m_symbo1='<';
  else m_symbo1='>';
  if(m_chisq>6.6564) m_symbo2='<';
  else m_symbo2='>';

  m_orl=pow(m_or,(1-1.96/sqrt(m_chisq)));
  m_oru=pow(m_or,(1+1.96/sqrt(m_chisq)));
  if(m_orl>m_oru) {temporary=m_orl;m_orl=m_oru;m_oru=temporary;}

  UpdateData(FALSE); 
 	break;
}
}

void CMcNemarDlg::OnButton3() 
{
	MessageBox("For Case-Control Study.   Producer: Yang Chuan    ","About this programme",MB_OK|MB_ICONINFORMATION);		
}

void CMcNemarDlg::OnButton2() 
{
	MessageBox("Thank you for using the McNemar Test!  --Yang Chuan   ","Exit");
    OnOK();	
}

void CMcNemarDlg::OnAbout() 
{
MessageBox("For Case-Control Study.   Producer: Yang Chuan    ","About this programme",MB_OK|MB_ICONINFORMATION);		

}
