// CatheterManager_001Set.h : interface of the CCatheterManager_001Set class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CATHETERMANAGER_001SET_H__84B044C1_916A_4DDB_BF82_BF78199D0A0A__INCLUDED_)
#define AFX_CATHETERMANAGER_001SET_H__84B044C1_916A_4DDB_BF82_BF78199D0A0A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CCatheterManager_001Set : public CRecordset
{
public:
	CCatheterManager_001Set(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CCatheterManager_001Set)

// Field/Param Data
	//{{AFX_FIELD(CCatheterManager_001Set, CRecordset)
	CString	m_ID;
	CString	m_abbreviation;
	CString	m_name;
	CString	m_type;
	CTime	m_date;
	long	m_number;
	CString	m_customer;
	CString	m_manufacturer;
	CString	m_retailer;
	CString	m_operator;
	CString	m_assistant;
	CString	m_manager;
	CString	m_manu_information;
	CString	m_manu_contact;
	CString	m_manu_post_code;
	CString	m_manu_telephone;
	double	m_void_001;
	double	m_void_002;
	CString	m_void_003;
	CString	m_void_004;
	CString	m_void_005;
	CString	m_void_006;
	CString	m_void_007;
	CString	m_void_008;
	CString	m_void_009;
	CString	m_void_010;
	CString	m_void_011;
	CString	m_void_012;
	CString	m_void_013;
	CString	m_void_014;
	CString	m_void_015;
	CString	m_void_016;
	CString	m_void_017;
	CString	m_void_018;
	CString	m_void_019;
	CString	m_void_020;
	CString	m_void_021;
	CString	m_void_022;
	CString	m_void_023;
	CString	m_void_024;
	CString	m_void_025;
	//}}AFX_FIELD

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCatheterManager_001Set)
	public:
	virtual CString GetDefaultConnect();	// Default connection string
	virtual CString GetDefaultSQL(); 	// default SQL for Recordset
	virtual void DoFieldExchange(CFieldExchange* pFX);	// RFX support
	//}}AFX_VIRTUAL

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CATHETERMANAGER_001SET_H__84B044C1_916A_4DDB_BF82_BF78199D0A0A__INCLUDED_)

