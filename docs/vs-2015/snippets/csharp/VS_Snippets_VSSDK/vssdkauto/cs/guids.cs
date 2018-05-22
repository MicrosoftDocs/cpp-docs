// Guids.cs
// MUST match guids.h
using System;

namespace Microsoft.VSSDKAuto
{
    static class GuidList
    {
        public const string guidVSSDKAutoPkgString = "f1454ce3-04e0-4804-9483-84a1a3e95095";
        public const string guidVSSDKAutoCmdSetString = "2545cdda-58ee-4175-bbbd-0081351ba9af";

        public static readonly Guid guidVSSDKAutoCmdSet = new Guid(guidVSSDKAutoCmdSetString);
    };
}