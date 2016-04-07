
// hello-world.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// ChelloworldApp:
// See hello-world.cpp for the implementation of this class
//

class ChelloworldApp : public CWinApp
{
public:
	ChelloworldApp();

// Overrides
public:
	virtual BOOL InitInstance(); 

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern ChelloworldApp theApp;