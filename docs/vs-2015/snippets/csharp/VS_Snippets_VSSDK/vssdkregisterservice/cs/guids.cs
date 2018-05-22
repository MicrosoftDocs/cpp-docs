// Guids.cs
// MUST match guids.h
using System;

namespace Microsoft.VSSDKRegisterService
{
    static class GuidList
    {
        public const string guidVSSDKRegisterServicePkgString = "d8bd73f9-2e82-42d5-a0e8-9f54dbf99671";
        public const string guidVSSDKRegisterServiceCmdSetString = "23aaab3c-4891-4a70-9990-859cb511cdf6";

        public static readonly Guid guidVSSDKRegisterServiceCmdSet = new Guid(guidVSSDKRegisterServiceCmdSetString);
    };
}