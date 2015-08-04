#if !defined(AFX_SURETODELETE_H__8025F087_AE2D_40A7_834B_B8945616957C__INCLUDED_)
#define AFX_SURETODELETE_H__8025F087_AE2D_40A7_834B_B8945616957C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SureToDelete.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// SureToDelete dialog

class SureToDelete : public CDialog
{
// Construction
public:
	SureToDelete(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(SureToDelete)
	enum { IDD = IDD_DIALOG2 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(SureToDelete)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(SureToDelete)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SURETODELETE_H__8025F087_AE2D_40A7_834B_B8945616957C__INCLUDED_)
