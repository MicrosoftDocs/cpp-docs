// Guids.cs
// MUST match guids.h
using System;

namespace Microsoft.TopLevelMenu
{
    static class GuidList
    {
        public const string guidTopLevelMenuPkgString = "9ab7a545-2965-4e2a-b361-68dec3f8b3ef";
        public const string guidTopLevelMenuCmdSetString = "5b21b3b4-f305-4582-9567-cf45c9bba727";

        public static readonly Guid guidTopLevelMenuCmdSet = new Guid(guidTopLevelMenuCmdSetString);
    };
}