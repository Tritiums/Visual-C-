// onetwo.h : main header file for the ONETWO application
//

#if !defined(AFX_ONETWO_H__BE1E42F0_DC0A_49BB_AC35_0F8D82CEE3BA__INCLUDED_)
#define AFX_ONETWO_H__BE1E42F0_DC0A_49BB_AC35_0F8D82CEE3BA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols
#include "Onetwo_i.h"

/////////////////////////////////////////////////////////////////////////////
// COnetwoApp:
// See onetwo.cpp for the implementation of this class
//

class COnetwoApp : public CWinApp
{
public:
	COnetwoApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COnetwoApp)
	public:
	virtual BOOL InitInstance();
		virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(COnetwoApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	BOOL m_bATLInited;
private:
	BOOL InitATL();
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ONETWO_H__BE1E42F0_DC0A_49BB_AC35_0F8D82CEE3BA__INCLUDED_)
