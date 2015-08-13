// PCR AssistantDlg.h : header file
//

#if !defined(AFX_PCRASSISTANTDLG_H__230F950D_459F_4292_90A7_B0C449E3524D__INCLUDED_)
#define AFX_PCRASSISTANTDLG_H__230F950D_459F_4292_90A7_B0C449E3524D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CPCRAssistantDlg dialog

class CPCRAssistantDlg : public CDialog
{
// Construction
public:
	CPCRAssistantDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CPCRAssistantDlg)
	enum { IDD = IDD_PCRASSISTANT_DIALOG };
	double	m_Ct_a2;
	double	m_Ct_a1;
	double	m_Ct_a3;
	double	m_Ct_a4;
	double	m_Ct_a5;
	double	m_Ct_a6;
	double	m_Ct_a7;
	double	m_Ct_a8;
	double	m_Ct_a9;
	double	m_Ct_a10;
	double	m_Ct_a11;
	double	m_Ct_a12;
	double	m_Ct_b1;
	double	m_Ct_b2;
	double	m_Ct_b3;
	double	m_Ct_b4;
	double	m_Ct_b5;
	double	m_Ct_b6;
	double	m_Ct_b7;
	double	m_Ct_b8;
	double	m_Ct_b9;
	double	m_Ct_b10;
	double	m_Ct_b11;
	double	m_Ct_b12;
	double	m_Ct_c1;
	double	m_Ct_c2;
	double	m_Ct_c3;
	double	m_Ct_c4;
	double	m_Ct_c5;
	double	m_Ct_c6;
	double	m_Ct_c7;
	double	m_Ct_c8;
	double	m_Ct_c9;
	double	m_Ct_c10;
	double	m_Ct_c11;
	double	m_Ct_c12;
	double	m_Ct_d1;
	double	m_Ct_d2;
	double	m_Ct_d3;
	double	m_Ct_d4;
	double	m_Ct_d5;
	double	m_Ct_d6;
	double	m_Ct_d7;
	double	m_Ct_d8;
	double	m_Ct_d9;
	double	m_Ct_d10;
	double	m_Ct_d11;
	double	m_Ct_d12;
	double	m_Ct_e1;
	double	m_Ct_e2;
	double	m_Ct_e3;
	double	m_Ct_e4;
	double	m_Ct_e5;
	double	m_Ct_e6;
	double	m_Ct_e7;
	double	m_Ct_e8;
	double	m_Ct_e9;
	double	m_Ct_e10;
	double	m_Ct_e11;
	double	m_Ct_e12;
	double	m_Ct_f1;
	double	m_Ct_f2;
	double	m_Ct_f3;
	double	m_Ct_f4;
	double	m_Ct_f5;
	double	m_Ct_f6;
	double	m_Ct_f7;
	double	m_Ct_f8;
	double	m_Ct_f9;
	double	m_Ct_f10;
	double	m_Ct_f11;
	double	m_Ct_f12;
	double	m_Ct_g1;
	double	m_Ct_g2;
	double	m_Ct_g3;
	double	m_Ct_g4;
	double	m_Ct_g5;
	double	m_Ct_g6;
	double	m_Ct_g7;
	double	m_Ct_g8;
	double	m_Ct_g9;
	double	m_Ct_g10;
	double	m_Ct_g11;
	double	m_Ct_g12;
	double	m_Ct_h1;
	double	m_Ct_h2;
	double	m_Ct_h3;
	double	m_Ct_h4;
	double	m_Ct_h5;
	double	m_Ct_h6;
	double	m_Ct_h7;
	double	m_Ct_h8;
	double	m_Ct_h9;
	double	m_Ct_h10;
	double	m_Ct_h11;
	double	m_Ct_h12;
	double	m_Endogenous_Control_Average;
	double	m_Target_Control_Average;
	double	m_Target_Average_4;
	double	m_Target_Average_5;
	double	m_Target_Average_6;
	double	m_Target_Average_7;
	double	m_Target_Average_8;
	double	m_Target_Average_9;
	double	m_Target_Average_10;
	double	m_Target_Average_11;
	double	m_Target_Average_12;
	double	m_Endogenous_Average_4;
	double	m_Endogenous_Average_5;
	double	m_Endogenous_Average_6;
	double	m_Endogenous_Average_7;
	double	m_Endogenous_Average_8;
	double	m_Endogenous_Average_9;
	double	m_Endogenous_Average_10;
	double	m_Endogenous_Average_11;
	double	m_Endogenous_Average_12;
	double	m_Delta_Control;
	double	m_Delta_4;
	double	m_Delta_5;
	double	m_Delta_6;
	double	m_Delta_7;
	double	m_Delta_8;
	double	m_Delta_9;
	double	m_Delta_10;
	double	m_Delta_11;
	double	m_Delta_12;
	double	m_DeltaDelta_4;
	double	m_DeltaDelta_5;
	double	m_DeltaDelta_6;
	double	m_DeltaDelta_7;
	double	m_DeltaDelta_8;
	double	m_DeltaDelta_9;
	double	m_DeltaDelta_10;
	double	m_DeltaDelta_11;
	double	m_DeltaDelta_12;
	double	m_Relative_Expression_4;
	double	m_Relative_Expression_5;
	double	m_Relative_Expression_6;
	double	m_Relative_Expression_7;
	double	m_Relative_Expression_8;
	double	m_Relative_Expression_9;
	double	m_Relative_Expression_10;
	double	m_Relative_Expression_11;
	double	m_Relative_Expression_12;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPCRAssistantDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CPCRAssistantDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnLoad();
	afx_msg void OnAverage();
	afx_msg void OnDelta();
	afx_msg void OnExponent();
	afx_msg void OnExit();
	afx_msg void OnExport();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PCRASSISTANTDLG_H__230F950D_459F_4292_90A7_B0C449E3524D__INCLUDED_)
