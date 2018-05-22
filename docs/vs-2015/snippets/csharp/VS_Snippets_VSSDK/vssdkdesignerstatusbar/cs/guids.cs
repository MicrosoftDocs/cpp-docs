// Guids.cs
// MUST match guids.h
using System;

namespace Microsoft.VSSDKDesignerStatusBar
{
    static class GuidList
    {
        public const string guidVSSDKDesignerStatusBarPkgString = "38fbbf94-0348-4c53-a05d-54e5eeac95d5";
        public const string guidVSSDKDesignerStatusBarCmdSetString = "0ab16ec6-90c8-4af2-9efc-59d79feb1886";

        public static readonly Guid guidVSSDKDesignerStatusBarCmdSet = new Guid(guidVSSDKDesignerStatusBarCmdSetString);
    };
}