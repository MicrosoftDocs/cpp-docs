// Guids.cs
// MUST match guids.h
using System;

namespace Company.FirstToolWin
{
    static class GuidList
    {
        public const string guidFirstToolWinPkgString = "b16cb2f7-0e4a-40b0-a6b9-208590da9ad5";
        public const string guidFirstToolWinCmdSetString = "e35cd77f-a80e-4b79-8f73-d171fd7c2124";
        public const string guidToolWindowPersistanceString = "26a8c5ea-ac69-4f4b-8408-22e16e0541a1";

        public static readonly Guid guidFirstToolWinCmdSet = new Guid(guidFirstToolWinCmdSetString);
    };
}