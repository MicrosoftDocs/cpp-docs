// Guids.cs
// MUST match guids.h
using System;

namespace Microsoft.VSSDKResources
{
    static class GuidList
    {
        public const string guidVSSDKResourcesPkgString = "9f50b803-6f7b-46c9-87d2-4c334275cdf0";
        public const string guidVSSDKResourcesCmdSetString = "fed4c89b-fb74-43e7-b29f-fe40c6c1042f";

        public static readonly Guid guidVSSDKResourcesCmdSet = new Guid(guidVSSDKResourcesCmdSetString);
    };
}