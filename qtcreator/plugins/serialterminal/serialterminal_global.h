#pragma once

#include <QtGlobal>

#if defined(SERIALTERMINAL_LIBRARY)
#  define SERIALTERMINALSHARED_EXPORT Q_DECL_EXPORT
#else
#  define SERIALTERMINALSHARED_EXPORT Q_DECL_IMPORT
#endif
