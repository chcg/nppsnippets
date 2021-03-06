/////////////////////////////////////////////////////////////////////////////
//                                                                         //
//  NppSnippets - Code Snippets plugin for Notepad++                       //
//  Copyright (C) 2010-2011 Frank Fesevur                                  //
//                                                                         //
//  This program is free software; you can redistribute it and/or modify   //
//  it under the terms of the GNU General Public License as published by   //
//  the Free Software Foundation; either version 2 of the License, or      //
//  (at your option) any later version.                                    //
//                                                                         //
//  This program is distributed in the hope that it will be useful,        //
//  but WITHOUT ANY WARRANTY; without even the implied warranty of         //
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the           //
//  GNU General Public License for more details.                           //
//                                                                         //
//  You should have received a copy of the GNU General Public License      //
//  along with this program; if not, write to the Free Software            //
//  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.              //
//                                                                         //
/////////////////////////////////////////////////////////////////////////////

#include <windows.h>
#include "WaitCursor.h"

/////////////////////////////////////////////////////////////////////////////
//

WaitCursor::WaitCursor(bool show) noexcept
{
	_OldCursor = nullptr;
	if (show)
		Show();
}

WaitCursor::~WaitCursor() noexcept
{
	Hide();
}

/////////////////////////////////////////////////////////////////////////////
//

void WaitCursor::Show() noexcept
{
	if (_OldCursor == nullptr)
		_OldCursor = SetCursor(LoadCursor(nullptr, IDC_WAIT));
}

/////////////////////////////////////////////////////////////////////////////
//

void WaitCursor::Hide() noexcept
{
	if (_OldCursor != nullptr)
	{
		SetCursor(_OldCursor);
		_OldCursor = nullptr;
	}
}
