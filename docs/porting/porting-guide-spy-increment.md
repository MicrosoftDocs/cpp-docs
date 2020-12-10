---
description: "Learn more about: Porting Guide: Spy++"
title: "Porting Guide: Spy++"
ms.date: "10/23/2019"
ms.assetid: e558f759-3017-48a7-95a9-b5b779d5e51d
---
# Porting Guide: Spy++

This porting case study is designed to give you an idea of what a typical porting project is like, the types of problems you might encounter, and some general tips and tricks for addressing porting problems. It's not meant to be a definitive guide to porting, since the experience of porting a project depends very much on the specifics of the code.

## Spy++

Spy++ is a widely used GUI diagnostic tool for the Windows desktop that provides all sorts of information about user interface elements on the Windows desktop. It shows the complete hierarchy of windows and provides access to metadata about each window and control. This useful application has shipped with Visual Studio for many years. We found an old version of it that was last compiled in Visual C++ 6.0 and ported it to Visual Studio 2015. The experience for Visual Studio 2017 or Visual Studio 2019 should be almost identical.

We considered this case to be typical for porting Windows desktop applications that use MFC and the Win32 API, especially for old projects that have not been updated with each release of Visual C++ since Visual C++ 6.0.

## <a name="convert_project_file"></a> Step 1. Converting the project file.

The project file, two old .dsw files from Visual C++ 6.0, converted easily with no issues that require further attention. One project is the Spy++ application. The other is SpyHk, written in C, a supporting DLL. More complex projects might not upgrade as easily, as discussed [here](../porting/visual-cpp-porting-and-upgrading-guide.md).

After upgrading the two projects, our solution looked like this:

![The Spy&#43;&#43; Solution](../porting/media/spyxxsolution.PNG "The Spy&#43;&#43; Solution")

We have two projects, one with a large number of C++ files, and another a DLL that's written in C.

## <a name="header_file_problems"></a> Step 2. Header file problems

Upon building a newly converted project, one of the first things you'll often find is that header files that your project uses are not found.

One of the files that couldn't be found in Spy++ was verstamp.h. From an Internet search, we determined that this came from a DAO SDK, an obsolete data technology. We wanted to find out what symbols were being used from that header file, to see if that file was really needed or if those symbols were defined elsewhere, so we commented out the header file declaration and recompiled. It turns out there is just one symbol that is needed, VER_FILEFLAGSMASK.

```Output
1>C:\Program Files (x86)\Windows Kits\8.1\Include\shared\common.ver(212): error RC2104: undefined keyword or key name: VER_FILEFLAGSMASK
```

The easiest way to find a symbol in the available include files is to use **Find in Files** (**Ctrl**+**Shift**+**F**) and specify **Visual C++ Include Directories**. We found it in ntverp.h. We replaced the verstamp.h include with ntverp.h and this error disappeared.

## <a name="linker_output_settings"></a> Step 3. Linker OutputFile setting

Older projects sometimes have files placed in unconventional locations that can cause problems after upgrading. In this case, we have to add `$(SolutionDir)` to the **Include** path in the project properties to ensure that Visual Studio can find some header files that are placed there, rather than in one of the project folders.

MSBuild complains that the **Link.OutputFile** property does not match the **TargetPath** and **TargetName** values, issuing MSB8012.

```Output
warning MSB8012: TargetPath(...\spyxx\spyxxhk\.\..\Debug\SpyxxHk.dll) does not match the Linker's OutputFile property value (...\spyxx\Debug\SpyHk55.dll). This may cause your project to build incorrectly. To correct this, please make sure that $(OutDir), $(TargetName) and $(TargetExt) property values match the value specified in %(Link.OutputFile).warning MSB8012: TargetName(SpyxxHk) does not match the Linker's OutputFile property value (SpyHk55). This may cause your project to build incorrectly. To correct this, please make sure that $(OutDir), $(TargetName) and $(TargetExt) property values match the value specified in %(Link.OutputFile).
```

**Link.OutputFile** is the build output (EXE, DLL, for example), and it is normally constructed from `$(TargetDir)$(TargetName)$(TargetExt)`, giving the path, filename and extension. This is a common error when migrating projects from the old Visual C++ build tool (vcbuild.exe) to the new build tool (MSBuild.exe). Since the build tool change occurred in Visual Studio 2010, you might encounter this issue whenever you migrate a pre-2010 project to a 2010 or later version. The basic problem is that the project migration wizard doesn't update the **Link.OutputFile** value since it's not always possible to determine what its value should be based on the other project settings. Therefore, you usually have to set it manually. For more details, see this [post](https://devblogs.microsoft.com/cppblog/visual-studio-2010-c-project-upgrade-guide/) on the Visual C++ blog.

In this case, the **Link.OutputFile** property in the converted project was set to .\Debug\Spyxx.exe and .\Release\Spyxx.exe for the Spy++ project, depending on the configuration. The best bet is to simply replace these hardcoded values with `$(TargetDir)$(TargetName)$(TargetExt)` for **All Configurations**. If that doesn't work, you can customize from there, or change the properties in the **General** section where those values are set (the properties are **Output Directory**, **Target Name**, and **Target Extension**. Remember that if the property you are viewing uses macros, you can choose **Edit** in the dropdown list to bring up a dialog box that shows the final string with the macro substitutions made. You can view all available macros and their current values by choosing the **Macros** button.

## <a name="updating_winver"></a> Step 4. Updating the Target Windows Version

The next error indicates that WINVER version is no longer supported in MFC. WINVER for Windows XP is 0x0501.

```Output
C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\atlmfc\include\afxv_w32.h(40): fatal error C1189: #error:  MFC does not support WINVER less than 0x0501.  Please change the definition of WINVER in your project properties or precompiled header.
```

Windows XP is no longer supported by Microsoft, so even though targeting it is allowed in Visual Studio, you should be phasing out support for it in your applications, and encouraging your users to adopt new versions of Windows.

To get rid of the error, define WINVER by updating the **Project Properties** setting to the lowest version of Windows you currently want to target. Find a table of values for various Windows releases [here](/windows/win32/WinProg/using-the-windows-headers).

The *stdafx.h* file contained some of these macro definitions.

```cpp
#define WINVER       0x0500  // these defines are set so that we get the
#define _WIN32_WINNT 0x0500  // maximum set of message/flag definitions,
#define _WIN32_IE    0x0400  // from both winuser.h and commctrl.h.
```

WINVER we will set to Windows 7. It's easier to read the code later if you use the macro for Windows 7 (_WIN32_WINNT_WIN7), rather than the value itself (0x0601).

```cpp
#define WINVER _WINNT_WIN32_WIN7 // Minimum targeted Windows version is Windows 7
```

## <a name="linker_errors"></a> Step 5. Linker Errors

With these changes, the SpyHk (DLL) project builds but produces a linker error.

```Output
LINK : warning LNK4216: Exported entry point _DLLEntryPoint@12
```

The entry point for a DLL should not be exported. The entry point is only intended to be called by the loader when the DLL is first loaded into memory, so it should not be in the export table, which is for other callers. We just need to make sure it does not have the **`__declspec(dllexport)`** directive attached to it. In spyxxhk.c, we have to remove it from two places, the declaration and definition of `DLLEntryPoint`. It never made sense to use this directive, but previous versions of the linker and compiler did not flag it as problem. The newer versions of the linker give a warning.

```cpp
// deleted __declspec(dllexport)
BOOL WINAPI DLLEntryPoint(HINSTANCE hinstDLL,DWORD fdwReason, LPVOID lpvReserved);
```

The C DLL project, SpyHK.dll, now builds and links without error.

## <a name="outdated_header_files"></a> Step 6. More outdated header files

At this point we start working on the main executable project, Spyxx.

A couple of other include files could not be found: ctl3d.h and penwin.h. While it might be helpful to search the Internet to try to identify what included the header, sometimes the information isn't that helpful. We found out that ctl3d.h was part of the Exchange Development Kit and provided support for a certain style of controls on Windows 95, and penwin.h relates to Window Pen Computing, an obsolete API. In this case, we simply comment out the `#include` line, and deal with the undefined symbols as we did with verstamp.h. Everything that relates to 3D Controls or Pen Computing was removed from the project.

Given a project with many compilation errors that you are gradually eliminating, it's not realistic to find all the uses of an outdated API right away when you remove the `#include` directive. We didn't detect it immediately, but rather at some later point came to an error that WM_DLGBORDER was undefined. It is actually just one many undefined symbols that come from ctl3d.h. Once we've determined that it relates to an outdated API, we removed all references in code to it.

## <a name="updating_iostreams_code"></a> Step 7. Updating old iostreams code

The next error is common with old C++ code that uses iostreams.

```Output
mstream.h(40): fatal error C1083: Cannot open include file: 'iostream.h': No such file or directory
```

The issue is that the old iostreams library has been removed and replaced. We have to replace the old iostreams with the newer standards.

```cpp
#include <iostream.h>
#include <strstrea.h>
#include <iomanip.h>
```

These are the updated includes:

```cpp
#include <iostream>
#include <sstream>
#include <iomanip>
```

With this change, we have problems with `ostrstream`, which is no longer used. The appropriate replacement is ostringstream. We try adding a **`typedef`** for `ostrstream` to avoid modifying the code too much, at least as a start.

```cpp
typedef std::basic_ostringstream<TCHAR> ostrstream;
```

Currently the project is built using MBCS (Multi-byte Character Set), so **`char`** is the appropriate character data type. However, to allow an easier update the code to UTF-16 Unicode, we update this to `TCHAR`, which resolves to **`char`** or **`wchar_t`** depending on whether the **Character Set** property in the project settings is set to MBCS or Unicode.

A few other pieces of code need to be updated.  We replaced the base class `ios` with `ios_base`, and we replaced ostream is by basic_ostream\<T>. We add two additional typedefs, and this section compiles.

```cpp
typedef std::basic_ostream<TCHAR> ostream;
typedef ios_base ios;
```

Using these typedefs is just a temporary solution. For a more permanent solution, we could update each reference to the renamed or outdated API.

Here's the next error.

```Output
error C2039: 'freeze': is not a member of 'std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>>'
```

The next issue is that `basic_stringbuf` doesn't have a `freeze` method. The `freeze` method is used to prevent a memory leak in the old `ostream`. We don't need it now that we're using the new `ostringstream`. We can delete the call to `freeze`.

```cpp
//rdbuf()->freeze(0);
```

The next two errors occurred on adjacent lines. The first complains about using `ends`, which is the old `iostream` library's IO manipulator that adds a null terminator to a string. The second of these errors explains that the output of the `str` method can't be assigned to a non-const pointer.

```cpp
// Null terminate the string in the buffer and
// get a pointer to it.
//
*this << ends;
LPSTR psz = str();
```

```Output
2>mstream.cpp(167): error C2065: 'ends': undeclared identifier2>mstream.cpp(168): error C2440: 'initializing': cannot convert from 'std::basic_string<char,std::char_traits<char>,std::allocator<char>>' to 'LPSTR'
```

Using the new stream library, `ends` is not needed since the string is always null-terminated, so that line can be removed. For the second issue, the problem is that now `str()` doesn't return a pointer to the character array for a string; it returns the `std::string` type. The solution to the second is to change the type to `LPCSTR` and use the `c_str()` method to request the pointer.

```cpp
//*this << ends;
LPCTSTR psz = str().c_str();
```

An error that puzzled us for a while occurred on this code.

```cpp
MOUT << _T(" chUser:'") << chUser
<< _T("' (") << (INT)(UCHAR)chUser << _T(')');
```

The macro MOUT resolves to `*g_pmout` which is an object of type `mstream`. The `mstream` class is derived from the standard output string class, `std::basic_ostream<TCHAR>`. However with \_T around the string literal, which we put in preparation for converting to Unicode, the overload resolution for **operator <<** fails with the following error message:

```Output
1>winmsgs.cpp(4612): error C2666: 'mstream::operator <<': 2 overloads have similar conversions
1>  c:\source\spyxx\spyxx\mstream.h(120): note: could be 'mstream &mstream::operator <<(ios &(__cdecl *)(ios &))'
1>  c:\source\spyxx\spyxx\mstream.h(118): note: or       'mstream &mstream::operator <<(ostream &(__cdecl *)(ostream &))'
1>  c:\source\spyxx\spyxx\mstream.h(116): note: or       'mstream &mstream::operator <<(ostrstream &(__cdecl *)(ostrstream &))'
1>  c:\source\spyxx\spyxx\mstream.h(114): note: or       'mstream &mstream::operator <<(mstream &(__cdecl *)(mstream &))'
1>  c:\source\spyxx\spyxx\mstream.h(109): note: or       'mstream &mstream::operator <<(LPTSTR)'
1>  c:\source\spyxx\spyxx\mstream.h(104): note: or       'mstream &mstream::operator <<(TCHAR)'
1>  c:\source\spyxx\spyxx\mstream.h(102): note: or       'mstream &mstream::operator <<(DWORD)'
1>  c:\source\spyxx\spyxx\mstream.h(101): note: or       'mstream &mstream::operator <<(WORD)'
1>  c:\source\spyxx\spyxx\mstream.h(100): note: or       'mstream &mstream::operator <<(BYTE)'
1>  c:\source\spyxx\spyxx\mstream.h(95): note: or       'mstream &mstream::operator <<(long)'
1>  c:\source\spyxx\spyxx\mstream.h(90): note: or       'mstream &mstream::operator <<(unsigned int)'
1>  c:\source\spyxx\spyxx\mstream.h(85): note: or       'mstream &mstream::operator <<(int)'
1>  c:\source\spyxx\spyxx\mstream.h(83): note: or       'mstream &mstream::operator <<(HWND)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\atlmfc\include\afxdisp.h(1132): note: or       'CDumpContext &operator <<(CDumpContext &,COleSafeArray &)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\atlmfc\include\afxdisp.h(1044): note: or       'CArchive &operator <<(CArchive &,ATL::COleDateTimeSpan)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\atlmfc\include\afxdisp.h(1042): note: or       'CDumpContext &operator <<(CDumpContext &,ATL::COleDateTimeSpan)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\atlmfc\include\afxdisp.h(1037): note: or       'CArchive &operator <<(CArchive &,ATL::COleDateTime)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\atlmfc\include\afxdisp.h(1035): note: or       'CDumpContext &operator <<(CDumpContext &,ATL::COleDateTime)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\atlmfc\include\afxdisp.h(1030): note: or       'CArchive &operator <<(CArchive &,COleCurrency)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\atlmfc\include\afxdisp.h(1028): note: or       'CDumpContext &operator <<(CDumpContext &,COleCurrency)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\atlmfc\include\afxdisp.h(955): note: or       'CArchive &operator <<(CArchive &,ATL::CComBSTR)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\atlmfc\include\afxdisp.h(951): note: or       'CArchive &operator <<(CArchive &,COleVariant)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\atlmfc\include\afxdisp.h(949): note: or       'CDumpContext &operator <<(CDumpContext &,COleVariant)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\atlmfc\include\afxwin.h(248): note: or       'CArchive &operator <<(CArchive &,const RECT &)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\atlmfc\include\afxwin.h(247): note: or       'CArchive &operator <<(CArchive &,POINT)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\atlmfc\include\afxwin.h(246): note: or       'CArchive &operator <<(CArchive &,SIZE)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\atlmfc\include\afxwin.h(242): note: or       'CDumpContext &operator <<(CDumpContext &,const RECT &)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\atlmfc\include\afxwin.h(241): note: or       'CDumpContext &operator <<(CDumpContext &,POINT)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\atlmfc\include\afxwin.h(240): note: or       'CDumpContext &operator <<(CDumpContext &,SIZE)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\atlmfc\include\afx.h(1639): note: or       'CArchive &operator <<(CArchive &,const CObject *)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\atlmfc\include\afx.h(1425): note: or       'CArchive &operator <<(CArchive &,ATL::CTime)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\atlmfc\include\afx.h(1423): note: or       'CDumpContext &operator <<(CDumpContext &,ATL::CTime)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\atlmfc\include\afx.h(1418): note: or       'CArchive &operator <<(CArchive &,ATL::CTimeSpan)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\atlmfc\include\afx.h(1416): note: or       'CDumpContext &operator <<(CDumpContext &,ATL::CTimeSpan)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\include\ostream(694): note: or       'std::basic_ostream<wchar_t,std::char_traits<wchar_t>> &std::operator <<<wchar_t,std::char_traits<wchar_t>>(std::basic_ostream<wchar_t,std::char_traits<wchar_t>> &,const char *)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\include\ostream(741): note: or       'std::basic_ostream<wchar_t,std::char_traits<wchar_t>> &std::operator <<<wchar_t,std::char_traits<wchar_t>>(std::basic_ostream<wchar_t,std::char_traits<wchar_t>> &,char)'
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\include\ostream(866): note: or       'std::basic_ostream<wchar_t,std::char_traits<wchar_t>> &std::operator <<<wchar_t,std::char_traits<wchar_t>>(std::basic_ostream<wchar_t,std::char_traits<wchar_t>> &,const _Elem *)'
1>          with
1>          [
1>              _Elem=wchar_t
1>          ]
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\include\ostream(983): note: or       'std::basic_ostream<wchar_t,std::char_traits<wchar_t>> &std::operator <<<wchar_t,std::char_traits<wchar_t>,wchar_t[10]>(std::basic_ostream<wchar_t,std::char_traits<wchar_t>> &&,const _Ty (&))'
1>          with
1>          [
1>              _Ty=wchar_t [10]
1>          ]
1>  C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\include\ostream(1021): note: or       'std::basic_ostream<wchar_t,std::char_traits<wchar_t>> &std::operator <<<wchar_t,std::char_traits<wchar_t>>(std::basic_ostream<wchar_t,std::char_traits<wchar_t>> &,const std::error_code &)'
1>  winmsgs.cpp(4612): note: while trying to match the argument list '(CMsgStream, const wchar_t [10])'
```

There are so many **operator <<** definitions that this kind of error can be intimidating. After looking more closely at the available overloads, we can see that most of them are irrelevant, and looking more closely at the `mstream` class definition, we identified the following function that we think should be called in this case.

```cpp
mstream& operator<<(LPTSTR psz)
{
  return (mstream&)ostrstream::operator<<(psz);
}
```

The reason it isn't called is because the string literal has the type `const wchar_t[10]` as you can see from the last line of that long error message, so the conversion to a non-const pointer is not automatic. However that operator should not modify the input parameter, so the more appropriate parameter type is `LPCTSTR` (`const char*` when compiling as MBCS, and `const wchar_t*` as Unicode), not `LPTSTR` (`char*` when compiling as MBCS, and `wchar_t*` as Unicode). Making that change fixes this error.

This type of conversion was allowed under the older, less strict compiler, but more recent conformance changes require more correct code.

## <a name="stricter_conversions"></a> Step 8. The compiler's more strict conversions

We also get many errors like the following:

```Output
error C2440: 'static_cast': cannot convert from 'UINT (__thiscall CHotLinkCtrl::* )(CPoint)' to 'LRESULT (__thiscall CWnd::* )(CPoint)'
```

The error occurs in a message map that is simply a macro:

```cpp
BEGIN_MESSAGE_MAP(CFindToolIcon, CWnd)
// other messages omitted...
ON_WM_NCHITTEST() // Error occurs on this line.
END_MESSAGE_MAP()
```

Going to the definition of this macro, we see it references the function `OnNcHitTest`.

```cpp
#define ON_WM_NCHITTEST() \
{ WM_NCHITTEST, 0, 0, 0, AfxSig_l_p, \
(AFX_PMSG)(AFX_PMSGW) \
(static_cast< LRESULT (AFX_MSG_CALL CWnd::*)(CPoint) > (&ThisClass :: OnNcHitTest)) },
```

The problem has to do with the mismatch in the pointer to member function types. The problem isn't the conversion from `CHotLinkCtrl` as a class type to `CWnd` as the class type, since that is a valid derived-to-base conversion. The problem is the return type: UINT vs. LRESULT. LRESULT resolves to LONG_PTR which is a 64-bit pointer or a 32-bit pointer, depending on the target binary type, so UINT does not convert to this type. This is not uncommon when upgrading code written before 2005 since the return type of many message map methods changed from UINT to LRESULT in Visual Studio 2005 as part of the 64-bit compatibility changes. We change the return type from UINT in the following code to LRESULT:

```cpp
afx_msg UINT OnNcHitTest(CPoint point);
```

After the change we have the following code:

```cpp
afx_msg LRESULT OnNcHitTest(CPoint point);
```

Since there are about ten occurrences of this function all in different classes derived from CWnd, it's helpful to use **Go to Definition** (Keyboard: **F12**) and **Go to Declaration** (Keyboard: **Ctrl**+**F12**) when the cursor is on the function in the editor to locate these and navigate to them from the **Find Symbol** tool window. **Go to Definition** is usually the more useful of the two. **Go to Declaration** will find declarations other than the defining class declaration, such as friend class declarations or forward references.

## <a name="mfc_changes"></a> Step 9. MFC Changes

The next error also relates to a changed declaration type and also occurs in a macro.

```Output
error C2440: 'static_cast': cannot convert from 'void (__thiscall CFindWindowDlg::* )(BOOL,HTASK)' to 'void (__thiscall CWnd::* )(BOOL,DWORD)'
```

The issue is that the second parameter of `CWnd::OnActivateApp` changed from HTASK to DWORD. This change occurred in the 2002 release of Visual Studio, Visual Studio .NET.

```cpp
afx_msg void OnActivateApp(BOOL bActive, HTASK hTask);
```

We have to update the declarations of OnActivateApp in derived classes accordingly as follows:

```cpp
afx_msg void OnActivateApp(BOOL bActive, DWORD dwThreadId);
```

At this point, we are able to compile the project. There are a few warnings to work through, however, and there are optional parts of the upgrade, such as converting from MBCS to Unicode or improving security by using the Secure CRT functions.

## <a name="compiler_warnings"></a> Step 10. Addressing compiler warnings

To get a full list of warnings, you should do a **Rebuild All** on the solution rather than an ordinary build, just to make sure that everything that previously compiled will be recompiled, since you only get warning reports from the current compilation. The other question is whether to accept the current warning level or use a higher warning level.  When porting a lot of code, especially old code, using a higher warning level might be appropriate.  You might also want to start with the default warning level and then increase the warning level to get all warnings. If you use `/Wall`, you get some warnings in the system header files, so many people use `/W4` to get the most warnings on their code without getting warnings for system headers. If you want warnings to show up as errors, add the `/WX` option. These settings are in the **C/C++** section of the **Project Properties** dialog box.

One of the methods in the `CSpyApp` class produces a warning about a function that is no longer supported.

```cpp
void SetDialogBkColor() {CWinApp::SetDialogBkColor(::GetSysColor(COLOR_BTNFACE));}
```

The warning is as follows.

```Output
warning C4996: 'CWinApp::SetDialogBkColor': CWinApp::SetDialogBkColor is no longer supported. Instead, handle WM_CTLCOLORDLG in your dialog
```

The message WM_CTLCOLORDLG was already handled in Spy++ code, so the only change required was to delete any references to `SetDialogBkColor`, which is no longer needed.

The next warning was straightforward to fix by commenting out the variable name. We received the following warning:

```Output
warning C4456: declaration of 'lpszBuffer' hides previous local declaration
```

The code that produces this involves a macro.

```cpp
DECODEPARM(CB_GETLBTEXT)
{
  P2WPOUT();

  P2LPOUTPTRSTR;
  P2IFDATA()
  {
    PARM(lpszBuffer, PPACK_STRINGORD, ED2);

    INDENT();

    P2IFISORD(lpszBuffer)
    {
      P2OUTORD(lpszBuffer);
    }
    else
    {
      PARM(lpszBuffer, LPTSTR, ED2);
      P2OUTS(lpszBuffer);
    }
  }
}
```

Heavy use of macros as in this code tends to make code harder to maintain. In this case, the macros include the declarations of the variables. The macro PARM is defined as follows:

```cpp
#define PARM(var, type, src)type var = (type)src
```

Therefore the `lpszBuffer` variable gets declared twice in the same function. It's not that straightforward to fix this as it would be if the code were not using macros (simply remove the second type declaration). As it is, we have the unfortunate choice of having to decide whether to rewrite the macro code as ordinary code (a tedious and possibly error-prone task) or disable the warning.

In this case, we opt to disable the warning. We can do that by adding a pragma as follows:

```cpp
#pragma warning(disable : 4456)
```

When disabling a warning, you might want to restrict the disabling effect to just the code you that produces the warning, to avoid suppressing the warning when it might provide useful information. We add code to restore the warning just after the line that produces it, or better yet, since this warning occurs in a macro, use the **__pragma** keyword, which works in macros (`#pragma` does not work in macros).

```cpp
#define PARM(var, type, src)__pragma(warning(disable : 4456))  \
type var = (type)src \
__pragma(warning(default : 4456))
```

The next warning requires some code revisions. The Win32 API `GetVersion` (and `GetVersionEx`) is deprecated.

```Output
warning C4996: 'GetVersion': was declared deprecated
```

The following code shows how the version is obtained.

```cpp
// check Windows version and set m_bIsWindows9x/m_bIsWindows4x/m_bIsWindows5x flags accordingly.
DWORD dwWindowsVersion = GetVersion();
```

This is followed by a lot of code that examines the dwWindowsVersion value to determine whether we're running on Windows 95, and which version of Windows NT. Since this is all outdated, we remove the code and deal with any references to those variables.

The article [Operating system version changes in Windows 8.1 and Windows Server 2012 R2](/windows/win32/w8cookbook/operating-system-version-changes-in-windows-8-1) explains the situation.

There are methods in the `CSpyApp` class that query the operating system version: `IsWindows9x`, `IsWindows4x`, and `IsWindows5x`. A good starting point is to assume that the versions of Windows that we intend to support (Windows 7 and later) are all close to Windows NT 5 as far the technologies used by this older application is concerned. The uses of these methods were to deal with limitations of the older operating systems. So we changed those methods to return TRUE for `IsWindows5x` and FALSE for the others.

```cpp
BOOL IsWindows9x() {/*return(m_bIsWindows9x);*/ return FALSE;  }
BOOL IsWindows4x() {/*return(m_bIsWindows4x);*/ return FALSE;  }
BOOL IsWindows5x() {/*return(m_bIsWindows5x);*/ return TRUE;  }
```

That left only a few places where the internal variables were used directly. Since we removed those variables, we get a few errors that have to deal with explicitly.

```Output
error C2065: 'm_bIsWindows9x': undeclared identifier
```

```cpp
void CSpyApp::OnUpdateSpyProcesses(CCmdUI *pCmdUI)
{
  pCmdUI->Enable(m_bIsWindows9x || hToolhelp32 != NULL);
}
```

We could replace this with a method call or simply pass TRUE and remove the old special case for Windows 9x.

```cpp
void CSpyApp::OnUpdateSpyProcesses(CCmdUI *pCmdUI)
{
  pCmdUI->Enable(TRUE /*!m_bIsWindows9x || hToolhelp32 != NULL*/);
}
```

The final warning at the default level (3) has to do with a bitfield.

```Output
treectl.cpp(1656): warning C4463: overflow; assigning 1 to bit-field that can only hold values from -1 to 0
```

The code that triggers this is as follows.

```cpp
m_bStdMouse = TRUE;
```

The declaration of `m_bStdMouse` indicates that it is a bitfield.

```cpp
class CTreeListBox : public CListBox
{
  DECLARE_DYNCREATE(CTreeListBox)

  CTreeListBox();

  private:
  int ItemFromPoint(const CPoint& point);

  class CTreeCtl* m_pTree;
  BOOL m_bGotMouseDown : 1;
  BOOL m_bDeferedDeselection : 1;
  BOOL m_bStdMouse : 1;
```

This code was written before the built-in bool type was supported in Visual C++. In such code, BOOL was a **`typedef`** for **`int`**. The type **`int`** is a **`signed`** type, and the bit representation of a **`signed int`** is to use the first bit as a sign bit, so a bitfield of type int could be interpreted as representing 0 or -1, probably not what was intended.

You wouldn't know by looking at the code why these are bitfields. Was the intent to keep the size of the object small, or is there anywhere where the binary layout of the object is used? We changed these to ordinary BOOL members since we didn't see any reason for the use of a bitfield. Using bitfields to keep an object's size small isn't guaranteed to work. It depends on how the compiler lays out the type.

You might wonder if using the standard type **`bool`** throughout would be helpful. Many of the old code patterns such as the BOOL type were invented to solve problems that were later solved in standard C++, so changing from BOOL to the **`bool`** built-in type is just one example of such a change that you consider doing after you get your code initially running in the new version.

Once we've dealt with all the warnings that appear at the default level (level 3) we changed to level 4 to catch a few additional warnings. The first to appear was as follows:

```Output
warning C4100: 'nTab': unreferenced formal parameter
```

The code that produced this warning was as follows.

```cpp
virtual void OnSelectTab(int nTab) {};
```

This seems harmless enough, but since we wanted a clean compilation with `/W4` and `/WX` set, we simply commented out the variable name, leaving it for the sake of readability.

```cpp
virtual void OnSelectTab(int /*nTab*/) {};
```

Other warnings we received were useful for general code cleanup. There are a number of implicit conversions from **`int`** or **`unsigned int`** to WORD (which is a typedef for **`unsigned short`**). These involve a possible loss of data. We added a cast to WORD in these cases.

Another level 4 warning we got for this code was:

```Output
warning C4211: nonstandard extension used: redefined extern to static
```

The problem occurs when a variable was first declared **`extern`**, then later declared **`static`**. The meaning of these two storage class specifiers is mutually exclusive, but this is allowed as a Microsoft extension. If you wanted the code to be portable to other compilers, or you wanted to compile it with `/Za` (ANSI compatibility), you would change the declarations to have matching storage class specifiers.

## <a name="porting_to_unicode"></a> Step 11. Porting from MBCS to Unicode

Note that in the Windows world, when we say Unicode, we usually mean UTF-16. Other operating systems such as Linux use UTF-8, but Windows generally does not. The MBCS version of MFC was deprecated in Visual Studio 2013 and 2015, but it is no longer deprecated in Visual Studio 2017. If using Visual Studio 2013 or 2015, before taking the step to actually port MBCS code to UTF-16 Unicode, we might want to temporarily eliminate the warnings that MBCS is deprecated, in order to do other work or postpone the porting until a convenient time. The current code uses MBCS and to continue with that we need to install the ANSI/MBCS version of MFC. The rather large MFC library is not part of the default Visual Studio **Desktop development with C++** installation, so it must be selected from the optional components in the installer. See [MFC MBCS DLL Add-on](../mfc/mfc-mbcs-dll-add-on.md). Once you download this and restart Visual Studio, you can compile and link with the MBCS version of MFC, but to get rid of the warnings about MBCS if you are using Visual Studio 2013 or 2015, you should also add NO_WARN_MBCS_MFC_DEPRECATION to your list of predefined macros in the **Preprocessor** section of project properties, or at the beginning of your *stdafx.h* header file or other common header file.

We now have some linker errors.

```Output
fatal error LNK1181: cannot open input file 'mfc42d.lib'
```

LNK1181 occurs because an outdated static library version of mfc is included on the linker input. This isn't required anymore since we can link MFC dynamically, so we just need to remove all MFC static libraries from the **Input** property in the **Linker** section of the project properties. This project is also using the `/NODEFAULTLIB` option, and instead it lists all the library dependencies.

```
msvcrtd.lib;msvcirtd.lib;kernel32.lib;user32.lib;gdi32.lib;advapi32.lib;Debug\SpyHk55.lib;%(AdditionalDependencies)
```

Now let us actually update the old Multi-byte Character Set (MBCS) code to Unicode. Since this is a Windows application, intimately tied to the Windows desktop platform, we will port it to UTF-16 Unicode that Windows uses. If you are writing cross-platform code or porting a Windows application to another platform, you might want to consider porting to UTF-8, which is widely used on other operating systems.

Porting to UTF-16 Unicode, we must decide whether we still want the option to compile to MBCS or not.  If we want to have the option to support MBCS, we should use the TCHAR macro as the character type, which resolves to either **`char`** or **`wchar_t`**, depending on whether \_MBCS or \_UNICODE is defined during compilation. Switching to TCHAR and the TCHAR versions of various APIs instead of **`wchar_t`** and its associated APIs means that you can get back to an MBCS version of your code simply by defining \_MBCS macro instead of \_UNICODE. In addition to TCHAR, a variety of TCHAR versions of such as widely used typedefs, macros, and functions exists. For example, LPCTSTR instead of LPCSTR, and so on. In the project properties dialog, under **Configuration Properties**, in the **General** section, change the **Character Set** property from **Use MBCS Character Set** to **Use Unicode Character Set**. This setting affects which macro is predefined during compilation. There is both a UNICODE macro and a \_UNICODE macro. The project property affects both consistently. Windows headers use UNICODE where Visual C++ headers such as MFC use \_UNICODE, but when one is defined, the other is always defined.

A good [guide](/previous-versions/cc194801(v=msdn.10)) to porting from MBCS to UTF-16 Unicode using TCHAR exists. We choose this route. First, we change the **Character Set** property to **Use Unicode Character Set** and rebuild the project.

Some places in the code were already using TCHAR, apparently in anticipation of eventually supporting Unicode. Some were not. We searched for instances of CHAR, which is a **`typedef`** for **`char`**, and replaced most of them with TCHAR. Also, we looked for `sizeof(CHAR)`. Whenever we changed from CHAR to TCHAR, we usually had to change to `sizeof(TCHAR)` since this was often used to determine the number of characters in a string. Using the wrong type here does not produce a compiler error, so it's worth paying a bit of attention to this case.

This type of error is very common just after switching to Unicode.

```Output
error C2664: 'int wsprintfW(LPWSTR,LPCWSTR,...)': cannot convert argument 1 from 'CHAR [16]' to 'LPWSTR'
```

Here's an example of code that produces this:

```cpp
wsprintf(szTmp, "%d.%2.2d.%4.4d", rmj, rmm, rup);
```

We put \_T around the string literal to remove the error.

```cpp
wsprintf(szTmp, _T("%d.%2.2d.%4.4d"), rmj, rmm, rup);
```

The \_T macro has the effect of making a string literal compile as a **`char`** string or a **`wchar_t`** string, depending on the setting of MBCS or UNICODE. To replace all strings with \_T in Visual Studio, first open the **Quick Replace** (Keyboard: **Ctrl**+**F**) box or the **Replace In Files** (Keyboard: **Ctrl**+**Shift**+**H**), then choose the **Use Regular Expressions** checkbox. Enter `((\".*?\")|('.+?'))` as the search text and `_T($1)` as the replacement text. If you already have the \_T macro around some strings, this procedure will add it again, and it might also find cases where you don't want \_T, such as when you use `#include`, so it's best to use **Replace Next** rather than **Replace All**.

This particular function, [wsprintf](/windows/win32/api/winuser/nf-winuser-wsprintfw), is actually defined in the Windows headers, and the documentation for it recommends that it not be used, due to possible buffer overrun. No size is given for the `szTmp` buffer, so there is no way for the function to check that the buffer can hold all the data to be written to it. See the next section about porting to the Secure CRT, in which we fix other similar problems. We ended up replacing it with [_stprintf_s](../c-runtime-library/reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md).

Another common error you'll see in converting to Unicode is this.

```Output
error C2440: '=': cannot convert from 'char *' to 'TCHAR *'
```

The code that produces it is as follows:

```cpp
pParentNode->m_szText = new char[strTitle.GetLength() + 1];
_tcscpy(pParentNode->m_szText, strTitle);
```

Even though the `_tcscpy` function was used, which is the TCHAR strcpy function for copying a string, the buffer that was allocated was a **`char`** buffer. This is easily changed to TCHAR.

```cpp
pParentNode->m_szText = new TCHAR[strTitle.GetLength() + 1];
_tcscpy(pParentNode->m_szText, strTitle);
```

Similarly, we changed LPSTR (Long Pointer to STRing) and LPCSTR (Long Pointer to Constant STRing) to LPTSTR (Long Pointer to TCHAR STRing) and LPCTSTR (Long Pointer to Constant TCHAR STRing) respectively, when warranted by a compiler error. We chose not to make such replacements by using global search and replace, because each situation had to be examined individually. In some cases, the **`char`** version is wanted, such as when processing certain Windows messages which use Windows structures that have the **A** suffix. In the Windows API, the suffix **A** means ASCII or ANSI (and also applies to MBCS), and the suffix **W** means wide characters, or UTF-16 Unicode. This naming pattern is used in the Windows headers, but we also followed it in the Spy++ code when we had to add a Unicode version of a function that was already defined in only an MBCS version.

In some cases we had to replace a type to use a version that resolves correctly (WNDCLASS instead of WNDCLASSA for example).

In many cases we had to use the generic version (macro) of a Win32 API like `GetClassName` (instead of `GetClassNameA`). In message handler switch statement, some messages are MBCS or Unicode specific, in those cases, we had to change the code to explicitly call the MBCS version, because we replaced the generically named functions with **A** and **W** specific functions, and added a macro for the generic name that resolves to the correct **A** or **W** name based on whether UNICODE is defined.  In many parts of the code, when we switched to define \_UNICODE, the W version is now chosen even when the **A** version is what's wanted.

There are a few places where special actions had to be taken. Any use of `WideCharToMultiByte` or `MultiByteToWideChar` might require a closer look. Here's one example where `WideCharToMultiByte` was being used.

```cpp
BOOL C3dDialogTemplate::GetFont(CString& strFace, WORD& nFontSize)
{
  ASSERT(m_hTemplate != NULL);

  DLGTEMPLATE* pTemplate = (DLGTEMPLATE*)GlobalLock(m_hTemplate);
  if ((pTemplate->style & DS_SETFONT) == 0)
  {
    GlobalUnlock(m_hTemplate);
    return FALSE;
  }

  BYTE* pb = GetFontSizeField(pTemplate);
  nFontSize = *(WORD*)pb;
  pb += sizeof (WORD);
  WideCharToMultiByte(CP_ACP, 0, (LPCWSTR)pb, -1,
  strFace.GetBufferSetLength(LF_FACESIZE), LF_FACESIZE, NULL, NULL);
  strFace.ReleaseBuffer();
  GlobalUnlock(m_hTemplate);
  return TRUE;
}
```

To address this, we had to understand that the reason this was done was to copy a wide character string representing the name of a font into the internal buffer of a `CString`, `strFace`. This required slightly different code for multibyte `CString` strings as for wide character `CString` strings, so we added an `#ifdef` in this case.

```cpp
#ifdef _MBCS
WideCharToMultiByte(CP_ACP, 0, (LPCWSTR)pb, -1,
strFace.GetBufferSetLength(LF_FACESIZE), LF_FACESIZE, NULL, NULL);
strFace.ReleaseBuffer();
#else
wcscpy(strFace.GetBufferSetLength(LF_FACESIZE), (LPCWSTR)pb);
strFace.ReleaseBuffer();
#endif
```

Of course, instead of `wcscpy` we really should use `wcscpy_s`, the more secure version. The next section addresses this.

As a check on our work, we should reset the **Character Set** to **Use Multibyte Character Set** and make sure that the code still compiles using MBCS as well as Unicode. Needless to say, a full test pass should be executed on the recompiled app after all these changes.

In our work with this Spy++ solution, it took about two working days for an average C++ developer to convert the code to Unicode. That did not include the retesting time.

## <a name="porting_to_secure_crt"></a> Step 12. Porting to use the Secure CRT

Porting the code to use the secure versions (the versions with the **_s** suffix) of CRT functions is next. In this case, the general strategy is to replace the function with the **_s** version and then, usually, add the required additional buffer size parameters. In many cases this is straightforward since the size is known. In other cases, where the size is not immediately available, it's necessary to add additional parameters to the function that's using the CRT function, or perhaps examine the usage of the destination buffer and see what the appropriate size limits are.

Visual C++ provides a trick to make it easier to get code secure without adding as many size parameters, and that is by using the template overloads. Since these overloads are templates, they are only available when compiling as C++, not as C. Spyxxhk is a C project, so the trick won't work for that.  However, Spyxx is not and we can use the trick. The trick is to add a line like this in a place where it will be compiled in every file of the project, such as in stdafx.h:

```cpp
#define _CRT_SECURE_TEMPLATE_OVERLOADS 1
```

When you define that, whenever the buffer is an array, rather than a raw pointer, its size is inferred from the array type and that is used as the size parameter, without you having to supply it. That helps to cut down the complexity of rewriting the code. You still have to replace the function name with the **_s** version, but that can often be done by a search and replace operation.

The return values of some functions changed. For example, `_itoa_s` (and `_itow_s` and the macro `_itot_s`) returns an error code (`errno_t`), rather than the string. So in those cases, you have to move the call to `_itoa_s` onto a separate line and replace it with the buffer's identifier.

Some of the common cases: for `memcpy`, when switching to `memcpy_s`, we frequently added the size of the structure being copied to. Similarly, for most strings and buffers, the size of the array or buffer is easily determined from the declaration of the buffer or by finding where the buffer was originally allocated. For some situations, you need to determine how big of a buffer is actually available, and if that information is not available in the scope of the function that you're modifying, it should be added as an additional parameter and the calling code should be modified to provide the information.

With these techniques, it took about half a day to convert the code to use the secure CRT functions. If you choose not to the template overloads and to add the size parameters manually, it would probably take twice or three times more time.

## <a name="deprecated_forscope"></a> Step 13. /Zc:forScope- is deprecated

Since Visual C++ 6.0, the compiler conforms to the current standard, which limits the scope of variables declared in a loop to the scope of the loop. The compiler option [/Zc:forScope](../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) (**Force Conformance for Loop Scope** in the project properties) controls whether or not this is reported as an error. We should update our code to be conformant, and add declarations just outside the loop. To avoid making the code changes, you can change that setting in the **Language** section of the C++ project properties to `No (/Zc:forScope-)`. However, keep in mind that `/Zc:forScope-` might be removed in a future release of Visual C++, so eventually your code will need to change to conform to the standard.

These issues are relatively easy to fix, but depending on your code, it might affect a lot of code. Here's a typical issue.

```cpp
int CPerfTextDataBase::NumStrings(LPCTSTR mszStrings) const
{
  for (int n = 0; mszStrings[0] != 0; n++)
  mszStrings = _tcschr(mszStrings, 0) + 1;
  return(n);
}
```

The above code produces the error:

```Output
'n': undeclared identifier
```

This occurs because the compiler has deprecated a compiler option that allowed code that no longer complies with the C++ standard. In the standard, declaring a variable inside a loop restricts its scope to the loop only, so the common practice of using a loop counter outside of the loop requires that the declaration of the counter also be moved outside the loop, as in the following revised code:

```cpp
int CPerfTextDataBase::NumStrings(LPCTSTR mszStrings) const
{
  int n;
  for (n = 0; mszStrings[0] != 0; n++)
  mszStrings = _tcschr(mszStrings, 0) + 1;
  return(n);
}
```

## Summary

Porting Spy++ from the original Visual C++ 6.0 code to the latest compiler took about 20 hours of coding time over the course of about a week. We upgraded directly through eight releases of the product from Visual Studio 6.0 to Visual Studio 2015. This is now the recommended approach for all upgrades on projects large and small.

## See also

[Porting and Upgrading: Examples and Case Studies](../porting/porting-and-upgrading-examples-and-case-studies.md)<br/>
[Previous case study: COM Spy](../porting/porting-guide-com-spy.md)
