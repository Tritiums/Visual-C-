#pragma once


// ImportFASTA dialog

class ImportFASTA : public CDialogEx
{
	DECLARE_DYNAMIC(ImportFASTA)

public:
	ImportFASTA(CWnd* pParent = NULL);   // standard constructor
	virtual ~ImportFASTA();

// Dialog Data
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CString m_FASTA;
//	afx_msg void OnGetFfa();
	afx_msg void OnGetFASTFile();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	CString m_FASTA_header;
	int m_count;
};
