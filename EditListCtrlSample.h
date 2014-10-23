// EditListCtrlSample.h : main header file for the EDITLISTCTRLSAMPLE application
//

#if !defined(AFX_EDITLISTCTRLSAMPLE_H__F0654CE1_0303_4D68_9729_C935547927A6__INCLUDED_)
#define AFX_EDITLISTCTRLSAMPLE_H__F0654CE1_0303_4D68_9729_C935547927A6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CEditListCtrlSampleApp:
// See EditListCtrlSample.cpp for the implementation of this class
//

class CEditListCtrlSampleApp : public CWinApp
{
public:
	CEditListCtrlSampleApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEditListCtrlSampleApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CEditListCtrlSampleApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EDITLISTCTRLSAMPLE_H__F0654CE1_0303_4D68_9729_C935547927A6__INCLUDED_)
