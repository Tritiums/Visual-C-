// MotionSpecialist Vista.h : main header file for the MOTIONSPECIALIST VISTA application
//

#if !defined(AFX_MOTIONSPECIALISTVISTA_H__8D1AD99F_BAD3_45D4_88C9_E016CDE158DB__INCLUDED_)
#define AFX_MOTIONSPECIALISTVISTA_H__8D1AD99F_BAD3_45D4_88C9_E016CDE158DB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMotionSpecialistVistaApp:
// See MotionSpecialist Vista.cpp for the implementation of this class
//

class CMotionSpecialistVistaApp : public CWinApp
{
public:
	CMotionSpecialistVistaApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMotionSpecialistVistaApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMotionSpecialistVistaApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MOTIONSPECIALISTVISTA_H__8D1AD99F_BAD3_45D4_88C9_E016CDE158DB__INCLUDED_)
