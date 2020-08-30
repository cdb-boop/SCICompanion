/***************************************************************************
	Copyright (c) 2015 Philip Fortier

	This program is free software; you can redistribute it and/or
	modify it under the terms of the GNU General Public License
	as published by the Free Software Foundation; either version 2
	of the License, or (at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.
***************************************************************************/
#include "stdafx.h"
#include "AppState.h"
#include "TextChildFrame.h"

IMPLEMENT_DYNCREATE(CTextChildFrame, CMDITabChildWnd)

CTextChildFrame::CTextChildFrame()
{
}

CTextChildFrame::~CTextChildFrame()
{
}


BEGIN_MESSAGE_MAP(CTextChildFrame, CMDITabChildWnd)
END_MESSAGE_MAP()

int CTextChildFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (__super::OnCreate(lpCreateStruct) == -1)
		return -1;
	return 0;
}
