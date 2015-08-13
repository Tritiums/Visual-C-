#if !defined(AFX_ADDNEWPRODUCT_H__1E5262AB_44E7_44B0_9B38_CC83F8243E78__INCLUDED_)
#define AFX_ADDNEWPRODUCT_H__1E5262AB_44E7_44B0_9B38_CC83F8243E78__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AddNewProduct.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// AddNewProduct dialog

class AddNewProduct : public CDialog
{
// Construction
public:
	AddNewProduct(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(AddNewProduct)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(AddNewProduct)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(AddNewProduct)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADDNEWPRODUCT_H__1E5262AB_44E7_44B0_9B38_CC83F8243E78__INCLUDED_)
