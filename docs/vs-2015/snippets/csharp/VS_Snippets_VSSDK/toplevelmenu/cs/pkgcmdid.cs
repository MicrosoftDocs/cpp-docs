// PkgCmdID.cs
// MUST match PkgCmdID.h
using System;

namespace Microsoft.TopLevelMenu
{
    static class PkgCmdIDList
    {
        public const uint cmdidTestCommand =        0x100;
        //<snippet12>
        public const uint cmdidMRUList = 0x200;
        //</snippet12>
        //<snippet11>
        public const int cmdidTestSubCmd = 0x105;
        //</snippet11>

    };
}