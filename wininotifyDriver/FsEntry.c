#include <fltKernel.h>

DRIVER_INITIALIZE DriverEntry;

#ifdef ALLOC_PRAGMA
	#pragma alloc_text(INIT, DriverEntry)
#endif

NTSTATUS DriverEntry( PDRIVER_OBJECT pDriverObject,
					  PUNICODE_STRING pRegistryPath ) 
{
	UNREFERENCED_PARAMETER(pDriverObject);
	UNREFERENCED_PARAMETER(pRegistryPath);

	return STATUS_SUCCESS;
}