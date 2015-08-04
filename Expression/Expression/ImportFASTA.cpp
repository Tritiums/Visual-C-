// ImportFASTA.cpp : implementation file
//

#include "stdafx.h"
#include "Expression.h"
#include "ImportFASTA.h"
#include "afxdialogex.h"


// ImportFASTA dialog

IMPLEMENT_DYNAMIC(ImportFASTA, CDialogEx)

ImportFASTA::ImportFASTA(CWnd* pParent /*=NULL*/)
	: CDialogEx(ImportFASTA::IDD, pParent)
{

	m_FASTA = _T("");
	m_FASTA_header = _T("");
	m_count = 0;
}

ImportFASTA::~ImportFASTA()
{
}

void ImportFASTA::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT4, m_FASTA);
	DDX_Text(pDX, IDC_EDIT1, m_FASTA_header);
	DDX_Text(pDX, IDC_EDIT2, m_count);
}


BEGIN_MESSAGE_MAP(ImportFASTA, CDialogEx)
//	ON_BN_CLICKED(IDC_BUTTON5, &ImportFASTA::OnGetFfa)
	ON_BN_CLICKED(IDC_BUTTON5, &ImportFASTA::OnGetFASTFile)
	ON_BN_CLICKED(IDOK, &ImportFASTA::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &ImportFASTA::OnBnClickedCancel)
END_MESSAGE_MAP()


// ImportFASTA message handlers


//void ImportFASTA::OnGetFfa()
//{
//	
//}


void ImportFASTA::OnGetFASTFile()
{
	CString szFilter=L"generic FASTA (*.fas)|*.fas|FASTA nucleic acid (*.fna)|*.fna|FASTA nucleotide coding regions (*.ffn)|*.ffn|FASTA amino acid (*.faa)|*.faa|FASTA non=coding RNA (*.frn)|*.frn|All File (*.*)|*.*";
	CString PathNameRaw,PathName=L"",PathNameCurrent,Line=L"",StringCurrent,String=L"";
	int i=0,j;
	char Header[1000]={0},wRead[200][200]={0};
	FILE *fp;

	UpdateData(TRUE);

	///////////Open File Dialog

	CFileDialog FileDlg(TRUE,NULL,NULL,OFN_HIDEREADONLY,szFilter);

	if(FileDlg.DoModal()==IDOK)
	{
		PathNameRaw=FileDlg.GetPathName();

		for(i=0;i<PathNameRaw.GetLength();i++)
		{
			PathNameCurrent=PathNameRaw.Mid(i,1);

			if(PathNameRaw.Mid(i,1)=="\\")
			{
				PathNameCurrent="\\\\";
			}
			PathName=PathName+PathNameCurrent;
		}	

		USES_CONVERSION; //Allow the conversion from CString to char *

		fp=fopen(T2A(PathName),"r");

		fgets(Header,1000,fp);

		this->m_FASTA_header=Header;
		
		/////////////////////////////////////////////////////////////////

		while(!feof(fp))
		{
			fgets(wRead[i],200,fp);
			i++;
		}

	
		this->m_count=i;

		for(j=0;j<=i;j++)
		{
			String=wRead[j];
			this->m_FASTA=this->m_FASTA+String;
		}

		UpdateData(FALSE);

		fclose(fp);
	}
}


void ImportFASTA::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnOK();
}


void ImportFASTA::OnBnClickedCancel()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnCancel();
}
