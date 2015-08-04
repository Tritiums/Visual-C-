#pragma once


// CAboutAminoAcids dialog

class CAboutAminoAcids : public CDialogEx
{
	DECLARE_DYNAMIC(CAboutAminoAcids)

public:
	CAboutAminoAcids(CWnd* pParent = NULL);   // standard constructor
	virtual ~CAboutAminoAcids();

// Dialog Data
	enum { IDD = IDD_DIALOG3 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
