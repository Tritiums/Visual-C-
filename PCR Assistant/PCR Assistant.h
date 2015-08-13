// PCR Assistant.h : main header file for the PCR ASSISTANT application
//

#if !defined(AFX_PCRASSISTANT_H__EDA0A8FA_261F_4A8B_BFA3_5A8362476D8E__INCLUDED_)
#define AFX_PCRASSISTANT_H__EDA0A8FA_261F_4A8B_BFA3_5A8362476D8E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CPCRAssistantApp:
// See PCR Assistant.cpp for the implementation of this class
//

class CPCRAssistantApp : public CWinApp
{
public:

	CPCRAssistantApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPCRAssistantApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CPCRAssistantApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PCRASSISTANT_H__EDA0A8FA_261F_4A8B_BFA3_5A8362476D8E__INCLUDED_)
