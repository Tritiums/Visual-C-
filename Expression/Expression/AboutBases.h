#pragma once


// CAboutBases dialog

class CAboutBases : public CDialogEx
{
	DECLARE_DYNAMIC(CAboutBases)

public:
	CAboutBases(CWnd* pParent = NULL);   // standard constructor
	virtual ~CAboutBases();

// Dialog Data
	enum { IDD = IDD_DIALOG4 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
