#pragma warning (disable : 4146)

// Paths to required MS OFFICE files (replace "MSO.DLL" and "MSWORD.OLB" with the actual paths to those files...)
#define _MSDLL_PATH "MSO.DLL"
// Delete the *.tlh files when changing import qualifiers
#import _MSDLL_PATH rename("RGB", "MSRGB") rename("DocumentProperties", "WordDocumentProperties") raw_interfaces_only

#import "C:\Program Files\Common Files\Microsoft Shared\VBA\VBA6\VBE6EXT.OLB" raw_interfaces_only

#define _MSWORDOLB_PATH "MSWORD.OLB"
#import _MSWORDOLB_PATH rename("ExitWindows", "WordExitWindows") rename("FindText", "WordFindText") raw_interfaces_only

#pragma warning (default : 4146)