#if !defined(AFX_ADDNEWRECORD_H__CABDB90C_0204_4A3E_84E7_E25AAA628E99__INCLUDED_)
#define AFX_ADDNEWRECORD_H__CABDB90C_0204_4A3E_84E7_E25AAA628E99__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AddNewRecord.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// AddNewRecord dialog

class AddNewRecord : public CDialog
{
// Construction
public:
	AddNewRecord(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(AddNewRecord)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(AddNewRecord)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(AddNewRecord)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADDNEWRECORD_H__CABDB90C_0204_4A3E_84E7_E25AAA628E99__INCLUDED_)
