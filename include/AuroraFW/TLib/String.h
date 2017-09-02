/****************************************************************************
** ┌─┐┬ ┬┬─┐┌─┐┬─┐┌─┐  ┌─┐┬─┐┌─┐┌┬┐┌─┐┬ ┬┌─┐┬─┐┬┌─
** ├─┤│ │├┬┘│ │├┬┘├─┤  ├┤ ├┬┘├─┤│││├┤ ││││ │├┬┘├┴┐
** ┴ ┴└─┘┴└─└─┘┴└─┴ ┴  └  ┴└─┴ ┴┴ ┴└─┘└┴┘└─┘┴└─┴ ┴
** A Powerful General Purpose Framework
** More information in: https://aurora-fw.github.io/
**
** Copyright (C) 2017 Aurora Framework, All rights reserved.
**
** This file is part of the Aurora Framework. This framework is free
** software; you can redistribute it and/or modify it under the terms of
** the GNU Lesser General Public License version 3 as published by the
** Free Software Foundation and appearing in the file LICENSE included in
** the packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
****************************************************************************/

#ifndef INCLUDE_H_AFW_LIB_STRING
#define INCLUDE_H_AFW_LIB_STRING

#define AFW_STRING_MAX_INPUT_SIZE 8192

#ifndef AFW_STRING_MAXSIZE
	#ifdef AFW_WORDSIZE
		#if AFW_WORDSIZE == 64
			#define AFW_STRING_MAXSIZE   9223372036854775807
		#elif AFW_
			#define AFW_STRING_MAXSIZE   2147483647
		#endif
	#endif /// AFW_WORDSIZE
#endif /// AFW_STRING_MAXSIZE

#ifdef AFW_TARGET_CXX
	extern "C"
	{
#endif /// AFW_TARGET_CXX
		// extern
#ifdef AFW_TARGET_CXX
	}
	#include <istream>
	#include <ostream>

namespace AuroraFW
{
	template<class charT>
	class string
	{
	public:
		string(); //Blank string
		string (const charT* ); // Normal string
		string (const string<charT>& ); // String by copy
		~string();

		//Operators
		string& operator = (const string<charT> );		// Operator: =
		string operator + (const string<charT> );         // Operator: + (string)
		string operator + (const charT* );                   // Operator: + (char ptr)
		string& operator += (const string<charT> );       // Operator: += (string)
		string& operator += (const charT* );					// Operator: += (char ptr)
		inline charT& operator [] (const size_t ) const;			// Operator: []
		inline bool operator == (const string<charT> );		// Operator: == (string)
		inline bool operator == (const charT );			// Operator: == (char ptr)
		inline bool operator != (const string<charT> );		// Operator: != (string)
		inline bool operator != (const charT* );			// Operator: != (char ptr)

		void add (size_t, const string<charT>& );
		void add (size_t, const charT* );
		void erase (const size_t ,const size_t );
		inline void output (std::ostream& );
		inline void output (std::wostream& );
		void input (std::istream& );
		void input (std::wistream& );
		int find (const string<charT>& , size_t = 0) const; // Search from another string
		int find (const charT* , const size_t  = 0) const; // Search from an array of char
		int find (const charT* , size_t , const size_t ) const; // Search from a buffer
		int find (const charT , const size_t = 0) const; // Search from a char
		inline size_t length() const;					// Return String length
		inline size_t size() const;                    // Return String size
		inline charT* toCString() const;
		inline std::string toSTLString() const;

	private:
		string (size_t );
		charT* buf = NULL;
		size_t len;
	};
	typedef string<char>      String;
	typedef string<wchar_t>   wString;

	extern std::ostream& operator << (std::ostream& out, String &str);
	extern std::istream& operator >> (std::istream& in, String &str);

	//for wide characters
	extern std::wostream& operator << (std::wostream& wout, wString &wstr);
	extern std::wistream& operator >> (std::wistream& win, wString &wstr);
}
#endif /// AFW_TARGET_CXX

#endif /// INCLUDE_H_AFW_LIB_STRING
