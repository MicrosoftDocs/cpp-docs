CMemoryState msOld;
msOld.Checkpoint();
CPerson* pper1 = new CPerson();
CPerson* pper2 = new CPerson();
msOld.DumpAllObjectsSince();