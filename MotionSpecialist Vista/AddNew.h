#if !defined(AFX_ADDNEW_H__A7AEE262_D6E5_4774_8ECC_11D978BBB26E__INCLUDED_)
#define AFX_ADDNEW_H__A7AEE262_D6E5_4774_8ECC_11D978BBB26E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AddNew.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// AddNew dialog

class AddNew : public CDialog
{
// Construction
public:
	AddNew(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(AddNew)
	enum { IDD = IDD_DIALOG1 };
	BOOL	m_gender_m_input;
	BOOL	m_gender_f_input;
	CString	m_ID_add;
	CString	m_department_add;
	CString	m_address_add;
	CString	m_class2_add;
	CString	m_class3_add;
	CString	m_sponsor_add;
	CString	m_profession_add;
	CString	m_telephone_add;
	CString	m_mobile_add;
	CString	m_city_add;
	CString	m_abbreviation_add;
	CString	m_email_add;
	CString	m_postcode_add;
	CString	m_hotel_add;
	CString	m_fax_add;
	CString	m_arrival_add;
	CString	m_major_add;
	CString	m_article_add;
	CString	m_name_add;
	CString	m_title_add;
	CString	m_gender_add;
	CString	m_class1_add;
	CString	m_means_add;
	CString	m_type_add;
	CString	m_hospital_add;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(AddNew)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(AddNew)
	afx_msg void OnSave();
	afx_msg void OnCancel();
	afx_msg void OnAbout();
	afx_msg void OnArrival();
	afx_msg void OnCheck1();
	afx_msg void OnCheck2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADDNEW_H__A7AEE262_D6E5_4774_8ECC_11D978BBB26E__INCLUDED_)
