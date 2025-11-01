-- File:       glue.lua
-- Project:    glue
-- Repository: https://github.com/nessbe/glue
--
-- Copyright (c) 2025 nessbe
-- This file is part of the glue project and is licensed
-- under the terms specified in the LICENSE file located at the
-- root of this repository.
--
-- Unless required by applicable law or agreed to in writing,
-- the software is distributed on an "AS IS" BASIS, WITHOUT
-- WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
-- See the LICENSE file for details.

project "glue"
	kind "StaticLib"
	language "C"
	cdialect "C99"

	targetdir("%{wks.location}/build/bin/%{prj.name}")
	objdir("%{wks.location}/build/obj/%{prj.name}")

	files {
		"include/**.h",
		"source/**.c"
	}

	includedirs {
		"include"
	}

	filter "configurations:debug"
		defines "GLUE_DEBUG"
		symbols "On"
		runtime "Debug"

	filter "configurations:release"
		defines "GLUE_RELEASE"
		optimize "On"
		runtime "Release"
