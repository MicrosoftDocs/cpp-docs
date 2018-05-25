// Guids.cs
// MUST match guids.h
using System;

namespace Microsoft.VSSDKProgressStatusBar
{
    static class GuidList
    {
        public const string guidVSSDKProgressStatusBarPkgString = "44ee151b-7660-47ce-8535-74ec7ae209e6";
        public const string guidVSSDKProgressStatusBarCmdSetString = "3031d3ec-bc24-412d-a150-f661e9913445";

        public static readonly Guid guidVSSDKProgressStatusBarCmdSet = new Guid(guidVSSDKProgressStatusBarCmdSetString);
    };
}