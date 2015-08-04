// AboutBases.cpp : implementation file
//

#include "stdafx.h"
#include "Expression.h"
#include "AboutBases.h"
#include "afxdialogex.h"


// CAboutBases dialog

IMPLEMENT_DYNAMIC(CAboutBases, CDialogEx)

CAboutBases::CAboutBases(CWnd* pParent /*=NULL*/)
	: CDialogEx(CAboutBases::IDD, pParent)
{

}

CAboutBases::~CAboutBases()
{
}

void CAboutBases::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CAboutBases, CDialogEx)
END_MESSAGE_MAP()


// CAboutBases message handlers
