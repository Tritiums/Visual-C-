#if !defined(AFX_PASSWORDAQUISITION_H__FBCA27DA_C942_48B1_B5CB_7ACB21240AC6__INCLUDED_)
#define AFX_PASSWORDAQUISITION_H__FBCA27DA_C942_48B1_B5CB_7ACB21240AC6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// PasswordAquisition.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// PasswordAquisition dialog

class PasswordAquisition : public CDialog
{
// Construction
public:
	PasswordAquisition(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(PasswordAquisition)
	enum { IDD = IDD_DIALOG4 };
	CString	m_password_input;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(PasswordAquisition)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(PasswordAquisition)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PASSWORDAQUISITION_H__FBCA27DA_C942_48B1_B5CB_7ACB21240AC6__INCLUDED_)
