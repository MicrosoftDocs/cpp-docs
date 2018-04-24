// Guids.cs
// MUST match guids.h
using System;

namespace Microsoft.VSSDKHRESULTInformation
{
    static class GuidList
    {
        public const string guidVSSDKHRESULTInformationPkgString = "affc6f30-b1fb-47ee-8c32-f0f2d85d9a14";
        public const string guidVSSDKHRESULTInformationCmdSetString = "4a08ad29-9684-429a-ac3b-0fe0ba56db9a";

        public static readonly Guid guidVSSDKHRESULTInformationCmdSet = new Guid(guidVSSDKHRESULTInformationCmdSetString);
    };
}