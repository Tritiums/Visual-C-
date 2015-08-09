// AbsorCon.h : main header file for the ABSORCON application
//

#if !defined(AFX_ABSORCON_H__41F45D2A_DB9A_4CB2_8FF4_9C58B31274FB__INCLUDED_)
#define AFX_ABSORCON_H__41F45D2A_DB9A_4CB2_8FF4_9C58B31274FB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CAbsorConApp:
// See AbsorCon.cpp for the implementation of this class
//

class CAbsorConApp : public CWinApp
{
public:
	CAbsorConApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAbsorConApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CAbsorConApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ABSORCON_H__41F45D2A_DB9A_4CB2_8FF4_9C58B31274FB__INCLUDED_)
