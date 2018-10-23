/*
*     COPYRIGHT NOTICE
*     Copyright(c) 2018, Team Shanghai Dream Equinox
*     All rights reserved.
*
* @file		PlumLogEx.h
* @brief	This Program is PlumLogEx DLL Project.
* @author	Alopex/Helium
* @version	v1.00a
* @date		2018-10-22	v1.00a	alopex	Create Project.
*/
#pragma once

#ifndef __PLUMLOGEX_H_
#define __PLUMLOGEX_H_

//Include Plum Common Header File
#include "PlumCommon.h"

//Macro Definition
#ifdef	PRUNUS_EXPORTS
#define PLUMLOGEX_API	__declspec(dllexport)
#else
#define PLUMLOGEX_API	__declspec(dllimport)
#endif

#define PLUMLOGEX_CALLMETHOD	__stdcall

#define PLUMLOGEX(Str)	CPlumLogEx::PlumLogExWriteLine(Str)

//Class Definition
class PLUMLOGEX_API CPlumLogEx
{
public:
	CPlumLogEx();			// CPlumLogEx (~���캯��)
	~CPlumLogEx();			// CPlumLogEx (~��������)

public:
	static void PLUMLOGEX_CALLMETHOD PlumLogExWrite(LPCSTR lpcstr, ...);			// CPlumLogEx (~д����־����)
	static void PLUMLOGEX_CALLMETHOD PlumLogExWriteLine(LPCSTR lpcstr, ...);		// CPlumLogEx (~д����־����)(����)

public:
	static void PLUMLOGEX_CALLMETHOD PlumLogExCreateLogFilePath();					// CPlumLogEx (~������־�ļ�·��)
	static void PLUMLOGEX_CALLMETHOD PlumLogExGetLogFilePath(char* pStr, int nSize);// CPlumLogEx (~��ȡ��־�ļ�·��)

protected:
	static void PLUMLOGEX_CALLMETHOD PlumLogExGetComputerName();			// CPlumLogEx (~��ȡ���������)
	static void PLUMLOGEX_CALLMETHOD PlumLogExGetUserName();				// CPlumLogEx (~��ȡ�û�����)
	static void PLUMLOGEX_CALLMETHOD PlumLogExGetWindowsVersion();			// CPlumLogEx (~��ȡWindows�汾)

};


#endif // !__PLUMLOGEX_H_

