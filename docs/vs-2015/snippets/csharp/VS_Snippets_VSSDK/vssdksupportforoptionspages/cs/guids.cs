// Guids.cs
// MUST match guids.h
using System;

namespace Microsoft.VSSDKSupportForOptionsPages
{
    static class GuidList
    {
        public const string guidVSSDKSupportForOptionsPagesPkgString = "2e0ce9d6-0ec8-42f4-9216-927d77a8832a";
        public const string guidVSSDKSupportForOptionsPagesCmdSetString = "15a40c0f-5d49-4db8-a274-456395ec07e7";

        public static readonly Guid guidVSSDKSupportForOptionsPagesCmdSet = new Guid(guidVSSDKSupportForOptionsPagesCmdSetString);
    };
}