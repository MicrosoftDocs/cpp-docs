// Guids.cs
// MUST match guids.h
using System;

namespace Microsoft.TWShortcutMenu
{
    static class GuidList
    {
        public const string guidTWShortcutMenuPkgString = "515f61b0-741c-4bed-a645-62cf370a96a8";
        public const string guidTWShortcutMenuCmdSetString = "4035dc6d-b721-4efa-98ed-99f34c167953";
        public const string guidToolWindowPersistanceString = "0b9cf6c2-84a9-4c78-a237-c293d0c2ccaa";

        public static readonly Guid guidTWShortcutMenuCmdSet = new Guid(guidTWShortcutMenuCmdSetString);
    };
}