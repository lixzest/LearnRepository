#ifndef TESTLOADERLIB_GLOBAL_H
#define TESTLOADERLIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TESTLOADERLIB_LIBRARY)
#  define TESTLOADERLIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define TESTLOADERLIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // TESTLOADERLIB_GLOBAL_H
