// PCR AssistantDlg.cpp : implementation file
//

#include "stdafx.h"
#include "PCR Assistant.h"
#include "PCR AssistantDlg.h"
#include "math.h"

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
// CPCRAssistantDlg dialog

CPCRAssistantDlg::CPCRAssistantDlg(CWnd* pParent /*=NULL*/)
: CDialog(CPCRAssistantDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CPCRAssistantDlg)
	m_Ct_a2 = 0.0;
	m_Ct_a1 = 0.0;
	m_Ct_a3 = 0.0;
	m_Ct_a4 = 0.0;
	m_Ct_a5 = 0.0;
	m_Ct_a6 = 0.0;
	m_Ct_a7 = 0.0;
	m_Ct_a8 = 0.0;
	m_Ct_a9 = 0.0;
	m_Ct_a10 = 0.0;
	m_Ct_a11 = 0.0;
	m_Ct_a12 = 0.0;
	m_Ct_b1 = 0.0;
	m_Ct_b2 = 0.0;
	m_Ct_b3 = 0.0;
	m_Ct_b4 = 0.0;
	m_Ct_b5 = 0.0;
	m_Ct_b6 = 0.0;
	m_Ct_b7 = 0.0;
	m_Ct_b8 = 0.0;
	m_Ct_b9 = 0.0;
	m_Ct_b10 = 0.0;
	m_Ct_b11 = 0.0;
	m_Ct_b12 = 0.0;
	m_Ct_c1 = 0.0;
	m_Ct_c2 = 0.0;
	m_Ct_c3 = 0.0;
	m_Ct_c4 = 0.0;
	m_Ct_c5 = 0.0;
	m_Ct_c6 = 0.0;
	m_Ct_c7 = 0.0;
	m_Ct_c8 = 0.0;
	m_Ct_c9 = 0.0;
	m_Ct_c10 = 0.0;
	m_Ct_c11 = 0.0;
	m_Ct_c12 = 0.0;
	m_Ct_d1 = 0.0;
	m_Ct_d2 = 0.0;
	m_Ct_d3 = 0.0;
	m_Ct_d4 = 0.0;
	m_Ct_d5 = 0.0;
	m_Ct_d6 = 0.0;
	m_Ct_d7 = 0.0;
	m_Ct_d8 = 0.0;
	m_Ct_d9 = 0.0;
	m_Ct_d10 = 0.0;
	m_Ct_d11 = 0.0;
	m_Ct_d12 = 0.0;
	m_Ct_e1 = 0.0;
	m_Ct_e2 = 0.0;
	m_Ct_e3 = 0.0;
	m_Ct_e4 = 0.0;
	m_Ct_e5 = 0.0;
	m_Ct_e6 = 0.0;
	m_Ct_e7 = 0.0;
	m_Ct_e8 = 0.0;
	m_Ct_e9 = 0.0;
	m_Ct_e10 = 0.0;
	m_Ct_e11 = 0.0;
	m_Ct_e12 = 0.0;
	m_Ct_f1 = 0.0;
	m_Ct_f2 = 0.0;
	m_Ct_f3 = 0.0;
	m_Ct_f4 = 0.0;
	m_Ct_f5 = 0.0;
	m_Ct_f6 = 0.0;
	m_Ct_f7 = 0.0;
	m_Ct_f8 = 0.0;
	m_Ct_f9 = 0.0;
	m_Ct_f10 = 0.0;
	m_Ct_f11 = 0.0;
	m_Ct_f12 = 0.0;
	m_Ct_g1 = 0.0;
	m_Ct_g2 = 0.0;
	m_Ct_g3 = 0.0;
	m_Ct_g4 = 0.0;
	m_Ct_g5 = 0.0;
	m_Ct_g6 = 0.0;
	m_Ct_g7 = 0.0;
	m_Ct_g8 = 0.0;
	m_Ct_g9 = 0.0;
	m_Ct_g10 = 0.0;
	m_Ct_g11 = 0.0;
	m_Ct_g12 = 0.0;
	m_Ct_h1 = 0.0;
	m_Ct_h2 = 0.0;
	m_Ct_h3 = 0.0;
	m_Ct_h4 = 0.0;
	m_Ct_h5 = 0.0;
	m_Ct_h6 = 0.0;
	m_Ct_h7 = 0.0;
	m_Ct_h8 = 0.0;
	m_Ct_h9 = 0.0;
	m_Ct_h10 = 0.0;
	m_Ct_h11 = 0.0;
	m_Ct_h12 = 0.0;
	m_Endogenous_Control_Average = 0.0;
	m_Target_Control_Average = 0.0;
	m_Target_Average_4 = 0.0;
	m_Target_Average_5 = 0.0;
	m_Target_Average_6 = 0.0;
	m_Target_Average_7 = 0.0;
	m_Target_Average_8 = 0.0;
	m_Target_Average_9 = 0.0;
	m_Target_Average_10 = 0.0;
	m_Target_Average_11 = 0.0;
	m_Target_Average_12 = 0.0;
	m_Endogenous_Average_4 = 0.0;
	m_Endogenous_Average_5 = 0.0;
	m_Endogenous_Average_6 = 0.0;
	m_Endogenous_Average_7 = 0.0;
	m_Endogenous_Average_8 = 0.0;
	m_Endogenous_Average_9 = 0.0;
	m_Endogenous_Average_10 = 0.0;
	m_Endogenous_Average_11 = 0.0;
	m_Endogenous_Average_12 = 0.0;
	m_Delta_Control = 0.0;
	m_Delta_4 = 0.0;
	m_Delta_5 = 0.0;
	m_Delta_6 = 0.0;
	m_Delta_7 = 0.0;
	m_Delta_8 = 0.0;
	m_Delta_9 = 0.0;
	m_Delta_10 = 0.0;
	m_Delta_11 = 0.0;
	m_Delta_12 = 0.0;
	m_DeltaDelta_4 = 0.0;
	m_DeltaDelta_5 = 0.0;
	m_DeltaDelta_6 = 0.0;
	m_DeltaDelta_7 = 0.0;
	m_DeltaDelta_8 = 0.0;
	m_DeltaDelta_9 = 0.0;
	m_DeltaDelta_10 = 0.0;
	m_DeltaDelta_11 = 0.0;
	m_DeltaDelta_12 = 0.0;
	m_Relative_Expression_4 = 0.0;
	m_Relative_Expression_5 = 0.0;
	m_Relative_Expression_6 = 0.0;
	m_Relative_Expression_7 = 0.0;
	m_Relative_Expression_8 = 0.0;
	m_Relative_Expression_9 = 0.0;
	m_Relative_Expression_10 = 0.0;
	m_Relative_Expression_11 = 0.0;
	m_Relative_Expression_12 = 0.0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CPCRAssistantDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CPCRAssistantDlg)
	DDX_Text(pDX, IDC_EDIT2, m_Ct_a2);
	DDX_Text(pDX, IDC_EDIT1, m_Ct_a1);
	DDX_Text(pDX, IDC_EDIT3, m_Ct_a3);
	DDX_Text(pDX, IDC_EDIT4, m_Ct_a4);
	DDX_Text(pDX, IDC_EDIT5, m_Ct_a5);
	DDX_Text(pDX, IDC_EDIT6, m_Ct_a6);
	DDX_Text(pDX, IDC_EDIT7, m_Ct_a7);
	DDX_Text(pDX, IDC_EDIT8, m_Ct_a8);
	DDX_Text(pDX, IDC_EDIT9, m_Ct_a9);
	DDX_Text(pDX, IDC_EDIT10, m_Ct_a10);
	DDX_Text(pDX, IDC_EDIT11, m_Ct_a11);
	DDX_Text(pDX, IDC_EDIT12, m_Ct_a12);
	DDX_Text(pDX, IDC_EDIT13, m_Ct_b1);
	DDX_Text(pDX, IDC_EDIT14, m_Ct_b2);
	DDX_Text(pDX, IDC_EDIT15, m_Ct_b3);
	DDX_Text(pDX, IDC_EDIT16, m_Ct_b4);
	DDX_Text(pDX, IDC_EDIT17, m_Ct_b5);
	DDX_Text(pDX, IDC_EDIT18, m_Ct_b6);
	DDX_Text(pDX, IDC_EDIT19, m_Ct_b7);
	DDX_Text(pDX, IDC_EDIT20, m_Ct_b8);
	DDX_Text(pDX, IDC_EDIT21, m_Ct_b9);
	DDX_Text(pDX, IDC_EDIT22, m_Ct_b10);
	DDX_Text(pDX, IDC_EDIT23, m_Ct_b11);
	DDX_Text(pDX, IDC_EDIT24, m_Ct_b12);
	DDX_Text(pDX, IDC_EDIT25, m_Ct_c1);
	DDX_Text(pDX, IDC_EDIT26, m_Ct_c2);
	DDX_Text(pDX, IDC_EDIT27, m_Ct_c3);
	DDX_Text(pDX, IDC_EDIT28, m_Ct_c4);
	DDX_Text(pDX, IDC_EDIT29, m_Ct_c5);
	DDX_Text(pDX, IDC_EDIT30, m_Ct_c6);
	DDX_Text(pDX, IDC_EDIT31, m_Ct_c7);
	DDX_Text(pDX, IDC_EDIT32, m_Ct_c8);
	DDX_Text(pDX, IDC_EDIT33, m_Ct_c9);
	DDX_Text(pDX, IDC_EDIT34, m_Ct_c10);
	DDX_Text(pDX, IDC_EDIT35, m_Ct_c11);
	DDX_Text(pDX, IDC_EDIT36, m_Ct_c12);
	DDX_Text(pDX, IDC_EDIT37, m_Ct_d1);
	DDX_Text(pDX, IDC_EDIT38, m_Ct_d2);
	DDX_Text(pDX, IDC_EDIT39, m_Ct_d3);
	DDX_Text(pDX, IDC_EDIT40, m_Ct_d4);
	DDX_Text(pDX, IDC_EDIT41, m_Ct_d5);
	DDX_Text(pDX, IDC_EDIT42, m_Ct_d6);
	DDX_Text(pDX, IDC_EDIT43, m_Ct_d7);
	DDX_Text(pDX, IDC_EDIT44, m_Ct_d8);
	DDX_Text(pDX, IDC_EDIT45, m_Ct_d9);
	DDX_Text(pDX, IDC_EDIT46, m_Ct_d10);
	DDX_Text(pDX, IDC_EDIT47, m_Ct_d11);
	DDX_Text(pDX, IDC_EDIT48, m_Ct_d12);
	DDX_Text(pDX, IDC_EDIT49, m_Ct_e1);
	DDX_Text(pDX, IDC_EDIT50, m_Ct_e2);
	DDX_Text(pDX, IDC_EDIT51, m_Ct_e3);
	DDX_Text(pDX, IDC_EDIT52, m_Ct_e4);
	DDX_Text(pDX, IDC_EDIT53, m_Ct_e5);
	DDX_Text(pDX, IDC_EDIT54, m_Ct_e6);
	DDX_Text(pDX, IDC_EDIT55, m_Ct_e7);
	DDX_Text(pDX, IDC_EDIT56, m_Ct_e8);
	DDX_Text(pDX, IDC_EDIT57, m_Ct_e9);
	DDX_Text(pDX, IDC_EDIT58, m_Ct_e10);
	DDX_Text(pDX, IDC_EDIT59, m_Ct_e11);
	DDX_Text(pDX, IDC_EDIT60, m_Ct_e12);
	DDX_Text(pDX, IDC_EDIT61, m_Ct_f1);
	DDX_Text(pDX, IDC_EDIT62, m_Ct_f2);
	DDX_Text(pDX, IDC_EDIT63, m_Ct_f3);
	DDX_Text(pDX, IDC_EDIT64, m_Ct_f4);
	DDX_Text(pDX, IDC_EDIT65, m_Ct_f5);
	DDX_Text(pDX, IDC_EDIT66, m_Ct_f6);
	DDX_Text(pDX, IDC_EDIT67, m_Ct_f7);
	DDX_Text(pDX, IDC_EDIT68, m_Ct_f8);
	DDX_Text(pDX, IDC_EDIT69, m_Ct_f9);
	DDX_Text(pDX, IDC_EDIT70, m_Ct_f10);
	DDX_Text(pDX, IDC_EDIT71, m_Ct_f11);
	DDX_Text(pDX, IDC_EDIT72, m_Ct_f12);
	DDX_Text(pDX, IDC_EDIT73, m_Ct_g1);
	DDX_Text(pDX, IDC_EDIT74, m_Ct_g2);
	DDX_Text(pDX, IDC_EDIT75, m_Ct_g3);
	DDX_Text(pDX, IDC_EDIT76, m_Ct_g4);
	DDX_Text(pDX, IDC_EDIT77, m_Ct_g5);
	DDX_Text(pDX, IDC_EDIT78, m_Ct_g6);
	DDX_Text(pDX, IDC_EDIT79, m_Ct_g7);
	DDX_Text(pDX, IDC_EDIT80, m_Ct_g8);
	DDX_Text(pDX, IDC_EDIT81, m_Ct_g9);
	DDX_Text(pDX, IDC_EDIT82, m_Ct_g10);
	DDX_Text(pDX, IDC_EDIT83, m_Ct_g11);
	DDX_Text(pDX, IDC_EDIT84, m_Ct_g12);
	DDX_Text(pDX, IDC_EDIT85, m_Ct_h1);
	DDX_Text(pDX, IDC_EDIT86, m_Ct_h2);
	DDX_Text(pDX, IDC_EDIT87, m_Ct_h3);
	DDX_Text(pDX, IDC_EDIT88, m_Ct_h4);
	DDX_Text(pDX, IDC_EDIT89, m_Ct_h5);
	DDX_Text(pDX, IDC_EDIT90, m_Ct_h6);
	DDX_Text(pDX, IDC_EDIT91, m_Ct_h7);
	DDX_Text(pDX, IDC_EDIT92, m_Ct_h8);
	DDX_Text(pDX, IDC_EDIT93, m_Ct_h9);
	DDX_Text(pDX, IDC_EDIT94, m_Ct_h10);
	DDX_Text(pDX, IDC_EDIT95, m_Ct_h11);
	DDX_Text(pDX, IDC_EDIT96, m_Ct_h12);
	DDX_Text(pDX, IDC_EDIT107, m_Endogenous_Control_Average);
	DDX_Text(pDX, IDC_EDIT97, m_Target_Control_Average);
	DDX_Text(pDX, IDC_EDIT98, m_Target_Average_4);
	DDX_Text(pDX, IDC_EDIT99, m_Target_Average_5);
	DDX_Text(pDX, IDC_EDIT100, m_Target_Average_6);
	DDX_Text(pDX, IDC_EDIT101, m_Target_Average_7);
	DDX_Text(pDX, IDC_EDIT102, m_Target_Average_8);
	DDX_Text(pDX, IDC_EDIT103, m_Target_Average_9);
	DDX_Text(pDX, IDC_EDIT104, m_Target_Average_10);
	DDX_Text(pDX, IDC_EDIT105, m_Target_Average_11);
	DDX_Text(pDX, IDC_EDIT106, m_Target_Average_12);
	DDX_Text(pDX, IDC_EDIT108, m_Endogenous_Average_4);
	DDX_Text(pDX, IDC_EDIT109, m_Endogenous_Average_5);
	DDX_Text(pDX, IDC_EDIT110, m_Endogenous_Average_6);
	DDX_Text(pDX, IDC_EDIT111, m_Endogenous_Average_7);
	DDX_Text(pDX, IDC_EDIT112, m_Endogenous_Average_8);
	DDX_Text(pDX, IDC_EDIT113, m_Endogenous_Average_9);
	DDX_Text(pDX, IDC_EDIT114, m_Endogenous_Average_10);
	DDX_Text(pDX, IDC_EDIT115, m_Endogenous_Average_11);
	DDX_Text(pDX, IDC_EDIT116, m_Endogenous_Average_12);
	DDX_Text(pDX, IDC_EDIT117, m_Delta_Control);
	DDX_Text(pDX, IDC_EDIT118, m_Delta_4);
	DDX_Text(pDX, IDC_EDIT119, m_Delta_5);
	DDX_Text(pDX, IDC_EDIT120, m_Delta_6);
	DDX_Text(pDX, IDC_EDIT121, m_Delta_7);
	DDX_Text(pDX, IDC_EDIT122, m_Delta_8);
	DDX_Text(pDX, IDC_EDIT123, m_Delta_9);
	DDX_Text(pDX, IDC_EDIT124, m_Delta_10);
	DDX_Text(pDX, IDC_EDIT125, m_Delta_11);
	DDX_Text(pDX, IDC_EDIT126, m_Delta_12);
	DDX_Text(pDX, IDC_EDIT128, m_DeltaDelta_4);
	DDX_Text(pDX, IDC_EDIT129, m_DeltaDelta_5);
	DDX_Text(pDX, IDC_EDIT130, m_DeltaDelta_6);
	DDX_Text(pDX, IDC_EDIT131, m_DeltaDelta_7);
	DDX_Text(pDX, IDC_EDIT132, m_DeltaDelta_8);
	DDX_Text(pDX, IDC_EDIT133, m_DeltaDelta_9);
	DDX_Text(pDX, IDC_EDIT134, m_DeltaDelta_10);
	DDX_Text(pDX, IDC_EDIT135, m_DeltaDelta_11);
	DDX_Text(pDX, IDC_EDIT136, m_DeltaDelta_12);
	DDX_Text(pDX, IDC_EDIT137, m_Relative_Expression_4);
	DDX_Text(pDX, IDC_EDIT138, m_Relative_Expression_5);
	DDX_Text(pDX, IDC_EDIT139, m_Relative_Expression_6);
	DDX_Text(pDX, IDC_EDIT140, m_Relative_Expression_7);
	DDX_Text(pDX, IDC_EDIT141, m_Relative_Expression_8);
	DDX_Text(pDX, IDC_EDIT142, m_Relative_Expression_9);
	DDX_Text(pDX, IDC_EDIT143, m_Relative_Expression_10);
	DDX_Text(pDX, IDC_EDIT144, m_Relative_Expression_11);
	DDX_Text(pDX, IDC_EDIT145, m_Relative_Expression_12);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CPCRAssistantDlg, CDialog)
//{{AFX_MSG_MAP(CPCRAssistantDlg)
ON_WM_SYSCOMMAND()
ON_WM_PAINT()
ON_WM_QUERYDRAGICON()
ON_BN_CLICKED(IDC_BUTTON1, OnLoad)
	ON_BN_CLICKED(IDC_BUTTON2, OnAverage)
	ON_BN_CLICKED(IDC_BUTTON4, OnDelta)
	ON_BN_CLICKED(IDC_BUTTON3, OnExponent)
	ON_BN_CLICKED(IDC_BUTTON6, OnExit)
	ON_BN_CLICKED(IDC_BUTTON5, OnExport)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPCRAssistantDlg message handlers

BOOL CPCRAssistantDlg::OnInitDialog()
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

void CPCRAssistantDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CPCRAssistantDlg::OnPaint() 
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
HCURSOR CPCRAssistantDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CPCRAssistantDlg::OnLoad() 
{
	int i,j,RowNum=0;
	char Fetch[5000],*Fetch_Token;
	CString String_Fetch,String_First="",String_Move="",String_Current="";
	FILE *fp;
	double Ct[100];
	
	
	
	fp=fopen(".\\Dowrun Data\\PCR Raw.txt","r");
	
	while(1)
	{
		fgets(Fetch,100,fp);
		
		Fetch_Token=strtok(Fetch,"\t");
		String_First=Fetch_Token;
		
		if(String_First=="1")
			break;
	}	
	
	RowNum=atoi(String_First);
	
	for(j=0;j<7;j++)		
		Fetch_Token=strtok(NULL, "\t");
	
	String_Move=Fetch_Token;
	
	Ct[RowNum]=atof(String_Move);
	
	////////////////////////////////////////////////////////////////////////////////////
	
	
	for(i=1;i<97;i++)
	{
		String_Move="";
		String_First="";
		
		fgets(Fetch,100,fp);		
		Fetch_Token=strtok(Fetch,"\t");
		
		String_First=Fetch_Token;
		
		RowNum=atoi(String_First);
		
		for(j=0;j<7;j++)		
			Fetch_Token=strtok(NULL, "\t");
		
		String_Move=Fetch_Token;
		
		Ct[RowNum]=atof(String_Move);
		
	}
	
	m_Ct_a1=	Ct[1];
	m_Ct_a2=	Ct[2];
	m_Ct_a3=	Ct[3];
	m_Ct_a4=	Ct[4];
	m_Ct_a5=	Ct[5];
	m_Ct_a6=	Ct[6];
	m_Ct_a7=	Ct[7];
	m_Ct_a8=	Ct[8];
	m_Ct_a9=	Ct[9];
	m_Ct_a10=	Ct[10];
	m_Ct_a11=	Ct[11];
	m_Ct_a12=	Ct[12];
	m_Ct_b1=	Ct[13];
	m_Ct_b2=	Ct[14];
	m_Ct_b3=	Ct[15];
	m_Ct_b4=	Ct[16];
	m_Ct_b5=	Ct[17];
	m_Ct_b6=	Ct[18];
	m_Ct_b7=	Ct[19];
	m_Ct_b8=	Ct[20];
	m_Ct_b9=	Ct[21];
	m_Ct_b10=	Ct[22];
	m_Ct_b11=	Ct[23];
	m_Ct_b12=	Ct[24];
	m_Ct_c1=	Ct[25];
	m_Ct_c2=	Ct[26];
	m_Ct_c3=	Ct[27];
	m_Ct_c4=	Ct[28];
	m_Ct_c5=	Ct[29];
	m_Ct_c6=	Ct[30];
	m_Ct_c7=	Ct[31];
	m_Ct_c8=	Ct[32];
	m_Ct_c9=	Ct[33];
	m_Ct_c10=	Ct[34];
	m_Ct_c11=	Ct[35];
	m_Ct_c12=	Ct[36];
	m_Ct_d1=	Ct[37];
	m_Ct_d2=	Ct[38];
	m_Ct_d3=	Ct[39];
	m_Ct_d4=	Ct[40];
	m_Ct_d5=	Ct[41];
	m_Ct_d6=	Ct[42];
	m_Ct_d7=	Ct[43];
	m_Ct_d8=	Ct[44];
	m_Ct_d9=	Ct[45];
	m_Ct_d10=	Ct[46];
	m_Ct_d11=	Ct[47];
	m_Ct_d12=	Ct[48];
	m_Ct_e1=	Ct[49];
	m_Ct_e2=	Ct[50];
	m_Ct_e3=	Ct[51];
	m_Ct_e4=	Ct[52];
	m_Ct_e5=	Ct[53];
	m_Ct_e6=	Ct[54];
	m_Ct_e7=	Ct[55];
	m_Ct_e8=	Ct[56];
	m_Ct_e9=	Ct[57];
	m_Ct_e10=	Ct[58];
	m_Ct_e11=	Ct[59];
	m_Ct_e12=	Ct[60];
	m_Ct_f1=	Ct[61];
	m_Ct_f2=	Ct[62];
	m_Ct_f3=	Ct[63];
	m_Ct_f4=	Ct[64];
	m_Ct_f5=	Ct[65];
	m_Ct_f6=	Ct[66];
	m_Ct_f7=	Ct[67];
	m_Ct_f8=	Ct[68];
	m_Ct_f9=	Ct[69];
	m_Ct_f10=	Ct[70];
	m_Ct_f11=	Ct[71];
	m_Ct_f12=	Ct[72];
	m_Ct_g1=	Ct[73];
	m_Ct_g2=	Ct[74];
	m_Ct_g3=	Ct[75];
	m_Ct_g4=	Ct[76];
	m_Ct_g5=	Ct[77];
	m_Ct_g6=	Ct[78];
	m_Ct_g7=	Ct[79];
	m_Ct_g8=	Ct[80];
	m_Ct_g9=	Ct[81];
	m_Ct_g10=	Ct[82];
	m_Ct_g11=	Ct[83];
	m_Ct_g12=	Ct[84];
	m_Ct_h1=	Ct[85];
	m_Ct_h2=	Ct[86];
	m_Ct_h3=	Ct[87];
	m_Ct_h4=	Ct[88];
	m_Ct_h5=	Ct[89];
	m_Ct_h6=	Ct[90];
	m_Ct_h7=	Ct[91];
	m_Ct_h8=	Ct[92];
	m_Ct_h9=	Ct[93];
	m_Ct_h10=	Ct[94];
	m_Ct_h11=	Ct[95];
	m_Ct_h12=	Ct[96];
	
	
	
	UpdateData(FALSE);
	
	



	
}

void CPCRAssistantDlg::OnAverage() 
{
	UpdateData(TRUE);
	m_Target_Control_Average=(m_Ct_a1+m_Ct_a2+m_Ct_a3+m_Ct_b1+m_Ct_b2+m_Ct_b3+m_Ct_c1+m_Ct_c2+m_Ct_c3)/9;
	m_Endogenous_Control_Average=(m_Ct_d1+m_Ct_d2+m_Ct_d3+m_Ct_e1+m_Ct_e2+m_Ct_e3+m_Ct_f1+m_Ct_f2+m_Ct_f3)/9;

	m_Target_Average_4=(m_Ct_a4+m_Ct_b4+m_Ct_c4)/3;
	m_Target_Average_5=(m_Ct_a5+m_Ct_b5+m_Ct_c5)/3;
	m_Target_Average_6=(m_Ct_a6+m_Ct_b6+m_Ct_c6)/3;
	m_Target_Average_7=(m_Ct_a7+m_Ct_b7+m_Ct_c7)/3;
	m_Target_Average_8=(m_Ct_a8+m_Ct_b8+m_Ct_c8)/3;
	m_Target_Average_9=(m_Ct_a9+m_Ct_b9+m_Ct_c9)/3;
	m_Target_Average_10=(m_Ct_a10+m_Ct_b10+m_Ct_c10)/3;
	m_Target_Average_11=(m_Ct_a11+m_Ct_b11+m_Ct_c11)/3;
	m_Target_Average_12=(m_Ct_a12+m_Ct_b12+m_Ct_c12)/3;

	m_Endogenous_Average_4=(m_Ct_d4+m_Ct_e4+m_Ct_f4)/3;
	m_Endogenous_Average_5=(m_Ct_d5+m_Ct_e5+m_Ct_f5)/3;
	m_Endogenous_Average_6=(m_Ct_d6+m_Ct_e6+m_Ct_f6)/3;
	m_Endogenous_Average_7=(m_Ct_d7+m_Ct_e7+m_Ct_f7)/3;
	m_Endogenous_Average_8=(m_Ct_d8+m_Ct_e8+m_Ct_f8)/3;
	m_Endogenous_Average_9=(m_Ct_d9+m_Ct_e9+m_Ct_f9)/3;
	m_Endogenous_Average_10=(m_Ct_d10+m_Ct_e10+m_Ct_f10)/3;
	m_Endogenous_Average_11=(m_Ct_d11+m_Ct_e11+m_Ct_f11)/3;
	m_Endogenous_Average_12=(m_Ct_d12+m_Ct_e12+m_Ct_f12)/3;

	UpdateData(FALSE);


	
}

void CPCRAssistantDlg::OnDelta() 
{
	UpdateData(TRUE);
	m_Delta_Control=m_Target_Control_Average-m_Endogenous_Control_Average;

	m_Delta_4=m_Target_Average_4-m_Endogenous_Average_4;
	m_Delta_5=m_Target_Average_5-m_Endogenous_Average_5;
	m_Delta_6=m_Target_Average_6-m_Endogenous_Average_6;
	m_Delta_7=m_Target_Average_7-m_Endogenous_Average_7;
	m_Delta_8=m_Target_Average_8-m_Endogenous_Average_8;
	m_Delta_9=m_Target_Average_9-m_Endogenous_Average_9;
	m_Delta_10=m_Target_Average_10-m_Endogenous_Average_10;
	m_Delta_11=m_Target_Average_11-m_Endogenous_Average_11;
	m_Delta_12=m_Target_Average_12-m_Endogenous_Average_12;

	m_DeltaDelta_4=m_Delta_4-m_Delta_Control;
	m_DeltaDelta_5=m_Delta_5-m_Delta_Control;
	m_DeltaDelta_6=m_Delta_6-m_Delta_Control;
	m_DeltaDelta_7=m_Delta_7-m_Delta_Control;
	m_DeltaDelta_8=m_Delta_8-m_Delta_Control;
	m_DeltaDelta_9=m_Delta_9-m_Delta_Control;
	m_DeltaDelta_10=m_Delta_10-m_Delta_Control;
	m_DeltaDelta_11=m_Delta_11-m_Delta_Control;
	m_DeltaDelta_12=m_Delta_12-m_Delta_Control;

	UpdateData(FALSE);

}

void CPCRAssistantDlg::OnExponent() 
{
	UpdateData(TRUE);

	m_Relative_Expression_4=pow(2,(0-m_DeltaDelta_4));
	m_Relative_Expression_5=pow(2,(0-m_DeltaDelta_5));
	m_Relative_Expression_6=pow(2,(0-m_DeltaDelta_6));
	m_Relative_Expression_7=pow(2,(0-m_DeltaDelta_7));
	m_Relative_Expression_8=pow(2,(0-m_DeltaDelta_8));
	m_Relative_Expression_9=pow(2,(0-m_DeltaDelta_9));
	m_Relative_Expression_10=pow(2,(0-m_DeltaDelta_10));
	m_Relative_Expression_11=pow(2,(0-m_DeltaDelta_11));
	m_Relative_Expression_12=pow(2,(0-m_DeltaDelta_12));

	UpdateData(FALSE);

}

void CPCRAssistantDlg::OnExit() 
{

	OnOK();
}

void CPCRAssistantDlg::OnExport() 
{
	FILE *fp;
	CString TemporaryString;
	UpdateData(TRUE);

	fp=fopen(".\\Dowrun Data\\PCR_Relative_Expression.xls","w");

	fwrite("Raw Data\t",strlen("Raw Data\t"),1,fp);
	fwrite("C1\t",strlen("C1\t"),1,fp);
	fwrite("C2\t",strlen("C2\t"),1,fp);
	fwrite("C3\t",strlen("C3\t"),1,fp);

	fwrite("T1\t",strlen("T1\t"),1,fp);
	fwrite("T2\t",strlen("T2\t"),1,fp);
	fwrite("T3\t",strlen("T3\t"),1,fp);

	fwrite("T+S 1\t",strlen("T+S 1\t"),1,fp);
	fwrite("T+S 2\t",strlen("T+S 2\t"),1,fp);
	fwrite("T+S 3\t",strlen("T+S 3\t"),1,fp);

	fwrite("S1\t",strlen("S1\t"),1,fp);
	fwrite("S2\t",strlen("S2\t"),1,fp);
	fwrite("S3\t",strlen("S3\t"),1,fp);

	fputc('\n',fp);

	fwrite("Ct\t",strlen("Ct\t"),1,fp);
	fwrite("1\t",strlen("1\t"),1,fp);
	fwrite("2\t",strlen("2\t"),1,fp);
	fwrite("3\t",strlen("3\t"),1,fp);
	fwrite("4\t",strlen("4\t"),1,fp);
	fwrite("5\t",strlen("5\t"),1,fp);
	fwrite("6\t",strlen("6\t"),1,fp);
	fwrite("7\t",strlen("7\t"),1,fp);
	fwrite("8\t",strlen("8\t"),1,fp);
	fwrite("9\t",strlen("9\t"),1,fp);
	fwrite("10\t",strlen("10\t"),1,fp);
	fwrite("11\t",strlen("11\t"),1,fp);
	fwrite("12\t",strlen("12\t"),1,fp);
	
	fputc('\n',fp);
	
	/////////////////////////////////////A////////////////////////////////////
	fwrite("A\t",strlen("A\t"),1,fp);
	TemporaryString.Format("%f",m_Ct_a1);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_a2);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_a3);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_a4);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_a5);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_a6);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_a7);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_a8);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_a9);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_a10);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_a11);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_a12);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);

	fputc('\n',fp);

		//////////////////////////////////B///////////////////////////////////////
	fwrite("B\t",strlen("B\t"),1,fp);
	TemporaryString.Format("%f",m_Ct_b1);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_b2);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_b3);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_b4);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_b5);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_b6);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_b7);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_b8);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_b9);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_b10);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_b11);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_b12);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);

	fputc('\n',fp);

		////////////////////////////////////C/////////////////////////////////////
	fwrite("C\t",strlen("C\t"),1,fp);
	TemporaryString.Format("%f",m_Ct_c1);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_c2);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_c3);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_c4);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_c5);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_c6);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_c7);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_c8);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_c9);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_c10);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_c11);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_c12);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);

	fputc('\n',fp);

		///////////////////////////////////D//////////////////////////////////////
	fwrite("D\t",strlen("D\t"),1,fp);
	TemporaryString.Format("%f",m_Ct_d1);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_d2);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_d3);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_d4);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_d5);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_d6);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_d7);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_d8);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_d9);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_d10);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_d11);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_d12);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);

	fputc('\n',fp);

		////////////////////////////////E////////////////////////////////////////
	fwrite("E\t",strlen("E\t"),1,fp);
	TemporaryString.Format("%f",m_Ct_e1);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_e2);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_e3);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_e4);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_e5);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_e6);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_e7);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_e8);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_e9);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_e10);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_e11);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_e12);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);

	fputc('\n',fp);

		////////////////////////////////F/////////////////////////////////////////
	fwrite("F\t",strlen("F\t"),1,fp);
	TemporaryString.Format("%f",m_Ct_f1);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_f2);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_f3);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_f4);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_f5);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_f6);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_f7);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_f8);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_f9);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_f10);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_f11);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_f12);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);

	fputc('\n',fp);

		//////////////////////////////////G///////////////////////////////////////
	fwrite("G\t",strlen("G\t"),1,fp);
	TemporaryString.Format("%f",m_Ct_g1);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_g2);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_g3);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_g4);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_g5);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_g6);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_g7);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_g8);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_g9);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_g10);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_g11);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_g12);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);

	fputc('\n',fp);

		////////////////////////////////H/////////////////////////////////////////
	fwrite("H\t",strlen("H\t"),1,fp);
	TemporaryString.Format("%f",m_Ct_h1);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_h2);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_h3);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_h4);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_h5);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_h6);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_h7);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_h8);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_h9);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_h10);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_h11);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Ct_h12);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	fputc('\n',fp);
	fputc('\n',fp);


	////////////////////////////Average Target/////////////////////////////////////////
	fwrite("Average",strlen("Average"),1,fp);
	fputc('\t',fp);
	fputc('\t',fp);
	fwrite("Control",strlen("Control"),1,fp);
	fputc('\t',fp);
	fputc('\t',fp);
	fwrite("Treatment",strlen("Treatment"),1,fp);

	fputc('\n',fp);

	fwrite("Target:\t",strlen("Target:\t"),1,fp);
	fputc('\t',fp);
	TemporaryString.Format("%f",m_Target_Control_Average);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	
	fputc('\t',fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Target_Average_4);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Target_Average_5);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Target_Average_6);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Target_Average_7);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Target_Average_8);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Target_Average_9);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Target_Average_10);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Target_Average_11);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Target_Average_12);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	fputc('\n',fp);

	////////////////////////////////////////

	fwrite("Endogenous:\t",strlen("Endogenous:\t"),1,fp);
	fputc('\t',fp);
	TemporaryString.Format("%f",m_Endogenous_Control_Average);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	
	fputc('\t',fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Endogenous_Average_4);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Endogenous_Average_5);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Endogenous_Average_6);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Endogenous_Average_7);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Endogenous_Average_8);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Endogenous_Average_9);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Endogenous_Average_10);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Endogenous_Average_11);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Endogenous_Average_12);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	fputc('\n',fp);
	fputc('\n',fp);
	
	////////////////////////////Delta Ct/////////////////////////////////////////
	
	fwrite("Delta Ct:\t",strlen("Delta Ct:\t"),1,fp);
	fputc('\t',fp);
	TemporaryString.Format("%f",m_Delta_Control);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);	
	fputc('\t',fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Delta_4);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Delta_5);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Delta_6);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Delta_7);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Delta_8);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Delta_9);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Delta_10);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Delta_11);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Delta_12);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	fputc('\n',fp);
	

	////////////////////////////DeltaDelta Ct/////////////////////////////////////////
	
	fwrite("DeltaDelta Ct:\t",strlen("DeltaDelta Ct:\t"),1,fp);
	fputc('\t',fp);
	fputc('\t',fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_DeltaDelta_4);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_DeltaDelta_5);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_DeltaDelta_6);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_DeltaDelta_7);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_DeltaDelta_8);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_DeltaDelta_9);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_DeltaDelta_10);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_DeltaDelta_11);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_DeltaDelta_12);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	fputc('\n',fp);
	fputc('\n',fp);

	////////////////////////////Relative Expression/////////////////////////////////////////
	
	fwrite("Relative Expressions:\t",strlen("Relative Expressions:\t"),1,fp);
	fputc('\t',fp);
	fputc('\t',fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Relative_Expression_4);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Relative_Expression_5);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Relative_Expression_6);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Relative_Expression_7);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Relative_Expression_8);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Relative_Expression_9);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Relative_Expression_10);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Relative_Expression_11);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);
	
	TemporaryString.Format("%f",m_Relative_Expression_12);
	fwrite(TemporaryString,strlen(TemporaryString),1,fp);
	fputc('\t',fp);





	MessageBox("All Data has been exported successfully!","Export",MB_OK|MB_ICONINFORMATION);
	
	fclose(fp);

}
