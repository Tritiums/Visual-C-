#pragma once


// CAA dialog

class CAA : public CDialogEx
{
	DECLARE_DYNAMIC(CAA)

public:
	CAA(CWnd* pParent = NULL);   // standard constructor
	virtual ~CAA();

// Dialog Data
	enum { IDD = IDD_AA };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
