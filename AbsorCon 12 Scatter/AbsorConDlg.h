// AbsorConDlg.h : header file
//

#if !defined(AFX_ABSORCONDLG_H__8DD6DEE7_9BA4_4863_8BAC_053BD978AB64__INCLUDED_)
#define AFX_ABSORCONDLG_H__8DD6DEE7_9BA4_4863_8BAC_053BD978AB64__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

         

/////////////////////////////////////////////////////////////////////////////
// CAbsorConDlg dialog

class CAbsorConDlg : public CDialog
{


// Construction
public:
	CAbsorConDlg(CWnd* pParent = NULL);	// standard constructor


// Dialog Data
	//{{AFX_DATA(CAbsorConDlg)
	enum { IDD = IDD_ABSORCON_DIALOG };
	float	m_a1_loading;
	float	m_a2_loading;
	float	m_a3_loading;
	float	m_a4_loading;
	float	m_a5_loading;
	float	m_a6_loading;
	float	m_a7_loading;
	float	m_a8_loading;
	float	m_a9_loading;
	float	m_a10_loading;
	float	m_a11_loading;
	float	m_a12_loading;
	float	m_temperature_loading;
	float	m_b1_loading;
	float	m_b2_loading;
	float	m_b3_loading;
	float	m_b4_loading;
	float	m_b5_loading;
	float	m_b6_loading;
	float	m_b7_loading;
	float	m_b8_loading;
	float	m_b9_loading;
	float	m_b10_loading;
	float	m_b11_loading;
	float	m_b12_loading;
	float	m_c1_loading;
	float	m_c2_loading;
	float	m_c3_loading;
	float	m_c4_loading;
	float	m_c5_loading;
	float	m_c6_loading;
	float	m_c7_loading;
	float	m_c8_loading;
	float	m_c9_loading;
	float	m_c10_loading;
	float	m_c11_loading;
	float	m_c12_loading;
	float	m_d1_loading;
	float	m_d2_loading;
	float	m_d3_loading;
	float	m_d4_loading;
	float	m_d5_loading;
	float	m_d6_loading;
	float	m_d7_loading;
	float	m_d8_loading;
	float	m_d9_loading;
	float	m_d10_loading;
	float	m_d11_loading;
	float	m_d12_loading;
	float	m_e1_loading;
	float	m_e2_loading;
	float	m_e3_loading;
	float	m_e4_loading;
	float	m_e5_loading;
	float	m_e6_loading;
	float	m_e7_loading;
	float	m_e8_loading;
	float	m_e9_loading;
	float	m_e10_loading;
	float	m_e11_loading;
	float	m_e12_loading;
	float	m_f1_loading;
	float	m_f2_loading;
	float	m_f3_loading;
	float	m_f4_loading;
	float	m_f5_loading;
	float	m_f6_loading;
	float	m_f7_loading;
	float	m_f8_loading;
	float	m_f9_loading;
	float	m_f10_loading;
	float	m_f11_loading;
	float	m_f12_loading;
	float	m_g1_loading;
	float	m_g2_loading;
	float	m_g3_loading;
	float	m_g4_loading;
	float	m_g5_loading;
	float	m_g6_loading;
	float	m_g7_loading;
	float	m_g8_loading;
	float	m_g9_loading;
	float	m_g10_loading;
	float	m_g11_loading;
	float	m_g12_loading;
	float	m_h1_loading;
	float	m_h2_loading;
	float	m_h3_loading;
	float	m_h4_loading;
	float	m_h5_loading;
	float	m_h6_loading;
	float	m_h7_loading;
	float	m_h8_loading;
	float	m_h9_loading;
	float	m_h10_loading;
	float	m_h11_loading;
	float	m_h12_loading;
	float	m_b_output;
	float	m_standard_concentration_1;
	float	m_standard_concentration_2;
	float	m_standard_concentration_3;
	float	m_standard_concentration_4;
	float	m_standard_concentration_5;
	float	m_standard_concentration_6;
	float	m_standard_concentration_7;
	float	m_standard_concentration_8;
	float	m_standard_concentration_9;
	float	m_standard_concentration_10;
	float	m_standard_concentration_11;
	float	m_standard_concentration_12;
	float	m_sample_concentration_1;
	float	m_sample_concentration_2;
	float	m_sample_concentration_3;
	float	m_sample_concentration_4;
	float	m_sample_concentration_5;
	float	m_sample_concentration_6;
	float	m_sample_average_1;
	float	m_sample_average_2;
	float	m_sample_average_3;
	float	m_sample_average_4;
	float	m_sample_average_5;
	float	m_sample_average_6;
	float	m_loading_volum_1;
	float	m_loading_volum_2;
	float	m_loading_volum_3;
	float	m_loading_volum_4;
	float	m_loading_volum_5;
	float	m_loading_volum_6;
	float	m_correlation_output;
	float	m_sample_concentration_7;
	float	m_sample_concentration_8;
	float	m_sample_concentration_9;
	float	m_sample_concentration_10;
	float	m_sample_concentration_11;
	float	m_sample_concentration_12;
	float	m_loading_volum_7;
	float	m_loading_volum_8;
	float	m_loading_volum_9;
	float	m_loading_volum_10;
	float	m_loading_volum_11;
	float	m_loading_volum_12;
	float	m_dividende;

	

	



	//}}AFX_DATA

	
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAbsorConDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	////////////////////////////////////******* Chuan Add This! ************///////////////////////////////////////////////

	CWnd *pWnd;              
	CDC *pDC;        

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// Generated message map functions
	//{{AFX_MSG(CAbsorConDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnLoad();
	afx_msg void OnEmpty();
	afx_msg void OnLine();
	afx_msg void OnAverageSample();
	afx_msg void OnSampleConcentration();
	afx_msg void OnLoadingVolum();
	afx_msg void OnExport();
	afx_msg void OnQuit();
	afx_msg void OnAboutAbsorcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ABSORCONDLG_H__8DD6DEE7_9BA4_4863_8BAC_053BD978AB64__INCLUDED_)
