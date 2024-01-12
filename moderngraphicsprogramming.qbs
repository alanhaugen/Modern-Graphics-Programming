import "../solid/solid.qbs" as solid

solid {
    Application {
        name: "ModernGraphicsProgramming"

        files: [
            "README.md",
            "source/main.cpp",
            "source/main.h",
            "source/tut01-HelloTriangle/tut01.cpp",
            "source/tut01-HelloTriangle/tut01.h",
            "source/tut02-PlayingwithColors/FragPosition.cpp",
            "source/tut02-PlayingwithColors/FragPosition.h",
            "source/tut02-PlayingwithColors/VertexColors.cpp",
            "source/tut02-PlayingwithColors/VertexColors.h",
            "source/tut03-OpenGLsMovingTriangle/CPUPositionOffset.cpp",
            "source/tut03-OpenGLsMovingTriangle/CPUPositionOffset.h",
            "source/tut03-OpenGLsMovingTriangle/FragChangeColor.cpp",
            "source/tut03-OpenGLsMovingTriangle/FragChangeColor.h",
            "source/tut03-OpenGLsMovingTriangle/VertCalcOffset.cpp",
            "source/tut03-OpenGLsMovingTriangle/VertCalcOffset.h",
            "source/tut03-OpenGLsMovingTriangle/VertPositionOffset.cpp",
            "source/tut03-OpenGLsMovingTriangle/VertPositionOffset.h",
            "source/tut04-ObjectsAtRest/AspectRatio.cpp",
            "source/tut04-ObjectsAtRest/AspectRatio.h",
            "source/tut04-ObjectsAtRest/MatrixPerspective.cpp",
            "source/tut04-ObjectsAtRest/MatrixPerspective.h",
            "source/tut04-ObjectsAtRest/OrthoCube.cpp",
            "source/tut04-ObjectsAtRest/OrthoCube.h",
            "source/tut04-ObjectsAtRest/ShaderPerspective.cpp",
            "source/tut04-ObjectsAtRest/ShaderPerspective.h",
            "source/tut05-ObjectsInDepth/BaseVertexOverlap.cpp",
            "source/tut05-ObjectsInDepth/BaseVertexOverlap.h",
            "source/tut05-ObjectsInDepth/DepthBuffer.cpp",
            "source/tut05-ObjectsInDepth/DepthBuffer.h",
        ]

        Depends { name: "core"  }
        Depends { name: "nullrenderer"  }
        Depends { name: "nullphysics"  }
        Depends { name: "nullaudio"  }
        Depends { name: "nullphysics"  }
        Depends { name: "nullfilesystem"  }
        Depends { name: "gles2renderer"  }
        Depends { name: "stdfilesystem"  }
        Depends { name: "portaudioaudio"  }

        property stringList includePaths: "../solid/source"

        Properties {
            condition: qbs.targetOS.contains("macos")

            cpp.frameworks: macosFrameworks

            cpp.dynamicLibraries: macosSharedLibs
            cpp.staticLibraries: staticLibs.concat("SDL2")

            cpp.libraryPaths: [project.buildDirectory, "../solid/lib/debug/darwin/x86_64"]
            cpp.includePaths: includePaths.concat("../solid/include/darwin")
            cpp.defines: project.defines.concat(project.sdlDefines)
        }

        Properties {
            condition: qbs.targetOS.contains("linux")

            //cpp.dynamicLibraries: linuxSharedLibs
            cpp.staticLibraries: staticLibs.concat("SDL2")

            cpp.libraryPaths: [project.buildDirectory, "../solid/lib/debug/linux/x86_64"]
            cpp.includePaths: includePaths.concat("../solid/include/linux")
            cpp.defines: project.defines.concat(project.sdlDefines)
        }

        Properties {
            condition: qbs.targetOS.contains("windows")

            cpp.dynamicLibraries: windowsSharedLibs
            cpp.staticLibraries: staticLibs

            cpp.libraryPaths: [project.buildDirectory, "../solid/lib/debug/mingw32/x86"]
            cpp.includePaths: includePaths.concat("../solid/include/mingw32")
            cpp.defines: project.defines.concat(project.windowsDefines)
        }

        Depends { name: "cpp" }
        Depends { name: "core" }
        Depends { name: "nullphysics" }
        Depends { name: "bulletphysics" }
    }
}
