// DayCalculatorDlg.h : header file
//

#if !defined(AFX_DAYCALCULATORDLG_H__9FDA2FEB_6345_434A_8C5F_2BCDF9C57BFB__INCLUDED_)
#define AFX_DAYCALCULATORDLG_H__9FDA2FEB_6345_434A_8C5F_2BCDF9C57BFB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CDayCalculatorDlg dialog

class CDayCalculatorDlg : public CDialog
{
// Construction
public:
	CDayCalculatorDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CDayCalculatorDlg)
	enum { IDD = IDD_DAYCALCULATOR_DIALOG };
	CTime	m_date_from;
	CTime	m_date_to;
	int		m_days;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDayCalculatorDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CDayCalculatorDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnCalculate();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DAYCALCULATORDLG_H__9FDA2FEB_6345_434A_8C5F_2BCDF9C57BFB__INCLUDED_)
