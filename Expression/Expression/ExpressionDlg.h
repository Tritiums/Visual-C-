
// ExpressionDlg.h : header file
//

#pragma once


// CExpressionDlg dialog
class CExpressionDlg : public CDialogEx
{
// Construction
public:
	CExpressionDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_EXPRESSION_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString m_RNA_Sequence;
//	CString Translate(CString Codon);
//	virtual HRESULT accDoDefaultAction(VARIANT varChild);
	CString Translate(CString Codon);
//	afx_msg void OnBnClickedButton1();
	afx_msg void OnTranslate();
	CString m_Peptide_Abbreviation;
	afx_msg void OnAboutExpression();
	afx_msg void OnArrange();
	afx_msg void OnExport();
	CString Translate_Initial(CString Codon);
	CString m_Peptide_Initial;
	CString Transcript(CString DNA);
	afx_msg void OnExit();
	CString m_DNA_Sequence;
	afx_msg void OnTranscript();
//	afx_msg void OnBnClickedButton7();
	afx_msg void OnDNAArrange();
	long m_BasePairs;
	long m_Residues;
	afx_msg void OnReverseTranscript();
	CString m_cDNA_Sequence;
	CString ReverseTranscript(CString RNA);
	afx_msg void OnAminoAcids();
	afx_msg void OnBases();
	afx_msg void OnImportFASTA();
//	afx_msg void OnBnClickedButton12();
	afx_msg void OnCDSSelect();
	CString m_header;
};
