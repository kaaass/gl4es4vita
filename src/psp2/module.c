#include <psp2/kernel/modulemgr.h>

#ifdef PRX_MODULE

#include <GL/gl.h>

void abort() {
}

int module_stop(SceSize argc, const void *args)
{
	return SCE_KERNEL_STOP_SUCCESS;
}

int module_exit()
{
	return SCE_KERNEL_STOP_SUCCESS;
}

void _start() __attribute__ ((weak, alias("module_start")));
int module_start(SceSize argc, void *args)
{
	return SCE_KERNEL_START_SUCCESS;
}
#endif