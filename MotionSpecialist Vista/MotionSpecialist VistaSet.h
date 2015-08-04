// MotionSpecialist VistaSet.h : interface of the CMotionSpecialistVistaSet class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MOTIONSPECIALISTVISTASET_H__D86ABADF_1CF4_42F7_AFFB_0FD835334281__INCLUDED_)
#define AFX_MOTIONSPECIALISTVISTASET_H__D86ABADF_1CF4_42F7_AFFB_0FD835334281__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CMotionSpecialistVistaSet : public CRecordset
{
public:
	CMotionSpecialistVistaSet(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CMotionSpecialistVistaSet)

// Field/Param Data
	//{{AFX_FIELD(CMotionSpecialistVistaSet, CRecordset)
	CString	m_ID;
	CString	m_abbreviation;
	CString	m_name;
	CString	m_gender;
	CString	m_class_1;
	CString	m_class_2;
	CString	m_class_3;
	CString	m_class_4;
	CString	m_profession;
	CString	m_title;
	CString	m_means;
	CString	m_type;
	CString	m_hospital;
	CString	m_department;
	CString	m_address;
	CString	m_post_code;
	CString	m_city;
	CString	m_telephone;
	CString	m_mobile_phone;
	CString	m_email;
	CString	m_fax;
	CString	m_sponsor;
	CString	m_article;
	CString	m_hotel;
	CString	m_shortnumber;
	CString	m_arrival;
	CString	m_major;
	CString	m_home_telephone;
	CString	m_lecture;
	CString	m_indicator;
	CString	m_writer;
	CString	m_spokesman;
	CString	m_comment;
	CString	m_void_00;
	CString	m_void_01;
	CString	m_void_02;
	CString	m_void_03;
	CString	m_void_04;
	CString	m_void_05;
	CString	m_reserve_00;
	CString	m_reserve_01;
	CString	m_reserve_02;
	CString	m_reserve_03;
	CString	m_reserve_04;
	CString	m_reserve_05;
	CString	m_reserve_06;
	CString	m_reserve_07;
	CString	m_reserve_08;
	CString	m_reserve_09;
	CString	m_reserve_10;
	CString	m_reserve_11;
	CString	m_reserve_12;
	CString	m_reserve_13;
	CString	m_personal_ID;
	CString	m_marker;
	CString	m_reserve_16;
	CString	m_reserve_17;
	CString	m_reserve_18;
	CString	m_reserve_19;
	CString	m_reserve_20;
	CString	m_reserve_21;
	CString	m_reserve_22;
	CString	m_reserve_23;
	CString	m_reserve_24;
	CString	m_reserve_25;
	CString	m_reserve_26;
	CString	m_reserve_27;
	CString	m_lecture_order;
	CString	m_lecture_noon;
	CTime	m_lecture_date;
	//}}AFX_FIELD

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMotionSpecialistVistaSet)
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

#endif // !defined(AFX_MOTIONSPECIALISTVISTASET_H__D86ABADF_1CF4_42F7_AFFB_0FD835334281__INCLUDED_)

