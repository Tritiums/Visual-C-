#if !defined(AFX_ADVANCEDSEARCH_H__E191DA44_53B5_4537_AFF1_1BC5FCA4810F__INCLUDED_)
#define AFX_ADVANCEDSEARCH_H__E191DA44_53B5_4537_AFF1_1BC5FCA4810F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AdvancedSearch.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// AdvancedSearch dialog

class AdvancedSearch : public CDialog
{
// Construction
public:
	CString sponsor_advanced;
	int m_ButtonID;
	AdvancedSearch(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(AdvancedSearch)
	enum { IDD = IDD_DIALOG3 };
	CComboBox	m_sponsor_advanced_search;
	CString	m_shortnumber_advanced;
	CString	m_mobile_phone_advanced;
	CString	m_department_advanced;
	CTime	m_lecture_date_add;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(AdvancedSearch)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(AdvancedSearch)
	afx_msg void OnOk2();
	afx_msg void OnOk3();
	afx_msg void OnOk4();
	afx_msg void OnOk5();
	afx_msg void OnOk6();
	afx_msg void OnOk7();
	afx_msg void OnOk11();
	afx_msg void OnOk12();
	afx_msg void OnOk8();
	afx_msg void OnButton1();
	afx_msg void OnOk9();
	afx_msg void OnOk10();
	afx_msg void OnOk13();
	afx_msg void OnOk15();
	afx_msg void OnOk16();
	afx_msg void OnOk14();
	afx_msg void OnOk18();
	afx_msg void OnOk19();
	afx_msg void OnOk20();
	afx_msg void OnOk21();
	afx_msg void OnOk22();
	afx_msg void OnOk23();
	afx_msg void OnOk24();
	afx_msg void OnOk25();
	afx_msg void OnOk26();
	afx_msg void OnUploadSponsor();
	afx_msg void OnOk27();
	afx_msg void OnOk28();
	afx_msg void OnOk17();
	afx_msg void OnOk29();
	afx_msg void OnOk30();
	afx_msg void OnOk31();
	afx_msg void OnOk32();
	afx_msg void OnOk33();
	afx_msg void OnOk34();
	afx_msg void OnOk35();
	afx_msg void OnOk36();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADVANCEDSEARCH_H__E191DA44_53B5_4537_AFF1_1BC5FCA4810F__INCLUDED_)
