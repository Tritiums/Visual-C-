#pragma once


// CAboutExpression dialog

class CAboutExpression : public CDialogEx
{
	DECLARE_DYNAMIC(CAboutExpression)

public:
	CAboutExpression(CWnd* pParent = NULL);   // standard constructor
	virtual ~CAboutExpression();

// Dialog Data
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
