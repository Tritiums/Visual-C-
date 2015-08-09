// AbsorConDlg.cpp : implementation file
//

#include "stdafx.h"
#include "AbsorCon.h"
#include "AbsorConDlg.h"
#include "math.h"
#include "AboutAbsorcon.h"

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
// CAbsorConDlg dialog

CAbsorConDlg::CAbsorConDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CAbsorConDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAbsorConDlg)
	m_a1_loading = 0.0f;
	m_a2_loading = 0.0f;
	m_a3_loading = 0.0f;
	m_a4_loading = 0.0f;
	m_a5_loading = 0.0f;
	m_a6_loading = 0.0f;
	m_a7_loading = 0.0f;
	m_a8_loading = 0.0f;
	m_a9_loading = 0.0f;
	m_a10_loading = 0.0f;
	m_a11_loading = 0.0f;
	m_a12_loading = 0.0f;
	m_temperature_loading = 0.0f;
	m_b1_loading = 0.0f;
	m_b2_loading = 0.0f;
	m_b3_loading = 0.0f;
	m_b4_loading = 0.0f;
	m_b5_loading = 0.0f;
	m_b6_loading = 0.0f;
	m_b7_loading = 0.0f;
	m_b8_loading = 0.0f;
	m_b9_loading = 0.0f;
	m_b10_loading = 0.0f;
	m_b11_loading = 0.0f;
	m_b12_loading = 0.0f;
	m_c1_loading = 0.0f;
	m_c2_loading = 0.0f;
	m_c3_loading = 0.0f;
	m_c4_loading = 0.0f;
	m_c5_loading = 0.0f;
	m_c6_loading = 0.0f;
	m_c7_loading = 0.0f;
	m_c8_loading = 0.0f;
	m_c9_loading = 0.0f;
	m_c10_loading = 0.0f;
	m_c11_loading = 0.0f;
	m_c12_loading = 0.0f;
	m_d1_loading = 0.0f;
	m_d2_loading = 0.0f;
	m_d3_loading = 0.0f;
	m_d4_loading = 0.0f;
	m_d5_loading = 0.0f;
	m_d6_loading = 0.0f;
	m_d7_loading = 0.0f;
	m_d8_loading = 0.0f;
	m_d9_loading = 0.0f;
	m_d10_loading = 0.0f;
	m_d11_loading = 0.0f;
	m_d12_loading = 0.0f;
	m_e1_loading = 0.0f;
	m_e2_loading = 0.0f;
	m_e3_loading = 0.0f;
	m_e4_loading = 0.0f;
	m_e5_loading = 0.0f;
	m_e6_loading = 0.0f;
	m_e7_loading = 0.0f;
	m_e8_loading = 0.0f;
	m_e9_loading = 0.0f;
	m_e10_loading = 0.0f;
	m_e11_loading = 0.0f;
	m_e12_loading = 0.0f;
	m_f1_loading = 0.0f;
	m_f2_loading = 0.0f;
	m_f3_loading = 0.0f;
	m_f4_loading = 0.0f;
	m_f5_loading = 0.0f;
	m_f6_loading = 0.0f;
	m_f7_loading = 0.0f;
	m_f8_loading = 0.0f;
	m_f9_loading = 0.0f;
	m_f10_loading = 0.0f;
	m_f11_loading = 0.0f;
	m_f12_loading = 0.0f;
	m_g1_loading = 0.0f;
	m_g2_loading = 0.0f;
	m_g3_loading = 0.0f;
	m_g4_loading = 0.0f;
	m_g5_loading = 0.0f;
	m_g6_loading = 0.0f;
	m_g7_loading = 0.0f;
	m_g8_loading = 0.0f;
	m_g9_loading = 0.0f;
	m_g10_loading = 0.0f;
	m_g11_loading = 0.0f;
	m_g12_loading = 0.0f;
	m_h1_loading = 0.0f;
	m_h2_loading = 0.0f;
	m_h3_loading = 0.0f;
	m_h4_loading = 0.0f;
	m_h5_loading = 0.0f;
	m_h6_loading = 0.0f;
	m_h7_loading = 0.0f;
	m_h8_loading = 0.0f;
	m_h9_loading = 0.0f;
	m_h10_loading = 0.0f;
	m_h11_loading = 0.0f;
	m_h12_loading = 0.0f;
	m_b_output = 0.0f;
	m_standard_concentration_1 = 0.0f;
	m_standard_concentration_2 = 0.0f;
	m_standard_concentration_3 = 0.0f;
	m_standard_concentration_4 = 0.0f;
	m_standard_concentration_5 = 0.0f;
	m_standard_concentration_6 = 0.0f;
	m_standard_concentration_7 = 0.0f;
	m_standard_concentration_8 = 0.0f;
	m_standard_concentration_9 = 0.0f;
	m_standard_concentration_10 = 0.0f;
	m_standard_concentration_11 = 0.0f;
	m_standard_concentration_12 = 0.0f;
	m_sample_concentration_1 = 0.0f;
	m_sample_concentration_2 = 0.0f;
	m_sample_concentration_3 = 0.0f;
	m_sample_concentration_4 = 0.0f;
	m_sample_concentration_5 = 0.0f;
	m_sample_concentration_6 = 0.0f;
	m_sample_average_1 = 0.0f;
	m_sample_average_2 = 0.0f;
	m_sample_average_3 = 0.0f;
	m_sample_average_4 = 0.0f;
	m_sample_average_5 = 0.0f;
	m_sample_average_6 = 0.0f;
	m_loading_volum_1 = 0.0f;
	m_loading_volum_2 = 0.0f;
	m_loading_volum_3 = 0.0f;
	m_loading_volum_4 = 0.0f;
	m_loading_volum_5 = 0.0f;
	m_loading_volum_6 = 0.0f;
	m_correlation_output = 0.0f;
	m_sample_concentration_7 = 0.0f;
	m_sample_concentration_8 = 0.0f;
	m_sample_concentration_9 = 0.0f;
	m_sample_concentration_10 = 0.0f;
	m_sample_concentration_11 = 0.0f;
	m_sample_concentration_12 = 0.0f;
	m_loading_volum_7 = 0.0f;
	m_loading_volum_8 = 0.0f;
	m_loading_volum_9 = 0.0f;
	m_loading_volum_10 = 0.0f;
	m_loading_volum_11 = 0.0f;
	m_loading_volum_12 = 0.0f;
	m_dividende = 0.0f;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CAbsorConDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAbsorConDlg)
	DDX_Text(pDX, IDC_EDIT1, m_a1_loading);
	DDX_Text(pDX, IDC_EDIT2, m_a2_loading);
	DDX_Text(pDX, IDC_EDIT3, m_a3_loading);
	DDX_Text(pDX, IDC_EDIT4, m_a4_loading);
	DDX_Text(pDX, IDC_EDIT5, m_a5_loading);
	DDX_Text(pDX, IDC_EDIT6, m_a6_loading);
	DDX_Text(pDX, IDC_EDIT7, m_a7_loading);
	DDX_Text(pDX, IDC_EDIT8, m_a8_loading);
	DDX_Text(pDX, IDC_EDIT9, m_a9_loading);
	DDX_Text(pDX, IDC_EDIT10, m_a10_loading);
	DDX_Text(pDX, IDC_EDIT11, m_a11_loading);
	DDX_Text(pDX, IDC_EDIT12, m_a12_loading);
	DDX_Text(pDX, IDC_EDIT97, m_temperature_loading);
	DDX_Text(pDX, IDC_EDIT13, m_b1_loading);
	DDX_Text(pDX, IDC_EDIT14, m_b2_loading);
	DDX_Text(pDX, IDC_EDIT15, m_b3_loading);
	DDX_Text(pDX, IDC_EDIT16, m_b4_loading);
	DDX_Text(pDX, IDC_EDIT17, m_b5_loading);
	DDX_Text(pDX, IDC_EDIT18, m_b6_loading);
	DDX_Text(pDX, IDC_EDIT19, m_b7_loading);
	DDX_Text(pDX, IDC_EDIT20, m_b8_loading);
	DDX_Text(pDX, IDC_EDIT21, m_b9_loading);
	DDX_Text(pDX, IDC_EDIT22, m_b10_loading);
	DDX_Text(pDX, IDC_EDIT23, m_b11_loading);
	DDX_Text(pDX, IDC_EDIT24, m_b12_loading);
	DDX_Text(pDX, IDC_EDIT25, m_c1_loading);
	DDX_Text(pDX, IDC_EDIT26, m_c2_loading);
	DDX_Text(pDX, IDC_EDIT27, m_c3_loading);
	DDX_Text(pDX, IDC_EDIT28, m_c4_loading);
	DDX_Text(pDX, IDC_EDIT29, m_c5_loading);
	DDX_Text(pDX, IDC_EDIT30, m_c6_loading);
	DDX_Text(pDX, IDC_EDIT31, m_c7_loading);
	DDX_Text(pDX, IDC_EDIT32, m_c8_loading);
	DDX_Text(pDX, IDC_EDIT33, m_c9_loading);
	DDX_Text(pDX, IDC_EDIT34, m_c10_loading);
	DDX_Text(pDX, IDC_EDIT35, m_c11_loading);
	DDX_Text(pDX, IDC_EDIT36, m_c12_loading);
	DDX_Text(pDX, IDC_EDIT37, m_d1_loading);
	DDX_Text(pDX, IDC_EDIT38, m_d2_loading);
	DDX_Text(pDX, IDC_EDIT39, m_d3_loading);
	DDX_Text(pDX, IDC_EDIT40, m_d4_loading);
	DDX_Text(pDX, IDC_EDIT41, m_d5_loading);
	DDX_Text(pDX, IDC_EDIT42, m_d6_loading);
	DDX_Text(pDX, IDC_EDIT43, m_d7_loading);
	DDX_Text(pDX, IDC_EDIT44, m_d8_loading);
	DDX_Text(pDX, IDC_EDIT45, m_d9_loading);
	DDX_Text(pDX, IDC_EDIT46, m_d10_loading);
	DDX_Text(pDX, IDC_EDIT47, m_d11_loading);
	DDX_Text(pDX, IDC_EDIT48, m_d12_loading);
	DDX_Text(pDX, IDC_EDIT49, m_e1_loading);
	DDX_Text(pDX, IDC_EDIT50, m_e2_loading);
	DDX_Text(pDX, IDC_EDIT51, m_e3_loading);
	DDX_Text(pDX, IDC_EDIT52, m_e4_loading);
	DDX_Text(pDX, IDC_EDIT53, m_e5_loading);
	DDX_Text(pDX, IDC_EDIT54, m_e6_loading);
	DDX_Text(pDX, IDC_EDIT55, m_e7_loading);
	DDX_Text(pDX, IDC_EDIT56, m_e8_loading);
	DDX_Text(pDX, IDC_EDIT57, m_e9_loading);
	DDX_Text(pDX, IDC_EDIT58, m_e10_loading);
	DDX_Text(pDX, IDC_EDIT59, m_e11_loading);
	DDX_Text(pDX, IDC_EDIT60, m_e12_loading);
	DDX_Text(pDX, IDC_EDIT61, m_f1_loading);
	DDX_Text(pDX, IDC_EDIT62, m_f2_loading);
	DDX_Text(pDX, IDC_EDIT63, m_f3_loading);
	DDX_Text(pDX, IDC_EDIT64, m_f4_loading);
	DDX_Text(pDX, IDC_EDIT65, m_f5_loading);
	DDX_Text(pDX, IDC_EDIT66, m_f6_loading);
	DDX_Text(pDX, IDC_EDIT67, m_f7_loading);
	DDX_Text(pDX, IDC_EDIT68, m_f8_loading);
	DDX_Text(pDX, IDC_EDIT69, m_f9_loading);
	DDX_Text(pDX, IDC_EDIT70, m_f10_loading);
	DDX_Text(pDX, IDC_EDIT71, m_f11_loading);
	DDX_Text(pDX, IDC_EDIT72, m_f12_loading);
	DDX_Text(pDX, IDC_EDIT73, m_g1_loading);
	DDX_Text(pDX, IDC_EDIT74, m_g2_loading);
	DDX_Text(pDX, IDC_EDIT75, m_g3_loading);
	DDX_Text(pDX, IDC_EDIT76, m_g4_loading);
	DDX_Text(pDX, IDC_EDIT77, m_g5_loading);
	DDX_Text(pDX, IDC_EDIT78, m_g6_loading);
	DDX_Text(pDX, IDC_EDIT79, m_g7_loading);
	DDX_Text(pDX, IDC_EDIT80, m_g8_loading);
	DDX_Text(pDX, IDC_EDIT81, m_g9_loading);
	DDX_Text(pDX, IDC_EDIT82, m_g10_loading);
	DDX_Text(pDX, IDC_EDIT83, m_g11_loading);
	DDX_Text(pDX, IDC_EDIT84, m_g12_loading);
	DDX_Text(pDX, IDC_EDIT85, m_h1_loading);
	DDX_Text(pDX, IDC_EDIT86, m_h2_loading);
	DDX_Text(pDX, IDC_EDIT87, m_h3_loading);
	DDX_Text(pDX, IDC_EDIT88, m_h4_loading);
	DDX_Text(pDX, IDC_EDIT89, m_h5_loading);
	DDX_Text(pDX, IDC_EDIT90, m_h6_loading);
	DDX_Text(pDX, IDC_EDIT91, m_h7_loading);
	DDX_Text(pDX, IDC_EDIT92, m_h8_loading);
	DDX_Text(pDX, IDC_EDIT93, m_h9_loading);
	DDX_Text(pDX, IDC_EDIT94, m_h10_loading);
	DDX_Text(pDX, IDC_EDIT95, m_h11_loading);
	DDX_Text(pDX, IDC_EDIT96, m_h12_loading);
	DDX_Text(pDX, IDC_EDIT98, m_b_output);
	DDX_Text(pDX, IDC_EDIT105, m_standard_concentration_1);
	DDX_Text(pDX, IDC_EDIT106, m_standard_concentration_2);
	DDX_Text(pDX, IDC_EDIT107, m_standard_concentration_3);
	DDX_Text(pDX, IDC_EDIT108, m_standard_concentration_4);
	DDX_Text(pDX, IDC_EDIT109, m_standard_concentration_5);
	DDX_Text(pDX, IDC_EDIT110, m_standard_concentration_6);
	DDX_Text(pDX, IDC_EDIT111, m_standard_concentration_7);
	DDX_Text(pDX, IDC_EDIT112, m_standard_concentration_8);
	DDX_Text(pDX, IDC_EDIT113, m_standard_concentration_9);
	DDX_Text(pDX, IDC_EDIT114, m_standard_concentration_10);
	DDX_Text(pDX, IDC_EDIT115, m_standard_concentration_11);
	DDX_Text(pDX, IDC_EDIT116, m_standard_concentration_12);
	DDX_Text(pDX, IDC_EDIT117, m_sample_concentration_1);
	DDX_Text(pDX, IDC_EDIT118, m_sample_concentration_2);
	DDX_Text(pDX, IDC_EDIT119, m_sample_concentration_3);
	DDX_Text(pDX, IDC_EDIT120, m_sample_concentration_4);
	DDX_Text(pDX, IDC_EDIT121, m_sample_concentration_5);
	DDX_Text(pDX, IDC_EDIT122, m_sample_concentration_6);
	DDX_Text(pDX, IDC_EDIT99, m_sample_average_1);
	DDX_Text(pDX, IDC_EDIT100, m_sample_average_2);
	DDX_Text(pDX, IDC_EDIT101, m_sample_average_3);
	DDX_Text(pDX, IDC_EDIT102, m_sample_average_4);
	DDX_Text(pDX, IDC_EDIT103, m_sample_average_5);
	DDX_Text(pDX, IDC_EDIT104, m_sample_average_6);
	DDX_Text(pDX, IDC_EDIT123, m_loading_volum_1);
	DDX_Text(pDX, IDC_EDIT124, m_loading_volum_2);
	DDX_Text(pDX, IDC_EDIT125, m_loading_volum_3);
	DDX_Text(pDX, IDC_EDIT126, m_loading_volum_4);
	DDX_Text(pDX, IDC_EDIT127, m_loading_volum_5);
	DDX_Text(pDX, IDC_EDIT128, m_loading_volum_6);
	DDX_Text(pDX, IDC_EDIT129, m_correlation_output);
	DDX_Text(pDX, IDC_EDIT131, m_sample_concentration_7);
	DDX_Text(pDX, IDC_EDIT132, m_sample_concentration_8);
	DDX_Text(pDX, IDC_EDIT133, m_sample_concentration_9);
	DDX_Text(pDX, IDC_EDIT134, m_sample_concentration_10);
	DDX_Text(pDX, IDC_EDIT135, m_sample_concentration_11);
	DDX_Text(pDX, IDC_EDIT136, m_sample_concentration_12);
	DDX_Text(pDX, IDC_EDIT137, m_loading_volum_7);
	DDX_Text(pDX, IDC_EDIT138, m_loading_volum_8);
	DDX_Text(pDX, IDC_EDIT139, m_loading_volum_9);
	DDX_Text(pDX, IDC_EDIT140, m_loading_volum_10);
	DDX_Text(pDX, IDC_EDIT141, m_loading_volum_11);
	DDX_Text(pDX, IDC_EDIT142, m_loading_volum_12);
	DDX_Text(pDX, IDC_EDIT130, m_dividende);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAbsorConDlg, CDialog)
	//{{AFX_MSG_MAP(CAbsorConDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnLoad)
	ON_BN_CLICKED(IDC_BUTTON2, OnEmpty)
	ON_BN_CLICKED(IDC_BUTTON3, OnLine)
	ON_BN_CLICKED(IDC_BUTTON4, OnAverageSample)
	ON_BN_CLICKED(IDC_BUTTON5, OnSampleConcentration)
	ON_BN_CLICKED(IDC_BUTTON6, OnLoadingVolum)
	ON_BN_CLICKED(IDC_BUTTON7, OnExport)
	ON_BN_CLICKED(IDC_BUTTON8, OnQuit)
	ON_BN_CLICKED(IDC_BUTTON9, OnAboutAbsorcon)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAbsorConDlg message handlers

BOOL CAbsorConDlg::OnInitDialog()
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


	////////////////////////////////////******* Chuan Add This! ************///////////////////////////////////////////////

	pWnd =GetDlgItem(IDC_MYSTATIC);
    
	pDC = pWnd->GetDC();

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CAbsorConDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CAbsorConDlg::OnPaint() 
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

	////////////////////////////////////******* Chuan Add This! ************///////////////////////////////////////////////

	CPaintDC dc(this); // device context for painting
	CString str;
	int i, j;
	int x, y;
	

	pWnd->Invalidate();
	pWnd->UpdateWindow();
	
	pDC->Rectangle(0, 0, 230, 206);        


	///////////////////////////////////////////////////////////////////////////////////////////////////////


}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CAbsorConDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CAbsorConDlg::OnLoad() 
{
	int i;
	char string_title[100],string_a[100],string_b[100],string_c[100],string_d[100],string_e[100],string_f[100],string_g[100],string_h[100],
		*token_a,*token_b,*token_c,*token_d,*token_e,*token_f,*token_g,*token_h;
	CString string_a0,string_a1,string_a2,string_a3,string_a4,string_a5,string_a6,string_a7,string_a8,string_a9,string_a10,string_a11,string_a12;
	CString string_b0,string_b1,string_b2,string_b3,string_b4,string_b5,string_b6,string_b7,string_b8,string_b9,string_b10,string_b11,string_b12;
	CString string_c0,string_c1,string_c2,string_c3,string_c4,string_c5,string_c6,string_c7,string_c8,string_c9,string_c10,string_c11,string_c12;
	CString string_d0,string_d1,string_d2,string_d3,string_d4,string_d5,string_d6,string_d7,string_d8,string_d9,string_d10,string_d11,string_d12;
	CString string_e0,string_e1,string_e2,string_e3,string_e4,string_e5,string_e6,string_e7,string_e8,string_e9,string_e10,string_e11,string_e12;
	CString string_f0,string_f1,string_f2,string_f3,string_f4,string_f5,string_f6,string_f7,string_f8,string_f9,string_f10,string_f11,string_f12;
	CString string_g0,string_g1,string_g2,string_g3,string_g4,string_g5,string_g6,string_g7,string_g8,string_g9,string_g10,string_g11,string_g12;
	CString string_h0,string_h1,string_h2,string_h3,string_h4,string_h5,string_h6,string_h7,string_h8,string_h9,string_h10,string_h11,string_h12;
	FILE *fp;
	float a;

	fp=fopen("C:/OD Data/Absorbance.txt","r");


	fgets(string_title,100,fp);
	fgets(string_a,100,fp);
	fgets(string_b,100,fp);
	fgets(string_c,100,fp);
	fgets(string_d,100,fp);
	fgets(string_e,100,fp);
	fgets(string_f,100,fp);
	fgets(string_g,100,fp);
	fgets(string_h,100,fp);


	////////////////////////////////Row A loading/////////////////////////////////////////////

	token_a=strtok(string_a,"\t");
	string_a0=token_a;

	//////////////////////////////////

	token_a=strtok(NULL, "\t");
	string_a1=token_a;

	token_a=strtok(NULL, "\t");
	string_a2=token_a;

	token_a=strtok(NULL, "\t");
	string_a3=token_a;

	token_a=strtok(NULL, "\t");
	string_a4=token_a;

	token_a=strtok(NULL, "\t");
	string_a5=token_a;

	token_a=strtok(NULL, "\t");
	string_a6=token_a;

	token_a=strtok(NULL, "\t");
	string_a7=token_a;

	token_a=strtok(NULL, "\t");
	string_a8=token_a;

	token_a=strtok(NULL, "\t");
	string_a9=token_a;

	token_a=strtok(NULL, "\t");
	string_a10=token_a;

	token_a=strtok(NULL, "\t");
	string_a11=token_a;

	token_a=strtok(NULL, "\t");
	string_a12=token_a;

	////////////////////////////////Row B loading/////////////////////////////////////////////

	token_b=strtok(string_b,"\t");
	string_b1=token_b;

	token_b=strtok(NULL, "\t");
	string_b2=token_b;

	token_b=strtok(NULL, "\t");
	string_b3=token_b;

	token_b=strtok(NULL, "\t");
	string_b4=token_b;

	token_b=strtok(NULL, "\t");
	string_b5=token_b;

	token_b=strtok(NULL, "\t");
	string_b6=token_b;

	token_b=strtok(NULL, "\t");
	string_b7=token_b;

	token_b=strtok(NULL, "\t");
	string_b8=token_b;

	token_b=strtok(NULL, "\t");
	string_b9=token_b;

	token_b=strtok(NULL, "\t");
	string_b10=token_b;

	token_b=strtok(NULL, "\t");
	string_b11=token_b;

	token_b=strtok(NULL, "\t");
	string_b12=token_b;

	////////////////////////////////Row C loading/////////////////////////////////////////////

	token_c=strtok(string_c,"\t");
	string_c1=token_c;

	token_c=strtok(NULL, "\t");
	string_c2=token_c;

	token_c=strtok(NULL, "\t");
	string_c3=token_c;

	token_c=strtok(NULL, "\t");
	string_c4=token_c;

	token_c=strtok(NULL, "\t");
	string_c5=token_c;

	token_c=strtok(NULL, "\t");
	string_c6=token_c;

	token_c=strtok(NULL, "\t");
	string_c7=token_c;

	token_c=strtok(NULL, "\t");
	string_c8=token_c;

	token_c=strtok(NULL, "\t");
	string_c9=token_c;

	token_c=strtok(NULL, "\t");
	string_c10=token_c;

	token_c=strtok(NULL, "\t");
	string_c11=token_c;

	token_c=strtok(NULL, "\t");
	string_c12=token_c;

	////////////////////////////////Row D loading/////////////////////////////////////////////

	token_d=strtok(string_d,"\t");
	string_d1=token_d;

	token_d=strtok(NULL, "\t");
	string_d2=token_d;

	token_d=strtok(NULL, "\t");
	string_d3=token_d;

	token_d=strtok(NULL, "\t");
	string_d4=token_d;

	token_d=strtok(NULL, "\t");
	string_d5=token_d;

	token_d=strtok(NULL, "\t");
	string_d6=token_d;

	token_d=strtok(NULL, "\t");
	string_d7=token_d;

	token_d=strtok(NULL, "\t");
	string_d8=token_d;

	token_d=strtok(NULL, "\t");
	string_d9=token_d;

	token_d=strtok(NULL, "\t");
	string_d10=token_d;

	token_d=strtok(NULL, "\t");
	string_d11=token_d;

	token_d=strtok(NULL, "\t");
	string_d12=token_d;



	////////////////////////////////Row E loading/////////////////////////////////////////////

	token_e=strtok(string_e,"\t");
	string_e1=token_e;

	token_e=strtok(NULL, "\t");
	string_e2=token_e;

	token_e=strtok(NULL, "\t");
	string_e3=token_e;

	token_e=strtok(NULL, "\t");
	string_e4=token_e;

	token_e=strtok(NULL, "\t");
	string_e5=token_e;

	token_e=strtok(NULL, "\t");
	string_e6=token_e;

	token_e=strtok(NULL, "\t");
	string_e7=token_e;

	token_e=strtok(NULL, "\t");
	string_e8=token_e;

	token_e=strtok(NULL, "\t");
	string_e9=token_e;

	token_e=strtok(NULL, "\t");
	string_e10=token_e;

	token_e=strtok(NULL, "\t");
	string_e11=token_e;

	token_e=strtok(NULL, "\t");
	string_e12=token_e;

	////////////////////////////////Row F loading/////////////////////////////////////////////

	token_f=strtok(string_f,"\t");
	string_f1=token_f;

	token_f=strtok(NULL, "\t");
	string_f2=token_f;

	token_f=strtok(NULL, "\t");
	string_f3=token_f;

	token_f=strtok(NULL, "\t");
	string_f4=token_f;

	token_f=strtok(NULL, "\t");
	string_f5=token_f;

	token_f=strtok(NULL, "\t");
	string_f6=token_f;

	token_f=strtok(NULL, "\t");
	string_f7=token_f;

	token_f=strtok(NULL, "\t");
	string_f8=token_f;

	token_f=strtok(NULL, "\t");
	string_f9=token_f;

	token_f=strtok(NULL, "\t");
	string_f10=token_f;

	token_f=strtok(NULL, "\t");
	string_f11=token_f;

	token_f=strtok(NULL, "\t");
	string_f12=token_f;

	////////////////////////////////Row G loading/////////////////////////////////////////////

	token_g=strtok(string_g,"\t");
	string_g1=token_g;

	token_g=strtok(NULL, "\t");
	string_g2=token_g;

	token_g=strtok(NULL, "\t");
	string_g3=token_g;

	token_g=strtok(NULL, "\t");
	string_g4=token_g;

	token_g=strtok(NULL, "\t");
	string_g5=token_g;

	token_g=strtok(NULL, "\t");
	string_g6=token_g;

	token_g=strtok(NULL, "\t");
	string_g7=token_g;

	token_g=strtok(NULL, "\t");
	string_g8=token_g;

	token_g=strtok(NULL, "\t");
	string_g9=token_g;

	token_g=strtok(NULL, "\t");
	string_g10=token_g;

	token_g=strtok(NULL, "\t");
	string_g11=token_g;

	token_g=strtok(NULL, "\t");
	string_g12=token_g;

	////////////////////////////////Row H loading/////////////////////////////////////////////

	token_h=strtok(string_h,"\t");
	string_h1=token_h;

	token_h=strtok(NULL, "\t");
	string_h2=token_h;

	token_h=strtok(NULL, "\t");
	string_h3=token_h;

	token_h=strtok(NULL, "\t");
	string_h4=token_h;

	token_h=strtok(NULL, "\t");
	string_h5=token_h;

	token_h=strtok(NULL, "\t");
	string_h6=token_h;

	token_h=strtok(NULL, "\t");
	string_h7=token_h;

	token_h=strtok(NULL, "\t");
	string_h8=token_h;

	token_h=strtok(NULL, "\t");
	string_h9=token_h;

	token_h=strtok(NULL, "\t");
	string_h10=token_h;

	token_h=strtok(NULL, "\t");
	string_h11=token_h;

	token_h=strtok(NULL, "\t");
	string_h12=token_h;



	fclose(fp);

	m_temperature_loading=atof(string_a0);

	//////////////////////////////Row A Outputting///////////////////////////////

	m_a1_loading=atof(string_a1);
	m_a2_loading=atof(string_a2);
	m_a3_loading=atof(string_a3);
	m_a4_loading=atof(string_a4);
	m_a5_loading=atof(string_a5);
	m_a6_loading=atof(string_a6);
	m_a7_loading=atof(string_a7);
	m_a8_loading=atof(string_a8);
	m_a9_loading=atof(string_a9);
	m_a10_loading=atof(string_a10);
	m_a11_loading=atof(string_a11);
	m_a12_loading=atof(string_a12);

	//////////////////////////////Row B Outputting///////////////////////////////

	m_b1_loading=atof(string_b1);
	m_b2_loading=atof(string_b2);
	m_b3_loading=atof(string_b3);
	m_b4_loading=atof(string_b4);
	m_b5_loading=atof(string_b5);
	m_b6_loading=atof(string_b6);
	m_b7_loading=atof(string_b7);
	m_b8_loading=atof(string_b8);
	m_b9_loading=atof(string_b9);
	m_b10_loading=atof(string_b10);
	m_b11_loading=atof(string_b11);
	m_b12_loading=atof(string_b12);

	//////////////////////////////Row C Outputting///////////////////////////////

	m_c1_loading=atof(string_c1);
	m_c2_loading=atof(string_c2);
	m_c3_loading=atof(string_c3);
	m_c4_loading=atof(string_c4);
	m_c5_loading=atof(string_c5);
	m_c6_loading=atof(string_c6);
	m_c7_loading=atof(string_c7);
	m_c8_loading=atof(string_c8);
	m_c9_loading=atof(string_c9);
	m_c10_loading=atof(string_c10);
	m_c11_loading=atof(string_c11);
	m_c12_loading=atof(string_c12);
	
	//////////////////////////////Row D Outputting///////////////////////////////

	m_d1_loading=atof(string_d1);
	m_d2_loading=atof(string_d2);
	m_d3_loading=atof(string_d3);
	m_d4_loading=atof(string_d4);
	m_d5_loading=atof(string_d5);
	m_d6_loading=atof(string_d6);
	m_d7_loading=atof(string_d7);
	m_d8_loading=atof(string_d8);
	m_d9_loading=atof(string_d9);
	m_d10_loading=atof(string_d10);
	m_d11_loading=atof(string_d11);
	m_d12_loading=atof(string_d12);
	
	//////////////////////////////Row E Outputting///////////////////////////////

	m_e1_loading=atof(string_e1);
	m_e2_loading=atof(string_e2);
	m_e3_loading=atof(string_e3);
	m_e4_loading=atof(string_e4);
	m_e5_loading=atof(string_e5);
	m_e6_loading=atof(string_e6);
	m_e7_loading=atof(string_e7);
	m_e8_loading=atof(string_e8);
	m_e9_loading=atof(string_e9);
	m_e10_loading=atof(string_e10);
	m_e11_loading=atof(string_e11);
	m_e12_loading=atof(string_e12);

	//////////////////////////////Row F Outputting///////////////////////////////

	m_f1_loading=atof(string_f1);
	m_f2_loading=atof(string_f2);
	m_f3_loading=atof(string_f3);
	m_f4_loading=atof(string_f4);
	m_f5_loading=atof(string_f5);
	m_f6_loading=atof(string_f6);
	m_f7_loading=atof(string_f7);
	m_f8_loading=atof(string_f8);
	m_f9_loading=atof(string_f9);
	m_f10_loading=atof(string_f10);
	m_f11_loading=atof(string_f11);
	m_f12_loading=atof(string_f12);
	
	//////////////////////////////Row G Outputting///////////////////////////////

	m_g1_loading=atof(string_g1);
	m_g2_loading=atof(string_g2);
	m_g3_loading=atof(string_g3);
	m_g4_loading=atof(string_g4);
	m_g5_loading=atof(string_g5);
	m_g6_loading=atof(string_g6);
	m_g7_loading=atof(string_g7);
	m_g8_loading=atof(string_g8);
	m_g9_loading=atof(string_g9);
	m_g10_loading=atof(string_g10);
	m_g11_loading=atof(string_g11);
	m_g12_loading=atof(string_g12);

	//////////////////////////////Row H Outputting///////////////////////////////

	m_h1_loading=atof(string_h1);
	m_h2_loading=atof(string_h2);
	m_h3_loading=atof(string_h3);
	m_h4_loading=atof(string_h4);
	m_h5_loading=atof(string_h5);
	m_h6_loading=atof(string_h6);
	m_h7_loading=atof(string_h7);
	m_h8_loading=atof(string_h8);
	m_h9_loading=atof(string_h9);
	m_h10_loading=atof(string_h10);
	m_h11_loading=atof(string_h11);
	m_h12_loading=atof(string_h12);


	m_standard_concentration_1=	0	;
	m_standard_concentration_2=	2	;
	m_standard_concentration_3=	3.2	;
	m_standard_concentration_4=	4	;
	m_standard_concentration_5=	5.2	;
	m_standard_concentration_6=	6	;
	m_standard_concentration_7=	7.2	;
	m_standard_concentration_8=	8	;
	m_standard_concentration_9=	9.2	;
	m_standard_concentration_10=	10	;
	m_standard_concentration_11=	11.2	;
	m_standard_concentration_12=	12	;
	m_dividende=20;	
	
	UpdateData(FALSE);
}

void CAbsorConDlg::OnEmpty() 
{
	m_temperature_loading=0;

	m_a1_loading=0;
	m_a2_loading=0;
	m_a3_loading=0;
	m_a4_loading=0;
	m_a5_loading=0;
	m_a6_loading=0;
	m_a7_loading=0;
	m_a8_loading=0;
	m_a9_loading=0;
	m_a10_loading=0;
	m_a11_loading=0;
	m_a12_loading=0;

	m_b1_loading=0;
	m_b2_loading=0;
	m_b3_loading=0;
	m_b4_loading=0;
	m_b5_loading=0;
	m_b6_loading=0;
	m_b7_loading=0;
	m_b8_loading=0;
	m_b9_loading=0;
	m_b10_loading=0;
	m_b11_loading=0;
	m_b12_loading=0;

	m_c1_loading=0;
	m_c2_loading=0;
	m_c3_loading=0;
	m_c4_loading=0;
	m_c5_loading=0;
	m_c6_loading=0;
	m_c7_loading=0;
	m_c8_loading=0;
	m_c9_loading=0;
	m_c10_loading=0;
	m_c11_loading=0;
	m_c12_loading=0;

	m_d1_loading=0;
	m_d2_loading=0;
	m_d3_loading=0;
	m_d4_loading=0;
	m_d5_loading=0;
	m_d6_loading=0;
	m_d7_loading=0;
	m_d8_loading=0;
	m_d9_loading=0;
	m_d10_loading=0;
	m_d11_loading=0;
	m_d12_loading=0;

	m_e1_loading=0;
	m_e2_loading=0;
	m_e3_loading=0;
	m_e4_loading=0;
	m_e5_loading=0;
	m_e6_loading=0;
	m_e7_loading=0;
	m_e8_loading=0;
	m_e9_loading=0;
	m_e10_loading=0;
	m_e11_loading=0;
	m_e12_loading=0;

	m_f1_loading=0;
	m_f2_loading=0;
	m_f3_loading=0;
	m_f4_loading=0;
	m_f5_loading=0;
	m_f6_loading=0;
	m_f7_loading=0;
	m_f8_loading=0;
	m_f9_loading=0;
	m_f10_loading=0;
	m_f11_loading=0;
	m_f12_loading=0;

	m_g1_loading=0;
	m_g2_loading=0;
	m_g3_loading=0;
	m_g4_loading=0;
	m_g5_loading=0;
	m_g6_loading=0;
	m_g7_loading=0;
	m_g8_loading=0;
	m_g9_loading=0;
	m_g10_loading=0;
	m_g11_loading=0;
	m_g12_loading=0;

	m_h1_loading=0;
	m_h2_loading=0;
	m_h3_loading=0;
	m_h4_loading=0;
	m_h5_loading=0;
	m_h6_loading=0;
	m_h7_loading=0;
	m_h8_loading=0;
	m_h9_loading=0;
	m_h10_loading=0;
	m_h11_loading=0;
	m_h12_loading=0;

	
	
	UpdateData(FALSE);
	
}

void CAbsorConDlg::OnLine() 
{
	float standard_1[20],standard_2[20],standard_average[20],standard_concentration[20],lxx=0,lyy=0,x_sum_square=0,y_sum_square=0,lxy=0,xy_sum=0,x_sum=0,y_sum=0,b=0,r=0;
	int i=0;
	
	float point1=0,point2=0;
	
	CString str;
	
	
	float ii=0,jj=0,xx=0,yy=0,xxx=0,yyy=0;
	
	UpdateData(TRUE);
	
	if(m_a1_loading==0||m_a2_loading==0||m_b5_loading==0||m_f8_loading==0||m_h10_loading==0||m_h12_loading==0)
		MessageBox("Please load data first!","Error Data",MB_OK|MB_ICONINFORMATION);
	else
	{		
		
		standard_concentration[0]=	0	;
		standard_concentration[1]=	m_standard_concentration_1	;
		standard_concentration[2]=	m_standard_concentration_2	;
		standard_concentration[3]=	m_standard_concentration_3	;
		standard_concentration[4]=	m_standard_concentration_4	;
		standard_concentration[5]=	m_standard_concentration_5	;
		standard_concentration[6]=	m_standard_concentration_6	;
		standard_concentration[7]=	m_standard_concentration_7	;
		standard_concentration[8]=	m_standard_concentration_8	;
		standard_concentration[9]=	m_standard_concentration_9	;
		standard_concentration[10]=	m_standard_concentration_10	;
		standard_concentration[11]=	m_standard_concentration_11	;
		standard_concentration[12]=	m_standard_concentration_12	;
		
		
		standard_1[0]=0;
		standard_1[1]=	m_c1_loading	;
		standard_1[2]=	m_c2_loading	;
		standard_1[3]=	m_c3_loading	;
		standard_1[4]=	m_c4_loading	;
		standard_1[5]=	m_c5_loading	;
		standard_1[6]=	m_c6_loading	;
		standard_1[7]=	m_c7_loading	;
		standard_1[8]=	m_c8_loading	;
		standard_1[9]=	m_c9_loading	;
		standard_1[10]=	m_c10_loading	;
		standard_1[11]=	m_c11_loading	;
		standard_1[12]=	m_c12_loading	;
		
		standard_2[0]=0;
		standard_2[1]=m_d1_loading	;
		standard_2[2]=m_d2_loading	;
		standard_2[3]=m_d3_loading	;
		standard_2[4]=m_d4_loading	;
		standard_2[5]=m_d5_loading	;
		standard_2[6]=m_d6_loading	;
		standard_2[7]=m_d7_loading	;
		standard_2[8]=m_d8_loading	;
		standard_2[9]=m_d9_loading	;
		standard_2[10]=m_d10_loading	;
		standard_2[11]=m_d11_loading	;
		standard_2[12]=m_d12_loading	;
		
		standard_average[0]=0;
		
		//	for(i=1;i<13;i++);
		//		standard_average[i]=(standard_1[i]+standard_2[i])/2;
		
		for(i=1;i<13;i++)
		{
			standard_average[i]=(standard_1[i]+standard_2[i])/2;
			x_sum_square=standard_average[i]*standard_average[i]+x_sum_square;
			x_sum=standard_average[i]+x_sum;
			y_sum=standard_concentration[i]+y_sum;
			y_sum_square=standard_concentration[i]*standard_concentration[i]+y_sum_square;
			xy_sum=standard_average[i]*standard_concentration[i]+xy_sum;
		}
		
		
		lxx=x_sum_square-x_sum*x_sum/12;
		lxy=xy_sum-x_sum*y_sum/12;
		lyy=y_sum_square-y_sum*y_sum/12;
		
		b=lxy/lxx;
		r=lxy/sqrt(lxx*lyy);
		
		m_b_output=b;
		m_correlation_output=r;

		point1=standard_average[1];
		
		


		/////////////////////////////////////// Draw the Scatter! ///////////////////
		
		
		
		CPen *pPenRed = new CPen(); //??????
		pPenRed ->CreatePen(PS_SOLID, 1, RGB(255, 0, 0)); //????
		CPen *pPen = NULL;
		
		
		//????????,????????
		CGdiObject *pOldPen = pDC ->SelectObject(pPenRed);
	
		
		////////////////////////////// Points /////////////////////////////////////////
		
		for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[1]*130+10;
			yy=-(sqrt(9-ii*ii))-m_standard_concentration_1*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}
		
		for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[1]*130+10;
			yy=-(-sqrt(9-ii*ii))-m_standard_concentration_1*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}
		




			for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[2]*130+10;
			yy=-(sqrt(9-ii*ii))-m_standard_concentration_2*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}
		
		for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[2]*130+10;
			yy=-(-sqrt(9-ii*ii))-m_standard_concentration_2*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}
		

			for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[3]*130+10;
			yy=-(sqrt(9-ii*ii))-m_standard_concentration_3*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}
		
		for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[3]*130+10;
			yy=-(-sqrt(9-ii*ii))-m_standard_concentration_3*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}


			for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[4]*130+10;
			yy=-(sqrt(9-ii*ii))-m_standard_concentration_4*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}
		
		for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[4]*130+10;
			yy=-(-sqrt(9-ii*ii))-m_standard_concentration_4*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}

			for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[5]*130+10;
			yy=-(sqrt(9-ii*ii))-m_standard_concentration_5*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}
		
		for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[5]*130+10;
			yy=-(-sqrt(9-ii*ii))-m_standard_concentration_5*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}


				for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[6]*130+10;
			yy=-(sqrt(9-ii*ii))-m_standard_concentration_6*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}
		
		for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[6]*130+10;
			yy=-(-sqrt(9-ii*ii))-m_standard_concentration_6*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}




				for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[7]*130+10;
			yy=-(sqrt(9-ii*ii))-m_standard_concentration_7*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}
		
		for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[7]*130+10;
			yy=-(-sqrt(9-ii*ii))-m_standard_concentration_7*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}




				for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[8]*130+10;
			yy=-(sqrt(9-ii*ii))-m_standard_concentration_8*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}
		
		for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[8]*130+10;
			yy=-(-sqrt(9-ii*ii))-m_standard_concentration_8*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}



				for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[9]*130+10;
			yy=-(sqrt(9-ii*ii))-m_standard_concentration_9*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}
		
		for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[9]*130+10;
			yy=-(-sqrt(9-ii*ii))-m_standard_concentration_9*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}




				for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[10]*130+10;
			yy=-(sqrt(9-ii*ii))-m_standard_concentration_10*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}
		
		for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[10]*130+10;
			yy=-(-sqrt(9-ii*ii))-m_standard_concentration_10*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}


				for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[11]*130+10;
			yy=-(sqrt(9-ii*ii))-m_standard_concentration_11*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}
		
		for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[11]*130+10;
			yy=-(-sqrt(9-ii*ii))-m_standard_concentration_11*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}



				for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[12]*130+10;
			yy=-(sqrt(9-ii*ii))-m_standard_concentration_12*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}
		
		for(ii=3;ii>=-3;ii=ii-0.01)
		{
			xx=ii+standard_average[12]*130+10;
			yy=-(-sqrt(9-ii*ii))-m_standard_concentration_12*12+170;
			pDC->SetPixel(xx,yy,RGB(0,0,255));
		}



		
//		for(ii=0;ii<3;ii=ii+0.001)
//		{
//			xx=-1*ii+standard_average[1]*130+10;
//			yy=-b*ii/20-m_standard_concentration_1*12+170;
//			pDC->SetPixel(xx,yy,RGB(0,0,255));
//		}
//		



		//////////////////////////////// Line //////////////////////////////////
		
		
		for(ii=20;ii<180;ii=ii+0.01)
		{
			xx=ii+10;
			yy=-12*b*ii/130+210;
			pDC->SetPixel(xx,yy,RGB(255,0,0));
		}
		
		/////////////////////////////////////////////////////////////////////////
		
		
	
		pDC ->SelectObject(pOldPen);
		delete pPenRed;
		if(pPen != NULL)
			delete pPen;	

		UpdateData(FALSE);
		
	}
	
	
	
	
}

void CAbsorConDlg::OnAverageSample() 
{
	int i=0;
	float sample_1[20],sample_2[20],sample_average[20];

	UpdateData(TRUE);
	
	
	sample_1[1]=	m_a1_loading	;
	sample_1[2]=	m_a2_loading	;
	sample_1[3]=	m_a3_loading	;
	sample_1[4]=	m_a4_loading	;
	sample_1[5]=	m_a5_loading	;
	sample_1[6]=	m_a6_loading	;
	
	sample_2[1]=	m_b1_loading	;
	sample_2[2]=	m_b2_loading	;
	sample_2[3]=	m_b3_loading	;
	sample_2[4]=	m_b4_loading	;
	sample_2[5]=	m_b5_loading	;
	sample_2[6]=	m_b6_loading	;
	
	
	for(i=1;i<13;i++)
	{
		sample_average[i]=(sample_1[i]+sample_2[i])/2;

	}

	m_sample_average_1	=	sample_average[1]	;
	m_sample_average_2	=	sample_average[2]	;
	m_sample_average_3	=	sample_average[3]	;
	m_sample_average_4	=	sample_average[4]	;
	m_sample_average_5	=	sample_average[5]	;
	m_sample_average_6	=	sample_average[6]	;

	UpdateData(FALSE);			


}

void CAbsorConDlg::OnSampleConcentration() 
{
	int i=0;
	float sample_1[20],sample_2[20],sample_average[20],sample_concentration[20];

	UpdateData(TRUE);
	
	
	sample_1[1]=	m_a1_loading	;
	sample_1[2]=	m_a2_loading	;
	sample_1[3]=	m_a3_loading	;
	sample_1[4]=	m_a4_loading	;
	sample_1[5]=	m_a5_loading	;
	sample_1[6]=	m_a6_loading	;
	sample_1[7]=	m_a7_loading	;
	sample_1[8]=	m_a8_loading	;
	sample_1[9]=	m_a9_loading	;
	sample_1[10]=	m_a10_loading	;
	sample_1[11]=	m_a11_loading	;
	sample_1[12]=	m_a12_loading	;
	
	
	sample_2[1]=	m_b1_loading	;
	sample_2[2]=	m_b2_loading	;
	sample_2[3]=	m_b3_loading	;
	sample_2[4]=	m_b4_loading	;
	sample_2[5]=	m_b5_loading	;
	sample_2[6]=	m_b6_loading	;
	sample_2[7]=	m_b7_loading	;
	sample_2[8]=	m_b8_loading	;
	sample_2[9]=	m_b9_loading	;
	sample_2[10]=	m_b10_loading	;
	sample_2[11]=	m_b11_loading	;
	sample_2[12]=	m_b12_loading	;
	
	
	for(i=1;i<13;i++)
	{
		sample_average[i]=(sample_1[i]+sample_2[i])/2;
		sample_concentration[i]=sample_average[i]*m_b_output;
		
	}
	
	m_sample_concentration_1	=	sample_concentration[1]	;
	m_sample_concentration_2	=	sample_concentration[2]	;
	m_sample_concentration_3	=	sample_concentration[3]	;
	m_sample_concentration_4	=	sample_concentration[4]	;
	m_sample_concentration_5	=	sample_concentration[5]	;
	m_sample_concentration_6	=	sample_concentration[6]	;
	m_sample_concentration_7	=	sample_concentration[7]	;
	m_sample_concentration_8	=	sample_concentration[8]	;
	m_sample_concentration_9	=	sample_concentration[9]	;
	m_sample_concentration_10	=	sample_concentration[10]	;
	m_sample_concentration_11	=	sample_concentration[11]	;
	m_sample_concentration_12	=	sample_concentration[12]	;
	
	UpdateData(FALSE);
	
	
}

void CAbsorConDlg::OnLoadingVolum() 
{	
	int i=0,j=0,k=0,l=0,h=0;
	float sample_1[20],sample_2[20],sample_average[20],sample_concentration[20],nomalized[20],min1=100,min2=100,min=100;
	
	UpdateData(TRUE);
	
	if(m_b_output==0||m_a1_loading==0||m_a2_loading==0||m_b5_loading==0||m_f8_loading==0||m_h10_loading==0||m_h12_loading==0||m_dividende==0)
		MessageBox("Please do the LINEST first!","LINEST",MB_OK|MB_ICONINFORMATION);
	else
	{		
		
		
		sample_1[1]=	m_a1_loading	;
		sample_1[2]=	m_a2_loading	;
		sample_1[3]=	m_a3_loading	;
		sample_1[4]=	m_a4_loading	;
		sample_1[5]=	m_a5_loading	;
		sample_1[6]=	m_a6_loading	;
		sample_1[7]=	m_a7_loading	;
		sample_1[8]=	m_a8_loading	;
		sample_1[9]=	m_a9_loading	;
		sample_1[10]=	m_a10_loading	;
		sample_1[11]=	m_a11_loading	;
		sample_1[12]=	m_a12_loading	;
		
		
		sample_2[1]=	m_b1_loading	;
		sample_2[2]=	m_b2_loading	;
		sample_2[3]=	m_b3_loading	;
		sample_2[4]=	m_b4_loading	;
		sample_2[5]=	m_b5_loading	;
		sample_2[6]=	m_b6_loading	;
		sample_2[7]=	m_b7_loading	;
		sample_2[8]=	m_b8_loading	;
		sample_2[9]=	m_b9_loading	;
		sample_2[10]=	m_b10_loading	;
		sample_2[11]=	m_b11_loading	;
		sample_2[12]=	m_b12_loading	;
		
		for(i=1;i<13;i++)
		{
			sample_average[i]=(sample_1[i]+sample_2[i])/2;
			sample_concentration[i]=sample_average[i]*m_b_output;
			
			
		}
		
		for(k=1;k<13;k++)
		{
			if(min>sample_concentration[k])
				min=sample_concentration[k];		
			
		}

//		for(l=7;l<13;l++)
//		{
//			if(min2>sample_concentration[l])
//				min2=sample_concentration[l];		
//			
//		}
		



	for(j=1;j<13;j++)
	{
		nomalized[j]=sample_concentration[j]/min;
		
	}

//	for(h=7;h<13;h++)
//	{
//		nomalized[h]=sample_concentration[h]/min2;
//		
//	}
	
	m_loading_volum_1	=	m_dividende/nomalized[1]	;
	m_loading_volum_2	=	m_dividende/	nomalized[2]	;
	m_loading_volum_3	=	m_dividende/	nomalized[3]	;
	m_loading_volum_4	=	m_dividende/	nomalized[4]	;
	m_loading_volum_5	=	m_dividende/	nomalized[5]	;
	m_loading_volum_6	=	m_dividende/	nomalized[6]	;	
	m_loading_volum_7	=	m_dividende/nomalized[7]	;
	m_loading_volum_8	=	m_dividende/	nomalized[8]	;
	m_loading_volum_9	=	m_dividende/	nomalized[9]	;
	m_loading_volum_10	=	m_dividende/	nomalized[10]	;
	m_loading_volum_11	=	m_dividende/	nomalized[11]	;
	m_loading_volum_12	=	m_dividende/	nomalized[12]	;	
	
	UpdateData(FALSE);

	}
}

void CAbsorConDlg::OnExport() 
{
	CString loading_volum_string_1,loading_volum_string_2,loading_volum_string_3,loading_volum_string_4,loading_volum_string_5,loading_volum_string_6,
		loading_volum_string_7,loading_volum_string_8,loading_volum_string_9,loading_volum_string_10,loading_volum_string_11,loading_volum_string_12;
	FILE *fp;
	UpdateData(TRUE);

	loading_volum_string_1.Format("%f", m_loading_volum_1);
	loading_volum_string_2.Format("%f", m_loading_volum_2);
	loading_volum_string_3.Format("%f", m_loading_volum_3);
	loading_volum_string_4.Format("%f", m_loading_volum_4);
	loading_volum_string_5.Format("%f", m_loading_volum_5);
	loading_volum_string_6.Format("%f", m_loading_volum_6);

	loading_volum_string_7.Format("%f", m_loading_volum_7);
	loading_volum_string_8.Format("%f", m_loading_volum_8);
	loading_volum_string_9.Format("%f", m_loading_volum_9);
	loading_volum_string_10.Format("%f", m_loading_volum_10);
	loading_volum_string_11.Format("%f", m_loading_volum_11);
	loading_volum_string_12.Format("%f", m_loading_volum_12);


	fp=fopen("C:/OD Data/LoadingVolum.xls","w");

	fwrite("Serial\t",strlen("Serial\t"),1,fp);
	fwrite("Volume",strlen("Volume"),1,fp);
	fputc('\n',fp);
			

	fwrite("No. 1: \t",strlen("No. 1: \t"),1,fp);
	fwrite(loading_volum_string_1,strlen(loading_volum_string_1),1,fp);
	fputc('\n',fp);

	fwrite("No. 2: \t",strlen("No. 2: \t"),1,fp);
	fwrite(loading_volum_string_2,strlen(loading_volum_string_2),1,fp);
	fputc('\n',fp);

	fwrite("No. 3: \t",strlen("No. 3: \t"),1,fp);
	fwrite(loading_volum_string_3,strlen(loading_volum_string_3),1,fp);
	fputc('\n',fp);

	fwrite("No. 4: \t",strlen("No. 4: \t"),1,fp);
	fwrite(loading_volum_string_4,strlen(loading_volum_string_4),1,fp);
	fputc('\n',fp);
	
	fwrite("No. 5: \t",strlen("No. 5: \t"),1,fp);
	fwrite(loading_volum_string_5,strlen(loading_volum_string_5),1,fp);
	fputc('\n',fp);
	
	fwrite("No. 6: \t",strlen("No. 6: \t"),1,fp);
	fwrite(loading_volum_string_6,strlen(loading_volum_string_6),1,fp);
	fputc('\n',fp);


	fwrite("No. 7: \t",strlen("No. 7: \t"),1,fp);
	fwrite(loading_volum_string_7,strlen(loading_volum_string_7),1,fp);
	fputc('\n',fp);

	fwrite("No. 8: \t",strlen("No. 8: \t"),1,fp);
	fwrite(loading_volum_string_8,strlen(loading_volum_string_8),1,fp);
	fputc('\n',fp);

	fwrite("No. 9: \t",strlen("No. 9: \t"),1,fp);
	fwrite(loading_volum_string_9,strlen(loading_volum_string_9),1,fp);
	fputc('\n',fp);

	fwrite("No. 10: \t",strlen("No. 10: \t"),1,fp);
	fwrite(loading_volum_string_10,strlen(loading_volum_string_10),1,fp);
	fputc('\n',fp);
	
	fwrite("No. 11: \t",strlen("No. 11: \t"),1,fp);
	fwrite(loading_volum_string_11,strlen(loading_volum_string_11),1,fp);
	fputc('\n',fp);
	
	fwrite("No. 12: \t",strlen("No. 12: \t"),1,fp);
	fwrite(loading_volum_string_12,strlen(loading_volum_string_12),1,fp);
	fputc('\n',fp);
	
		
	MessageBox("All Data has been exported successfully!","Export",MB_OK|MB_ICONINFORMATION);
	
	fclose(fp);
	

	
}

void CAbsorConDlg::OnQuit() 
{

	OnOK();
}

void CAbsorConDlg::OnAboutAbsorcon() 
{
	CAboutAbsorcon dialog;
	dialog.DoModal();
		
}
