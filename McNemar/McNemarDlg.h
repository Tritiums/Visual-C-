// McNemarDlg.h : header file
//

#if !defined(AFX_MCNEMARDLG_H__BD31D259_1A40_4F02_B877_74CD136390B4__INCLUDED_)
#define AFX_MCNEMARDLG_H__BD31D259_1A40_4F02_B877_74CD136390B4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMcNemarDlg dialog

class CMcNemarDlg : public CDialog
{
// Construction
public:
	CMcNemarDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMcNemarDlg)
	enum { IDD = IDD_MCNEMAR_DIALOG };
	float	m_a;
	float	m_b;
	float	m_c;
	float	m_d;
	float	m_chisq;
	CString	m_symbo1;
	CString	m_symbo2;
	float	m_or;
	float	m_orl;
	float	m_oru;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMcNemarDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMcNemarDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	afx_msg void OnButton3();
	afx_msg void OnButton2();
	afx_msg void OnAbout();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MCNEMARDLG_H__BD31D259_1A40_4F02_B877_74CD136390B4__INCLUDED_)
