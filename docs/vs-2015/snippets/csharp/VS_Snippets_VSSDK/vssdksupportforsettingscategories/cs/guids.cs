// Guids.cs
// MUST match guids.h
using System;

namespace Microsoft.VSSDKSupportForSettingsCategories
{
    static class GuidList
    {
        public const string guidVSSDKSupportForSettingsCategoriesPkgString = "72c3b4c0-5ef4-4f90-8dea-de3cf6ee032d";
        public const string guidVSSDKSupportForSettingsCategoriesCmdSetString = "91f2346f-08ca-468d-8e4f-484c8f47c43d";

        public static readonly Guid guidVSSDKSupportForSettingsCategoriesCmdSet = new Guid(guidVSSDKSupportForSettingsCategoriesCmdSetString);
    };
}