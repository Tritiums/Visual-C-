// MotionSpecialist VistaView.h : interface of the CMotionSpecialistVistaView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MOTIONSPECIALISTVISTAVIEW_H__9C35B113_CAC3_479E_9748_79905DF84C06__INCLUDED_)
#define AFX_MOTIONSPECIALISTVISTAVIEW_H__9C35B113_CAC3_479E_9748_79905DF84C06__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CMotionSpecialistVistaSet;

class CMotionSpecialistVistaView : public CRecordView
{
protected: // create from serialization only
	CMotionSpecialistVistaView();
	DECLARE_DYNCREATE(CMotionSpecialistVistaView)

public:
	//{{AFX_DATA(CMotionSpecialistVistaView)
	enum { IDD = IDD_MOTIONSPECIALISTVISTA_FORM };
	CComboBox	m_lecture_order_output;
	CComboBox	m_lecture_noon_output;
	CComboBox	m_hotel_output;
	CComboBox	m_arrival_output;
	CComboBox	m_gender_output;
	CProgressCtrl	m_Add_Progress;
	CProgressCtrl	m_Save_Progress;
	CProgressCtrl	m_Progress;
	CComboBox	m_sponsor_search;
	CComboBox	m_province_search;
	CListCtrl	m_Record_List;
	CMotionSpecialistVistaSet* m_pSet;
	CString	m_ID_output;
	CString	m_name_output;
	CString	m_abbreviation_output;
	CString	m_profession_output;
	CString	m_title_output;
	CString	m_major_output;
	CString	m_means_output;
	CString	m_type_output;
	CString	m_hospital_output;
	CString	m_department_output;
	CString	m_address_output;
	CString	m_postcode_output;
	CString	m_sponsor_output;
	CString	m_abbreviation_input;
	CString	m_ID_input;
	CString	m_telephone_output;
	CString	m_mobile_output;
	CString	m_city_output;
	CString	m_email_output;
	CString	m_fax_output;
	int		m_number_sponsor;
	CString	m_hospital_search;
	CString	m_lecture_output;
	CString	m_home_telephone_output;
	int		m_length_output;
	CString	m_shortnumber_output;
	CString	m_indicator_output;
	CString	m_writer_output;
	CString	m_spokesman_output;
	CString	m_article_output;
	CString	m_comment_output;
	CString	m_personal_ID_output;
	CString	m_marker_output;
	CString	m_age_output;
	CString	m_class_1_output;
	CString	m_class_2_output;
	CString	m_class_3_output;
	CTime	m_lecture_date_output;
	//}}AFX_DATA

// Attributes
public:
	CMotionSpecialistVistaDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMotionSpecialistVistaView)
	public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	//}}AFX_VIRTUAL

// Implementation
public:
	void ShowDirector();
	void ShowRegisteredScientific();
	void ShowRegisteredPresidium();
	void ShowFavorableSubscriber();
	void ShowReply();
	void ShowSpecialRepresentative();
	void ShowBlankPostCode();
	void ShowWriterNotSent();
	void ShowWriterSent();
	void ShowSponsor();
	void ShowSpokesman();
	void ShowSponsored();
	void ShowWriter();
	void ShowRegisteredAccommodated();
	void ShowRegisteredFavorableSubscriber();
	void ShowRegisteredSubscriber();
	void ShowRegistered();
	void ShowSubscriber();
	void ShowRepresentative();
	void ShowAcademicCouncil();
	void ShowChairman();
	void MakeReadOnly();
	void OnActivateRandom_plain();
	void DisplayRecordContent_protected();
	void DisplayRecordContent();
	void SeperateRow(int i);
	int m_RangeTo;
	int m_RangeFrom;
	void ProgressInitiation();
	virtual ~CMotionSpecialistVistaView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMotionSpecialistVistaView)
	afx_msg void OnBrowse();
	afx_msg void OnSearch();
	afx_msg void OnDoubleClickListControl(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnSave();
	afx_msg void OnActiveRandom();
	afx_msg void OnCaptureAddress();
	afx_msg void OnLectureLen();
	afx_msg void OnArticleLen();
	afx_msg void OnCommentLen();
	afx_msg void OnMajorLen();
	afx_msg void OnIDSearch();
	afx_msg void OnFileSave();
	afx_msg void OnClear();
	afx_msg void OnHospitalSearch();
	afx_msg void OnLocationSearch();
	afx_msg void OnUploadSponsor();
	afx_msg void OnArrivalCheck();
	afx_msg void OnHotelCheck();
	afx_msg void OnAdvancedSearch();
	afx_msg void OnAddNew();
	afx_msg void OnDelete();
	afx_msg void OnDeleteRecordListItem();
	afx_msg void OnExportRecord();
	afx_msg void OnExportEnvelope();
	afx_msg void OnPrint();
	afx_msg void OnAbout();
	afx_msg void OnFileNew();
	afx_msg void OnButton27();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MotionSpecialist VistaView.cpp
inline CMotionSpecialistVistaDoc* CMotionSpecialistVistaView::GetDocument()
   { return (CMotionSpecialistVistaDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MOTIONSPECIALISTVISTAVIEW_H__9C35B113_CAC3_479E_9748_79905DF84C06__INCLUDED_)
