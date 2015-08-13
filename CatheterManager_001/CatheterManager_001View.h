// CatheterManager_001View.h : interface of the CCatheterManager_001View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CATHETERMANAGER_001VIEW_H__89A714BC_5FFA_4915_910C_F8E1A4289352__INCLUDED_)
#define AFX_CATHETERMANAGER_001VIEW_H__89A714BC_5FFA_4915_910C_F8E1A4289352__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CCatheterManager_001Set;

class CCatheterManager_001View : public CRecordView
{
protected: // create from serialization only
	CCatheterManager_001View();
	DECLARE_DYNCREATE(CCatheterManager_001View)

public:
	//{{AFX_DATA(CCatheterManager_001View)
	enum { IDD = IDD_CATHETERMANAGER_001_FORM };
	CComboBox	m_manufacturer_date_input;
	CComboBox	m_name_date_input;
	CComboBox	m_name_customer_input;
	CComboBox	m_manufacturer_output;
	CComboBox	m_retailer_output;
	CComboBox	m_type_output;
	CComboBox	m_name_output;
	CComboBox	m_abbreviation_output;
	CListCtrl	m_Record_List;
	CCatheterManager_001Set* m_pSet;
	CTime	m_begin_input;
	CTime	m_deadline_input;
	CString	m_ID_input;
	CTime	m_date_output;
	double	m_price_output;
	double	m_import_output;
	double	m_total_output;
	CString	m_customer_output;
	CString	m_diagnosis_output;
	CString	m_operator_output;
	CString	m_assistant_output;
	CString	m_manager_output;
	CString	m_message_product_output;
	CString	m_message_patient_output;
	CString	m_ID_output;
	CString	m_patient_abbreviation_output;
	long	m_number_output;
	CString	m_customer_abbreviation_input;
	long	m_number_each_product_output;
	long	m_number_record_output;
	BOOL	m_name_date_check;
	BOOL	m_manufacturer_date_check;
	//}}AFX_DATA

// Attributes
public:
	CCatheterManager_001Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCatheterManager_001View)
	public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCatheterManager_001View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCatheterManager_001View)
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	afx_msg void OnEditchangeCombo1();
	afx_msg void OnButton5();
	afx_msg void OnButton6();
	afx_msg void OnDblclkList1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnButton7();
	afx_msg void OnButton8();
	afx_msg void OnCheck1();
	afx_msg void OnCheck2();
	afx_msg void OnButton9();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in CatheterManager_001View.cpp
inline CCatheterManager_001Doc* CCatheterManager_001View::GetDocument()
   { return (CCatheterManager_001Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CATHETERMANAGER_001VIEW_H__89A714BC_5FFA_4915_910C_F8E1A4289352__INCLUDED_)
