// OpenWeb.h : main header file for the OPENWEB application
//

#if !defined(AFX_OPENWEB_H__E179FD4D_F51E_44C7_A759_DA9CB2FAE739__INCLUDED_)
#define AFX_OPENWEB_H__E179FD4D_F51E_44C7_A759_DA9CB2FAE739__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// COpenWebApp:
// See OpenWeb.cpp for the implementation of this class
//

class COpenWebApp : public CWinApp
{
public:
	COpenWebApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COpenWebApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(COpenWebApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_OPENWEB_H__E179FD4D_F51E_44C7_A759_DA9CB2FAE739__INCLUDED_)