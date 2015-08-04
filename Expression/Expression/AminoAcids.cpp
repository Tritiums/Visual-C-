// AminoAcids.cpp : implementation file
//

#include "stdafx.h"
#include "Expression.h"
#include "AminoAcids.h"


// CAminoAcids

IMPLEMENT_DYNAMIC(CAminoAcids, CWnd)

CAminoAcids::CAminoAcids()
{

}

CAminoAcids::~CAminoAcids()
{
}


BEGIN_MESSAGE_MAP(CAminoAcids, CWnd)
END_MESSAGE_MAP()



// CAminoAcids message handlers


// AminoAcids.cpp : implementation file
//

#include "stdafx.h"
#include "Expression.h"
#include "AminoAcids.h"
#include "afxdialogex.h"


// CAminoAcids dialog

IMPLEMENT_DYNAMIC(CAminoAcids, CDialog)

CAminoAcids::CAminoAcids(CWnd* pParent /*=NULL*/)
	: CDialog(CAminoAcids::IDD, pParent)
{

}

CAminoAcids::~CAminoAcids()
{
}

void CAminoAcids::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CAminoAcids, CDialog)
END_MESSAGE_MAP()


// CAminoAcids message handlers
