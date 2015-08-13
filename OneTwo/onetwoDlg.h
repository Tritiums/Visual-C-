// onetwoDlg.h : header file
//

#if !defined(AFX_ONETWODLG_H__7C93F4E1_2A8B_4965_A521_5E972C063C7F__INCLUDED_)
#define AFX_ONETWODLG_H__7C93F4E1_2A8B_4965_A521_5E972C063C7F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// COnetwoDlg dialog

class COnetwoDlg : public CDialog
{
// Construction
public:
	COnetwoDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(COnetwoDlg)
	enum { IDD = IDD_ONETWO_DIALOG };
	float	m_result1;
	float	m_a;
	float	m_b;
	float	m_c;
	float	m_result2;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COnetwoDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(COnetwoDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnCompute();
	afx_msg void OnClose();
	afx_msg void OnAbout();
	afx_msg void OnExit();
	afx_msg void OnMAbout();
	afx_msg void OnChangeEdit2();
	afx_msg void OnChangeEdit1();
	afx_msg void OnChangeEdit3();
	afx_msg void OnChangeEdit4();
	afx_msg void OnMenuitem32774();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ONETWODLG_H__7C93F4E1_2A8B_4965_A521_5E972C063C7F__INCLUDED_)
