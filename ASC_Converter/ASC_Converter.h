// ASC_Converter.h : main header file for the ASC_CONVERTER application
//

#if !defined(AFX_ASC_CONVERTER_H__976BE63B_AEC1_40E8_86C4_A5EB0C1C6ECC__INCLUDED_)
#define AFX_ASC_CONVERTER_H__976BE63B_AEC1_40E8_86C4_A5EB0C1C6ECC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CASC_ConverterApp:
// See ASC_Converter.cpp for the implementation of this class
//

class CASC_ConverterApp : public CWinApp
{
public:
	CASC_ConverterApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CASC_ConverterApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CASC_ConverterApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ASC_CONVERTER_H__976BE63B_AEC1_40E8_86C4_A5EB0C1C6ECC__INCLUDED_)
