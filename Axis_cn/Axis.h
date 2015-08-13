// Axis.h : main header file for the AXIS application
//

#if !defined(AFX_AXIS_H__F3737311_D9BA_405F_919C_337665C3D83F__INCLUDED_)
#define AFX_AXIS_H__F3737311_D9BA_405F_919C_337665C3D83F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CAxisApp:
// See Axis.cpp for the implementation of this class
//

class CAxisApp : public CWinApp
{
public:
	CAxisApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAxisApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CAxisApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AXIS_H__F3737311_D9BA_405F_919C_337665C3D83F__INCLUDED_)
