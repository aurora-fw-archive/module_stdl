#ifndef AURORAFW_TLIB__STRING_H
#define AURORAFW_TLIB__STRING_H

#include <AuroraFW/TLib/Target/CCPlusPlus.h>

#ifdef AFW_TARGET_CXX
#include <cstring>
#elif defined(AFW_TARGET_CC)
#include <string.h>
#endif

#endif // AURORAFW_TLIB__STRING_H