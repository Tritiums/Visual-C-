#if !defined(AFX_FONT_H__1FF723DD_F7E5_490C_A799_A8F260E50E40__INCLUDED_)
#define AFX_FONT_H__1FF723DD_F7E5_490C_A799_A8F260E50E40__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// font.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// font dialog

class font : public CFontDialog
{
	DECLARE_DYNAMIC(font)

public:
	font(LPLOGFONT lplfInitial = NULL,
		DWORD dwFlags = CF_EFFECTS | CF_SCREENFONTS,
		CDC* pdcPrinter = NULL,
		CWnd* pParentWnd = NULL);
#ifndef _AFX_NO_RICHEDIT_SUPPORT
	font(const CHARFORMAT& charformat,
		DWORD dwFlags = CF_SCREENFONTS,
		CDC* pdcPrinter = NULL,
		CWnd* pParentWnd = NULL);
#endif

protected:
	//{{AFX_MSG(font)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FONT_H__1FF723DD_F7E5_490C_A799_A8F260E50E40__INCLUDED_)
