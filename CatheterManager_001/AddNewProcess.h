#if !defined(AFX_ADDNEWPROCESS_H__390F387D_9B59_45AD_9356_3EC3E6B13FF6__INCLUDED_)
#define AFX_ADDNEWPROCESS_H__390F387D_9B59_45AD_9356_3EC3E6B13FF6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AddNewProcess.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// AddNewProcess dialog

class AddNewProcess : public CDialog
{
// Construction
public:
	AddNewProcess(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(AddNewProcess)
	enum { IDD = IDD_DIALOG1 };
	CComboBox	m_type_add;
	CComboBox	m_name_add;
	CComboBox	m_abbreviation_add;
	CString	m_ID_add;
	long	m_number_add;
	CString	m_customer_add;
	CString	m_patient_abbreviation_add;
	CString	m_diagnosis_add;
	CString	m_operator_add;
	CString	m_assistant_add;
	CString	m_manager_add;
	CString abbreviationStr;
	CString nameStr;
	CString typeStr;
	CTime	m_date_add;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(AddNewProcess)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(AddNewProcess)
	afx_msg void OnLoadList();
	afx_msg void OnCancel3();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADDNEWPROCESS_H__390F387D_9B59_45AD_9356_3EC3E6B13FF6__INCLUDED_)
