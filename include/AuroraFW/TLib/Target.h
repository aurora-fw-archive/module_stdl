/****************************************************************************
** ┌─┐┬ ┬┬─┐┌─┐┬─┐┌─┐  ┌─┐┬─┐┌─┐┌┬┐┌─┐┬ ┬┌─┐┬─┐┬┌─
** ├─┤│ │├┬┘│ │├┬┘├─┤  ├┤ ├┬┘├─┤│││├┤ ││││ │├┬┘├┴┐
** ┴ ┴└─┘┴└─└─┘┴└─┴ ┴  └  ┴└─┴ ┴┴ ┴└─┘└┴┘└─┘┴└─┴ ┴
** A Powerful General Purpose Framework
** More information in: https://aurora-fw.github.io/
**
** Copyright (C) 2017 Aurora Framework, All rights reserved.
**
** This file is part of the Aurora Framework. This framework is free
** software; you can redistribute it and/or modify it under the terms of
** the GNU Lesser General Public License version 3 as published by the
** Free Software Foundation and appearing in the file LICENSE included in
** the packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
****************************************************************************/

#ifndef AURORAFW_TLIB_TARGET_H
#define AURORAFW_TLIB_TARGET_H

// CPU Architecture Targets
#include <AuroraFW/TLib/Target/Architecture.h>
// C or C++ Languages detection
#include <AuroraFW/TLib/Target/CCPlusPlus.h>
// Compiler Targets (Include detection and version)
#include <AuroraFW/TLib/Target/Compiler.h>
// Data Models
#include <AuroraFW/TLib/Target/DataModel.h>
// Options Compiler Targets
#include <AuroraFW/TLib/Target/Options.h>
// Open Source Target detection
#include <AuroraFW/TLib/Target/OpenSource.h>
// Platform detection
#include <AuroraFW/TLib/Target/Platform.h>
// Standards detections
#include <AuroraFW/TLib/Target/Standards.h>
// Data Type size - Word size for a specific target
#include <AuroraFW/TLib/Target/Wordsize.h>

#endif /// AURORAFW_TLIB_TARGET_H
