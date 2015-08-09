#if !defined(AFX_ABOUTABSORCON_H__59AC9D4F_0A0D_4C5D_BB79_1AD3F35A9139__INCLUDED_)
#define AFX_ABOUTABSORCON_H__59AC9D4F_0A0D_4C5D_BB79_1AD3F35A9139__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AboutAbsorcon.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CAboutAbsorcon dialog

class CAboutAbsorcon : public CDialog
{
// Construction
public:
	CAboutAbsorcon(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CAboutAbsorcon)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutAbsorcon)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CAboutAbsorcon)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ABOUTABSORCON_H__59AC9D4F_0A0D_4C5D_BB79_1AD3F35A9139__INCLUDED_)
