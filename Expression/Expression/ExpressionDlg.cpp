
// ExpressionDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Expression.h"
#include "ExpressionDlg.h"
#include "afxdialogex.h"
#include "AboutExpression.h"
#include "AboutAminoAcids.h"
#include "AboutBases.h"
#include "ImportFASTA.h"
#include "CDSSelect.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CExpressionDlg dialog




CExpressionDlg::CExpressionDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CExpressionDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_RNA_Sequence = _T("");
	m_Peptide_Abbreviation = _T("");
	m_Peptide_Initial = _T("");
	m_DNA_Sequence = _T("");
	m_BasePairs = 0;
	m_Residues = 0;
	m_cDNA_Sequence = _T("");
	m_header = _T("");
}

void CExpressionDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_RNA_Sequence);
	DDX_Text(pDX, IDC_EDIT2, m_Peptide_Abbreviation);
	DDX_Text(pDX, IDC_EDIT3, m_Peptide_Initial);
	DDX_Text(pDX, IDC_EDIT4, m_DNA_Sequence);
	DDX_Text(pDX, IDC_EDIT5, m_BasePairs);
	DDX_Text(pDX, IDC_EDIT6, m_Residues);
	DDX_Text(pDX, IDC_EDIT7, m_cDNA_Sequence);
	DDX_Text(pDX, IDC_EDIT9, m_header);
}

BEGIN_MESSAGE_MAP(CExpressionDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
//	ON_BN_CLICKED(IDC_BUTTON1, &CExpressionDlg::OnBnClickedButton1)
ON_BN_CLICKED(IDC_BUTTON1, &CExpressionDlg::OnTranslate)
ON_BN_CLICKED(IDC_BUTTON2, &CExpressionDlg::OnAboutExpression)
ON_BN_CLICKED(IDC_BUTTON3, &CExpressionDlg::OnArrange)
ON_BN_CLICKED(IDC_BUTTON4, &CExpressionDlg::OnExport)
ON_BN_CLICKED(IDC_BUTTON6, &CExpressionDlg::OnExit)
ON_BN_CLICKED(IDC_BUTTON5, &CExpressionDlg::OnTranscript)
//ON_BN_CLICKED(IDC_BUTTON7, &CExpressionDlg::OnBnClickedButton7)
ON_BN_CLICKED(IDC_BUTTON7, &CExpressionDlg::OnDNAArrange)
ON_BN_CLICKED(IDC_BUTTON8, &CExpressionDlg::OnReverseTranscript)
ON_BN_CLICKED(IDC_BUTTON9, &CExpressionDlg::OnAminoAcids)
ON_BN_CLICKED(IDC_BUTTON10, &CExpressionDlg::OnBases)
ON_BN_CLICKED(IDC_BUTTON11, &CExpressionDlg::OnImportFASTA)
//ON_BN_CLICKED(IDC_BUTTON12, &CExpressionDlg::OnBnClickedButton12)
ON_BN_CLICKED(IDC_BUTTON12, &CExpressionDlg::OnCDSSelect)
END_MESSAGE_MAP()


// CExpressionDlg message handlers

BOOL CExpressionDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
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

void CExpressionDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CExpressionDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

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
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CExpressionDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}




CString CExpressionDlg::Translate(CString Codon)
{
	CString AminoAcid,AminoAcid_Abbreviation,AminoAcid_Initial;
	int indicator=0;

	if(Codon=="GCA"){AminoAcid="Alanine"; AminoAcid_Abbreviation="Ala"; AminoAcid_Initial="A";indicator=1;}
	if(Codon=="GCC"){AminoAcid="Alanine"; AminoAcid_Abbreviation="Ala"; AminoAcid_Initial="A";indicator=1;}
	if(Codon=="GCG"){AminoAcid="Alanine"; AminoAcid_Abbreviation="Ala"; AminoAcid_Initial="A";indicator=1;}
	if(Codon=="GCU"){AminoAcid="Alanine"; AminoAcid_Abbreviation="Ala"; AminoAcid_Initial="A";indicator=1;}
	if(Codon=="AGA"){AminoAcid="Arginine"; AminoAcid_Abbreviation="Arg"; AminoAcid_Initial="R";indicator=1;}
	if(Codon=="AGG"){AminoAcid="Arginine"; AminoAcid_Abbreviation="Arg"; AminoAcid_Initial="R";indicator=1;}
	if(Codon=="CGA"){AminoAcid="Arginine"; AminoAcid_Abbreviation="Arg"; AminoAcid_Initial="R";indicator=1;}
	if(Codon=="CGC"){AminoAcid="Arginine"; AminoAcid_Abbreviation="Arg"; AminoAcid_Initial="R";indicator=1;}
	if(Codon=="CGG"){AminoAcid="Arginine"; AminoAcid_Abbreviation="Arg"; AminoAcid_Initial="R";indicator=1;}
	if(Codon=="CGU"){AminoAcid="Arginine"; AminoAcid_Abbreviation="Arg"; AminoAcid_Initial="R";indicator=1;}
	if(Codon=="AAC"){AminoAcid="Asparagine"; AminoAcid_Abbreviation="Asn"; AminoAcid_Initial="N";indicator=1;}
	if(Codon=="AAU"){AminoAcid="Asparagine"; AminoAcid_Abbreviation="Asn"; AminoAcid_Initial="N";indicator=1;}
	if(Codon=="GAC"){AminoAcid="Aspartic Acid"; AminoAcid_Abbreviation="Asp"; AminoAcid_Initial="D";indicator=1;}
	if(Codon=="GAU"){AminoAcid="Aspartic Acid"; AminoAcid_Abbreviation="Asp"; AminoAcid_Initial="D";indicator=1;}
	if(Codon=="UGC"){AminoAcid="Cysteine"; AminoAcid_Abbreviation="Cys"; AminoAcid_Initial="C";indicator=1;}
	if(Codon=="UGU"){AminoAcid="Cysteine"; AminoAcid_Abbreviation="Cys"; AminoAcid_Initial="C";indicator=1;}
	if(Codon=="GAA"){AminoAcid="Glutamic Acid"; AminoAcid_Abbreviation="Glu"; AminoAcid_Initial="E";indicator=1;}
	if(Codon=="GAG"){AminoAcid="Glutamic Acid"; AminoAcid_Abbreviation="Glu"; AminoAcid_Initial="E";indicator=1;}
	if(Codon=="CAA"){AminoAcid="Glutamine"; AminoAcid_Abbreviation="Gln"; AminoAcid_Initial="Q";indicator=1;}
	if(Codon=="CAG"){AminoAcid="Glutamine"; AminoAcid_Abbreviation="Gln"; AminoAcid_Initial="Q";indicator=1;}
	if(Codon=="GGA"){AminoAcid="Glycine"; AminoAcid_Abbreviation="Gly"; AminoAcid_Initial="G";indicator=1;}
	if(Codon=="GGC"){AminoAcid="Glycine"; AminoAcid_Abbreviation="Gly"; AminoAcid_Initial="G";indicator=1;}
	if(Codon=="GGG"){AminoAcid="Glycine"; AminoAcid_Abbreviation="Gly"; AminoAcid_Initial="G";indicator=1;}
	if(Codon=="GGU"){AminoAcid="Glycine"; AminoAcid_Abbreviation="Gly"; AminoAcid_Initial="G";indicator=1;}
	if(Codon=="CAC"){AminoAcid="Histidine"; AminoAcid_Abbreviation="His"; AminoAcid_Initial="H";indicator=1;}
	if(Codon=="CAU"){AminoAcid="Histidine"; AminoAcid_Abbreviation="His"; AminoAcid_Initial="H";indicator=1;}
	if(Codon=="AUA"){AminoAcid="Isoleucine"; AminoAcid_Abbreviation="Ile"; AminoAcid_Initial="I";indicator=1;}
	if(Codon=="AUC"){AminoAcid="Isoleucine"; AminoAcid_Abbreviation="Ile"; AminoAcid_Initial="I";indicator=1;}
	if(Codon=="AUU"){AminoAcid="Isoleucine"; AminoAcid_Abbreviation="Ile"; AminoAcid_Initial="I";indicator=1;}
	if(Codon=="CUA"){AminoAcid="Leucine"; AminoAcid_Abbreviation="Leu"; AminoAcid_Initial="L";indicator=1;}
	if(Codon=="CUC"){AminoAcid="Leucine"; AminoAcid_Abbreviation="Leu"; AminoAcid_Initial="L";indicator=1;}
	if(Codon=="CUG"){AminoAcid="Leucine"; AminoAcid_Abbreviation="Leu"; AminoAcid_Initial="L";indicator=1;}
	if(Codon=="CUU"){AminoAcid="Leucine"; AminoAcid_Abbreviation="Leu"; AminoAcid_Initial="L";indicator=1;}
	if(Codon=="UUA"){AminoAcid="Leucine"; AminoAcid_Abbreviation="Leu"; AminoAcid_Initial="L";indicator=1;}
	if(Codon=="UUG"){AminoAcid="Leucine"; AminoAcid_Abbreviation="Leu"; AminoAcid_Initial="L";indicator=1;}
	if(Codon=="AAA"){AminoAcid="Lysine"; AminoAcid_Abbreviation="Lys"; AminoAcid_Initial="K";indicator=1;}
	if(Codon=="AAG"){AminoAcid="Lysine"; AminoAcid_Abbreviation="Lys"; AminoAcid_Initial="K";indicator=1;}
	if(Codon=="AUG"){AminoAcid="Methionine"; AminoAcid_Abbreviation="Met"; AminoAcid_Initial="M";indicator=1;}
	if(Codon=="UUC"){AminoAcid="Phenylalanine"; AminoAcid_Abbreviation="Phe"; AminoAcid_Initial="F";indicator=1;}
	if(Codon=="UUU"){AminoAcid="Phenylalanine"; AminoAcid_Abbreviation="Phe"; AminoAcid_Initial="F";indicator=1;}
	if(Codon=="CCA"){AminoAcid="Proline"; AminoAcid_Abbreviation="Pro"; AminoAcid_Initial="P";indicator=1;}
	if(Codon=="CCC"){AminoAcid="Proline"; AminoAcid_Abbreviation="Pro"; AminoAcid_Initial="P";indicator=1;}
	if(Codon=="CCG"){AminoAcid="Proline"; AminoAcid_Abbreviation="Pro"; AminoAcid_Initial="P";indicator=1;}
	if(Codon=="CCU"){AminoAcid="Proline"; AminoAcid_Abbreviation="Pro"; AminoAcid_Initial="P";indicator=1;}
	if(Codon=="AGC"){AminoAcid="Serine"; AminoAcid_Abbreviation="Ser"; AminoAcid_Initial="S";indicator=1;}
	if(Codon=="AGU"){AminoAcid="Serine"; AminoAcid_Abbreviation="Ser"; AminoAcid_Initial="S";indicator=1;}
	if(Codon=="UCA"){AminoAcid="Serine"; AminoAcid_Abbreviation="Ser"; AminoAcid_Initial="S";indicator=1;}
	if(Codon=="UCC"){AminoAcid="Serine"; AminoAcid_Abbreviation="Ser"; AminoAcid_Initial="S";indicator=1;}
	if(Codon=="UCG"){AminoAcid="Serine"; AminoAcid_Abbreviation="Ser"; AminoAcid_Initial="S";indicator=1;}
	if(Codon=="UCU"){AminoAcid="Serine"; AminoAcid_Abbreviation="Ser"; AminoAcid_Initial="S";indicator=1;}
	if(Codon=="UAA"){AminoAcid="Stop"; AminoAcid_Abbreviation="Stop"; AminoAcid_Initial="Stop";indicator=1;}
	if(Codon=="UAG"){AminoAcid="Stop"; AminoAcid_Abbreviation="Stop"; AminoAcid_Initial="Stop";indicator=1;}
	if(Codon=="UGA"){AminoAcid="Stop"; AminoAcid_Abbreviation="Stop"; AminoAcid_Initial="Stop";indicator=1;}
	if(Codon=="ACA"){AminoAcid="Threonine"; AminoAcid_Abbreviation="Thr"; AminoAcid_Initial="T";indicator=1;}
	if(Codon=="ACC"){AminoAcid="Threonine"; AminoAcid_Abbreviation="Thr"; AminoAcid_Initial="T";indicator=1;}
	if(Codon=="ACG"){AminoAcid="Threonine"; AminoAcid_Abbreviation="Thr"; AminoAcid_Initial="T";indicator=1;}
	if(Codon=="ACU"){AminoAcid="Threonine"; AminoAcid_Abbreviation="Thr"; AminoAcid_Initial="T";indicator=1;}
	if(Codon=="UGG"){AminoAcid="Tryptophan"; AminoAcid_Abbreviation="Trp"; AminoAcid_Initial="W";indicator=1;}
	if(Codon=="UAC"){AminoAcid="tyrosine"; AminoAcid_Abbreviation="Tyr"; AminoAcid_Initial="Y";indicator=1;}
	if(Codon=="UAU"){AminoAcid="Tyrosine"; AminoAcid_Abbreviation="Tyr"; AminoAcid_Initial="Y";indicator=1;}
	if(Codon=="GUA"){AminoAcid="Valine"; AminoAcid_Abbreviation="Val"; AminoAcid_Initial="V";indicator=1;}
	if(Codon=="GUC"){AminoAcid="Valine"; AminoAcid_Abbreviation="Val"; AminoAcid_Initial="V";indicator=1;}
	if(Codon=="GUG"){AminoAcid="Valine"; AminoAcid_Abbreviation="Val"; AminoAcid_Initial="V";indicator=1;}
	if(Codon=="GUU"){AminoAcid="Valine"; AminoAcid_Abbreviation="Val"; AminoAcid_Initial="V";indicator=1;}
	
	if(indicator!=1)
	{
		AminoAcid="???";
		AminoAcid_Abbreviation="???";
		AminoAcid_Initial="?";
	}

	return(AminoAcid_Abbreviation);
}



void CExpressionDlg::OnTranslate()
{
	int SequenceLen,ResidueNum=0,i;
	CString Codon=L"",Peptide=L"",Peptide_Initial=L"";

	UpdateData(TRUE);

	if(this->m_RNA_Sequence=="")
		MessageBox(L"There is no sequence found. Please input the sequence.",L"No Sequence",MB_OK|MB_ICONINFORMATION);
	else
	{

		m_Peptide_Abbreviation="";
		m_Peptide_Initial="";

		SequenceLen=m_RNA_Sequence.GetLength();

		for(i=0;i<=SequenceLen-3;i=i+3)
		{
			Codon=m_RNA_Sequence.Mid(i,3);
			Peptide=this->Translate(Codon);
			Peptide_Initial=this->Translate_Initial(Codon);
			m_Peptide_Abbreviation=m_Peptide_Abbreviation+Peptide+L"-";
			m_Peptide_Initial=m_Peptide_Initial+Peptide_Initial;
			ResidueNum++;
		}
		
		this->m_Residues=ResidueNum;

		UpdateData(FALSE);
	}
}


void CExpressionDlg::OnAboutExpression()
{
	CAboutExpression Dlg;
	Dlg.DoModal();
}


void CExpressionDlg::OnArrange()
{
	int Sequence_Length=0,i=0;

	UpdateData(TRUE);

	if(this->m_RNA_Sequence=="")
		MessageBox(L"There is no sequence found. Please input the sequence.",L"No Sequence",MB_OK|MB_ICONINFORMATION);
	else
	{

		Sequence_Length=m_RNA_Sequence.GetLength();

		for(i=0;i<=Sequence_Length;i++)
		{
			if(m_RNA_Sequence.Mid(i,1)!="A"&&m_RNA_Sequence.Mid(i,1)!="U"&&m_RNA_Sequence.Mid(i,1)!="C"&&m_RNA_Sequence.Mid(i,1)!="G"&&m_RNA_Sequence.Mid(i,1)!="T"&&m_RNA_Sequence.Mid(i,1)!="\0")
			{
				m_RNA_Sequence.Delete(i,1);
				i--;
			}
		}

		UpdateData(FALSE);
	}	
}


void CExpressionDlg::OnExport()
{
	FILE *fp;
	UpdateData(TRUE);

	fp=fopen(".\\Expression Results.xls","w");

	fwrite("Header: \t",strlen("Header: \t"),1,fp);
	fwrite(this->m_header,m_header.GetLength()*2,1,fp);
	fputc('\n',fp);

	fwrite("DNA: \t",strlen("DNA: \t"),1,fp);
	fwrite(this->m_DNA_Sequence,m_DNA_Sequence.GetLength()*2,1,fp);
	fputc('\n',fp);
	
	fwrite("cDNA: \t",strlen("cDNA: \t"),1,fp);
	fwrite(this->m_cDNA_Sequence,m_cDNA_Sequence.GetLength()*2,1,fp);
	fputc('\n',fp);

	fwrite("RNA: \t",strlen("RNA: \t"),1,fp);
	fwrite(this->m_RNA_Sequence,m_RNA_Sequence.GetLength()*2,1,fp);
	fputc('\n',fp);

	fwrite("Peptide: \t",strlen("Peptide: \t"),1,fp);
	fwrite(this->m_Peptide_Abbreviation,m_Peptide_Abbreviation.GetLength()*2,1,fp);
	fputc('\n',fp);	

	fwrite("Peptide: \t",strlen("Peptide: \t"),1,fp);
	fwrite(this->m_Peptide_Initial,m_Peptide_Initial.GetLength()*2,1,fp);
	fputc('\n',fp);	

	MessageBox(L"All Data has been exported successfully!",L"Exported",MB_OK|MB_ICONINFORMATION);

	fclose(fp);
}


CString CExpressionDlg::Translate_Initial(CString Codon)
{
	CString AminoAcid,AminoAcid_Abbreviation,AminoAcid_Initial;
	int indicator=0;

	if(Codon=="GCA"){AminoAcid="Alanine"; AminoAcid_Abbreviation="Ala"; AminoAcid_Initial="A";indicator=1;}
	if(Codon=="GCC"){AminoAcid="Alanine"; AminoAcid_Abbreviation="Ala"; AminoAcid_Initial="A";indicator=1;}
	if(Codon=="GCG"){AminoAcid="Alanine"; AminoAcid_Abbreviation="Ala"; AminoAcid_Initial="A";indicator=1;}
	if(Codon=="GCU"){AminoAcid="Alanine"; AminoAcid_Abbreviation="Ala"; AminoAcid_Initial="A";indicator=1;}
	if(Codon=="AGA"){AminoAcid="Arginine"; AminoAcid_Abbreviation="Arg"; AminoAcid_Initial="R";indicator=1;}
	if(Codon=="AGG"){AminoAcid="Arginine"; AminoAcid_Abbreviation="Arg"; AminoAcid_Initial="R";indicator=1;}
	if(Codon=="CGA"){AminoAcid="Arginine"; AminoAcid_Abbreviation="Arg"; AminoAcid_Initial="R";indicator=1;}
	if(Codon=="CGC"){AminoAcid="Arginine"; AminoAcid_Abbreviation="Arg"; AminoAcid_Initial="R";indicator=1;}
	if(Codon=="CGG"){AminoAcid="Arginine"; AminoAcid_Abbreviation="Arg"; AminoAcid_Initial="R";indicator=1;}
	if(Codon=="CGU"){AminoAcid="Arginine"; AminoAcid_Abbreviation="Arg"; AminoAcid_Initial="R";indicator=1;}
	if(Codon=="AAC"){AminoAcid="Asparagine"; AminoAcid_Abbreviation="Asn"; AminoAcid_Initial="N";indicator=1;}
	if(Codon=="AAU"){AminoAcid="Asparagine"; AminoAcid_Abbreviation="Asn"; AminoAcid_Initial="N";indicator=1;}
	if(Codon=="GAC"){AminoAcid="Aspartic Acid"; AminoAcid_Abbreviation="Asp"; AminoAcid_Initial="D";indicator=1;}
	if(Codon=="GAU"){AminoAcid="Aspartic Acid"; AminoAcid_Abbreviation="Asp"; AminoAcid_Initial="D";indicator=1;}
	if(Codon=="UGC"){AminoAcid="Cysteine"; AminoAcid_Abbreviation="Cys"; AminoAcid_Initial="C";indicator=1;}
	if(Codon=="UGU"){AminoAcid="Cysteine"; AminoAcid_Abbreviation="Cys"; AminoAcid_Initial="C";indicator=1;}
	if(Codon=="GAA"){AminoAcid="Glutamic Acid"; AminoAcid_Abbreviation="Glu"; AminoAcid_Initial="E";indicator=1;}
	if(Codon=="GAG"){AminoAcid="Glutamic Acid"; AminoAcid_Abbreviation="Glu"; AminoAcid_Initial="E";indicator=1;}
	if(Codon=="CAA"){AminoAcid="Glutamine"; AminoAcid_Abbreviation="Gln"; AminoAcid_Initial="Q";indicator=1;}
	if(Codon=="CAG"){AminoAcid="Glutamine"; AminoAcid_Abbreviation="Gln"; AminoAcid_Initial="Q";indicator=1;}
	if(Codon=="GGA"){AminoAcid="Glycine"; AminoAcid_Abbreviation="Gly"; AminoAcid_Initial="G";indicator=1;}
	if(Codon=="GGC"){AminoAcid="Glycine"; AminoAcid_Abbreviation="Gly"; AminoAcid_Initial="G";indicator=1;}
	if(Codon=="GGG"){AminoAcid="Glycine"; AminoAcid_Abbreviation="Gly"; AminoAcid_Initial="G";indicator=1;}
	if(Codon=="GGU"){AminoAcid="Glycine"; AminoAcid_Abbreviation="Gly"; AminoAcid_Initial="G";indicator=1;}
	if(Codon=="CAC"){AminoAcid="Histidine"; AminoAcid_Abbreviation="His"; AminoAcid_Initial="H";indicator=1;}
	if(Codon=="CAU"){AminoAcid="Histidine"; AminoAcid_Abbreviation="His"; AminoAcid_Initial="H";indicator=1;}
	if(Codon=="AUA"){AminoAcid="Isoleucine"; AminoAcid_Abbreviation="Ile"; AminoAcid_Initial="I";indicator=1;}
	if(Codon=="AUC"){AminoAcid="Isoleucine"; AminoAcid_Abbreviation="Ile"; AminoAcid_Initial="I";indicator=1;}
	if(Codon=="AUU"){AminoAcid="Isoleucine"; AminoAcid_Abbreviation="Ile"; AminoAcid_Initial="I";indicator=1;}
	if(Codon=="CUA"){AminoAcid="Leucine"; AminoAcid_Abbreviation="Leu"; AminoAcid_Initial="L";indicator=1;}
	if(Codon=="CUC"){AminoAcid="Leucine"; AminoAcid_Abbreviation="Leu"; AminoAcid_Initial="L";indicator=1;}
	if(Codon=="CUG"){AminoAcid="Leucine"; AminoAcid_Abbreviation="Leu"; AminoAcid_Initial="L";indicator=1;}
	if(Codon=="CUU"){AminoAcid="Leucine"; AminoAcid_Abbreviation="Leu"; AminoAcid_Initial="L";indicator=1;}
	if(Codon=="UUA"){AminoAcid="Leucine"; AminoAcid_Abbreviation="Leu"; AminoAcid_Initial="L";indicator=1;}
	if(Codon=="UUG"){AminoAcid="Leucine"; AminoAcid_Abbreviation="Leu"; AminoAcid_Initial="L";indicator=1;}
	if(Codon=="AAA"){AminoAcid="Lysine"; AminoAcid_Abbreviation="Lys"; AminoAcid_Initial="K";indicator=1;}
	if(Codon=="AAG"){AminoAcid="Lysine"; AminoAcid_Abbreviation="Lys"; AminoAcid_Initial="K";indicator=1;}
	if(Codon=="AUG"){AminoAcid="Methionine"; AminoAcid_Abbreviation="Met"; AminoAcid_Initial="M";indicator=1;}
	if(Codon=="UUC"){AminoAcid="Phenylalanine"; AminoAcid_Abbreviation="Phe"; AminoAcid_Initial="F";indicator=1;}
	if(Codon=="UUU"){AminoAcid="Phenylalanine"; AminoAcid_Abbreviation="Phe"; AminoAcid_Initial="F";indicator=1;}
	if(Codon=="CCA"){AminoAcid="Proline"; AminoAcid_Abbreviation="Pro"; AminoAcid_Initial="P";indicator=1;}
	if(Codon=="CCC"){AminoAcid="Proline"; AminoAcid_Abbreviation="Pro"; AminoAcid_Initial="P";indicator=1;}
	if(Codon=="CCG"){AminoAcid="Proline"; AminoAcid_Abbreviation="Pro"; AminoAcid_Initial="P";indicator=1;}
	if(Codon=="CCU"){AminoAcid="Proline"; AminoAcid_Abbreviation="Pro"; AminoAcid_Initial="P";indicator=1;}
	if(Codon=="AGC"){AminoAcid="Serine"; AminoAcid_Abbreviation="Ser"; AminoAcid_Initial="S";indicator=1;}
	if(Codon=="AGU"){AminoAcid="Serine"; AminoAcid_Abbreviation="Ser"; AminoAcid_Initial="S";indicator=1;}
	if(Codon=="UCA"){AminoAcid="Serine"; AminoAcid_Abbreviation="Ser"; AminoAcid_Initial="S";indicator=1;}
	if(Codon=="UCC"){AminoAcid="Serine"; AminoAcid_Abbreviation="Ser"; AminoAcid_Initial="S";indicator=1;}
	if(Codon=="UCG"){AminoAcid="Serine"; AminoAcid_Abbreviation="Ser"; AminoAcid_Initial="S";indicator=1;}
	if(Codon=="UCU"){AminoAcid="Serine"; AminoAcid_Abbreviation="Ser"; AminoAcid_Initial="S";indicator=1;}
	if(Codon=="UAA"){AminoAcid="Stop"; AminoAcid_Abbreviation="Stop"; AminoAcid_Initial="Stop";indicator=1;}
	if(Codon=="UAG"){AminoAcid="Stop"; AminoAcid_Abbreviation="Stop"; AminoAcid_Initial="Stop";indicator=1;}
	if(Codon=="UGA"){AminoAcid="Stop"; AminoAcid_Abbreviation="Stop"; AminoAcid_Initial="Stop";indicator=1;}
	if(Codon=="ACA"){AminoAcid="Threonine"; AminoAcid_Abbreviation="Thr"; AminoAcid_Initial="T";indicator=1;}
	if(Codon=="ACC"){AminoAcid="Threonine"; AminoAcid_Abbreviation="Thr"; AminoAcid_Initial="T";indicator=1;}
	if(Codon=="ACG"){AminoAcid="Threonine"; AminoAcid_Abbreviation="Thr"; AminoAcid_Initial="T";indicator=1;}
	if(Codon=="ACU"){AminoAcid="Threonine"; AminoAcid_Abbreviation="Thr"; AminoAcid_Initial="T";indicator=1;}
	if(Codon=="UGG"){AminoAcid="Tryptophan"; AminoAcid_Abbreviation="Trp"; AminoAcid_Initial="W";indicator=1;}
	if(Codon=="UAC"){AminoAcid="tyrosine"; AminoAcid_Abbreviation="Tyr"; AminoAcid_Initial="Y";indicator=1;}
	if(Codon=="UAU"){AminoAcid="Tyrosine"; AminoAcid_Abbreviation="Tyr"; AminoAcid_Initial="Y";indicator=1;}
	if(Codon=="GUA"){AminoAcid="Valine"; AminoAcid_Abbreviation="Val"; AminoAcid_Initial="V";indicator=1;}
	if(Codon=="GUC"){AminoAcid="Valine"; AminoAcid_Abbreviation="Val"; AminoAcid_Initial="V";indicator=1;}
	if(Codon=="GUG"){AminoAcid="Valine"; AminoAcid_Abbreviation="Val"; AminoAcid_Initial="V";indicator=1;}
	if(Codon=="GUU"){AminoAcid="Valine"; AminoAcid_Abbreviation="Val"; AminoAcid_Initial="V";indicator=1;}
	
	if(indicator!=1)
	{
		AminoAcid="???";
		AminoAcid_Abbreviation="???";
		AminoAcid_Initial="?";

	}

	return(AminoAcid_Initial);
	
}


CString CExpressionDlg::Transcript(CString DNA)
{
	CString RNA;

	if(DNA==L"T")
		RNA="U";
	else
		RNA=DNA;

	return(RNA);
}


void CExpressionDlg::OnExit()
{
	OnOK();
}


void CExpressionDlg::OnTranscript()
{
	int SequenceLen,i;
	CString DNA,RNA;

	UpdateData(1);

	if(this->m_DNA_Sequence=="")
		MessageBox(L"There is no sequence found. Please input the sequence.",L"No Sequence",MB_OK|MB_ICONINFORMATION);
	else
	{
		m_RNA_Sequence="";
		m_Peptide_Abbreviation="";
		m_Peptide_Initial="";

		SequenceLen=m_DNA_Sequence.GetLength();

		for(i=0;i<=SequenceLen;i++)
		{
			DNA=m_DNA_Sequence.Mid(i,1);
			RNA=this->Transcript(DNA);
			m_RNA_Sequence=m_RNA_Sequence+RNA;
		}	

		UpdateData(FALSE);
	}

}

void CExpressionDlg::OnDNAArrange()
{
	int Sequence_Length=0,i=0;

	UpdateData(TRUE);

	if(this->m_DNA_Sequence=="")
		MessageBox(L"There is no sequence found. Please input the sequence.",L"No Sequence",MB_OK|MB_ICONINFORMATION);
	else
	{

		Sequence_Length=m_DNA_Sequence.GetLength();

		for(i=0;i<=Sequence_Length;i++)
		{
			if(m_DNA_Sequence.Mid(i,1)!="A"&&m_DNA_Sequence.Mid(i,1)!="U"&&m_DNA_Sequence.Mid(i,1)!="C"&&m_DNA_Sequence.Mid(i,1)!="G"&&m_DNA_Sequence.Mid(i,1)!="T"&&m_DNA_Sequence.Mid(i,1)!="\0")
			{
				m_DNA_Sequence.Delete(i,1);
				i--;
			}
		}

		this->m_BasePairs=this->m_DNA_Sequence.GetLength();

		UpdateData(FALSE);
	}	
}


void CExpressionDlg::OnReverseTranscript()
{
	int SequenceLen,i;
	CString RNA,cDNA;

	UpdateData(1);

	if(this->m_RNA_Sequence=="")
		MessageBox(L"There is no sequence found. Please input the sequence.",L"No Sequence",MB_OK|MB_ICONINFORMATION);
	else
	{		
		SequenceLen=m_RNA_Sequence.GetLength();

		for(i=0;i<=SequenceLen;i++)
		{
			RNA=m_RNA_Sequence.Mid(i,1);
			cDNA=ReverseTranscript(RNA);
			m_cDNA_Sequence=m_cDNA_Sequence+cDNA;
		}	

		UpdateData(FALSE);
	}
}


CString CExpressionDlg::ReverseTranscript(CString RNA)
{	
	CString cDNA;

	if(RNA==L"U")
		cDNA="A";
	else if(RNA==L"A")
		cDNA="T";
	else if(RNA==L"C")
		cDNA="G";
	else if(RNA==L"G")
		cDNA="C";
	
	return(cDNA);
}


void CExpressionDlg::OnAminoAcids()
{
	CAboutAminoAcids Dlg;
	Dlg.DoModal();

}


void CExpressionDlg::OnBases()
{
	CAboutBases Dlg;
	Dlg.DoModal();
}


void CExpressionDlg::OnImportFASTA()
{
	ImportFASTA Dlg;
	if(Dlg.DoModal()==IDOK)
	{
		this->m_DNA_Sequence=Dlg.m_FASTA;
		this->m_header=Dlg.m_FASTA_header;
	}
	UpdateData(FALSE);
}


//void CExpressionDlg::OnBnClickedButton12()
//{
//	
//}


void CExpressionDlg::OnCDSSelect()
{
	long start,end,difference;

	UpdateData(1);

	CCDSSelect Dlg;
	if(Dlg.DoModal()==IDOK)
	{
		if(Dlg.m_CDS_from>Dlg.m_CDS_to)
			MessageBox(L"Sorry, the CDS startpoint is larger than the end point. Please check!",L"CDS Region Error",MB_OK|MB_ICONINFORMATION);
		else if(Dlg.m_CDS_to>this->m_BasePairs)
			MessageBox(L"Sorry, the end point is exceed the amount of the nucleoc acid base pairs. Please check!",L"End Point Excceed",MB_OK|MB_ICONINFORMATION);
		else
		{
			start=Dlg.m_CDS_from-1;
			end=Dlg.m_CDS_to-1;
			difference=end-start;
			this->m_RNA_Sequence=this->m_RNA_Sequence.Mid(start,difference);
			UpdateData(0);
		}
	}
}