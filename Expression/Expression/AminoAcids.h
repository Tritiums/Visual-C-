#pragma once


// CAminoAcids

class CAminoAcids : public CWnd
{
	DECLARE_DYNAMIC(CAminoAcids)

public:
	CAminoAcids();
	virtual ~CAminoAcids();

protected:
	DECLARE_MESSAGE_MAP()
};


#pragma once


// CAminoAcids dialog

class CAminoAcids : public CDialog
{
	DECLARE_DYNAMIC(CAminoAcids)

public:
	CAminoAcids(CWnd* pParent = NULL);   // standard constructor
	virtual ~CAminoAcids();

// Dialog Data
	enum { IDD = IDD_AMINOACIDS };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
