![IOTA Logo][iota-logo]

# IOTA C++ Library

[![Travis Build Status][travis-badge]][travis]
[![Appveyor Build Status][appveyor-badge]][appveyor]
[![Coveralls Status][coveralls-badge]][coveralls]
[![Documentation][documentation-badge]][documentation]
[![MIT License][license-badge]][license]

This is not (yet) an official C++ client library for the [IOTA Reference Implementation (IRI)](https://github.com/iotaledger/iri).

It implements both the [official API](https://iota.readme.io/docs/getting-started), as well as [newly proposed features](https://github.com/iotaledger/wiki/blob/master/api-proposal.md#proposed-api-calls).

## Table of Contents

1.  [Disclaimer](#disclaimer)
1.  [Documentation](#documentation)
    1.  [Installation](#installation)
    1.  [Getting Started](#getting-started)
    1.  [Doxygen](#doxygen)
    1.  [Wiki](#wiki)
    1.  [Examples](#examples)
1.  [Technologies & dependencies](#technologies--dependencies)
    1.  [Technologies](#technologies)
    1.  [Dependencies](#dependencies)
1.  [Community](#community)
    1.  [Resources](#resources)
    1.  [Contributing](#contributing)
    1.  [Donating](#donating)

## Disclaimer

-   This is an early beta release, expect unexpected results.
-   There may be performance and stability issues.
-   This library is still in early development and there may be breaking changes in the near future.
-   You may loose all your money...

## Documentation

### Installation

```
git clone --recursive git@github.com:thibault-martinez/iota.lib.cpp.git
cd iota.lib.cpp
mkdir build
cd build
cmake ..
make
```

### Getting Started

```cpp
IOTA::API::Core api("node.iotawallet.info", 14265);
auto            res = api.getTransactionsToApprove(27);

std::cout << res.getTrunkTransaction() << std::endl;
std::cout << res.getBranchTransaction() << std::endl;
```

### Doxygen

A [Doxygen documentation](https://thibault-martinez.github.io/iota.lib.cpp/html/) is available and provides full API documentation for the library.

### Wiki

A [Wiki](https://github.com/thibault-martinez/iota.lib.cpp/wiki) is available and provides full documentation for the library as well as [installation explanations](https://github.com/thibault-martinez/iota.lib.cpp/wiki/Installation).

### Examples

There's an extensive list of **test cases** on the [test folder](https://github.com/thibault-martinez/iota.lib.cpp/tree/master/test/source) that can be used as reference when developing apps with IOTA.

## Technologies & dependencies

### Technologies

This library currently uses C++11.

### Dependencies

-   [Boost Multiprecision](https://github.com/boostorg/multiprecision)
-   [C++ Requests](https://github.com/whoshuu/cpr)
-   [JSON For Modern C++](https://github.com/nlohmann/json)
-   [Keccak Code Package](https://github.com/gvanas/KeccakCodePackage)

## Community

### Resources

If you want to get involved in the community, need help with getting setup, have any issues related with the library or just want to discuss Blockchain, Distributed Ledgers and IoT with other people, feel free to visit one of our resources :

-   [Website](https://iota.org/)
-   [Slack](http://slack.iota.org/)
-   [Forum](https://forum.iota.org/)
-   [Stack Exchange](https://iota.stackexchange.com/)

### Contributing

Please report any issues using the [Issue Tracker](https://github.com/thibault-martinez/iota.lib.cpp/issues).

### Donating

[iota-logo]: https://raw.githubusercontent.com/iotaledger/documentation/master/source/images/iota-logo.png

[travis]: https://travis-ci.org/thibault-martinez/iota.lib.cpp
[travis-badge]: https://travis-ci.org/thibault-martinez/iota.lib.cpp.svg?branch=master

[appveyor]: https://ci.appveyor.com/project/Cylix/iota-lib-cpp
[appveyor-badge]: https://ci.appveyor.com/api/projects/status/512okcym7n737v4r?svg=true

[coveralls]: https://coveralls.io/github/thibault-martinez/iota.lib.cpp?branch=master
[coveralls-badge]: https://coveralls.io/repos/github/thibault-martinez/iota.lib.cpp/badge.svg?branch=master

[documentation]: https://thibault-martinez.github.io/iota.lib.cpp/html/
[documentation-badge]: https://img.shields.io/readthedocs/pip/stable.svg

[license]: https://github.com/thibault-martinez/iota.lib.cpp/blob/master/LICENSE
[license-badge]: https://img.shields.io/packagist/l/doctrine/orm.svg
