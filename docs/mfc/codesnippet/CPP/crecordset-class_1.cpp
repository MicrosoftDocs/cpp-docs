// Construct a snapshot object
CCustomer rsCustSet(NULL);

if (!rsCustSet.Open())
return;

// Use the snapshot ...

// Close the snapshot
rsCustSet.Close();

// Destructor is called when the function exits