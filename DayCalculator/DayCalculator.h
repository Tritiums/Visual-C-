// DayCalculator.h : main header file for the DAYCALCULATOR application
//

#if !defined(AFX_DAYCALCULATOR_H__779B36E0_EED0_4C07_A42C_D0E2131C6AC1__INCLUDED_)
#define AFX_DAYCALCULATOR_H__779B36E0_EED0_4C07_A42C_D0E2131C6AC1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CDayCalculatorApp:
// See DayCalculator.cpp for the implementation of this class
//

class CDayCalculatorApp : public CWinApp
{
public:
	CDayCalculatorApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDayCalculatorApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CDayCalculatorApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DAYCALCULATOR_H__779B36E0_EED0_4C07_A42C_D0E2131C6AC1__INCLUDED_)
