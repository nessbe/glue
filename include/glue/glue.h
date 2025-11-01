// File:       glue.h
// Project:    glue
// Repository: https://github.com/nessbe/glue
//
// Copyright (c) 2025 nessbe
// This file is part of the glue project and is licensed
// under the terms specified in the LICENSE file located at the
// root of this repository.
//
// Unless required by applicable law or agreed to in writing,
// the software is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the LICENSE file for details.

#ifndef GLUE_H
#define GLUE_H

#ifdef _WIN32
	#define GLUE_PLATFORM_WINDOWS

	#ifdef _WIN64
		#define GLUE_PLATFORM_WIN64
	#else
		#define GLUE_PLATFORM_WIN32
	#endif
#elif defined(__APPLE__) || defined(__MACH__)
	#include <TargetConditionals.h>

	#define GLUE_PLATFORM_APPLE

	#if TARGET_IPHONE_SIMULATOR
		#define GLUE_PLATFORM_IOS_SIMULATOR
	#elif TARGET_OS_IPHONE
		#define GLUE_PLATFORM_IOS
	#elif TARGET_OS_MAC
		#define GLUE_PLATFORM_MACOS
	#endif
#elif defined(__ANDROID__)
	#define GLUE_PLATFORM_ANDROID
#elif defined(__linux__)
	#define GLUE_PLATFORM_LINUX
#endif

#endif
