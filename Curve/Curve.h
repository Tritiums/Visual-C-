// Curve.h : main header file for the CURVE application
//

#if !defined(AFX_CURVE_H__CBEAD41C_4EBC_4852_B1EC_04525818ECC0__INCLUDED_)
#define AFX_CURVE_H__CBEAD41C_4EBC_4852_B1EC_04525818ECC0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CCurveApp:
// See Curve.cpp for the implementation of this class
//

class CCurveApp : public CWinApp
{
public:
	CCurveApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCurveApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CCurveApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CURVE_H__CBEAD41C_4EBC_4852_B1EC_04525818ECC0__INCLUDED_)
