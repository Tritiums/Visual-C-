#pragma once


// CAminoAcid dialog

class CAminoAcid : public CDialog
{
	DECLARE_DYNAMIC(CAminoAcid)

public:
	CAminoAcid(CWnd* pParent = NULL);   // standard constructor
	virtual ~CAminoAcid();

// Dialog Data
	enum { IDD = IDD_AMINOACIDS };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
