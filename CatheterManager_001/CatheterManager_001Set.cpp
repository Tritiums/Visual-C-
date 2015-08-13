// CatheterManager_001Set.cpp : implementation of the CCatheterManager_001Set class
//

#include "stdafx.h"
#include "CatheterManager_001.h"
#include "CatheterManager_001Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCatheterManager_001Set implementation

IMPLEMENT_DYNAMIC(CCatheterManager_001Set, CRecordset)

CCatheterManager_001Set::CCatheterManager_001Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CCatheterManager_001Set)
	m_ID = _T("");
	m_abbreviation = _T("");
	m_name = _T("");
	m_type = _T("");
	m_date = 0;
	m_number = 0;
	m_customer = _T("");
	m_manufacturer = _T("");
	m_retailer = _T("");
	m_operator = _T("");
	m_assistant = _T("");
	m_manager = _T("");
	m_manu_information = _T("");
	m_manu_contact = _T("");
	m_manu_post_code = _T("");
	m_manu_telephone = _T("");
	m_void_001 = 0;
	m_void_002 = 0;
	m_void_003 = _T("");
	m_void_004 = _T("");
	m_void_005 = _T("");
	m_void_006 = _T("");
	m_void_007 = _T("");
	m_void_008 = _T("");
	m_void_009 = _T("");
	m_void_010 = _T("");
	m_void_011 = _T("");
	m_void_012 = _T("");
	m_void_013 = _T("");
	m_void_014 = _T("");
	m_void_015 = _T("");
	m_void_016 = _T("");
	m_void_017 = _T("");
	m_void_018 = _T("");
	m_void_019 = _T("");
	m_void_020 = _T("");
	m_void_021 = _T("");
	m_void_022 = _T("");
	m_void_023 = _T("");
	m_void_024 = _T("");
	m_void_025 = _T("");
	m_nFields = 41;
	//}}AFX_FIELD_INIT
	m_nDefaultType = dynaset;
}

CString CCatheterManager_001Set::GetDefaultConnect()
{
	return _T("ODBC;DSN=CatheterManager_001");
}

CString CCatheterManager_001Set::GetDefaultSQL()
{
	return _T("[form_001]");
}

void CCatheterManager_001Set::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CCatheterManager_001Set)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[abbreviation]"), m_abbreviation);
	RFX_Text(pFX, _T("[name]"), m_name);
	RFX_Text(pFX, _T("[type]"), m_type);
	RFX_Date(pFX, _T("[date]"), m_date);
	RFX_Long(pFX, _T("[number]"), m_number);
	RFX_Text(pFX, _T("[customer]"), m_customer);
	RFX_Text(pFX, _T("[manufacturer]"), m_manufacturer);
	RFX_Text(pFX, _T("[retailer]"), m_retailer);
	RFX_Text(pFX, _T("[operator]"), m_operator);
	RFX_Text(pFX, _T("[assistant]"), m_assistant);
	RFX_Text(pFX, _T("[manager]"), m_manager);
	RFX_Text(pFX, _T("[manu_information]"), m_manu_information);
	RFX_Text(pFX, _T("[manu_contact]"), m_manu_contact);
	RFX_Text(pFX, _T("[manu_post_code]"), m_manu_post_code);
	RFX_Text(pFX, _T("[manu_telephone]"), m_manu_telephone);
	RFX_Double(pFX, _T("[void_001]"), m_void_001);
	RFX_Double(pFX, _T("[void_002]"), m_void_002);
	RFX_Text(pFX, _T("[void_003]"), m_void_003);
	RFX_Text(pFX, _T("[void_004]"), m_void_004);
	RFX_Text(pFX, _T("[void_005]"), m_void_005);
	RFX_Text(pFX, _T("[void_006]"), m_void_006);
	RFX_Text(pFX, _T("[void_007]"), m_void_007);
	RFX_Text(pFX, _T("[void_008]"), m_void_008);
	RFX_Text(pFX, _T("[void_009]"), m_void_009);
	RFX_Text(pFX, _T("[void_010]"), m_void_010);
	RFX_Text(pFX, _T("[void_011]"), m_void_011);
	RFX_Text(pFX, _T("[void_012]"), m_void_012);
	RFX_Text(pFX, _T("[void_013]"), m_void_013);
	RFX_Text(pFX, _T("[void_014]"), m_void_014);
	RFX_Text(pFX, _T("[void_015]"), m_void_015);
	RFX_Text(pFX, _T("[void_016]"), m_void_016);
	RFX_Text(pFX, _T("[void_017]"), m_void_017);
	RFX_Text(pFX, _T("[void_018]"), m_void_018);
	RFX_Text(pFX, _T("[void_019]"), m_void_019);
	RFX_Text(pFX, _T("[void_020]"), m_void_020);
	RFX_Text(pFX, _T("[void_021]"), m_void_021);
	RFX_Text(pFX, _T("[void_022]"), m_void_022);
	RFX_Text(pFX, _T("[void_023]"), m_void_023);
	RFX_Text(pFX, _T("[void_024]"), m_void_024);
	RFX_Text(pFX, _T("[void_025]"), m_void_025);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CCatheterManager_001Set diagnostics

#ifdef _DEBUG
void CCatheterManager_001Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CCatheterManager_001Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
