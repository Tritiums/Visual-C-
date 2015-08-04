#if !defined(AFX_ABOUTMOTIONSPECIALISTVISTA_H__84290E60_7DC9_4022_8F46_F36CDE4AB711__INCLUDED_)
#define AFX_ABOUTMOTIONSPECIALISTVISTA_H__84290E60_7DC9_4022_8F46_F36CDE4AB711__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AboutMotionSpecialistVista.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// AboutMotionSpecialistVista dialog

class AboutMotionSpecialistVista : public CDialog
{
// Construction
public:
	AboutMotionSpecialistVista(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(AboutMotionSpecialistVista)
	enum { IDD = IDD_ABOUTBOX1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(AboutMotionSpecialistVista)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(AboutMotionSpecialistVista)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ABOUTMOTIONSPECIALISTVISTA_H__84290E60_7DC9_4022_8F46_F36CDE4AB711__INCLUDED_)
