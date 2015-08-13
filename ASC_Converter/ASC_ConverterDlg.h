// ASC_ConverterDlg.h : header file
//

#if !defined(AFX_ASC_CONVERTERDLG_H__92622341_F3EA_4345_A1CE_9B8F40722095__INCLUDED_)
#define AFX_ASC_CONVERTERDLG_H__92622341_F3EA_4345_A1CE_9B8F40722095__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CASC_ConverterDlg dialog

class CASC_ConverterDlg : public CDialog
{
// Construction
public:
	CASC_ConverterDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CASC_ConverterDlg)
	enum { IDD = IDD_ASC_CONVERTER_DIALOG };
	int		m_num;
	CString	m_char;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CASC_ConverterDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CASC_ConverterDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnConvert();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ASC_CONVERTERDLG_H__92622341_F3EA_4345_A1CE_9B8F40722095__INCLUDED_)
