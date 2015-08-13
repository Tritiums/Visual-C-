// CurveView.h : interface of the CCurveView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CURVEVIEW_H__E8200472_12CF_4F9F_8568_18BB2833E276__INCLUDED_)
#define AFX_CURVEVIEW_H__E8200472_12CF_4F9F_8568_18BB2833E276__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCurveView : public CView
{
protected: // create from serialization only
	CCurveView();
	DECLARE_DYNCREATE(CCurveView)

// Attributes
public:
	CCurveDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCurveView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCurveView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCurveView)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in CurveView.cpp
inline CCurveDoc* CCurveView::GetDocument()
   { return (CCurveDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CURVEVIEW_H__E8200472_12CF_4F9F_8568_18BB2833E276__INCLUDED_)
