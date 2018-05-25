// Guids.cs
// MUST match guids.h
using System;

namespace Microsoft.PackageToBeLoaded
{
    static public class GuidList
    {
        public const string guidPackageToBeLoadedPkgString = "72c9ba38-5d63-45e4-aa0c-df5036e190ff";
        public const string guidPackageToBeLoadedCmdSetString = "370b92dc-4a8f-4705-a499-fe195add9b02";

        public static readonly Guid guidPackageToBeLoadedCmdSet = new Guid(guidPackageToBeLoadedCmdSetString);
    };
}