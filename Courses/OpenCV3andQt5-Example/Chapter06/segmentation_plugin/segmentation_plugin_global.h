#ifndef SEGMENTATION_PLUGIN_GLOBAL_H
#define SEGMENTATION_PLUGIN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SEGMENTATION_PLUGIN_LIBRARY)
#  define SEGMENTATION_PLUGINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define SEGMENTATION_PLUGINSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // SEGMENTATION_PLUGIN_GLOBAL_H
