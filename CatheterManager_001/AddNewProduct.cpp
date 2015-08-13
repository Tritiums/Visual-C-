// AddNewProduct.cpp : implementation file
//

#include "stdafx.h"
#include "CatheterManager_001.h"
#include "AddNewProduct.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// AddNewProduct dialog


AddNewProduct::AddNewProduct(CWnd* pParent /*=NULL*/)
	: CDialog(AddNewProduct::IDD, pParent)
{
	//{{AFX_DATA_INIT(AddNewProduct)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void AddNewProduct::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(AddNewProduct)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(AddNewProduct, CDialog)
	//{{AFX_MSG_MAP(AddNewProduct)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// AddNewProduct message handlers
