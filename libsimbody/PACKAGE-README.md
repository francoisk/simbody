# libsimbody - SimTK multibody dynamics C++ library

This is a `build2` package for the [`simbody`](https://simtk.org/home/simbody)
C++ library. It provides science- and engineering-quality simulation of
articulated mechanisms, including biomechanical structures such as human and
animal skeletons, mechanical systems like robots, vehicles, and machines, and
anything else that can be described as a set of rigid bodies interconnected by
joints, influenced by forces and motions, and restricted by constraints.

Note that the Simbody Visualizer application is not supported.

## Supported platforms

- Windows
- Linux
- macOS

But see the *Dependencies* section below and the package `manifest` for
disabled build configurations.

## Usage

To start using `libsimbody` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libsimbody ^3.8.0
```

Then import the library in your `buildfile`:

```
import libs = libsimbody%lib{SimTKsimbody}
```

## Importable targets

This package provides the following importable targets:

```
lib{SimTKcommon}
lib{SimTKmath}
lib{SimTKsimbody}
```

Most user applications will only need to be linked against
`lib{SimTKsimbody}`.

Note that only dynamic libraries (DLLs) are supported on Windows. This is
because this package only supports the prebuilt dependencies provided in the
upstream repository (see `upstream/Platform/`) of which only DLLs are
provided.

## Dependencies

### Linux

Simbody requires the LAPACK and BLAS libraries. For example `liblapack` and
`libblas` or similar in the Debian package manager. See also `README.md` or
other upstream documentation for more details.
