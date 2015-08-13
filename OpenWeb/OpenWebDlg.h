// OpenWebDlg.h : header file
//

#if !defined(AFX_OPENWEBDLG_H__48A58680_FF6D_4F57_82A3_8D5DE84CCCF1__INCLUDED_)
#define AFX_OPENWEBDLG_H__48A58680_FF6D_4F57_82A3_8D5DE84CCCF1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// COpenWebDlg dialog

class COpenWebDlg : public CDialog
{
// Construction
public:
	COpenWebDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(COpenWebDlg)
	enum { IDD = IDD_OPENWEB_DIALOG };
	int		m_pointer;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COpenWebDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(COpenWebDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_OPENWEBDLG_H__48A58680_FF6D_4F57_82A3_8D5DE84CCCF1__INCLUDED_)
