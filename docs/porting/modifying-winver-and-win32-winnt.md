---
title: "Update WINVER and _WIN32_WINNT"
description: "When and how to update WINVER and _WIN32_WINNT macros in upgraded Visual Studio C++ projects."
ms.date: "06/19/2020"
helpviewer_keywords: ["WINVER in an upgraded Visual Studio C++ project", "_WIN32_WINNT in an upgraded Visual Studio C++ project"]
ms.assetid: 6a1f1d66-ae0e-48a7-81c3-524d8e8f3447
---
# Update WINVER and _WIN32_WINNT

When you use the Windows SDK, you can specify which versions of Windows your code can run on. The preprocessor macros **WINVER** and **_WIN32_WINNT** specify the minimum operating system version your code supports. Visual Studio and the Microsoft C++ compiler support targeting Windows 7 SP1 and later. Older toolsets include support for Windows XP SP2, Windows Server 2003 SP1, Vista, and Windows Server 2008. Windows 95, Windows 98, Windows ME, Windows NT, and Windows 2000 are unsupported.

When you upgrade an older project, you may need to update your **WINVER** or **_WIN32_WINNT** macros. If they're assigned values for an unsupported version of Windows, you may see compilation errors related to these macros.

## Remarks

To modify the macros, in a header file (for example, in *targetver.h*, which is included by some project templates that target Windows), add the following lines.

```C
#define WINVER 0x0A00
#define _WIN32_WINNT 0x0A00
```

The macros in the example are set to target every version of the Windows 10 operating system. The possible values are listed in the Windows header file *sdkddkver.h*, which defines macros for each major Windows version. To build your application to support a previous Windows platform, include *WinSDKVer.h*. Then, set the **WINVER** and **_WIN32_WINNT** macros to the oldest supported platform before including *sdkddkver.h*. Here are the lines from the Windows 10 SDK version of *sdkddkver.h* that encode the values for each major version of Windows:

```C
//
// _WIN32_WINNT version constants
//
#define _WIN32_WINNT_NT4                    0x0400 // Windows NT 4.0
#define _WIN32_WINNT_WIN2K                  0x0500 // Windows 2000
#define _WIN32_WINNT_WINXP                  0x0501 // Windows XP
#define _WIN32_WINNT_WS03                   0x0502 // Windows Server 2003
#define _WIN32_WINNT_WIN6                   0x0600 // Windows Vista
#define _WIN32_WINNT_VISTA                  0x0600 // Windows Vista
#define _WIN32_WINNT_WS08                   0x0600 // Windows Server 2008
#define _WIN32_WINNT_LONGHORN               0x0600 // Windows Vista
#define _WIN32_WINNT_WIN7                   0x0601 // Windows 7
#define _WIN32_WINNT_WIN8                   0x0602 // Windows 8
#define _WIN32_WINNT_WINBLUE                0x0603 // Windows 8.1
#define _WIN32_WINNT_WINTHRESHOLD           0x0A00 // Windows 10
#define _WIN32_WINNT_WIN10                  0x0A00 // Windows 10
// . . .
```

For a more fine-grained approach to versioning, you can use the NTDDI version constants in *sdkddkver.h*. Here are some of the macros defined by *sdkddkver.h* in Windows 10 SDK version 10.0.18362.0:

```C
//
// NTDDI version constants
//
#define NTDDI_WIN7                          0x06010000
#define NTDDI_WIN8                          0x06020000
#define NTDDI_WINBLUE                       0x06030000
#define NTDDI_WINTHRESHOLD                  0x0A000000  /* ABRACADABRA_THRESHOLD */
#define NTDDI_WIN10                         0x0A000000  /* ABRACADABRA_THRESHOLD */
#define NTDDI_WIN10_TH2                     0x0A000001  /* ABRACADABRA_WIN10_TH2 */
#define NTDDI_WIN10_RS1                     0x0A000002  /* ABRACADABRA_WIN10_RS1 */
#define NTDDI_WIN10_RS2                     0x0A000003  /* ABRACADABRA_WIN10_RS2 */
#define NTDDI_WIN10_RS3                     0x0A000004  /* ABRACADABRA_WIN10_RS3 */
#define NTDDI_WIN10_RS4                     0x0A000005  /* ABRACADABRA_WIN10_RS4 */
#define NTDDI_WIN10_RS5                     0x0A000006  /* ABRACADABRA_WIN10_RS5 */
#define NTDDI_WIN10_19H1                    0x0A000007  /* ABRACADABRA_WIN10_19H1*/

#define WDK_NTDDI_VERSION                   NTDDI_WIN10_19H1 /* ABRACADABRA_WIN10_19H1 */

//
// masks for version macros
//
#define OSVERSION_MASK      0xFFFF0000
#define SPVERSION_MASK      0x0000FF00
#define SUBVERSION_MASK     0x000000FF

//
// macros to extract various version fields from the NTDDI version
//
#define OSVER(Version)  ((Version) & OSVERSION_MASK)
#define SPVER(Version)  (((Version) & SPVERSION_MASK) >> 8)
#define SUBVER(Version) (((Version) & SUBVERSION_MASK) )
```

The **OSVER**, **SPVER**, and **SUBVER** macros can be used in your code to control conditional compilation for different levels of API support.

You may not see all of these versions of Windows listed in the *sdkddkver.h* that you're looking at. That means you're probably using an older version of the Windows SDK. (If you see more, you're probably looking at a newer version of the SDK.) By default, new Windows projects in Visual Studio use the latest Windows SDK that ships with Visual Studio. To use a newer SDK you've installed separately, you'll have to set the Windows SDK explicitly in your project properties.

> [!NOTE]
> Values are not guaranteed to work if you include internal MFC headers in your application.

You can also define this macro by using the `/D` compiler option. For more information, see [/D (Preprocessor Definitions)](../build/reference/d-preprocessor-definitions.md).

For more information about the meanings of these macros, see [Using the Windows Headers](/windows/win32/WinProg/using-the-windows-headers).

## See also

[Visual C++ change history](../porting/visual-cpp-change-history-2003-2015.md)
