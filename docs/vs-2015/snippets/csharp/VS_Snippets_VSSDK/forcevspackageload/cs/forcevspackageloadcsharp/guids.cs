// Guids.cs
// MUST match guids.h
using System;

namespace Microsoft.ForceVSPackageLoadCSharp
{
    static public class GuidList
    {
        public const string guidForceVSPackageLoadCSharpPkgString = "320ed0db-f7fd-4fa8-8001-c1f5e8e9608e";
        public const string guidForceVSPackageLoadCSharpCmdSetString = "908b42ab-b390-4571-8dc0-d72622fe3a20";

        public static readonly Guid guidForceVSPackageLoadCSharpCmdSet = new Guid(guidForceVSPackageLoadCSharpCmdSetString);
    };
}