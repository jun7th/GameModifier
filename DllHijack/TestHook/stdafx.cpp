// stdafx.cpp : source file that includes just the standard includes
// TestHook.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
void TipBox(std::wstring str)
{
	MessageBox(NULL, str.c_str(), L"Tip", MB_OK);
}