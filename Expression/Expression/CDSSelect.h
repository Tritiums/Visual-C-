#pragma once


// CCDSSelect dialog

class CCDSSelect : public CDialogEx
{
	DECLARE_DYNAMIC(CCDSSelect)

public:
	CCDSSelect(CWnd* pParent = NULL);   // standard constructor
	virtual ~CCDSSelect();

// Dialog Data
	enum { IDD = IDD_DIALOG5 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	long m_CDS_from;
	long m_CDS_to;
};
