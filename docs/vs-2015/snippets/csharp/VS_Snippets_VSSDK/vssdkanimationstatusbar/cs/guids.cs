// Guids.cs
// MUST match guids.h
using System;

namespace Microsoft.VSSDKAnimationStatusBar
{
    static class GuidList
    {
        public const string guidVSSDKAnimationStatusBarPkgString = "24618ee5-46be-42cd-962a-aabb5e61871e";
        public const string guidVSSDKAnimationStatusBarCmdSetString = "2fbd0f3e-37b7-4b2f-a514-e3ddcd8b5c87";

        public static readonly Guid guidVSSDKAnimationStatusBarCmdSet = new Guid(guidVSSDKAnimationStatusBarCmdSetString);
    };
}