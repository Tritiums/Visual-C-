#if !defined(AFX_PROTECTEDPASSWORDAQUISITION_H__7D487016_1CCC_4987_B25B_F3EA0EE5D08E__INCLUDED_)
#define AFX_PROTECTEDPASSWORDAQUISITION_H__7D487016_1CCC_4987_B25B_F3EA0EE5D08E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ProtectedPasswordAquisition.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ProtectedPasswordAquisition dialog

class ProtectedPasswordAquisition : public CDialog
{
// Construction
public:
	ProtectedPasswordAquisition(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(ProtectedPasswordAquisition)
	enum { IDD = IDD_DIALOG5 };
	CString	m_name_show;
	CString	m_password_add;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ProtectedPasswordAquisition)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(ProtectedPasswordAquisition)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROTECTEDPASSWORDAQUISITION_H__7D487016_1CCC_4987_B25B_F3EA0EE5D08E__INCLUDED_)
