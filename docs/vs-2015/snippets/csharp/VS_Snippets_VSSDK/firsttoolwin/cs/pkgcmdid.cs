// PkgCmdID.cs
// MUST match PkgCmdID.h
using System;

namespace Company.FirstToolWin
{
    static class PkgCmdIDList
    {
        public const uint cmdidWindowsMedia = 0x100;
        public const uint cmdidWindowsMediaWin = 0x101;
//<snippet11>
        public const int cmdidWindowsMediaOpen = 0x132;
        public const int cmdidWindowsMediaFilename = 0x133;
        public const int cmdidWindowsMediaFilenameGetList = 0x134;
        public const int ToolbarID = 0x1000;
//</snippet11>
    };
}