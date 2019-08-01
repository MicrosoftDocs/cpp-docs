CAge* pcage = new CAge(21); // CAge is derived from CObject.
ASSERT(pcage != NULL);
ASSERT(pcage->IsKindOf(RUNTIME_CLASS(CAge)));
// Terminates program only if pcage is NOT a CAge*.   