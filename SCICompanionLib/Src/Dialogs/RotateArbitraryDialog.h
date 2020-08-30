/***************************************************************************
Copyright (c) 2017 Philip Fortier

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
***************************************************************************/
#pragma once

#include "resource.h"

class RotateArbitraryDialog : public CExtResizableDialog
{
public:
	RotateArbitraryDialog(int degrees, CWnd* pParent = nullptr);   // standard constructor
	int GetDegrees() { return _degrees; }

	virtual void OnOK();

	// Dialog Data
	enum { IDD = IDD_ROTATENUMBER };

private:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

	int _degrees;
	CExtEdit m_wndEditDegrees;

	// Visuals
	CExtButton m_wndOk;
	CExtButton m_wndCancel;
	CExtLabel m_wndLabel1;
};
