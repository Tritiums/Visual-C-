// CatheterManager_001Doc.h : interface of the CCatheterManager_001Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CATHETERMANAGER_001DOC_H__7D2B6E67_F9A5_439B_A11F_80D9496BEC60__INCLUDED_)
#define AFX_CATHETERMANAGER_001DOC_H__7D2B6E67_F9A5_439B_A11F_80D9496BEC60__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "CatheterManager_001Set.h"


class CCatheterManager_001Doc : public CDocument
{
protected: // create from serialization only
	CCatheterManager_001Doc();
	DECLARE_DYNCREATE(CCatheterManager_001Doc)

// Attributes
public:
	CCatheterManager_001Set m_catheterManager_001Set;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCatheterManager_001Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCatheterManager_001Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCatheterManager_001Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CATHETERMANAGER_001DOC_H__7D2B6E67_F9A5_439B_A11F_80D9496BEC60__INCLUDED_)
