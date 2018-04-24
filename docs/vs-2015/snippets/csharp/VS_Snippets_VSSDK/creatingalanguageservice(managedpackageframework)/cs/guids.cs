// Guids.cs
// MUST match guids.h
using System;

namespace Microsoft.MyLanguagePackage
{
    static class GuidList
    {
        public const string guidMyLanguagePackagePkgString = "a8a7fe2a-ab36-4340-9136-71618b1f0218";
        public const string guidMyLanguagePackageCmdSetString = "13a7a8ba-1e4e-4097-9c01-2ba22a9f210c";

        public static readonly Guid guidMyLanguagePackageCmdSet = new Guid(guidMyLanguagePackageCmdSetString);
    };
}