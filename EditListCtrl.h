#if !defined(AFX_EDITLISTCTRL_H__A02CE0B0_FF7B_4A54_8570_12B03905EC3E__INCLUDED_)
#define AFX_EDITLISTCTRL_H__A02CE0B0_FF7B_4A54_8570_12B03905EC3E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// EditListCtrl.h : header file
//

#include <set>
#include <map>

/////////////////////////////////////////////////////////////////////////////
//CItemEdit window

class CItemEdit : public CEdit
{
	// Construction
public:
	CItemEdit();
	
	// Attributes
public:
	
	// Operations
public:
	
	// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CItemEdit)
	//}}AFX_VIRTUAL
	
	// Implementation
public:
	int m_iXPos;
	virtual ~CItemEdit();
	
	// Generated message map functions
protected:
	//{{AFX_MSG(CItemEdit)
	afx_msg void OnWindowPosChanging(WINDOWPOS FAR* lpwndpos);
	//}}AFX_MSG
	
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// CEditListCtrl window

class CEditListCtrl : public CListCtrl
{
// Construction
public:
	CEditListCtrl();

	// Non-editable cells
	enum NONEDIT_TYPE {
		NONEDIT_BY_COL,
		NONEDIT_BY_ROW,
	};
	typedef std::set<int> INT_SET;
	typedef std::set<int>::iterator INT_SET_IT;
	typedef std::map<NONEDIT_TYPE, INT_SET> INT_SET_MAP;
	typedef std::map<NONEDIT_TYPE, INT_SET>::iterator INT_SET_MAP_IT;

	INT_SET_MAP nonEdit; // NONEDIT_BY_COL,NONEDIT_BY_ROW case

	void Initialize();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEditListCtrl)
	protected:
	virtual void PreSubclassWindow();
	virtual BOOL NonEditCell(int iRow, int iCol);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CEditListCtrl();

	// Generated message map functions
protected:
	//{{AFX_MSG(CEditListCtrl)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnPaint();
	afx_msg void OnBeginlabeledit(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnEndlabeledit(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnKillFocus(CWnd* pNewWnd);
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	//}}AFX_MSG
	afx_msg void OnCustomDraw(NMHDR* pNMHDR, LRESULT* pResult);
	DECLARE_MESSAGE_MAP()

private:
	int m_iSubItem;            //�����ʶ��
	int m_iItem;               //�����ʶ��
	BOOL m_bHighLight;         //�Ƿ�����ı�
	BOOL m_bFocus;             //�Ƿ���ƽ����
	CItemEdit m_edtItemEdit;   // �������໯EditLabel�������ص�CEdit*ָ��
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EDITLISTCTRL_H__A02CE0B0_FF7B_4A54_8570_12B03905EC3E__INCLUDED_)
