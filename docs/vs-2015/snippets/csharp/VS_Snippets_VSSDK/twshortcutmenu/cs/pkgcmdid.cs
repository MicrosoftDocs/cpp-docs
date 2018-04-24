// PkgCmdID.cs
// MUST match PkgCmdID.h
using System;

namespace Microsoft.TWShortcutMenu
{
    //<snippet12>
    static class PkgCmdIDList
    {

        public const uint cmdidColorChange =    0x101;
        //<snippet11>
        public const int ColorMenu = 0x1000;

        public const int cmdidRed = 0x102;
        public const int cmdidYellow = 0x103;
        public const int cmdidBlue = 0x104;
        //</snippet11>

    };
    //</snippet12>
}