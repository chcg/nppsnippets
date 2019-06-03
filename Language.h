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

#ifndef __LANGUAGE_H__
#define __LANGUAGE_H__

class Language
{
public:
	Language(int langid);
	Language(int langid, LPCWSTR langName, LPCWSTR langDescr);

	int GetLangID()			{ return _LangID; };
	WCHAR* GetLangName()	{ return _LangName; };
	WCHAR* GetLangDescr()	{ return _LangDescr; };

private:
	int _LangID;
	WCHAR _LangName[MAX_PATH];
	WCHAR _LangDescr[MAX_PATH];
};

#endif // __LANGUAGE_H__
