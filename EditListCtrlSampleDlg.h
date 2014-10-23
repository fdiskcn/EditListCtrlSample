// EditListCtrlSampleDlg.h : header file
//

#if !defined(AFX_EDITLISTCTRLSAMPLEDLG_H__B902422C_71DA_4134_864B_84EE5EC5F234__INCLUDED_)
#define AFX_EDITLISTCTRLSAMPLEDLG_H__B902422C_71DA_4134_864B_84EE5EC5F234__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CEditListCtrlSampleDlg dialog
#include "EditListCtrl.h"

class CEditListCtrlSampleDlg : public CDialog
{
// Construction
public:
	CEditListCtrlSampleDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CEditListCtrlSampleDlg)
	enum { IDD = IDD_EDITLISTCTRLSAMPLE_DIALOG };
	CListCtrl	m_ListCtrl;
	CEditListCtrl	m_EditListCtrl;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEditListCtrlSampleDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CEditListCtrlSampleDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnEndlabeleditList1(NMHDR* pNMHDR, LRESULT* pResult);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EDITLISTCTRLSAMPLEDLG_H__B902422C_71DA_4134_864B_84EE5EC5F234__INCLUDED_)
