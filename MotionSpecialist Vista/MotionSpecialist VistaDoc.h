// MotionSpecialist VistaDoc.h : interface of the CMotionSpecialistVistaDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MOTIONSPECIALISTVISTADOC_H__947750A3_6B72_49E8_A9FB_ADD1A6352C3B__INCLUDED_)
#define AFX_MOTIONSPECIALISTVISTADOC_H__947750A3_6B72_49E8_A9FB_ADD1A6352C3B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "MotionSpecialist VistaSet.h"


class CMotionSpecialistVistaDoc : public CDocument
{
protected: // create from serialization only
	CMotionSpecialistVistaDoc();
	DECLARE_DYNCREATE(CMotionSpecialistVistaDoc)

// Attributes
public:
	CMotionSpecialistVistaSet m_motionSpecialistVistaSet;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMotionSpecialistVistaDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMotionSpecialistVistaDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMotionSpecialistVistaDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MOTIONSPECIALISTVISTADOC_H__947750A3_6B72_49E8_A9FB_ADD1A6352C3B__INCLUDED_)
