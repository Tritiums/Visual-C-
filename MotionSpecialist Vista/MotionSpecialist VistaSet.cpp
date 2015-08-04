// MotionSpecialist VistaSet.cpp : implementation of the CMotionSpecialistVistaSet class
//

#include "stdafx.h"
#include "MotionSpecialist Vista.h"
#include "MotionSpecialist VistaSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMotionSpecialistVistaSet implementation

IMPLEMENT_DYNAMIC(CMotionSpecialistVistaSet, CRecordset)

CMotionSpecialistVistaSet::CMotionSpecialistVistaSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CMotionSpecialistVistaSet)
	m_ID = _T("");
	m_abbreviation = _T("");
	m_name = _T("");
	m_gender = _T("");
	m_class_1 = _T("");
	m_class_2 = _T("");
	m_class_3 = _T("");
	m_class_4 = _T("");
	m_profession = _T("");
	m_title = _T("");
	m_means = _T("");
	m_type = _T("");
	m_hospital = _T("");
	m_department = _T("");
	m_address = _T("");
	m_post_code = _T("");
	m_city = _T("");
	m_telephone = _T("");
	m_mobile_phone = _T("");
	m_email = _T("");
	m_fax = _T("");
	m_sponsor = _T("");
	m_article = _T("");
	m_hotel = _T("");
	m_shortnumber = _T("");
	m_arrival = _T("");
	m_major = _T("");
	m_home_telephone = _T("");
	m_lecture = _T("");
	m_indicator = _T("");
	m_writer = _T("");
	m_spokesman = _T("");
	m_comment = _T("");
	m_void_00 = _T("");
	m_void_01 = _T("");
	m_void_02 = _T("");
	m_void_03 = _T("");
	m_void_04 = _T("");
	m_void_05 = _T("");
	m_reserve_00 = _T("");
	m_reserve_01 = _T("");
	m_reserve_02 = _T("");
	m_reserve_03 = _T("");
	m_reserve_04 = _T("");
	m_reserve_05 = _T("");
	m_reserve_06 = _T("");
	m_reserve_07 = _T("");
	m_reserve_08 = _T("");
	m_reserve_09 = _T("");
	m_reserve_10 = _T("");
	m_reserve_11 = _T("");
	m_reserve_12 = _T("");
	m_reserve_13 = _T("");
	m_personal_ID = _T("");
	m_marker = _T("");
	m_reserve_16 = _T("");
	m_reserve_17 = _T("");
	m_reserve_18 = _T("");
	m_reserve_19 = _T("");
	m_reserve_20 = _T("");
	m_reserve_21 = _T("");
	m_reserve_22 = _T("");
	m_reserve_23 = _T("");
	m_reserve_24 = _T("");
	m_reserve_25 = _T("");
	m_reserve_26 = _T("");
	m_reserve_27 = _T("");
	m_lecture_order = _T("");
	m_lecture_noon = _T("");
	m_lecture_date = 0;
	m_nFields = 70;
	//}}AFX_FIELD_INIT
	m_nDefaultType = dynaset;
}

CString CMotionSpecialistVistaSet::GetDefaultConnect()
{
	return _T("ODBC;DSN=MotionConnectivity");
}

CString CMotionSpecialistVistaSet::GetDefaultSQL()
{
	return _T("[specialist]");
}

void CMotionSpecialistVistaSet::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CMotionSpecialistVistaSet)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[abbreviation]"), m_abbreviation);
	RFX_Text(pFX, _T("[name]"), m_name);
	RFX_Text(pFX, _T("[gender]"), m_gender);
	RFX_Text(pFX, _T("[class_1]"), m_class_1);
	RFX_Text(pFX, _T("[class_2]"), m_class_2);
	RFX_Text(pFX, _T("[class_3]"), m_class_3);
	RFX_Text(pFX, _T("[class_4]"), m_class_4);
	RFX_Text(pFX, _T("[profession]"), m_profession);
	RFX_Text(pFX, _T("[title]"), m_title);
	RFX_Text(pFX, _T("[means]"), m_means);
	RFX_Text(pFX, _T("[type]"), m_type);
	RFX_Text(pFX, _T("[hospital]"), m_hospital);
	RFX_Text(pFX, _T("[department]"), m_department);
	RFX_Text(pFX, _T("[address]"), m_address);
	RFX_Text(pFX, _T("[post_code]"), m_post_code);
	RFX_Text(pFX, _T("[city]"), m_city);
	RFX_Text(pFX, _T("[telephone]"), m_telephone);
	RFX_Text(pFX, _T("[mobile_phone]"), m_mobile_phone);
	RFX_Text(pFX, _T("[email]"), m_email);
	RFX_Text(pFX, _T("[fax]"), m_fax);
	RFX_Text(pFX, _T("[sponsor]"), m_sponsor);
	RFX_Text(pFX, _T("[article]"), m_article);
	RFX_Text(pFX, _T("[hotel]"), m_hotel);
	RFX_Text(pFX, _T("[shortnumber]"), m_shortnumber);
	RFX_Text(pFX, _T("[arrival]"), m_arrival);
	RFX_Text(pFX, _T("[major]"), m_major);
	RFX_Text(pFX, _T("[home_telephone]"), m_home_telephone);
	RFX_Text(pFX, _T("[lecture]"), m_lecture);
	RFX_Text(pFX, _T("[indicator]"), m_indicator);
	RFX_Text(pFX, _T("[writer]"), m_writer);
	RFX_Text(pFX, _T("[spokesman]"), m_spokesman);
	RFX_Text(pFX, _T("[comment]"), m_comment);
	RFX_Text(pFX, _T("[void_00]"), m_void_00);
	RFX_Text(pFX, _T("[void_01]"), m_void_01);
	RFX_Text(pFX, _T("[void_02]"), m_void_02);
	RFX_Text(pFX, _T("[void_03]"), m_void_03);
	RFX_Text(pFX, _T("[void_04]"), m_void_04);
	RFX_Text(pFX, _T("[void_05]"), m_void_05);
	RFX_Text(pFX, _T("[reserve_00]"), m_reserve_00);
	RFX_Text(pFX, _T("[reserve_01]"), m_reserve_01);
	RFX_Text(pFX, _T("[reserve_02]"), m_reserve_02);
	RFX_Text(pFX, _T("[reserve_03]"), m_reserve_03);
	RFX_Text(pFX, _T("[reserve_04]"), m_reserve_04);
	RFX_Text(pFX, _T("[reserve_05]"), m_reserve_05);
	RFX_Text(pFX, _T("[reserve_06]"), m_reserve_06);
	RFX_Text(pFX, _T("[reserve_07]"), m_reserve_07);
	RFX_Text(pFX, _T("[reserve_08]"), m_reserve_08);
	RFX_Text(pFX, _T("[reserve_09]"), m_reserve_09);
	RFX_Text(pFX, _T("[reserve_10]"), m_reserve_10);
	RFX_Text(pFX, _T("[reserve_11]"), m_reserve_11);
	RFX_Text(pFX, _T("[reserve_12]"), m_reserve_12);
	RFX_Text(pFX, _T("[reserve_13]"), m_reserve_13);
	RFX_Text(pFX, _T("[personal_ID]"), m_personal_ID);
	RFX_Text(pFX, _T("[marker]"), m_marker);
	RFX_Text(pFX, _T("[reserve_16]"), m_reserve_16);
	RFX_Text(pFX, _T("[reserve_17]"), m_reserve_17);
	RFX_Text(pFX, _T("[reserve_18]"), m_reserve_18);
	RFX_Text(pFX, _T("[reserve_19]"), m_reserve_19);
	RFX_Text(pFX, _T("[reserve_20]"), m_reserve_20);
	RFX_Text(pFX, _T("[reserve_21]"), m_reserve_21);
	RFX_Text(pFX, _T("[reserve_22]"), m_reserve_22);
	RFX_Text(pFX, _T("[reserve_23]"), m_reserve_23);
	RFX_Text(pFX, _T("[reserve_24]"), m_reserve_24);
	RFX_Text(pFX, _T("[reserve_25]"), m_reserve_25);
	RFX_Text(pFX, _T("[reserve_26]"), m_reserve_26);
	RFX_Text(pFX, _T("[reserve_27]"), m_reserve_27);
	RFX_Text(pFX, _T("[lecture_order]"), m_lecture_order);
	RFX_Text(pFX, _T("[lecture_noon]"), m_lecture_noon);
	RFX_Date(pFX, _T("[lecture_date]"), m_lecture_date);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CMotionSpecialistVistaSet diagnostics

#ifdef _DEBUG
void CMotionSpecialistVistaSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMotionSpecialistVistaSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
