---
title: "_getdiskfree"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "_getdiskfree"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-filesystem-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "getdiskfree"
  - "_getdiskfree"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "diskfree_t type"
  - "_getdiskfree function"
  - "_diskfree_t type"
  - "disk size"
  - "getdiskfree function"
ms.assetid: 47a3f6cf-4816-452a-8f3d-1c3ae02a0f2a
caps.latest.revision: 19
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# _getdiskfree
Uses information about a disk drive to populate a `_diskfree_t` structure.  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the [!INCLUDE[wrt](../atl/includes/wrt_md.md)]. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
unsigned _getdiskfree(  
   unsigned drive,  
   struct _diskfree_t * driveinfo  
);  
```  
  
#### Parameters  
 [in] `drive`  
 The disk drive for which you want information.  
  
 [out] `driveinfo`  
 A `_diskfree_t` structure that will be populated with information about the drive.  
  
## Return Value  
 If the function succeeds, the return value is zero. If the function fails, the return value is the error code. The value `errno` is set for any errors that are returned by the operating system. For more information about error conditions that are indicated by `errno`, see [errno Constants](../crt/errno-constants.md).  
  
## Remarks  
 The `_diskfree_t` structure is defined in Direct.h.  
  
```  
struct _diskfree_t {   
   unsigned total_clusters;   
   unsigned avail_clusters;   
   unsigned sectors_per_cluster;   
   unsigned bytes_per_sector;   
};  
```  
  
 This function validates its parameters. If the `driveinfo` pointer is `NULL` or `drive` specifies an invalid drive, this function invokes an invalid parameter handler, as described in [Parameter Validation](../crt/parameter-validation.md). If execution is allowed to continue, the function returns `EINVAL` and sets `errno` to `EINVAL`. Valid drives range from 0 to 26. A `drive` value of 0 specifies the current drive; thereafter, numbers map to letters of the English alphabet such that 1 indicates drive A, 3 indicates drive C, and so on.  
  
 `total_clusters`  
 The total number of clusters, both used and available, on the disk.  
  
 `avail_clusters`  
 The number of unused clusters on the disk.  
  
 `sectors_per_cluster`  
 The number of sectors in each cluster.  
  
 `bytes_per_sector`  
 The size of each sector in bytes.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_getdiskfree`|\<direct.h>|  
  
 For more compatibility information, see [Compatibility](../crt/compatibility.md).  
  
## Example  
  
```  
  
      // crt_getdiskfree.c  
// compile with: /c  
#include <windows.h>  
#include <direct.h>  
#include <stdio.h>  
#include <tchar.h>  
  
TCHAR   g_szBorder[] = _T("======================================================================\n");  
TCHAR   g_szTitle1[] = _T("|DRIVE|TOTAL CLUSTERS|AVAIL CLUSTERS|SECTORS / CLUSTER|BYTES / SECTOR|\n");  
TCHAR   g_szTitle2[] = _T("|=====|==============|==============|=================|==============|\n");  
TCHAR   g_szLine[]   = _T("|  A: |              |              |                 |              |\n");  
  
void utoiRightJustified(TCHAR* szLeft, TCHAR* szRight, unsigned uVal);  
  
int main(int argc, char* argv[]) {  
   TCHAR szMsg[4200];  
   struct _diskfree_t df = {0};  
   ULONG uDriveMask = _getdrives();  
   unsigned uErr, uLen, uDrive;  
  
   printf(g_szBorder);  
   printf(g_szTitle1);  
   printf(g_szTitle2);  
  
   for (uDrive=1; uDrive<=26; ++uDrive) {  
      if (uDriveMask & 1) {  
         uErr = _getdiskfree(uDrive, &df);  
         memcpy(szMsg, g_szLine, sizeof(g_szLine));  
         szMsg[3] = uDrive + 'A' - 1;  
  
         if (uErr == 0) {  
            utoiRightJustified(szMsg+8,  szMsg+19, df.total_clusters);  
            utoiRightJustified(szMsg+23, szMsg+34, df.avail_clusters);  
            utoiRightJustified(szMsg+38, szMsg+52, df.sectors_per_cluster);  
            utoiRightJustified(szMsg+56, szMsg+67, df.bytes_per_sector);  
         }  
         else {  
            uLen = FormatMessage(FORMAT_MESSAGE_FROM_SYSTEM, NULL,  
                            uErr, 0, szMsg+8, 4100, NULL);  
            szMsg[uLen+6] = ' ';  
            szMsg[uLen+7] = ' ';  
            szMsg[uLen+8] = ' ';  
         }  
  
         printf(szMsg);  
      }  
  
      uDriveMask >>= 1;  
   }  
  
   printf(g_szBorder);  
}  
  
void utoiRightJustified(TCHAR* szLeft, TCHAR* szRight, unsigned uVal) {  
   TCHAR* szCur = szRight;  
   int nComma = 0;  
  
   if (uVal) {  
      while (uVal && (szCur >= szLeft)) {  
         if   (nComma == 3) {  
            *szCur = ',';  
            nComma = 0;  
         }  
         else {  
            *szCur = (uVal % 10) | 0x30;  
            uVal /= 10;  
            ++nComma;  
         }  
  
         --szCur;  
      }  
   }  
   else {  
      *szCur = '0';  
      --szCur;  
   }  
  
   if (uVal) {  
      szCur = szLeft;  
  
      while   (szCur <= szRight) {  
         *szCur = '*';  
         ++szCur;  
      }  
   }  
}  
```  
  
 **======================================================================**  
**&#124;DRIVE&#124;TOTAL CLUSTERS&#124;AVAIL CLUSTERS&#124;SECTORS / CLUSTER&#124;BYTES / SECTOR&#124;**  
**&#124;=====&#124;==============&#124;==============&#124;=================&#124;==============&#124;**  
**&#124;  A: &#124; The device is not ready.    &#124;                 &#124;              &#124;**  
**&#124;  C: &#124;    4,721,093 &#124;    3,778,303 &#124;               8 &#124;          512 &#124;**  
**&#124;  D: &#124;    1,956,097 &#124;    1,800,761 &#124;               8 &#124;          512 &#124;**  
**&#124;  E: &#124; The device is not ready.    &#124;                 &#124;              &#124;**  
**======================================================================**   
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Directory Control](../crt/directory-control.md)