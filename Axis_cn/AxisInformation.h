#if !defined(AFX_AXISINFORMATION_H__0F96B551_F0DB_4752_99E6_93F9B6DC8FB8__INCLUDED_)
#define AFX_AXISINFORMATION_H__0F96B551_F0DB_4752_99E6_93F9B6DC8FB8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AxisInformation.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// AxisInformation dialog

class AxisInformation : public CDialog
{
// Construction
public:
	AxisInformation(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(AxisInformation)
	enum { IDD = IDD_ABOUTBOX1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(AxisInformation)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(AxisInformation)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AXISINFORMATION_H__0F96B551_F0DB_4752_99E6_93F9B6DC8FB8__INCLUDED_)
