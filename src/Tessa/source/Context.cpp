#include <stdio.h>
#include <stdarg.h>
#include <vd2/Tessa/Context.h>

void VDTBeginScopeF(IVDTProfiler *profiler, uint32 color, const char *format, ...) {
	va_list val;
	char buf[256];

	va_start(val, format);
	vsprintf_s(buf, format, val);
	va_end(val);
	buf[255] = 0;
	profiler->BeginScope(color, buf);
}
