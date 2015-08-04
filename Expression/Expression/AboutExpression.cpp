// AboutExpression.cpp : implementation file
//

#include "stdafx.h"
#include "Expression.h"
#include "AboutExpression.h"
#include "afxdialogex.h"


// CAboutExpression dialog

IMPLEMENT_DYNAMIC(CAboutExpression, CDialogEx)

CAboutExpression::CAboutExpression(CWnd* pParent /*=NULL*/)
	: CDialogEx(CAboutExpression::IDD, pParent)
{

}

CAboutExpression::~CAboutExpression()
{
}

void CAboutExpression::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CAboutExpression, CDialogEx)
END_MESSAGE_MAP()


// CAboutExpression message handlers
