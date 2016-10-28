// Store the data in a vector of std::strings
typedef std::vector< std::string >         ContainerType;

// The collection interface exposes the data as BSTRs
typedef BSTR                               CollectionExposedType;
typedef IWords                             CollectionInterface;

// Use IEnumVARIANT as the enumerator for VB compatibility
typedef VARIANT                            EnumeratorExposedType;
typedef IEnumVARIANT                       EnumeratorInterface;