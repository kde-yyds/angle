VK-GL-CTS README
===========

This repository contains Khronos Conformance Testing Suite called VK-GL-CTS
which originated from dEQP (drawElements Quality Program).
VK-GL-CTS contains tests for several graphics APIs, including
OpenGL, OpenGL ES, EGL, Vulkan, and Vulkan SC.

Documentation
-------------

Up-to-date documentation for VK-GL-CTS is available at:

* [The VK-GL-CTS wiki for Khronos members](https://gitlab.khronos.org/Tracker/vk-gl-cts/wikis/home)
* [The VK-GL-CTS wiki for non-Khronos members](https://github.com/KhronosGroup/VK-GL-CTS/wiki)

The .qpa logs generated by the conformance tests may contain embedded PNG images of the results.
These can be viewed with `scripts/qpa_image_viewer.html`, by opening the file
with a web browser and following its instructions, or using the
[Cherry](https://android.googlesource.com/platform/external/cherry/)
tool.

Khronos Vulkan Conformance Tests
--------------------------------

This repository includes Khronos Vulkan CTS under `external/vulkancts` directory.
For more information see [Vulkan CTS README](external/vulkancts/README.md).

Khronos OpenGL / OpenGL ES Conformance Tests
--------------------------------

This repository includes Khronos OpenGL / OpenGL ES CTS under `external/openglcts` directory.
For more information see [OpenGL / OpenGL ES CTS README](external/openglcts/README.md).

Selecting a subset of targets to build by default
--------------------------------

When configuring the source code of VK-GL-CTS for running either Vulkan
Conformance Tests or OpenGL(ES) Conformance Tests as described above, CMake will
generate build files that, by default on desktop platforms, will build every
possible project binary. This may be undesirable due the amount of time and disk
space needed to perform the build.

One way of selecting only a subset of the targets to be built is using CMake's
target selection mechanism. For example, the following command will only build
`deqp-vk`, the main Vulkan Conformance Tests binary:

```
cmake --build BUILD_DIRECTORY --target deqp-vk
```

When building only a subset of targets is the preferred default behavior for a
given working copy or build directory, there's a second target selection
mechanism that can be used to avoid passing the `--target` option every time:
the `SELECTED_BUILD_TARGETS` CMake option. If set to a non-empty value, only the
targets listed in that configuration option, separated by spaces, will be built.

For example, passing `-DSELECTED_BUILD_TARGETS="deqp-vk deqp-vksc"` when
configuring the project will make `cmake --build BUILD_DIRECTORY` act as if it
had been passed `--target deqp-vk --target deqp-vksc` as additional arguments.

**IMPORTANT**: Target subset selection may not have been thoroughly tested in
all enviroments and situations, and it does not replace the instructions given
for the purposes of creating a conformance submission.

ANGLE for Android
--------------------------------

ANGLE can be built for Android by following the instructions
[here](https://chromium.googlesource.com/angle/angle.git/+/HEAD/doc/DevSetup.md#building-angle-for-android).

The resulting ANGLE shared object libraries can be linked against and embedded into `dEQP.apk` with
the `--angle-path` option.   This will cause `dEQP.apk` to use the ANGLE libraries for OpenGL ES
calls, rather than the native drivers.

An ABI must be specified and the directory structure containing the ANGLE shared objects must match
it so the build system can find the correct `*.so` files.

Assuming ANGLE shared objects are generated into `~/chromium/src/out/Release/` and `dEQP.apk` will
be generated with `--abis arm64-v8a`, issue the following commands:

	cd ~/chromium/src/out/Release/
	mkdir arm64-v8a && cd arm64-v8a
	cp ../lib*_angle.so .

The `--angle-path ~/chromium/src/out/Release/` option can then be used to link against and embed the
ANGLE shared object files.   The full command would be:

	python scripts/android/build_apk.py --sdk <path to Android SDK> --ndk <path to Android NDK> --abis arm64-v8a --angle-path ~/chromium/src/out/Release/